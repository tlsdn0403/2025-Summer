// Fill out your copyright notice in the Description page of Project Settings.

#include "ABarrel.h"
#include "DrawDebugHelpers.h"
#include "KismetProceduralMeshLibrary.h" // 매쉬 뼈대 생성을 위해 필요
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"

ABarrel::ABarrel()
{
    PrimaryActorTick.bCanEverTick = true;

    BarrelMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("BarrelMesh"));
    RootComponent = BarrelMesh;

    BarrelMesh->SetSimulatePhysics(true);  //물리 시뮬레이션 키기
    BarrelMesh->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
    BarrelMesh->bUseComplexAsSimpleCollision = false;

    SourceStaticMesh = nullptr; // 생성자에서 초기화

    BarrelMesh->OnComponentHit.AddDynamic(this, &ABarrel::OnHit);
    BarrelMesh->SetNotifyRigidBodyCollision(true);
}

void ABarrel::BeginPlay()
{
    Super::BeginPlay();
    InitializeProceduralMesh();
    // 10초 동안 정점 시각화
}

void ABarrel::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if (OtherActor && OtherActor->IsRootComponentStatic())
    {
        UE_LOG(LogTemp, Log, TEXT("Collision with static object ignored."));
        return;
    }
    // 충돌의 세기(충격량)를 계산합니다.
    const float ImpactStrength = NormalImpulse.Size();

    // 충격량에 따라 찌그러지는 정도를 조절
    // 0~200000 범위의 충격량을 0~30 범위의 찌그러짐 강도로 변환
    DeformStrength = FMath::GetMappedRangeValueClamped(FVector2D(0.f, 200000.f), FVector2D(0.f, 20.f), ImpactStrength);

    DeformRadius = 20.f;

    UE_LOG(LogTemp, Log, TEXT("OnHit."));
    // 
    DeformMesh(Hit.ImpactPoint, Hit.ImpactNormal , DeformRadius, DeformStrength);
}

void ABarrel::DeformMesh(const FVector& HitLocation, const FVector& HitDirection, float Radius, float Strength)
{
    // 월드 좌표계의 충돌 위치를 이 액터의 로컬 좌표계로 변환합니다.
    const FVector LocalHitLocation = GetActorTransform().InverseTransformPosition(HitLocation);
    const FVector LocalHitDirection = GetActorTransform().InverseTransformVector(HitDirection);

    bool bVerticesUpdated = false;

    // 모든 정점을 순회하며 충돌 반경 내에 있는지 검사합니다.
    for (int32 i = 0; i < Vertices.Num(); ++i)
    {
        // 정점과 충돌 위치 사이의 거리를 계산합니다.
        const float Distance = FVector::Dist(Vertices[i], LocalHitLocation);

        if (Distance < Radius)
        {
            // 거리에 따라 변형 강도를 조절합니다 (중심부가 더 많이 찌그러지도록).
            const float DeformAmount = Strength * ((Radius - Distance) / Radius);

            // 해당 정점을 계산된 방향으로 이동시킵니다.
            Vertices[i] += LocalHitDirection * DeformAmount;
            bVerticesUpdated = true;
        }
    }

    // 정점이 하나라도 변경되었으면 메시를 갱신합니다.
    if (bVerticesUpdated)
    {
        // 변경된 정점 데이터로 메시 섹션을 업데이트!
        /*BarrelMesh->UpdateMeshSection(0, Vertices, Normals, UVs, TArray<FColor>(), Tangents);*/

        //렌더링 메시만 업데이트하고, 충돌체는 업데이트하지 않도록 변경
        BarrelMesh->UpdateMeshSection_LinearColor(0, Vertices, Normals, UVs, TArray<FLinearColor>(), Tangents, false);
    }
}

void ABarrel::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (GetWorld() && GetWorld()->GetFirstPlayerController() && GetWorld()->GetFirstPlayerController()->IsInputKeyDown(EKeys::V))
    {
        bVisualizeVertices = !bVisualizeVertices;
    }
    if (bVisualizeVertices)
    {
        VisualizeVertices(DeltaTime, 6.f);  // 현재 프레임 시간만큼 표시
    }
}
// VisualizeVertices를 클래스 멤버 함수로 추가
void ABarrel::VisualizeVertices(float Duration, float PointSize)
{
    UWorld* World = GetWorld();
    if (!World) return;

    //  변환을 하지 않고, 로컬 좌표 그대로 시각화합니다 
    if (Vertices.Num() > 0)
    {
        // 액터의 위치와 회전을 이용해서만 변환합니다.
        const FTransform ActorTransform = GetActorTransform();

        for (int32 i = 0; i < Vertices.Num(); ++i)
        {
            // Vertices는 이미 메시 컴포넌트의 로컬 좌표입니다.
            // 액터의 변환만 적용합니다.
            FVector WorldPos = ActorTransform.TransformPosition(Vertices[i]);
            DrawDebugPoint(World, WorldPos, PointSize, FColor::Red, false, Duration);
            DrawDebugString(World, WorldPos + FVector(0, 0, 8.f), FString::FromInt(i), nullptr, FColor::White, Duration, true);
        }
        return;
    }

    // 2) SourceStaticMesh 시각화 (이 부분도 수정)
    if (SourceStaticMesh && SourceStaticMesh->bAllowCPUAccess)
    {
        FStaticMeshRenderData* RenderData = SourceStaticMesh->GetRenderData();
        if (RenderData && RenderData->LODResources.Num() > 0)
        {
            const FStaticMeshLODResources& LOD = RenderData->LODResources[0];
            const FPositionVertexBuffer& PosBuf = LOD.VertexBuffers.PositionVertexBuffer;
            const int32 NumVerts = PosBuf.GetNumVertices();

            const FTransform ActorTransform = GetActorTransform();

            for (int32 i = 0; i < NumVerts; ++i)
            {
                FVector LocalPos = FVector(PosBuf.VertexPosition(i));
                FVector WorldPos = ActorTransform.TransformPosition(LocalPos);
                DrawDebugPoint(World, WorldPos, PointSize, FColor::Yellow, false, Duration);
                DrawDebugString(World, WorldPos + FVector(0, 0, 8.f), FString::FromInt(i), nullptr, FColor::White, Duration, true);
            }
            return;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("VisualizeVertices: no vertex data available."));
}
void ABarrel::InitializeProceduralMesh()
{
    if (!SourceStaticMesh)
    {
        UE_LOG(LogTemp, Error, TEXT("SourceStaticMesh is NOT SET in Blueprint."));
        return;
    }

    UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(SourceStaticMesh, 0, 0, Vertices, Triangles, Normals, UVs, Tangents);

    if (Vertices.Num() == 0 || Triangles.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get mesh data from SourceStaticMesh."));
        return;
    }

    BarrelMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UVs, TArray<FColor>(), Tangents, false);

    if (SourceStaticMesh->GetStaticMaterials().Num() > 0)
    {
        BarrelMesh->SetMaterial(0, SourceStaticMesh->GetStaticMaterials()[0].MaterialInterface);
    }
    OriginalVertices = Vertices;
    UE_LOG(LogTemp, Log, TEXT("Step 1: Render mesh created."));

    // --- 2. 물리 충돌체(뼈대) 생성 - 가장 단순한 방식 ---

    FProcMeshSection* ProcSection = BarrelMesh->GetProcMeshSection(0);

    if (!ProcSection)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get procedural mesh section."));
        return;
    }

    FBox BoundingBox = ProcSection->SectionLocalBox;

    // GetVertices 대신 직접 꼭짓점을 계산
    TArray<FVector> BoxVertices;
    BoxVertices.Reserve(8);

    FVector Min = BoundingBox.Min;
    FVector Max = BoundingBox.Max;

    // FBox의 8개 꼭짓점을 직접 계산해서 추가합니다.
    BoxVertices.Add(FVector(Min.X, Min.Y, Min.Z));
    BoxVertices.Add(FVector(Max.X, Min.Y, Min.Z));
    BoxVertices.Add(FVector(Max.X, Max.Y, Min.Z));
    BoxVertices.Add(FVector(Min.X, Max.Y, Min.Z));
    BoxVertices.Add(FVector(Min.X, Min.Y, Max.Z));
    BoxVertices.Add(FVector(Max.X, Min.Y, Max.Z));
    BoxVertices.Add(FVector(Max.X, Max.Y, Max.Z));
    BoxVertices.Add(FVector(Min.X, Max.Y, Max.Z));

    // SetCollisionConvexMeshes에 전달합니다.
    TArray<TArray<FVector>> ConvexShapes;
    ConvexShapes.Add(BoxVertices);

    BarrelMesh->SetCollisionConvexMeshes(ConvexShapes);

    UE_LOG(LogTemp, Log, TEXT("Step 2: Explicit box collision 'bone' created successfully."));
}
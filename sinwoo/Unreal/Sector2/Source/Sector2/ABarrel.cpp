// Fill out your copyright notice in the Description page of Project Settings.

#include "ABarrel.h"
#include "DrawDebugHelpers.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"

ABarrel::ABarrel()
{
    PrimaryActorTick.bCanEverTick = false;

    BarrelMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("BarrelMesh"));
    RootComponent = BarrelMesh;

    BarrelMesh->SetSimulatePhysics(true);
    BarrelMesh->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
    BarrelMesh->bUseComplexAsSimpleCollision = false;

    SourceStaticMesh = nullptr; // 생성자에서 초기화
}

void ABarrel::BeginPlay()
{
    Super::BeginPlay();
    InitializeProceduralMesh();
    // 10초 동안 정점 시각화
    VisualizeVertices(10.f, 6.f);
}

void ABarrel::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
}

void ABarrel::DeformMesh(const FVector& HitLocation, const FVector& HitDirection, float Radius, float Strength)
{
}

void ABarrel::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
// VisualizeVertices를 클래스 멤버 함수로 추가
void ABarrel::VisualizeVertices(float Duration , float PointSize )
{
    UWorld* World = GetWorld();
    if (!World) return;

    // 컴포넌트 변환(로컬 -> 월드)
    const FTransform ComponentTransform = BarrelMesh ? BarrelMesh->GetComponentTransform() : GetActorTransform();

    // 1) ProcVertices가 채워져 있으면 그것을 사용
    if (Vertices.Num() > 0)
    {
        for (int32 i = 0; i < Vertices.Num(); ++i)
        {
            FVector WorldPos = ComponentTransform.TransformPosition(Vertices[i]);
            DrawDebugPoint(World, WorldPos, PointSize, FColor::Red, false, Duration);
            DrawDebugString(World, WorldPos + FVector(0, 0, 8.f), FString::FromInt(i), nullptr, FColor::White, Duration, true);
        }
        return;
    }

    // 2) ProcVertices가 없고 SourceStaticMesh가 설정되어 있으면 StaticMesh에서 읽기
    if (SourceStaticMesh && SourceStaticMesh->bAllowCPUAccess)
    {
        FStaticMeshRenderData* RenderData = SourceStaticMesh->GetRenderData();
        if (RenderData && RenderData->LODResources.Num() > 0)
        {
            const FStaticMeshLODResources& LOD = RenderData->LODResources[0];
            const FPositionVertexBuffer& PosBuf = LOD.VertexBuffers.PositionVertexBuffer;
            const int32 NumVerts = PosBuf.GetNumVertices();

            for (int32 i = 0; i < NumVerts; ++i)
            {
                FVector LocalPos = FVector(PosBuf.VertexPosition(i));
                FVector WorldPos = ComponentTransform.TransformPosition(LocalPos);
                DrawDebugPoint(World, WorldPos, PointSize, FColor::Yellow, false, Duration);
                DrawDebugString(World, WorldPos + FVector(0, 0, 8.f), FString::FromInt(i), nullptr, FColor::White, Duration, true);
            }
            return;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("VisualizeVertices: no vertex data available (ProcVertices empty and SourceStaticMesh not usable)."));
}
void ABarrel::InitializeProceduralMesh()
{
    // 안전장치 1: 블루프린트에서 SourceStaticMesh를 지정했는지 확인
    if (!SourceStaticMesh)
    {
        UE_LOG(LogTemp, Error, TEXT("ABarrel: SourceStaticMesh is null."));
        return;
    }

    // 안전장치 2: StaticMesh 애셋에 'Allow CPU Access' 옵션이 켜져 있는지 확인
    if (!SourceStaticMesh->bAllowCPUAccess)
    {
        UE_LOG(LogTemp, Error, TEXT("ABarrel: SourceStaticMesh '%s' does not have 'Allow CPU Access' enabled."), *SourceStaticMesh->GetName());
        return;
    }

    // RenderData 유효성 검사
    FStaticMeshRenderData* RenderData = SourceStaticMesh->GetRenderData();
    if (!RenderData || RenderData->LODResources.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("ABarrel: Invalid render data for '%s'."), *SourceStaticMesh->GetName());
        return;
    }

    const FStaticMeshLODResources& LODResources = RenderData->LODResources[0];
    const FStaticMeshVertexBuffers& VertexBuffers = LODResources.VertexBuffers;

    int32 NumVerts = VertexBuffers.PositionVertexBuffer.GetNumVertices();
    if (NumVerts <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("ABarrel: No vertices found in SourceStaticMesh '%s'."), *SourceStaticMesh->GetName());
        return;
    }

    Vertices.Reserve(NumVerts);

    for (int32 i = 0; i < NumVerts; ++i)
    {
        // VertexPosition()는 FVector3f 또는 유사 타입을 반환하므로 FVector로 변환
        FVector VertexPosition = FVector(VertexBuffers.PositionVertexBuffer.VertexPosition(i));
        Vertices.Add(VertexPosition);
    }

    // 로그 출력: Vertices 배열을 사용
    for (int32 i = 0; i < Vertices.Num(); ++i)
    {
        UE_LOG(LogTemp, Log, TEXT("vertex #%d: %s"), i, *Vertices[i].ToString());
    }

    // (원하면 여기서 ProceduralMesh 섹션 생성 또는 디버그 라인 등을 추가하세요)
}
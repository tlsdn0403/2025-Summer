// Fill out your copyright notice in the Description page of Project Settings.


#include "ABarrel.h"

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


void ABarrel::InitializeProceduralMesh()
{

    // 안전장치 1: 블루프린트에서 SourceStaticMesh를 지정했는지 확인
    if (!SourceStaticMesh)
    {
        UE_LOG(LogTemp, Error, TEXT("ABarrel: SourceStaticMesh가 지정되지 않았습니다! 블루프린트에서 설정해주세요."));
        return;
    }

    // 안전장치 2: StaticMesh 애셋에 'Allow CPU Access' 옵션이 켜져 있는지 확인
    if (!SourceStaticMesh->bAllowCPUAccess)
    {
        UE_LOG(LogTemp, Error, TEXT("ABarrel: SourceStaticMesh '%s'에 'Allow CPU Access' 옵션을 켜주세요!"), *SourceStaticMesh->GetName());
        return;
    }

    const FStaticMeshLODResources& LODResources = SourceStaticMesh->GetRenderData()->LODResources[0];
	TArray<FVector> Vertices;

    const FStaticMeshVertexBuffers& VertexBuffers = LODResources.VertexBuffers;

    for (uint32 i = 0; i < VertexBuffers.PositionVertexBuffer.GetNumVertices(); i++)
    {
        Vertices.Add(FVector(VertexBuffers.PositionVertexBuffer.VertexPosition(i)));
        // 로그에 "버텍스 인덱스: (X, Y, Z)" 형식으로 출력
        
    }
    for (uint32 i = 0; i < VertexBuffers.PositionVertexBuffer.GetNumVertices(); i++)
    {
        UE_LOG(LogTemp, Log, TEXT("버텍스 #%d: %s"), i, *VertexPosition.ToString());
        DrawDebugLine(Vertices[i], FColor::Blue, true, -1, 0, 0.1);

    }
    
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// 컴포넌트들을 코드에서 생성해줌
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collidor"));
	RootComponent = CapsuleComp;													// 캡슐 컴포넌트를 루트 컴포넌트로 설정

	// 정적 메시 컴포넌트들을 생성
	BaseMesh = CreateDefaultSubobject< UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(RootComponent);										// BaseMesh를 RootComponent에 연결

	TurretMesh = CreateDefaultSubobject< UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);											// TurretMesh를 BaseMesh에 연결

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);								// ProjectileSpawnPoint를 TurretMesh에 연결	
}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


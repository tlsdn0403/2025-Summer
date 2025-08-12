// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"

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

void ABasePawn::RotateTurret(FVector LookAtTarget)
{
	FVector ToTarget = LookAtTarget - TurretMesh->GetComponentLocation(); // 타겟과 터렛의 위치 차이를 구함


	FRotator LookAtRotation(0.f, ToTarget.Rotation().Yaw, 0.f); // 피치와 롤을 0으로 설정하여 수평 회전만 적용

	TurretMesh->SetWorldRotation(FMath::RInterpTo(TurretMesh->GetComponentRotation(), LookAtRotation, UGameplayStatics::GetWorldDeltaSeconds(this), 5.f)); // 보간을 이용
}

void ABasePawn::Fire()
{
	FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation(); // 발사 지점의 위치를 가져옴
	DrawDebugSphere(GetWorld(), SpawnLocation,
		24.f,
		12,
		FColor::Red,
		false,
		-1.0f
	); // 디버그용 구체를 그려서 발사 지점을 시각화
}






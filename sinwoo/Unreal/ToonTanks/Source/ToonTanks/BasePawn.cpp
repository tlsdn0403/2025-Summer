// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Projectile.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Camera/CameraShakeBase.h"



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
						// DeathParticle를 RootComponent에 연결

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
	auto Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, ProjectileSpawnPoint->GetComponentRotation()); // ProjectileClass를 사용하여 발사체를 생성
	Projectile->SetOwner(this); // 발사체의 소유자를 현재 Pawn으로 설정
}

void ABasePawn::HandleDestruction()
{
	if(DeathSound) // 사망 사운드가 설정되어 있으면
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			DeathSound,
			GetActorLocation()
		); // 사망 사운드 재생
	}

	// 사망 파티클 생성
	if (DeathParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			DeathParticle,
			GetActorLocation(),
			GetActorRotation()
		);
	}
	if(DeathCameraShakeClass) // 사망 카메라 쉐이크가 설정되어 있으면
	{
		GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(DeathCameraShakeClass); // 카메라 쉐이크 시작
	}
	bAlive = false; // 폰이 죽었음을 표시
}






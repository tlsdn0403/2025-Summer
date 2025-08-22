// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TOONTANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category = "Component")
	class UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, Category = "Movement")	
	class UProjectileMovementComponent* ProjectileMovementComponent;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere, Category = "Damage")
	float Damage = 50.f; 

	UPROPERTY(EditAnywhere, Category = "Combat")
	class UParticleSystem* HitParticle; // 히트 파티클

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	class UParticleSystemComponent* TrailParticle;

	UPROPERTY(EditAnywhere, Category = "Combat")
	class USoundBase* LaunchSound;  // 발사 사운드

	UPROPERTY(EditAnywhere, Category = "Combat")
	USoundBase* HitSound;			// 히트 사운드 , 앞에서 전방선언을 해놔서 여기선 안해도 ㄱㅊ음

	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<class UCameraShakeBase> HitCameraShake; // 히트 카메라 쉐이크
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

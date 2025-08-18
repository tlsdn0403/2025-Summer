// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;
class USceneComponent;
UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	float Speed = 400.0f;

protected:
	void RotateTurret(FVector LookAtTarget);

	void Fire();

	virtual void HandleDestruction(); // 폰들 파괴 처리 함수
private:

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category = "Collision Component")
	UCapsuleComponent* CapsuleComp; 

	

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category = "Component")
	UStaticMeshComponent* BaseMesh;	

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category = "Component")
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category = "Point")
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	TSubclassOf<class AProjectile> ProjectileClass;  // 발사할 Projectile 클래스의 타입을 지정

};

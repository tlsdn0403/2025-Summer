// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()
public:
	virtual void Tick(float DeltaTime) override;
	virtual void HandleDestruction() override; // 파괴 처리 함수 오버라이드, 부모 클래스의 HandleDestruction 호출
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	class ATank* TargetTank; // 타겟 탱크를 저장할 변수

	UPROPERTY(EditAnywhere , Category = "Fire")
	float FireRange = 500.0f; // 공격 범위

	FTimerHandle FireRateTimerHandle; // 발사 속도 타이머 핸들

	float FireRate = 2.0f; // 발사 속도 (초 단위)

	void CheckFireCondition(); // 발사 조건을 확인하는 함수	

	bool CheckTargetInRange(); // 타겟이 범위 내에 있는지 확인하는 함수


};

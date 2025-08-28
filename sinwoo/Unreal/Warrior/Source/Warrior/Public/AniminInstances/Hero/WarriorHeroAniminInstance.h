// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AniminInstances/WarriorCharacterAniminInstance.h"
#include "WarriorHeroAniminInstance.generated.h"

/**
 * 
 */
class AWarriorHeroCharacter;
UCLASS()
class WARRIOR_API UWarriorHeroAniminInstance : public UWarriorCharacterAniminInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;  //워커 스레드에서 호출되는 함수

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimiData|References")
	AWarriorHeroCharacter* OwningHeroCharacter;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimiData|LocomotionData")
	bool bShouldEnterRelaxState;  //휴식 상태로 들어가야 하는지 여부	

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AnimiData|LocomotionData")
	float EnterRelaxStateDelay = 5.f;  //휴식 상태로 들어가는 지연 시간

	float IdleElapsedTime = 0.f;  //아이들 경과 시간	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AniminInstances/WarriorBaseAniminInstance.h"
#include "WarriorCharacterAniminInstance.generated.h"

/**
 * 
 */
class AWarriorBaseCharacter;
class UCharacterMovementComponent;
UCLASS()
class WARRIOR_API UWarriorCharacterAniminInstance : public UWarriorBaseAniminInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;

	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;  //워커 스레드에서 호출되는 함수

protected:
	UPROPERTY()  //원시 포인터에는 빈 UPROPERTY 매크로를 사용하거나 스마트 포인터를 사용해줘야 한다.
	AWarriorBaseCharacter* OwningCharacter;
	
	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AnimiData|LocomotionData")
	float GroundSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AnimiData|LocomotionData")
	bool bHasAcceleration;   //가속도가 있는지
};

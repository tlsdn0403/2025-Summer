// Fill out your copyright notice in the Description page of Project Settings.


#include "AniminInstances/WarriorCharacterAniminInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Characters/WarriorBaseCharacter.h"


void UWarriorCharacterAniminInstance::NativeInitializeAnimation()
{
	
	OwningCharacter = Cast<AWarriorBaseCharacter>(TryGetPawnOwner());  //반환 결과를 캐릭터에 저장

	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

void UWarriorCharacterAniminInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if(!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	GroundSpeed = OwningCharacter->GetVelocity().Size2D();  //수평 속도 크기	

	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 0.f;  //가속도가 있는지 없는지 값을 저장
}

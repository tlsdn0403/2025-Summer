// Fill out your copyright notice in the Description page of Project Settings.


#include "AniminInstances/Hero/WarriorHeroAniminInstance.h"
#include "Characters/WarriorHeroCharacter.h"

void UWarriorHeroAniminInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();  

	if(OwningCharacter)
	{
		OwningHeroCharacter = Cast<AWarriorHeroCharacter>(OwningCharacter);
	}
}

void UWarriorHeroAniminInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	
	if (bHasAcceleration)
	{
		IdleElapsedTime = 0.f;	
		bShouldEnterRelaxState = false;
	}
	else
	{
		IdleElapsedTime += DeltaSeconds;
		if (IdleElapsedTime >= EnterRelaxStateDelay)
		{
			bShouldEnterRelaxState = true;
		}
	}
}

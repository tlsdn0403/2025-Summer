// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorHeroCharacter.h"
#include "Warrior/WarriorDebugHelper.h"

void AWarriorHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	Debug::Print(FString::Printf(TEXT("Hero Character BeginPlay: %s"), *GetName()));
}

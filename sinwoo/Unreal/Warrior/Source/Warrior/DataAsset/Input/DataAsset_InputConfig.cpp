// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAsset_InputConfig.h"

UInputAction* UDataAsset_InputConfig::FindNativeInputActionByTag(const FGameplayTag& InInputTag)
{
	
	for(const FWarriorInputActionConfig& Config : NativeInputActions)
	{
		if(Config.InputTag == InInputTag)
		{
			return Config.InputAction;
		}
	}
	return nullptr;
}

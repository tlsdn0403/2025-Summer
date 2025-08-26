// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "DataAsset/Input/DataAsset_InputConfig.h"
#include "WarriorInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
	
	template<class UserObject , typename CallbackFunction>
	void BindNativeAction(const UDataAsset_InputConfig* InInputConfig ,
		const FGameplayTag& InInputTag ,
		ETriggerEvent TrrigerEvent ,
		UserObject* ContextObject,
		CallbackFunction Func
	);
};

template<class UserObject, typename CallbackFunction>
inline void UWarriorInputComponent::BindNativeAction(const UDataAsset_InputConfig* InInputConfig, const FGameplayTag& InInputTag, ETriggerEvent TrrigerEvent, UserObject* ContextObject, CallbackFunction Func)
{
	checkf(InInputConfig, TEXT("InInput Config data asset is null"));  //디버깅 할 떄 도움을 주기 위해서 사용

	if (UInputAction* FindInputAction = InInputConfig->FindNativeInputActionByTag(InInputTag))
	{
		BindAction(FindInputAction, TrrigerEvent, ContextObject, Func);
	}
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "DataAsset/Input/DataAsset_InputConfig.h"
#include "WarriorDebugHelper.h"				// 어떤 파일에 디버그 헬퍼가 있는지 알기위해 맨 아래에 인클루드를 함
#include "WarriorInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:
	template<class UserObject , typename CallbackFunction>
	void BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig ,
		const FGameplayTag& InInputTag ,
		ETriggerEvent TrigerEvent ,
		UserObject* ContextObject,
		CallbackFunction Func
	);
};

template<class UserObject, typename CallbackFunction>
inline void UWarriorInputComponent::BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig, const FGameplayTag& InInputTag, ETriggerEvent TrigerEvent, UserObject* ContextObject, CallbackFunction Func)
{
	checkf(InInputConfig, TEXT("InInput Config data asset is null"));  //디버깅 할 떄 도움을 주기 위해서 사용

	if (UInputAction* FoundAction = InInputConfig->FindNativeInputActionByTag(InInputTag))
	{
		Debug::Print("Binding Input Action");
		BindAction(FoundAction, TrigerEvent, ContextObject, Func);
	}
}

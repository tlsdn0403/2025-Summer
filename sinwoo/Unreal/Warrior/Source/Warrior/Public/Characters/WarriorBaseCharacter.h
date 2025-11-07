// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "WarriorBaseCharacter.generated.h"

class UWarriorAbilitySystemComponent;
class UWarriorAttributeSet;
class UDataAsset_StartUpDataBase;
UCLASS()
class WARRIOR_API AWarriorBaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWarriorBaseCharacter();

	//~ begin IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const ;
	//~ end IAbilitySystemInterface
protected:

	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystems", meta = (AllowPrivateAccess = "true"))
	UWarriorAbilitySystemComponent* WarriorAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystems", meta = (AllowPrivateAccess = "true"))
	UWarriorAttributeSet* WarriorAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;  //소프트 레퍼런스를 만드는 방법

public:
	// FORCEINLINE 은 inline 함수가 컴파일러에 의해 무시되는 것을 방지합니다. 더욱 강력한 inline 함수 , 코드를 증가시키더라도 속도가 오름
	// 아주 짧은 함수에서 함수 호출오버해드를 줄이기 위해서 사용을 함
	FORCEINLINE UWarriorAbilitySystemComponent* GetWarriorAbilitySystemComponent() const { return WarriorAbilitySystemComponent; }
	FORCEINLINE UWarriorAttributeSet* GetWarriorAttributeSet() const					 { return WarriorAttributeSet; }
};

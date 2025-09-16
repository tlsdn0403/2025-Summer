// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorBaseCharacter.h"
#include "AbilitySystems/WarriorAbilitySystemComponent.h"
#include "AbilitySystems/WarriorAttributeSet.h"

// Sets default values
AWarriorBaseCharacter::AWarriorBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false; // 모든 캐릭터가 매 틱마다 업데이트 될 필요는 없음
	PrimaryActorTick.bStartWithTickEnabled = false; // 틱이 기본적으로 활성화되지 않도록 설정

	GetMesh()->bReceivesDecals = false; // 메시에 데칼이 적용되지 않도록 설정

	// 어빌리티 시스템 컴포넌트를 초기화 하려면 몇가지 작업을 해야 함
	// 문자클래스에서 함수를 재정의 함
	WarriorAbilitySystemComponent = CreateDefaultSubobject<UWarriorAbilitySystemComponent>(TEXT("WarriorAbilitySystemComponent"));
	WarriorAttributeSet = CreateDefaultSubobject<UWarriorAttributeSet>(TEXT("WarriorAttributeSet"));
}
UAbilitySystemComponent* AWarriorBaseCharacter::GetAbilitySystemComponent() const
{
	return GetWarriorAbilitySystemComponent(); // IAbilitySystemInterface 인터페이스를 구현하는 모든 클래스는 이 함수를 재정의 해야 함
}
void AWarriorBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (WarriorAbilitySystemComponent)
	{
		WarriorAbilitySystemComponent->InitAbilityActorInfo(this, this);  // 소유자 액터와 아바타 액터(실제 세상에 존재하는 엑터)를 채워야 함  , 항상 두 엑터가 동일한 것은 아님
	}

}

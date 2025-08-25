// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorBaseCharacter.h"

// Sets default values
AWarriorBaseCharacter::AWarriorBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false; // 모든 캐릭터가 매 틱마다 업데이트 될 필요는 없음
	PrimaryActorTick.bStartWithTickEnabled = false; // 틱이 기본적으로 활성화되지 않도록 설정

	GetMesh()->bReceivesDecals = false; // 메시에 데칼이 적용되지 않도록 설정
}

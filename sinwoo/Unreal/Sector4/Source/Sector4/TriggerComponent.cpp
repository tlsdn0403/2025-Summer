// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"


UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;  //대부분의 컴포넌트는 자동으로 틱이 비활성화 되어있다.

	UE_LOG(LogTemp, Display, TEXT("Constructing Trigger!"));
}
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("TriggerComponent BeginPlay!"));
}
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* isOverlaped = GetAcceptableActor();  // 틱 마다 오버랩된 엑터를 확인
	if(isOverlaped) {
		Mover->SetShouldMove(true);  //엑터가 오버랩되면 참으로 설정
	}
	else {
		Mover->SetShouldMove(false);  //없으면 거짓
	}
}

void UTriggerComponent::SetMover(UMover* NewMover)
{
	Mover = NewMover;  // Mover 설정
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);  // 트리거에 오버랩되는 액터를 가져올 수 있다.

	for (auto Actor : Actors) {
		if (Actor->ActorHasTag(UnlockTag)) // 특정 테그를 가진 엑터 필너링
		{
			return Actor; // 테그에 일치하는 엑터를 반환
		}
	}
	return nullptr;
}

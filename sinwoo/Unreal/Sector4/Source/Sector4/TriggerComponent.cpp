// Fill out your copyright notice in the Description page of Project Settings.
// 문이 열리는 트리거 컴포넌트

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
	CheckIsOverlapped();
}


void UTriggerComponent::SetMover(UMover* NewMover)
{
	Mover = NewMover;  // Mover 설정
}


void UTriggerComponent::CheckIsOverlapped()
{
	AActor* isOverlaped = GetAcceptableActor();  // 틱 마다 오버랩된 엑터를 확인
	if (isOverlaped) {
		UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(isOverlaped->GetRootComponent());  // 오버랩된 엑터의 루트 컴포넌트를 가져온다 
		if (Component != nullptr)
		{
			Component->SetSimulatePhysics(false);  // 물리 시뮬레이션을 비활성화한다.
		}
		if(isOverlaped->ActorHasTag("Grabbed"))  // "Grabbed" 태그가 있는 엑터는 무시한다.
		{
			return;
		}
		isOverlaped->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);  // 오버랩된 엑터를 나한테 붙인다.

		Mover->SetShouldMove(true);  //엑터가 오버랩되면 참으로 설정
	}
	else {
		Mover->SetShouldMove(false);  //없으면 거짓
	}
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

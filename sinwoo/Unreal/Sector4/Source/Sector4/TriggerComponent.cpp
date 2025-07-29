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

	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);

	for (auto Actor : Actors) {
		UE_LOG(LogTemp, Display, TEXT("Overlapping Actor: %s"), *Actor->GetActorNameOrLabel());
	}
}

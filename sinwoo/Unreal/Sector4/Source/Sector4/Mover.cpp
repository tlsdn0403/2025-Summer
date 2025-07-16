// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"


// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Owner = GetOwner();  // 컴포넌트를 소유한 엑터의 주소를 보유한 객체

	FVector MyLocation = Owner->GetActorLocation();  // 엑터의 위치를 가져오는 함수 호출

	FString LocationS = MyLocation.ToCompactString();  // 엑터의 위치를 문자열로 변환하는 함수 호출
	UE_LOG(LogTemp, Display, TEXT("Mover is ticking! Owner: %s"), *LocationS);
	// ...
}


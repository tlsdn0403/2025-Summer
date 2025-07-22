// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}
void UGrabber::Grabed()
{
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector()* maxGrabDistance;
	DrawDebugLine(GetWorld(), Start, End, FColor::Green);

	FHitResult HitResult;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(grabRadius);
	bool HasHit = GetWorld()->SweepSingleByChannel
	(HitResult, 
	Start,
	End,
	FQuat::Identity, //회전값이 없다는 것을 알려줌
	ECC_GameTraceChannel2,  //config -> defaultEngine.ini -> Grabber 검색해서 채널명을 가져옴
	Sphere
	);
	if(HasHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *HitResult.GetActor()->GetName());
	}
}
void UGrabber::Release()
{
	UE_LOG(LogTemp, Warning, TEXT("Release called"));
}



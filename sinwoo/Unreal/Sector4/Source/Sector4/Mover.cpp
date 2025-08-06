

#include "Mover.h"
#include "Math/UnrealMathUtility.h"

using namespace UE::Math;

UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	// ...
	OriginalLocation = GetOwner()->GetActorLocation();

}


// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(ShouldMove)
	{
		FVector CurrentLocation = GetOwner()->GetActorLocation();

		FVector TargetLocation = OriginalLocation + MoveOffset;
		float speed = FVector::Distance(CurrentLocation , TargetLocation) / MoveTime;
		
		GetOwner()->SetActorLocation(FMath::VInterpConstantTo(CurrentLocation , TargetLocation , DeltaTime , speed));
	}


}

void UMover::SetShouldMove(bool bShouldMove)
{
	ShouldMove = bShouldMove;
}


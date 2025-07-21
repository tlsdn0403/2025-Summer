
#include "Graber.h"

UGraber::UGraber()
{

	PrimaryComponentTick.bCanEverTick = true;

	// ...
}



void UGraber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGraber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UE_LOG(LogTemp, Warning, TEXT("Graber component ticking at location: %s"), *GetComponentRotation().ToString());
}


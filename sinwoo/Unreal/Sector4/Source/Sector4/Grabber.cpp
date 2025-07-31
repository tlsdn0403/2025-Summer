#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	PrimaryComponentTick.bCanEverTick = true;  //기본적으로 틱 함수를 가능하게 한다.

}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle(); // 엑터에 붙어있는 오브젝트를 가져온다.
	if (PhysicsHandle == nullptr)
	{
		return;
	}
	if(PhysicsHandle->GrabbedComponent != nullptr) {  //잡고있는 물건이 있을 때

		FVector TargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
	
}

void UGrabber::Grab()
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if (PhysicsHandle == nullptr) {
		return;
	}


	FHitResult HitResult;
	bool HasHit = GetGrabAbleInReach(HitResult);
	if (HasHit)
	{
		SetHitComponent(HitResult.GetComponent()); // HitComponent 설정
		HitComponent->WakeAllRigidBodies();

		AActor* HitActor = HitResult.GetActor();
		HitActor->Tags.Add("Grabbed");  // HitActor에 "Grabbed" 태그 추가

		PhysicsHandle->GrabComponentAtLocationWithRotation(
			HitComponent,
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation()	
		);
	}


}

void UGrabber::Release()
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if (PhysicsHandle == nullptr && HitComponent == nullptr) {
		return;
	}
	if(PhysicsHandle->GrabbedComponent != nullptr) {
		PhysicsHandle->GrabbedComponent->GetOwner()->Tags.Remove("Grabbed");  // HitActor에서 "Grabbed" 태그 제거

		PhysicsHandle->ReleaseComponent();
	}

	HitComponent = nullptr; // HitComponent 초기화
}

bool UGrabber::GetGrabAbleInReach(FHitResult& OutHit) const
{
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * MaxGrabDistance;
	DrawDebugLine(GetWorld(), Start, End, FColor::Red);
	DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5);

	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
	FHitResult HitResult;
	return GetWorld()->SweepSingleByChannel(
		OutHit,
		Start, End,
		FQuat::Identity,
		ECC_GameTraceChannel2,
		Sphere);
}

UPhysicsHandleComponent* UGrabber::GetPhysicsHandle() const
{
	return GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
}


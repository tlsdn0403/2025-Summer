
#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();		// 시작 위치 저장
}


// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	moveRightAndLeft(DeltaTime); //플랫폼 이동 함수 호출
}

void AMovingPlatform::moveRightAndLeft(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();  //엑터의 위치 가져옴
	CurrentLocation += PlatformVelocity * DeltaTime; //플랫폼 속도에 델타타임을 곱해서 위치 업데이트
	SetActorLocation(CurrentLocation);

	DistanceMoved = FVector::Distance(StartLocation, CurrentLocation); // 현재 위치와 시작 위치 사이의 거리 계산
	if(DistanceMoved > MoveDistance)
	{
		
		StartLocation += PlatformVelocity.GetSafeNormal() * MoveDistance;		// 시작 위치 저장
		SetActorLocation(StartLocation); // 시작 위치로 다시 이동
		PlatformVelocity = - PlatformVelocity;
	}
}

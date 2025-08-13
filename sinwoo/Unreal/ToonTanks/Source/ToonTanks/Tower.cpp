// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"



// Called every frame
void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CheckTargetInRange())
	{
		this->RotateTurret(TargetTank->GetActorLocation()); // 타겟의 위치를 가져와서 터렛을 회전시킴
	}

}

void ATower::BeginPlay()
{
	Super::BeginPlay();

	TargetTank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0)); // 플레이어 탱크를 가져옴

	GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &ATower::CheckFireCondition, FireRate, true); // 함수 주소를 필요로 함으로  &ATower::CheckFireCondition , false로 해두면 2초뒤에 진행하고 끝임
}

void ATower::CheckFireCondition()
{
	if (CheckTargetInRange())
	{
		Fire();
	}
}

bool ATower::CheckTargetInRange()
{
	if (TargetTank == nullptr) // 타겟 탱크가 없으면 함수 종료
	{
		return false;
	}

	float Distance = FVector::Dist(GetActorLocation(), TargetTank->GetActorLocation()); // 타겟과의 거리를 계산
	
	if(Distance > FireRange) // 타겟과의 거리가 공격 범위를 초과하면 함수 종료
	{
		return false;
	}
	return true; // 타겟이 범위 내에 있으면 true 반환
}

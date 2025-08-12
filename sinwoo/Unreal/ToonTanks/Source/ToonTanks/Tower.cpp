// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"


// Called every frame
void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(TargetTank == nullptr) // 타겟 탱크가 없으면 함수 종료
	{
		return;
	}
	float DistanceToTarget = FVector::Dist(GetActorLocation(), TargetTank->GetActorLocation()); // 타겟과의 거리 계산

	if (DistanceToTarget <= FireRange)
	{
		this->RotateTurret(TargetTank->GetActorLocation()); // 타겟의 위치를 가져와서 터렛을 회전시킴
	}
}

void ATower::BeginPlay()
{
	Super::BeginPlay();

	TargetTank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0)); // 플레이어 탱크를 가져옴
}
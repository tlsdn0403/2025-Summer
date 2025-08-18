// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTankGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"

void AToonTankGameMode::BeginPlay()
{

	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0)); // 플레이어 탱크를 가져옴
}

void AToonTankGameMode::ActorDied(AActor* DeadActor)
{
	if (DeadActor == nullptr) return;

	if(DeadActor == Tank) // 플레이어 탱크가 죽었을 때
	{
		Tank->HandleDestruction();								// 탱크의 HandleDestruction 호출

		if(Tank->GetTankPlayerController())
		{
			Tank->DisableInput(Tank->GetTankPlayerController()); // 플레이어 컨트롤러 입력 비활성화	
			Tank->GetTankPlayerController()->bShowMouseCursor = false; // 마우스 커서 숨김
		}
	}

	else if(ATower* DestroyedTower = Cast<ATower>(DeadActor))
	{
		DestroyedTower->HandleDestruction(); // 타워가 죽었을 때	
	}
}

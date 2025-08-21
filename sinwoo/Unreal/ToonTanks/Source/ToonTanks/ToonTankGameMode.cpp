// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTankGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"
#include "ToonTanksPlayerController.h"

void AToonTankGameMode::BeginPlay()
{
	Super::BeginPlay();		// 부모 클래스의 BeginPlay 호출
	HandleGameStart();		// 게임 시작을 처리하는 함수 호출

}



void AToonTankGameMode::ActorDied(AActor* DeadActor)
{
	if (DeadActor == nullptr) return;

	if(DeadActor == Tank) // 플레이어 탱크가 죽었을 때
	{
		Tank->HandleDestruction();								// 탱크의 HandleDestruction 호출

		if(PlayerController)
		{
			PlayerController->SetPlayerEnabledState(false); // 플레이어 컨트롤러의 입력 비활성화	
		}
		GameOver(false);  // 게임 패배
	}

	else if(ATower* DestroyedTower = Cast<ATower>(DeadActor))
	{
		DestroyedTower->HandleDestruction(); // 타워가 죽었을 때	
		--TargetTowers; // 타워의 수를 감소시킴
		if(TargetTowers == 0) // 타워가 모두 파괴되었을 때
		{
			if(PlayerController)
			{
				PlayerController->SetPlayerEnabledState(false); // 플레이어 컨트롤러의 입력 비활성화	
			}
			GameOver(true); // 게임 승리
		}
	}
	
}

void AToonTankGameMode::HandleGameStart()
{
	TargetTowers = GetTargetTowerCount();																 // 게임 안의 적군 타워의 수를 가져옴
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));										 // 플레이어 탱크를 가져옴
	PlayerController = Cast<AToonTanksPlayerController>(UGameplayStatics::GetPlayerController(this, 0)); // 플레이어 컨트롤러를 가져옴

	StartGame(); // 블루프린트에서 구현된 StartGame 이벤트 호출

	if(PlayerController)
	{
		PlayerController->SetPlayerEnabledState(false); // 게임 시작 시 플레이어 컨트롤러의 입력 비활성화

		FTimerHandle StartGameTimer; // 게임 시작 타이머 핸들

		FTimerDelegate InputDelegate= FTimerDelegate::CreateUObject(
			PlayerController ,
			&AToonTanksPlayerController::SetPlayerEnabledState ,	// 시간이 지나면 이 함수가 호출됨
			true													//true 는 2번째 인수 함수의 매개변수
		); 

		GetWorldTimerManager().SetTimer(
			StartGameTimer,			
			InputDelegate, 
			StartDelay,              //딜레이 시간
			false					 // 다시 타이머를 반복할 것인지
		);
	}


}



int32 AToonTankGameMode::GetTargetTowerCount()
{
	TArray<AActor*> Towers; // 타워를 저장할 배열
	UGameplayStatics::GetAllActorsOfClass(this, ATower::StaticClass(), Towers); // Towers 배열에 게임안의 타워들의 정보를 저장함
	
	return Towers.Num();   // 타워의 수를 반환
}

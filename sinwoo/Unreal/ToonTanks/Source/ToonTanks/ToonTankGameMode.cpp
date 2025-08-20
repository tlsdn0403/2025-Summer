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

void AToonTankGameMode::StartGame()
{
	// 블루 프린트에서 위젯을 연결함
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
	}

	else if(ATower* DestroyedTower = Cast<ATower>(DeadActor))
	{
		DestroyedTower->HandleDestruction(); // 타워가 죽었을 때	
	}
}

void AToonTankGameMode::HandleGameStart()
{

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

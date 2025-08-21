// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ToonTankGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AToonTankGameMode : public AGameModeBase
{
	GENERATED_BODY()



public:
	void ActorDied(AActor* DeadActor);


protected:
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintImplementableEvent) //블루프린트에서 구현할 수 있다
	void StartGame();					   // 이 함수는 cpp에서 구현을 하면 오류가 뜬다

	UFUNCTION(BlueprintImplementableEvent) 
	void GameOver(bool bWonGame);
private:
	class ATank* Tank;									// 플레이어 탱크를 저장할 변수
	class AToonTanksPlayerController* PlayerController; // 플레이어 컨트롤러를 저장할 변수

	float StartDelay = 3.0f;							// 게임 시작 전 대기 시간

	int32 TargetTowers = 0;								// 적군 타워의 수	

	void HandleGameStart();								// 게임 시작을 처리하는 함수	

	int32 GetTargetTowerCount();						// 게임 안의 적군 타워의 수를 가져오는 함수
};

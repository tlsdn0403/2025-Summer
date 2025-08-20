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
	void StartGame();
private:
	class ATank* Tank;									// 플레이어 탱크를 저장할 변수
	class AToonTanksPlayerController* PlayerController; // 플레이어 컨트롤러를 저장할 변수

	float StartDelay = 3.0f;							// 게임 시작 전 대기 시간

	void HandleGameStart();								// 게임 시작을 처리하는 함수	
};

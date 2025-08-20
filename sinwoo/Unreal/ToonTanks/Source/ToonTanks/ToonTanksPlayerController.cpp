// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTanksPlayerController.h"
#include "GameFramework/Pawn.h"



void AToonTanksPlayerController::SetPlayerEnabledState(bool bPlayerEnabled)
{
	if(bPlayerEnabled)
	{
		GetPawn()->EnableInput(this); // 플레이어 입력 활성화
	}
	else
	{
		GetPawn()->DisableInput(this); // 플레이어 입력 비활성화
	}
	bShowMouseCursor = bPlayerEnabled; // 마우스 커서 표시 여부를 플레이어 활성화 상태에 따라 설정
}

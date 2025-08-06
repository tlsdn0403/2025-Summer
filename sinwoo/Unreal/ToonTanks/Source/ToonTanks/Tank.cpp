// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"


ATank::ATank()
{
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArmComp->SetupAttachment(RootComponent); // SpringArm을 RootComponent에 연결

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp); // Camera를 SpringArm에 연결
}

void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//가상 함수를 오버라이드 할 때 상위 버전을 호출하는 것이 좋다
	Super::SetupPlayerInputComponent(PlayerInputComponent); //SetupPlayerInputComponent의 부모 버전을 호출

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
}
void ATank::Move(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Move Value: %f"), Value);
}


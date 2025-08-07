// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"

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
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);
}
void ATank::Move(float Value)
{
	FVector DeltaLocation(0.f);
	double DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this); // 현재 월드의 델타 시간을 가져옴
	DeltaLocation.X = Value * DeltaTime * ATank::TankSpeed;  // Value는 입력 값, DeltaTime은 프레임 간 시간 차이, TankSpeed는 속도
	AddActorLocalOffset(DeltaLocation , true);					// Sweep
	UE_LOG(LogTemp, Warning, TEXT("Move Value: %f"), Value);
}
void ATank::Turn(float Value)
{
	FRotator DeltaRotation = FRotator::ZeroRotator; // 회전값 초기화

	DeltaRotation.Yaw = Value * ATank::TurnSpeed * UGameplayStatics::GetWorldDeltaSeconds(this); // Yaw 회전값 계산
	AddActorLocalRotation(DeltaRotation, true); // 회전 적용, Sweep 옵션 활성화
}


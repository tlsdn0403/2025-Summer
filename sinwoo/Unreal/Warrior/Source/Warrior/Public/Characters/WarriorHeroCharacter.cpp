#include "WarriorHeroCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WarriorDebugHelper.h"


AWarriorHeroCharacter::AWarriorHeroCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 200.0f;
	CameraBoom->SocketOffset = FVector(0.f, 55.f, 65.f);							//소켓 설정 여기다가 카메라 붙힐것임
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);		// 카메라 컴포넌트를 특정 소켓에 붙히겠다 위에서 소켓의 위치를 설정했음
	FollowCamera->bUsePawnControlRotation = false;									// 카메라는 팔의 회전을 따라가지 않음. 팔이 회전할때 카메라도 같이 회전하면 안됨

	GetCharacterMovement()->bOrientRotationToMovement = true;						// 캐릭터가 이동하는 방향으로 회전
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);				// 회전 속도
	GetCharacterMovement()->MaxWalkSpeed = 400.f;									// 이동 속도
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;					// 감속 속도
}

void AWarriorHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	Debug::Print("Working");
}

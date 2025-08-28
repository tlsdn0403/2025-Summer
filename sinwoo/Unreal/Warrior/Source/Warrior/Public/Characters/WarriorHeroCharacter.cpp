#include "WarriorHeroCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAsset/Input/DataAsset_InputConfig.h"
#include "Component/Input/WarriorInputComponent.h"
#include "Warrior/Public/WarriorGamePlayTags.h"
#include "WarriorDebugHelper.h"				// 어떤 파일에 디버그 헬퍼가 있는지 알기위해 맨 아래에 인클루드를 함


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

void AWarriorHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	checkf(InputConfigDataAsset, TEXT("Forgot to assign a valid data asset as input config"));

	ULocalPlayer* LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);

	check(Subsystem);

	Subsystem->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

	UWarriorInputComponent* WarriorInputComponent = CastChecked<UWarriorInputComponent>(PlayerInputComponent);

	WarriorInputComponent->BindNativeInputAction(InputConfigDataAsset, WarriorGamePlayTags::InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move);
	WarriorInputComponent->BindNativeInputAction(InputConfigDataAsset, WarriorGamePlayTags::InputTag_Look, ETriggerEvent::Triggered, this, &ThisClass::Input_Look);
}
void AWarriorHeroCharacter::Input_Move(const FInputActionValue& InputActionValue)
{
	
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	const FRotator MovementRotation(0.f, GetControlRotation().Yaw, 0.f);

	if(MovementVector.Y != 0.f)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardDirection, MovementVector.Y);
	}
	if(MovementVector.X != 0.f)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}
void AWarriorHeroCharacter::Input_Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();
	if (LookAxisVector.X != 0.f)
	{
		AddControllerYawInput(LookAxisVector.X);
	}

	if (LookAxisVector.Y != 0.f)
	{
		AddControllerPitchInput(LookAxisVector.Y /2);
	}
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"
#include "Particles/ParticleSystemComponent.h"




// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 정적 메시 컴포넌트들을 생성
	BaseMesh = CreateDefaultSubobject< UStaticMeshComponent>(TEXT("Base Mesh"));
	RootComponent = BaseMesh;	


	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	ProjectileMovementComponent->MaxSpeed = 1300.f; // 최대 속도
	ProjectileMovementComponent->InitialSpeed = 1300.f; //초기 속도

	TrailParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Smoke Trail")); // 발사체의 흔적 파티클	
	TrailParticle->SetupAttachment(RootComponent); // BaseMesh에 TrailParticle을 연결
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	//생성자에서 부르는 것은 너무 빨라서 BeginPlay에서 호출해야 함
	BaseMesh->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);  // BaseMesh가 충돌했을 때 OnHit 함수를 호출하도록 이벤트를 바인딩
}

void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	auto MyOwner = GetOwner(); // 발사체의 소유자를 가져옴

	if (MyOwner == nullptr)
	{
		Destroy();				 // 소유자가 없으면 발사체를 파괴	
		return;					// 소유자가 없으면 함수 종료
	}
	
	auto MyOwnerInstigator = MyOwner->GetInstigatorController(); // 소유자의 인스티게이터 컨트롤러를 가져옴

	auto DamageType = UDamageType::StaticClass(); // 데미지 타입을 가져옴

	

	if(OtherActor && OtherActor != this && OtherActor != MyOwner) // 충돌한 액터가 유효하고, 자기 자신이나 소유자가 아니면
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, MyOwnerInstigator, this, DamageType); // 데미지를 적용 , HealthComponent의 DamageTaken 함수가 호출됨
		if(HitParticle) // 히트 파티클이 설정되어 있으면
		{
			// 히트 파티클을 생성
			UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				HitParticle,
				GetActorLocation(),
				GetActorRotation()
			); 
		}

		
	}
	Destroy(); // 발사체를 파괴
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


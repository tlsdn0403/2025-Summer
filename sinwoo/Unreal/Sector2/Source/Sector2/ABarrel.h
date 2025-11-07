// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "StaticMeshResources.h" // StaticMesh 데이터 접근용 헤더
#include "ABarrel.generated.h"

UCLASS()
class SECTOR2_API ABarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarrel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
  

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    // 메인 메쉬 컴포넌트
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UProceduralMeshComponent* BarrelMesh;

    // 이 변수에 블루프린트에서 SM_Barrel을 할당
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
    UStaticMesh* SourceStaticMesh;

    // 발사체와의 충돌을 감지할 함수
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    // 메쉬를 변형시킬 메인 함수
    UFUNCTION(BlueprintCallable, Category = "Deformation")
    void DeformMesh(const FVector& HitLocation, const FVector& HitDirection, float Radius, float Strength);

    // 변형 효과에 대한 설정값들
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deformation")
    float DeformRadius = 50.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deformation")
    float DeformStrength = 10.0f;

    // StaticMesh를 ProceduralMesh로 변환하는 헬퍼 함수
    void InitializeProceduralMesh();
};

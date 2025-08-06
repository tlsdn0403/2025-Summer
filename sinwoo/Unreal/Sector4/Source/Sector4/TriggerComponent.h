// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Mover.h"
#include "TriggerComponent.generated.h"


/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SECTOR4_API UTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()
public:
	UTriggerComponent();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	UFUNCTION(BlueprintCallable)
	void SetMover(UMover* NewMover);

	void CheckIsOverlapped();

private:
	UPROPERTY(EditAnywhere)
	FName UnlockTag;  // 특정 태그를 가진 액터만 필터링하기 위한 변수

	UMover* Mover;
	AActor* GetAcceptableActor() const;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "MyActor_disappear.generated.h"

UCLASS()
class HOMEWORK_1_ARADIUK_API AMyActor_disappear : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor_disappear();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
	uint8 timeToDisappearSec = 0;

	UFUNCTION()
	void Hide();

	FTimerHandle TimerHandler;
};

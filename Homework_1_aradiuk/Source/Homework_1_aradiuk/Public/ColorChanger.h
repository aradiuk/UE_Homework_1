// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "Math/Color.h"
#include "Engine/EngineTypes.h"
#include "ColorChanger.generated.h"


UCLASS()
class HOMEWORK_1_ARADIUK_API AColorChanger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AColorChanger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UStaticMeshComponent* mesh;
	UMaterialInstanceDynamic* material;
	UTextRenderComponent* text;

	uint8 colorChangeSec = 5;
	FLinearColor currentColor;

	UFUNCTION()
	void CycleColor();

	FTimerHandle TimerHandler;
};

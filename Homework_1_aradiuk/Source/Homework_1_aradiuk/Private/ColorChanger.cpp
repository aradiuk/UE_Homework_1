// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorChanger.h"

#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "TimerManager.h"

// Sets default values
AColorChanger::AColorChanger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AColorChanger::BeginPlay()
{
	Super::BeginPlay();
	mesh = FindComponentByClass<UStaticMeshComponent>();
	text = FindComponentByClass<UTextRenderComponent>();
	material = UMaterialInstanceDynamic::Create(mesh->GetMaterial(0), NULL);
	mesh->SetMaterial(0, material);
	GetWorldTimerManager().SetTimer(TimerHandler, this, &AColorChanger::CycleColor, colorChangeSec, true);
}

// Called every frame
void AColorChanger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	text->SetText(currentColor.ToString());
}

void AColorChanger::CycleColor()
{
	currentColor = FLinearColor::MakeRandomColor();
	material->SetVectorParameterValue(FName(TEXT("Color")), currentColor);
}
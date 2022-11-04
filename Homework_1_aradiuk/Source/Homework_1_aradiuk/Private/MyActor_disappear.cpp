// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_disappear.h"

// Sets default values
AMyActor_disappear::AMyActor_disappear()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyActor_disappear::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerHandler, this, &AMyActor_disappear::Hide, timeToDisappearSec, false);
}

// Called every frame
void AMyActor_disappear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyActor_disappear::Hide()
{
	//SetActorHiddenInGame(true);
	//SetActorEnableCollision(false);
	GetWorldTimerManager().ClearTimer(TimerHandler);
	Destroy();
}
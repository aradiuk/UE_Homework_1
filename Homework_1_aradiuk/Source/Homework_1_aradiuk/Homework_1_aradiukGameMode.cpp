// Copyright Epic Games, Inc. All Rights Reserved.

#include "Homework_1_aradiukGameMode.h"
#include "Homework_1_aradiukCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomework_1_aradiukGameMode::AHomework_1_aradiukGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

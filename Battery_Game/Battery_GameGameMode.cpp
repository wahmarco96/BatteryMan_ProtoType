// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Battery_GameGameMode.h"
#include "Battery_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABattery_GameGameMode::ABattery_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

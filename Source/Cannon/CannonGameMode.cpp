// Copyright Epic Games, Inc. All Rights Reserved.

#include "CannonGameMode.h"
#include "CannonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACannonGameMode::ACannonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

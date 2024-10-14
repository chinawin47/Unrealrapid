// Copyright Epic Games, Inc. All Rights Reserved.

#include "gameGameMode.h"
#include "gameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgameGameMode::AgameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

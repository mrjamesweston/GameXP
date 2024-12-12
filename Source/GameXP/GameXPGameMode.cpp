// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameXPGameMode.h"
#include "GameXPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameXPGameMode::AGameXPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

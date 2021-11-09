// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPThirdPersonLearnGameMode.h"
#include "CPPThirdPersonLearnCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPThirdPersonLearnGameMode::ACPPThirdPersonLearnGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

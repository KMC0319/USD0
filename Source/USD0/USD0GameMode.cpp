// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "USD0GameMode.h"
#include "USD0Character.h"
#include "UObject/ConstructorHelpers.h"

AUSD0GameMode::AUSD0GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

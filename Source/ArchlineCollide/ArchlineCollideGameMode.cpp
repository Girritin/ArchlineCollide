// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ArchlineCollideGameMode.h"
#include "ArchlineCollidePlayerController.h"
#include "ArchlineCollideCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArchlineCollideGameMode::AArchlineCollideGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AArchlineCollidePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
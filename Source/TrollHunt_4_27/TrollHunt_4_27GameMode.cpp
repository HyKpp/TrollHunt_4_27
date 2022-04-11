// Copyright Epic Games, Inc. All Rights Reserved.

#include "TrollHunt_4_27GameMode.h"
#include "TrollHunt_4_27PlayerController.h"
#include "TrollHunt_4_27Character.h"
#include "UObject/ConstructorHelpers.h"

ATrollHunt_4_27GameMode::ATrollHunt_4_27GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATrollHunt_4_27PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
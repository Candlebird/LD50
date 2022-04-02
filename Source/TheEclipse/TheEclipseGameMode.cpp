// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheEclipseGameMode.h"
#include "TheEclipseHUD.h"
#include "TheEclipseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheEclipseGameMode::ATheEclipseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATheEclipseHUD::StaticClass();
}

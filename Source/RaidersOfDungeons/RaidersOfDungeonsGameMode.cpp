// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaidersOfDungeonsGameMode.h"
#include "RaidersOfDungeonsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARaidersOfDungeonsGameMode::ARaidersOfDungeonsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

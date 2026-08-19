// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPGameMode.h"
#include "CPPlayerController.h"

ACPGameMode::ACPGameMode()
{
	PlayerControllerClass = ACPPlayerController::StaticClass();
}

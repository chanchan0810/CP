// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPPawn.h"
#include "CPSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class CP_API ACPSportsCar : public ACPPawn
{
	GENERATED_BODY()
	
public:

	ACPSportsCar();
};

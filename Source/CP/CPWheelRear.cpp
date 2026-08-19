// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UCPWheelRear::UCPWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}
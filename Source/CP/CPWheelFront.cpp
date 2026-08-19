// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UCPWheelFront::UCPWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}
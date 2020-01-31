// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RollWithItGameMode.h"
#include "RollWithItBall.h"

ARollWithItGameMode::ARollWithItGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ARollWithItBall::StaticClass();
}

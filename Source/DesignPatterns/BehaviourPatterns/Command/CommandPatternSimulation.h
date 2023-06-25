﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommandPatternSimulation.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API ACommandPatternSimulation : public AActor
{
	GENERATED_BODY()

public:

	void StartSimulation();
};

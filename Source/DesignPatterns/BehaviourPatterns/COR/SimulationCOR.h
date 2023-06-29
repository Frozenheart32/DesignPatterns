// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SimulationCOR.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API USimulationCOR : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void StartSimulation();
};

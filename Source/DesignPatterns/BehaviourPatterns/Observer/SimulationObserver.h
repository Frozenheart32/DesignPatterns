// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShopService.h"
#include "UObject/Object.h"
#include "SimulationObserver.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API USimulationObserver : public UObject
{
	GENERATED_BODY()

public:

	USimulationObserver();
	
private:

	UShopService* ShopService = nullptr;


public:

	UFUNCTION(BlueprintCallable)
	void StartSimulation();
};

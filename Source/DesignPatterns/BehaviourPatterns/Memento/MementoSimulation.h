// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameHistory.h"
#include "UObject/Object.h"
#include "MementoSimulation.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API UMementoSimulation : public UObject
{
	GENERATED_BODY()

private:

	UGameHistory* GameHistory = nullptr;

public:

	UMementoSimulation();

	UFUNCTION(BlueprintCallable)
	void StartSimulation();
};

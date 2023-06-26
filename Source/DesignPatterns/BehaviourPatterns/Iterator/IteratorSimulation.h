// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Reader.h"
#include "UObject/Object.h"
#include "IteratorSimulation.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API UIteratorSimulation : public UObject
{
	GENERATED_BODY()

private:

	UReader* Reader = nullptr;

public:

	UIteratorSimulation();

	UFUNCTION(BlueprintCallable)
	void StartSimulation();
};

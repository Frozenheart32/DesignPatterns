// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGameplayManager.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UIGameplayManager : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DESIGNPATTERNS_API IIGameplayManager
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable)
	virtual void Win() PURE_VIRTUAL(IIGameplayManager::Win, );
	UFUNCTION(BlueprintCallable)
	virtual void Lose() PURE_VIRTUAL(IIGameplayManager::Win, );
};

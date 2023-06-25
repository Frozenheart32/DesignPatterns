// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "State.generated.h"

/**
 * 
 */
UCLASS(Abstract, NotBlueprintable)
class DESIGNPATTERNS_API UState : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	virtual void Enter() PURE_VIRTUAL(UState::Enter, );
	
	UFUNCTION(BlueprintCallable)
	virtual void Tick(const float& DeltaTime) PURE_VIRTUAL(UState::Tick, );
	
	UFUNCTION(BlueprintCallable)
	virtual void Exit() PURE_VIRTUAL(UState::Exit, );
};

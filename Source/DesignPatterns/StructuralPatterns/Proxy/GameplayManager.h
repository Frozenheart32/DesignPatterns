// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IGameplayManager.h"
#include "UObject/Object.h"
#include "GameplayManager.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UGameplayManager : public UObject, public IIGameplayManager
{
	GENERATED_BODY()

public:
	
	virtual void Win() override;
	virtual void Lose() override;
};

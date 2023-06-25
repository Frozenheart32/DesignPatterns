// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayManager.h"
#include "UObject/Object.h"
#include "UObject/WeakInterfacePtr.h"
#include "GameplayAnalyticsProxy.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UGameplayAnalyticsProxy : public UObject, public IIGameplayManager
{
	GENERATED_BODY()

private:
	
	TWeakInterfacePtr<IIGameplayManager> Original;
	bool IsInitialized = false;

public:
	
	void Initialized(UGameplayManager* Manager);
	
	virtual void Win() override;
	virtual void Lose() override;
};

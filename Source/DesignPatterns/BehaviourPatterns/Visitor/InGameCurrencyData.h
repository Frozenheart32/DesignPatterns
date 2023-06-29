// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AccountData.h"
#include "InGameCurrencyData.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UInGameCurrencyData : public UAccountData
{
	GENERATED_BODY()

public:

	int32 Gold = 0;
	int32 Wood = 0;
	int32 Copper = 0;
	
	virtual void Accept(UVisitorBase* Visitor) override; 
};

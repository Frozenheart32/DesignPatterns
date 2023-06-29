// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VisitorBase.generated.h"

class UPlayerProfileData;
class UInGameCurrencyData;
/**
 * 
 */
UCLASS(Abstract, NotBlueprintable)
class DESIGNPATTERNS_API UVisitorBase : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	virtual void VisitPlayerProfile(UPlayerProfileData* Data) PURE_VIRTUAL(UVisitorBase::VisitPlayerProfile, );
	UFUNCTION(BlueprintCallable)
	virtual void VisitInGameCurrency(UInGameCurrencyData* Data) PURE_VIRTUAL(UVisitorBase::VisitInGameCurrency, );
};

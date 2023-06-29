// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VisitorBase.h"
#include "LocalSaveVisitor.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API ULocalSaveVisitor : public UVisitorBase
{
	GENERATED_BODY()

public:

	virtual void VisitPlayerProfile(UPlayerProfileData* Data) override;
	virtual void VisitInGameCurrency(UInGameCurrencyData* Data) override;
};

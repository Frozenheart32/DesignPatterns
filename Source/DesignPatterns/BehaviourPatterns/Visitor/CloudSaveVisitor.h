// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VisitorBase.h"
#include "CloudSaveVisitor.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UCloudSaveVisitor : public UVisitorBase
{
	GENERATED_BODY()

public:

	virtual void VisitPlayerProfile(UPlayerProfileData* Data) override;
	virtual void VisitInGameCurrency(UInGameCurrencyData* Data) override;
};

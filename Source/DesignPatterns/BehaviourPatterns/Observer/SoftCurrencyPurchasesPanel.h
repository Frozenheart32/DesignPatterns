// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IObserver.h"
#include "Blueprint/UserWidget.h"
#include "SoftCurrencyPurchasesPanel.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API USoftCurrencyPurchasesPanel : public UUserWidget, public IIObserver
{
	GENERATED_BODY()

protected:

	UFUNCTION(BlueprintImplementableEvent)
	void UpdatePanelElements(const TArray<int32>& Prices);

public:

	virtual void Update(UObject* Data) override;
};

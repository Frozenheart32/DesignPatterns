// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IObserver.h"
#include "Blueprint/UserWidget.h"
#include "PurchasesPanel.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UPurchasesPanel : public UUserWidget, public IIObserver
{
	GENERATED_BODY()

protected:

	UFUNCTION(BlueprintImplementableEvent)
	void UpdatePurchaseElements(const TArray<int32>& Prices);

public:
	
	virtual void Update(UObject* Data) override;
};

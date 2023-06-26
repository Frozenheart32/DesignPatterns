// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ShopInfo.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API UShopInfo : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> PurchasePrices;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> SoftCurrencyPrices;
};

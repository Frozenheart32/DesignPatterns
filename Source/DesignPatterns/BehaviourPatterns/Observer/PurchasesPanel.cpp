// Fill out your copyright notice in the Description page of Project Settings.


#include "PurchasesPanel.h"

#include "ShopInfo.h"

void UPurchasesPanel::Update(UObject* Data)
{
	if(const auto ShopInfo = Cast<UShopInfo>(Data))
	{
		UpdatePurchaseElements(ShopInfo->PurchasePrices);
	}
}

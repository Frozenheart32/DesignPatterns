// Fill out your copyright notice in the Description page of Project Settings.


#include "SoftCurrencyPurchasesPanel.h"

#include "ShopInfo.h"

void USoftCurrencyPurchasesPanel::Update(UObject* Data)
{
	if(const auto ShopInfo = Cast<UShopInfo>(Data))
	{
		UpdatePanelElements(ShopInfo->SoftCurrencyPrices);
	}
}

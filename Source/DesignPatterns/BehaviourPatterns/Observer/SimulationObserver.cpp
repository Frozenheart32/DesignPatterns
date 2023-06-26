// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationObserver.h"

#include "PurchasesPanel.h"
#include "SoftCurrencyPurchasesPanel.h"
#include "Blueprint/UserWidget.h"

USimulationObserver::USimulationObserver()
{
	ShopService = CreateDefaultSubobject<UShopService>(TEXT("ShopService"));
}

void USimulationObserver::StartSimulation()
{
	const auto PurchasePanel = CreateWidget(GetWorld(), UPurchasesPanel::StaticClass());
	const auto SoftCurrencyPanel = CreateWidget(GetWorld(), USoftCurrencyPurchasesPanel::StaticClass());

	ShopService->AddObserver(PurchasePanel);
	ShopService->AddObserver(SoftCurrencyPanel);
	
	ShopService->LoadInfo();
}

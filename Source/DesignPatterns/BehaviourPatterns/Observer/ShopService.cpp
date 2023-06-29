// Fill out your copyright notice in the Description page of Project Settings.


#include "ShopService.h"

UShopService::UShopService()
{
	ShopInfo = CreateDefaultSubobject<UShopInfo>(TEXT("Shop Info"));
}

void UShopService::AddObserver(UObject* Observer)
{
	if(const auto ObserverPtr = Cast<IIObserver>(Observer))
	{
		Observers.Add(TWeakInterfacePtr<IIObserver>{ObserverPtr});
	}
}

void UShopService::RemoveObserver(UObject* Observer)
{
	if(const auto ObserverPtr = Cast<IIObserver>(Observer))
	{
		Observers.Remove(TWeakInterfacePtr<IIObserver>{ObserverPtr});
	}
}

void UShopService::NotifyObservers()
{
	for (const auto& Observer : Observers)
	{
		if(Observer.IsValid())
			Observer->Update(ShopInfo);
	} 
}

void UShopService::LoadInfo()
{
	//Simulation data loading from net
	ShopInfo->PurchasePrices.Empty();
	ShopInfo->SoftCurrencyPrices.Empty();

	ShopInfo->PurchasePrices = TArray<int32>{5,2,3,5,6,7,7};
	ShopInfo->SoftCurrencyPrices = TArray<int32>{100,200,300,500,600,700,750};

	NotifyObservers();
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IObservable.h"
#include "IObserver.h"
#include "ShopInfo.h"
#include "UObject/Object.h"
#include "UObject/WeakInterfacePtr.h"
#include "ShopService.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API UShopService : public UObject, public IIObservable
{
	GENERATED_BODY()

public:

	UShopService();

private:

	TArray<TWeakInterfacePtr<IIObserver>> Observers;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, meta=(AllowPrivateAccess))
	UShopInfo* ShopInfo = nullptr;

public:

	virtual void AddObserver(UObject* Observer) override;
	virtual void RemoveObserver(UObject* Observer) override;

protected:
	
	virtual void NotifyObservers() override;

public:
	
	UFUNCTION(BlueprintCallable)
	void LoadInfo();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectableItem.h"
#include "UObject/Object.h"
#include "ItemFactory.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class DESIGNPATTERNS_API UItemFactory : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual ACollectableItem* CreateItem() PURE_VIRTUAL(AItemFactory::CreateItem, {return nullptr;});
};

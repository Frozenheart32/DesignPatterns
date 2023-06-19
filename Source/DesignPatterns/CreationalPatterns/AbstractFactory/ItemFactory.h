// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemFactory.generated.h"

class ACollectableItem;
/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UItemFactory : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual ACollectableItem* CreateItem(TSubclassOf<ACollectableItem> ItemType, FVector Position = FVector::ZeroVector, FRotator Rotation = FRotator::ZeroRotator);
};

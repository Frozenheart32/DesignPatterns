// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBuilder.h"
#include "CreationalPatterns/AbstractFactory/ItemInfo.h"
#include "FirstAidBuilder.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UFirstAidBuilder : public UItemBuilder
{
	GENERATED_BODY()

	
public:

	UFirstAidBuilder();

private:

	TArray<EFirstAidType> AidTypes;
	
public:
	
	virtual ACollectableItem* Build(const FVector& Position, const FRotator& Rotation) override;
};

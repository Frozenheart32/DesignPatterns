// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBuilder.h"
#include "QuestItemBuilder.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UQuestItemBuilder : public UItemBuilder
{
	GENERATED_BODY()

public:

	virtual ACollectableItem* Build(const FVector& Position, const FRotator& Rotation) override;
};

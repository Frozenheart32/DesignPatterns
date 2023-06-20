// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemBuilder.generated.h"

class ACollectableItem;
class UMyGameInstance;
/**
 * 
 */
UCLASS(Abstract)
class DESIGNPATTERNS_API UItemBuilder : public UObject
{
	GENERATED_BODY()

private:

	TWeakObjectPtr<UMyGameInstance> GameInstance;

public:
	
	void Init(UMyGameInstance* MyGameInstance);

	UFUNCTION(BlueprintCallable)
	virtual ACollectableItem* Build(const FVector& Position, const FRotator& Rotation) PURE_VIRTUAL(UItemBuilder::Build, return nullptr;);

	UFUNCTION(BlueprintCallable)
	UMyGameInstance* GetGameInstance() const;
};

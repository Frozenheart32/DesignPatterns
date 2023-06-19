﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BuilderRepository.generated.h"

class UItemBuilder;
class ACollectableItem;
class UMyGameInstance;

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UBuilderRepository : public UObject
{
	GENERATED_BODY()

private:
	
	static UBuilderRepository* Instance;

	
	bool Initialized = false;
	TMap<UClass*, UItemBuilder*> ItemBuilders;

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Builder Repository")
	static UBuilderRepository* GetBuilderRepository();
	UFUNCTION(BlueprintCallable, Category = "Builder Repository")
	static void DestroyBuilderRepository();


	UFUNCTION(BlueprintCallable, Category = "Builder Repository")
	void Initialize(UMyGameInstance* MyGameInstance);
	UFUNCTION(BlueprintCallable, Category = "Builder Repository")
	UItemBuilder* TryGetItemBuilder(TSubclassOf<ACollectableItem> ItemType, bool& Result);
};

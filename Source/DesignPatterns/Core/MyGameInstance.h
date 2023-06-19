// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include "CreationalPatterns/AbstractFactory/ItemInfo.h"
#include "MyGameInstance.generated.h"

class UItemFactory;

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Data Tables")
	UDataTable* QuestItemInfoDataTable = nullptr;
	UPROPERTY(EditDefaultsOnly, Category = "Data Tables")
	UDataTable* FirstAidItemInfoDataTable = nullptr;

	UItemFactory* ItemFactory = nullptr;

protected:
	virtual void Init() override;

public:

	UFUNCTION(BlueprintCallable, Category = "First aid info")
	bool TryGetFirstAidInfo(EFirstAidType FirstAidType, FFirstAidInfo& Info);

	UFUNCTION(BlueprintCallable, Category = "Quest info")
	void GetRandomQuestItemInfo(FQuestItemInfo& Info);

	UFUNCTION(BlueprintCallable)
	UItemFactory* GetItemFactory() const;
};

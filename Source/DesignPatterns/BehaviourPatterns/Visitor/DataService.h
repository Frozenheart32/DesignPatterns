// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AccountData.h"
#include "UObject/Object.h"
#include "DataService.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API UDataService : public UObject
{
	GENERATED_BODY()

private:

	TMap<UClass*, UAccountData*> DataRepository;
	
public:

	void Add(UAccountData* Data);
	void Remove(UAccountData* Data);

	void Accept(UVisitorBase* Visitor);
};

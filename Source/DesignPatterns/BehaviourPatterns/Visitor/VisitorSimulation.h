// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataService.h"
#include "UObject/Object.h"
#include "VisitorSimulation.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API UVisitorSimulation : public UObject
{
	GENERATED_BODY()


private:

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, meta=(AllowPrivateAccess))
	UDataService* DataService = nullptr;
	
public:

	UVisitorSimulation();

	UFUNCTION(BlueprintCallable)
	void StartSimulation();
};

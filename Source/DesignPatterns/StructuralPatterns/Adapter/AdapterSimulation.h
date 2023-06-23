// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AdapterSimulation.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API AAdapterSimulation : public AActor
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;
	
public:

	UFUNCTION(BlueprintCallable)
	void StartSimulation(); 
};

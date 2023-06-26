// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Reader.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UReader : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SeeEnemies(UObject* EnemyEnumerable);
};

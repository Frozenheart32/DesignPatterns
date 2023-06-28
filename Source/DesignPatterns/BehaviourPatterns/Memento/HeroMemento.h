// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HeroMemento.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FHeroMemento 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Patrons;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Lives;
	
};

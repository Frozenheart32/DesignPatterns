// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HeroMemento.h"
#include "UObject/Object.h"
#include "GameHistory.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable, NotBlueprintType)
class DESIGNPATTERNS_API UGameHistory : public UObject
{
	GENERATED_BODY()

public:

	TArray<FHeroMemento> History;
};

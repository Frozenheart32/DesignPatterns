// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "UObject/Object.h"
#include "EnemyIteratorBase.generated.h"

/**
 * 
 */
UCLASS(Abstract, NotBlueprintable)
class DESIGNPATTERNS_API UEnemyIteratorBase : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	virtual bool HasNext() const PURE_VIRTUAL(UEnemyIteratorBase::HasNext, return false;);

	UFUNCTION(BlueprintCallable)
	virtual AEnemy* Next() PURE_VIRTUAL(UEnemyIteratorBase::Next, return nullptr;);
};

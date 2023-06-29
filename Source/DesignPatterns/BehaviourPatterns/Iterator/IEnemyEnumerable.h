// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyIteratorBase.h"
#include "UObject/Interface.h"
#include "IEnemyEnumerable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UIEnemyEnumerable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DESIGNPATTERNS_API IIEnemyEnumerable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable)
	virtual UEnemyIteratorBase* CreateIterator() PURE_VIRTUAL(IIEnemyEnumerable::CreateIterator, return nullptr;);

	UFUNCTION(BlueprintCallable)
	virtual int32 GetCount() const PURE_VIRTUAL(IIEnemyEnumerable::GetCount, return 0;)

	UFUNCTION(BlueprintCallable)
	virtual AEnemy* GetEnemyByIndex(int32 Index) const PURE_VIRTUAL(IIEnemyEnumerable::GetEnemyByIndex, return nullptr;);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyIteratorBase.h"
#include "IEnemyEnumerable.h"
#include "UObject/WeakInterfacePtr.h"
#include "EnemyIterator.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API UEnemyIterator : public UEnemyIteratorBase
{
	GENERATED_BODY()

private:

	int32 Index = 0;
	
	TWeakInterfacePtr<IIEnemyEnumerable> Aggregate;

public:

	void Init(UObject* EnumerableObject);

	virtual bool HasNext() const override;
	virtual AEnemy* Next() override;
};

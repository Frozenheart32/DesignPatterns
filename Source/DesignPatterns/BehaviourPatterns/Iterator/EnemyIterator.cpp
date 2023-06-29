// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyIterator.h"

void UEnemyIterator::Init(UObject* EnumerableObject)
{
	if(const auto EnumerablePtr = Cast<IIEnemyEnumerable>(EnumerableObject))
	{
		Aggregate = EnumerablePtr;
	}
}

bool UEnemyIterator::HasNext() const
{
	if(!Aggregate.IsValid()) return false;
	
	return Index < Aggregate->GetCount(); 
}

AEnemy* UEnemyIterator::Next()
{
	if(!Aggregate.IsValid()) return nullptr;

	return Aggregate->GetEnemyByIndex(Index++);
}

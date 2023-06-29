// Fill out your copyright notice in the Description page of Project Settings.


#include "Reader.h"

#include "IEnemyEnumerable.h"

void UReader::SeeEnemies(UObject* EnemyEnumerable)
{
	if(const auto Enumerable = Cast<IIEnemyEnumerable>(EnemyEnumerable))
	{
		//for and foreach in c#
		const auto Iterator = Enumerable->CreateIterator();
		while (Iterator->HasNext())
		{
			AEnemy* Enemy = Iterator->Next();
			UE_LOG(LogTemp, Verbose, TEXT("Enemy name is: %s"), *Enemy->GetName());
		}
	}
}

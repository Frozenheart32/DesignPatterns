// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"

#include "EnemyIterator.h"


// Sets default values
AEnemySpawner::AEnemySpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemySpawner::StartEnemySpawn()
{
	for (int32 i = 0; i < EnemyCount; i++)
	{
		SpawnEnemy();
	}
}

UEnemyIteratorBase* AEnemySpawner::CreateIterator()
{
	const auto Iterator = NewObject<UEnemyIterator>();
	Iterator->Init(this);
	return Iterator;
}

int32 AEnemySpawner::GetCount() const
{
	return Enemies.Num();
}

AEnemy* AEnemySpawner::GetEnemyByIndex(int32 Index) const
{
	if(Index < Enemies.Num())
	{
		return Enemies[Index];
	}
	
	return nullptr;
}

void AEnemySpawner::SpawnEnemy()
{
	FActorSpawnParameters Parameters;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	const auto Enemy = GetWorld()->SpawnActor<AEnemy>(Parameters);
	Enemies.Add(Enemy);
}


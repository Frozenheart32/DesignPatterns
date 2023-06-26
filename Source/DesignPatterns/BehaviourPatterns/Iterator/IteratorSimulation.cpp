// Fill out your copyright notice in the Description page of Project Settings.


#include "IteratorSimulation.h"

#include "EnemySpawner.h"

UIteratorSimulation::UIteratorSimulation()
{
	Reader = CreateDefaultSubobject<UReader>(TEXT("Reader"));
}

void UIteratorSimulation::StartSimulation()
{

	FActorSpawnParameters Parameters;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	const auto Spawner = GetWorld()->SpawnActor<AEnemySpawner>(Parameters);
	Spawner->StartEnemySpawn();

	Reader->SeeEnemies(Spawner);
	
}

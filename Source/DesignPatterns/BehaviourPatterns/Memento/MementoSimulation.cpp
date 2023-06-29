// Fill out your copyright notice in the Description page of Project Settings.


#include "MementoSimulation.h"

#include "Hero.h"

UMementoSimulation::UMementoSimulation()
{
	GameHistory = CreateDefaultSubobject<UGameHistory>(TEXT("Game History"));
}

void UMementoSimulation::StartSimulation()
{
	FActorSpawnParameters Parameters;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	//10 patrons
	const auto Hero = GetWorld()->SpawnActor<AHero>(Parameters);

	//9 patrons
	Hero->Shoot();

	//Saved 9 patrons
	GameHistory->History.Push(Hero->SaveState());

	//8 patrons
	Hero->Shoot();

	//Restore 9 patrons
	Hero->RestoreState(GameHistory->History.Pop());
}

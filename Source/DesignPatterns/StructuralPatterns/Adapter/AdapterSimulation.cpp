// Fill out your copyright notice in the Description page of Project Settings.


#include "AdapterSimulation.h"

#include "Automobile.h"
#include "Camel.h"
#include "Driver.h"
#include "Saddle.h"

void AAdapterSimulation::StartSimulation()
{
	FActorSpawnParameters Parameters;
	Parameters.Owner = this;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	AActor* SpawnedActor = nullptr;
	SpawnedActor = GetWorld()->SpawnActor<ADriver>(ADriver::StaticClass(), Parameters);
	ADriver* Driver = Cast<ADriver>(SpawnedActor);

	SpawnedActor = GetWorld()->SpawnActor<AAutomobile>(AAutomobile::StaticClass(), Parameters);
	AAutomobile* Automobile = Cast<AAutomobile>(SpawnedActor);

	//Travel to Egypt
	Driver->Travel(Automobile);

	SpawnedActor = GetWorld()->SpawnActor<ACamel>(ACamel::StaticClass(), Parameters);
	ACamel* Camel = Cast<ACamel>(SpawnedActor);
	// Camel != transport. Uncomment for check.
	//Driver->Travel(Camel);

	//Adapter for Camel
	SpawnedActor = GetWorld()->SpawnActor<ASaddle>(ASaddle::StaticClass(), Parameters);
	ASaddle* CamelWithSaddle = Cast<ASaddle>(SpawnedActor);
	CamelWithSaddle->Initialize(Camel);

	//Travel on Camel to Desert
	Driver->Travel(CamelWithSaddle);
}

void AAdapterSimulation::BeginPlay()
{
	Super::BeginPlay();
	StartSimulation();
}

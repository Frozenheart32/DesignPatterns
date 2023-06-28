// Fill out your copyright notice in the Description page of Project Settings.


#include "MediatorSimulation.h"

#include "Car.h"
#include "Finish.h"
#include "RaceMediator.h"

void UMediatorSimulation::StartSimulation()
{
	const auto Mediator = NewObject<URaceMediator>(this);

	FActorSpawnParameters Parameters;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	const auto FinishPoint = GetWorld()->SpawnActor<AFinish>(Parameters);
	FinishPoint->InitMediator(Mediator);
	const auto Car = GetWorld()->SpawnActor<ACar>(Parameters);
	Car->InitMediator(Mediator);
	
	Mediator->Finish = FinishPoint;
	Mediator->Car = Car;

	//Start race
	Mediator->SendMessage(FinishPoint);

	//This car finished
	Mediator->SendMessage(Car);
}

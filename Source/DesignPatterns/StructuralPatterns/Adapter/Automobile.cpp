// Fill out your copyright notice in the Description page of Project Settings.


#include "Automobile.h"


// Sets default values
AAutomobile::AAutomobile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAutomobile::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAutomobile::Drive()
{
	//Movement logic
}


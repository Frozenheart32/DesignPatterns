// Fill out your copyright notice in the Description page of Project Settings.


#include "Car.h"

#include "Mediator.h"


// Sets default values
ACar::ACar()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ACar::Send()
{
	//IIColleague::Send();
	Mediator->SendMessage(this);
}

void ACar::Notify()
{
	//IIColleague::Notify();
	GetControl();
}

void ACar::GetControl()
{
	//Set isControlled = true. wsad and ect...
	IsCarControled = true;
}


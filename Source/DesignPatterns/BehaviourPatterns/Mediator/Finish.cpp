// Fill out your copyright notice in the Description page of Project Settings.


#include "Finish.h"

#include "Mediator.h"


// Sets default values
AFinish::AFinish()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFinish::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFinish::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFinish::Send()
{
	Mediator->SendMessage(this);
}

void AFinish::Notify()
{
	//Car finished.
	//Create win widget;
}


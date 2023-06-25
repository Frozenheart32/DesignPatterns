// Fill out your copyright notice in the Description page of Project Settings.


#include "Saddle.h"


// Sets default values
ASaddle::ASaddle()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASaddle::Initialize(UObject* Animal)
{
	MyAnimal = Cast<IIAnimal>(Animal);
}

void ASaddle::Drive()
{
	if(MyAnimal.IsValid())
	{
		MyAnimal->Move();
	}
}

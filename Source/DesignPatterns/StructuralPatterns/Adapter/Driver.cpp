// Fill out your copyright notice in the Description page of Project Settings.


#include "Driver.h"


// Sets default values
ADriver::ADriver()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADriver::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADriver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ADriver::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ADriver::Travel(UObject* Transport)
{
	if(auto MyTransport= Cast<IITransport>(Transport))
	{
		MyTransport->Drive();
	}
}


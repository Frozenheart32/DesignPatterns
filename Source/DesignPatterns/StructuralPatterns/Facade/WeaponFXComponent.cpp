// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponFXComponent.h"

#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UWeaponFXComponent::UWeaponFXComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UWeaponFXComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UWeaponFXComponent::SpawnFireFX(FVector Position, FRotator Rotator)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), FireFX, Position, Rotator);
}

void UWeaponFXComponent::StartReloadFX(FVector Position)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ReloadFX, Position);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "AbstractWeaponBase.h"


// Sets default values
AAbstractWeaponBase::AAbstractWeaponBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAbstractWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	CurrentAmmo = MaxAmmo;
}

void AAbstractWeaponBase::Fire()
{
	
}


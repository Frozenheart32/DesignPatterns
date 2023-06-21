// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponInventory.h"


// Sets default values for this component's properties
UWeaponInventory::UWeaponInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UWeaponInventory::BeginPlay()
{
	Super::BeginPlay();

	// ...
	CurrentAmmo = MaxAmmo;
}

void UWeaponInventory::GetAmmoInfo(int32& Ammo, int32& MaximumAmmo) const
{
	Ammo = this->CurrentAmmo;
	MaximumAmmo = this->MaxAmmo;
}

bool UWeaponInventory::TryDecreaseAmmo()
{
	int32 Delta = CurrentAmmo - 1;
	
	if(Delta < 1) return false;

	CurrentAmmo--;
	return true;
}

bool UWeaponInventory::TryReloadAmmo()
{
	if(CurrentAmmo == MaxAmmo) return false;

	CurrentAmmo = MaxAmmo;
	return true;
}



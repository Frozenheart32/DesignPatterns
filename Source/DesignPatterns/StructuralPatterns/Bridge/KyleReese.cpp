// Fill out your copyright notice in the Description page of Project Settings.


#include "KyleReese.h"

#include "AbstractWeaponBase.h"


// Sets default values
AKyleReese::AKyleReese() : APlayerCharacterBase()
{
	
}

// Called when the game starts or when spawned
void AKyleReese::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKyleReese::Attack()
{
	//2 shoot for 1 time
	Super::Attack();
	MyWeapon->Fire();
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Lootbox.h"

#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"

void ALootbox::OpenBox()
{
	if(OpenLootboxFX)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), OpenLootboxFX, GetActorLocation());
	}
	
	Super::OpenBox();
}

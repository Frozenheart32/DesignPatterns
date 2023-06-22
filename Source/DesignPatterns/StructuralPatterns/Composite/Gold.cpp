// Fill out your copyright notice in the Description page of Project Settings.


#include "Gold.h"

#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"

void AGold::Take()
{
	//Take resource to inventory
	Super::Take();
}

void AGold::SelfDestroy()
{
	if(BurstOfGold)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BurstOfGold, GetActorLocation());
	}
	
	Super::SelfDestroy();
}

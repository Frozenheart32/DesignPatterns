// Fill out your copyright notice in the Description page of Project Settings.


#include "ShotGun.h"


// Sets default values
AShotGun::AShotGun()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void AShotGun::Fire()
{

	if(CurrentAmmo > 0)
	{
		CurrentAmmo--;
		//Boom
		Super::Fire();
	}
}



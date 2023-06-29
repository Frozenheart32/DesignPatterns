// Fill out your copyright notice in the Description page of Project Settings.


#include "Hero.h"


// Sets default values
AHero::AHero()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void AHero::Shoot()
{
	if(Patrons > 0)
	{
		Patrons--;
		//Boom!
	}
	else
	{
		//empty
	}
}

void AHero::RestoreState(const FHeroMemento& Memento)
{
	Patrons = Memento.Patrons;
	Lives = Memento.Lives;
}

FHeroMemento AHero::SaveState() const
{
	return FHeroMemento{Patrons, Lives};
}


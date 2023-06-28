// Fill out your copyright notice in the Description page of Project Settings.


#include "ElvenFactory.h"

ACharacter* UElvenFactory::CreateBody(const TSubclassOf<ACharacter>& Type)
{
	//Use Builder for elven body;
	return nullptr;
}

void UElvenFactory::CreateArmor(ACharacter* Character)
{
	//use builder for elven armor
}

void UElvenFactory::CreateWeapon(ACharacter* Character)
{
	//use builder for elven armor
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "HumanoidFactory.h"

ACharacter* UHumanoidFactory::CreateHumanoid(TSubclassOf<ACharacter> Type)
{
	const auto Character = CreateBody(Type);
	CreateArmor(Character);
	CreateWeapon(Character);

	return Character;
}

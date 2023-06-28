// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HumanoidFactory.h"
#include "UObject/Object.h"
#include "ElvenFactory.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UElvenFactory : public UHumanoidFactory
{
	GENERATED_BODY()

protected:

	virtual ACharacter* CreateBody(const TSubclassOf<ACharacter>& Type) override;
	virtual void CreateArmor(ACharacter* Character) override;
	virtual void CreateWeapon(ACharacter* Character) override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HumanoidFactory.h"
#include "UObject/Object.h"
#include "OrcFactory.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UOrcFactory : public UHumanoidFactory
{
	GENERATED_BODY()

public:
	
	virtual ACharacter* CreateBody(const TSubclassOf<ACharacter>& Type) override;
	virtual void CreateArmor(ACharacter* Character) override;
	virtual void CreateWeapon(ACharacter* Character) override; 
};

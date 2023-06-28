// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HumanoidFactory.generated.h"

/**
 * 
 */
UCLASS(Abstract, NotBlueprintable)
class DESIGNPATTERNS_API UHumanoidFactory : public UObject
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintCallable)
	ACharacter* CreateHumanoid(TSubclassOf<ACharacter> Type);


protected:

	UFUNCTION()
	virtual ACharacter* CreateBody(const TSubclassOf<ACharacter>& Type) PURE_VIRTUAL(UHumanoidFactory::CreateBody, return nullptr;);
	UFUNCTION()
	virtual void CreateArmor(ACharacter* Character) PURE_VIRTUAL(UHumanoidFactory::CreateArmor, );
	UFUNCTION()
	virtual void CreateWeapon(ACharacter* Character) PURE_VIRTUAL(UHumanoidFactory::CreateWeapon, );
};

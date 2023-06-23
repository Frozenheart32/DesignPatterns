// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbstractWeaponBase.h"
#include "Laser.generated.h"

UCLASS()
class DESIGNPATTERNS_API ALaser : public AAbstractWeaponBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALaser();

public:
	
	virtual void Fire() override;
};

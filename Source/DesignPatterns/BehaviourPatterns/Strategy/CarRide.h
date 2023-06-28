// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IMovementMode.h"
#include "UObject/Object.h"
#include "CarRide.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UCarRide : public UObject, public IIMovementMode
{
	GENERATED_BODY()

public:

	virtual void Move() override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResourceBase.h"
#include "Wood.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API AWood : public AResourceBase
{
	GENERATED_BODY()

public:
	
	virtual void Take() override;
};

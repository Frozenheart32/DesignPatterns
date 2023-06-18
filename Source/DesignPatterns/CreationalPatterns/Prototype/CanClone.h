﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CanClone.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UCanClone : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DESIGNPATTERNS_API ICanClone
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//UFUNCTION(BlueprintCallable, Category = "Prototype")
	//virtual void* Clone() PURE_VIRTUAL(ICanClone::Clone, {return nullptr;}); 
};

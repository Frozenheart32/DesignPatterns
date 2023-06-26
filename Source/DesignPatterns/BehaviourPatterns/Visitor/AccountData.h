// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VisitorBase.h"
#include "UObject/Object.h"
#include "AccountData.generated.h"

/**
 * 
 */
UCLASS(Abstract, NotBlueprintable)
class DESIGNPATTERNS_API UAccountData : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	virtual void Accept(UVisitorBase* Visitor) PURE_VIRTUAL(UAccountData::Accept, );
};

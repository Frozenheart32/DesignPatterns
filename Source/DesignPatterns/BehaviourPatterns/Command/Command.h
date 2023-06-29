// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Command.generated.h"

/**
 * 
 */
UCLASS(Abstract, NotBlueprintable)
class DESIGNPATTERNS_API UCommand : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	virtual void Execute() PURE_VIRTUAL(UCommand::Execute, );

	UFUNCTION(BlueprintCallable)
	virtual void Undo() PURE_VIRTUAL(UCommand::Undo, );
};

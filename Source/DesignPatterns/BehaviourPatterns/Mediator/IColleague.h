// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IColleague.generated.h"


class UMediator;
// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UIColleague : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DESIGNPATTERNS_API IIColleague
{
	GENERATED_BODY()

protected:

	TWeakObjectPtr<UMediator> Mediator;

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable)
	virtual void InitMediator(UMediator* NewMediator);

	UFUNCTION(BlueprintCallable)
	virtual void Send() PURE_VIRTUAL(IIColleague::Notify, );

	UFUNCTION(BlueprintCallable)
	virtual void Notify() PURE_VIRTUAL(IIColleague::Notify, );
	
};

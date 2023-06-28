// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IColleague.h"
#include "Mediator.h"
#include "UObject/WeakInterfacePtr.h"
#include "RaceMediator.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API URaceMediator : public UMediator
{
	GENERATED_BODY()

public:

	TWeakInterfacePtr<IIColleague> Car;
	TWeakInterfacePtr<IIColleague> Finish;

	
	virtual void SendMessage(UObject* Colleague) override;
};

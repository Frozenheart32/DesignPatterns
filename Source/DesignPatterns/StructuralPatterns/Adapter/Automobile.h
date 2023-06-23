// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ITransport.h"
#include "GameFramework/Pawn.h"
#include "Automobile.generated.h"

UCLASS()
class DESIGNPATTERNS_API AAutomobile : public APawn, public IITransport
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAutomobile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void Drive() override;
};

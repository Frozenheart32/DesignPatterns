// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAnimal.h"
#include "GameFramework/Pawn.h"
#include "Camel.generated.h"

UCLASS()
class DESIGNPATTERNS_API ACamel : public APawn, public IIAnimal
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACamel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void Move() override;
};

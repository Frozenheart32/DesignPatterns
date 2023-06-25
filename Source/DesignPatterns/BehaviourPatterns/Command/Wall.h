// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IReceiver.h"
#include "GameFramework/Actor.h"
#include "Wall.generated.h"

UCLASS()
class DESIGNPATTERNS_API AWall : public AActor, public IIReceiver
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWall();

protected:

	void MoveUp();

public:

	virtual void Operation() override;
};

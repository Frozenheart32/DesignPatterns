// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAnimal.h"
#include "ITransport.h"
#include "GameFramework/Pawn.h"
#include "UObject/WeakInterfacePtr.h"
#include "Saddle.generated.h"

UCLASS()
class DESIGNPATTERNS_API ASaddle : public APawn, public IITransport
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASaddle();

protected:

	TWeakInterfacePtr<IIAnimal> MyAnimal;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void Initialize(UObject* Animal);

	virtual void Drive() override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IColleague.h"
#include "GameFramework/Pawn.h"
#include "Car.generated.h"

UCLASS()
class DESIGNPATTERNS_API ACar : public APawn, public IIColleague
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACar();

protected:

	bool IsCarControled = false;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Send() override;
	virtual void Notify() override;

protected:

	void GetControl();
};

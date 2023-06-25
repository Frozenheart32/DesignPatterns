// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ITransport.h"
#include "GameFramework/Character.h"
#include "Driver.generated.h"

UCLASS()
class DESIGNPATTERNS_API ADriver : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADriver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void Travel(UObject* Transport);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IMovementMode.h"
#include "GameFramework/Character.h"
#include "UObject/WeakInterfacePtr.h"
#include "Man.generated.h"

UCLASS()
class DESIGNPATTERNS_API AMan : public ACharacter
{
	GENERATED_BODY()

private:

	TWeakInterfacePtr<IIMovementMode> MovementMode;

public:
	// Sets default values for this character's properties
	AMan();

	UFUNCTION(BlueprintCallable)
	void SetMovementMode(UObject* Mode);

	UFUNCTION(BlueprintCallable)
	void ToWork();
};

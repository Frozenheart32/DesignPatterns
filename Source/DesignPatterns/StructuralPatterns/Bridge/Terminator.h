// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacterBase.h"
#include "GameFramework/Actor.h"
#include "Terminator.generated.h"

UCLASS()
class DESIGNPATTERNS_API ATerminator : public APlayerCharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATerminator();


	//One shoot for one time =)
};

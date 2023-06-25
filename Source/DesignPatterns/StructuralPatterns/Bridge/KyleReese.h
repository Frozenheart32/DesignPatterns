// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacterBase.h"
#include "KyleReese.generated.h"

UCLASS()
class DESIGNPATTERNS_API AKyleReese : public APlayerCharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AKyleReese();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Attack() override;
};

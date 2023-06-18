// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectableItem.h"
#include "FirstAidItem.generated.h"

UCLASS()
class DESIGNPATTERNS_API AFirstAidItem : public ACollectableItem
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFirstAidItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	float HealValue = 0.f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GiveUp(AActor* Actor) override;
	virtual UObject* Clone() override;
};

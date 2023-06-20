// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemFactory.h"
#include "ItemInfo.h"
#include "GameFramework/Actor.h"
#include "ItemSpawner.generated.h"

UCLASS()
class DESIGNPATTERNS_API AItemSpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItemSpawner();

private:

	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess), Category = "Spawner Settings")
	TSubclassOf<ACollectableItem> ItemType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnItem();
};

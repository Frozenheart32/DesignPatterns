﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreationalPatterns/Prototype/CanClone.h"
#include "GameFramework/Actor.h"
#include "CollectableItem.generated.h"

UCLASS(Abstract)
class DESIGNPATTERNS_API ACollectableItem : public AActor, public ICanClone
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACollectableItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GiveUp(AActor* Actor) PURE_VIRTUAL(ACollectableItem::GiveUp,);
};

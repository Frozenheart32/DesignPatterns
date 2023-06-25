// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbstractWeaponBase.generated.h"

UCLASS(Abstract)
class DESIGNPATTERNS_API AAbstractWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAbstractWeaponBase();

protected:

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	int32 CurrentAmmo = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 MaxAmmo = 10;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	virtual void Fire();
};

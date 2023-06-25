// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponInventory.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DESIGNPATTERNS_API UWeaponInventory : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UWeaponInventory();

protected:

	
	int32 CurrentAmmo = 0;

	UPROPERTY(EditDefaultsOnly)
	int32 MaxAmmo = 10;
	
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void GetAmmoInfo(int32& Ammo, int32& MaximumAmmo) const;

	UFUNCTION(BlueprintCallable)
	bool TryDecreaseAmmo();
	UFUNCTION(BlueprintCallable)
	bool TryReloadAmmo();
	
};

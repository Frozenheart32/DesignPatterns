// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponDamageComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DESIGNPATTERNS_API UWeaponDamageComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UWeaponDamageComponent();

protected:

	UPROPERTY(EditDefaultsOnly)
	float Damage = 10.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float FireDistance = 1000.f;
	
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	
	UFUNCTION(BlueprintCallable)
	void Shoot(FVector ShootPosition, FVector Direction);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponFXComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DESIGNPATTERNS_API UWeaponFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UWeaponFXComponent();

protected:

	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* FireFX = nullptr;
	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* ReloadFX = nullptr;
	
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	
	void SpawnFireFX(FVector Position, FRotator Rotator);
	void StartReloadFX(FVector Position);
	
};

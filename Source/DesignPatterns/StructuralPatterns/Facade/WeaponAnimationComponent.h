// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponAnimationComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DESIGNPATTERNS_API UWeaponAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UWeaponAnimationComponent();

protected:

	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* FireMontage = nullptr;
	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* ReloadMontage = nullptr;

private:
	
	UAnimInstance* AnimInstance = nullptr;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	void StartFireAnimation();
	void StartReloadAnimation();
};

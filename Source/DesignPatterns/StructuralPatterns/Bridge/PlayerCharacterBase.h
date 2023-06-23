// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbstractWeaponBase.h"
#include "PlayerCharacterBase.generated.h"

UCLASS(Abstract)
class DESIGNPATTERNS_API APlayerCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacterBase();

protected:

	TWeakObjectPtr<AAbstractWeaponBase> MyWeapon;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void InitializeWeapon(AAbstractWeaponBase* Weapon);

	UFUNCTION(BlueprintCallable)
	virtual void Attack();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class UWeaponDamageComponent;
class UWeaponAnimationComponent;
class UWeaponFXComponent;
class UWeaponInventory;



UCLASS()
class DESIGNPATTERNS_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeaponBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USkeletalMeshComponent* SkeletalMeshComponent = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UArrowComponent* ShootLocationComponent = nullptr;

private:
	
	UPROPERTY(EditDefaultsOnly)
	UWeaponDamageComponent* WeaponDamageComponent = nullptr;
	UPROPERTY(EditDefaultsOnly)
	UWeaponAnimationComponent* WeaponAnimationComponent = nullptr;
	UPROPERTY(EditDefaultsOnly)
	UWeaponFXComponent* WeaponFXComponent = nullptr;
	UPROPERTY(EditDefaultsOnly)
	UWeaponInventory* WeaponInventory = nullptr;

public:

	UFUNCTION(BlueprintCallable)
	void Fire();
	UFUNCTION(BlueprintCallable)
	void Reload();

	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetWeaponMesh() const;
	
};

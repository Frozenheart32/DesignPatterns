// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HeroMemento.h"
#include "GameFramework/Character.h"
#include "Hero.generated.h"

UCLASS()
class DESIGNPATTERNS_API AHero : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHero();

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess))
	int32 Patrons = 10;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess))
	int32 Lives = 5;

public:

	UFUNCTION(BlueprintCallable)
	void Shoot();

	UFUNCTION(BlueprintCallable)
	void RestoreState(const FHeroMemento& Memento);

	UFUNCTION(BlueprintCallable)
	FHeroMemento SaveState() const;
};

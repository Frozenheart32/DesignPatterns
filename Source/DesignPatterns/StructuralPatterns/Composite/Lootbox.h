// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoxBase.h"
#include "Lootbox.generated.h"

class UParticleSystem;

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API ALootbox : public ABoxBase
{
	GENERATED_BODY()

private:

	UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess))
	UParticleSystem* OpenLootboxFX = nullptr;

public:
	
	virtual void OpenBox() override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResourceBase.h"
#include "Gold.generated.h"

class UParticleSystem;

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API AGold : public AResourceBase
{
	GENERATED_BODY()

private:

	UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess))
	UParticleSystem* BurstOfGold = nullptr;

public:
	
	virtual void Take() override;
	virtual void SelfDestroy() override;
};

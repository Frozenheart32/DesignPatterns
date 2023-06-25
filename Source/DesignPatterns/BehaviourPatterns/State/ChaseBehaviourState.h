// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State.h"
#include "ChaseBehaviourState.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UChaseBehaviourState : public UState
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ExposeOnSpawn, AllowPrivateAccess))
	float EscapeDistance = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ExposeOnSpawn, AllowPrivateAccess))
	float CheckTimer;

	float Time = 0.f;

	bool CheckEscapeDistance() const;

public:

	virtual void Enter() override;
	virtual void Tick(const float& DeltaTime) override;
	virtual void Exit() override;
};

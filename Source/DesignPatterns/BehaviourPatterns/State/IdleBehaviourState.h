// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State.h"
#include "IdleBehaviourState.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UIdleBehaviourState : public UState
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess, ExposeOnSpawn))
	float Timer = 5.f;
	
	float Time;

public:

	//May be set args (OwnerStateMachine, Character) 
	
	void Init(float NewTimer);

	virtual void Enter() override;
	virtual void Tick(const float& DeltaTime) override;
	virtual void Exit() override;
};

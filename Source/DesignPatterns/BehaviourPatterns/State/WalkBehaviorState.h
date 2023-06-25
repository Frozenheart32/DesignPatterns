// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State.h"
#include "WalkBehaviorState.generated.h"

class ACharacter;
/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UWalkBehaviorState : public UState
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ExposeOnSpawn, AllowPrivateAccess))
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ExposeOnSpawn, AllowPrivateAccess))
	TSubclassOf<class ACharacter> TargetFilterClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ExposeOnSpawn, AllowPrivateAccess))
	float CheckRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ExposeOnSpawn, AllowPrivateAccess))
	float CheckTimer;

	float Time = 0.f;

	ACharacter* CheckDistance(bool& Result) const;

public:

	//Set args (StateMachine, Character, TargetFilterClass..)
	void Init(const TArray<TEnumAsByte<EObjectTypeQuery>>& NewTraceObjectTypes, const TSubclassOf<class ACharacter>& NewTargetFilterClass, const float& NewCheckTargetDistance, const float& NewCheckTimer);

	virtual void Enter() override;
	virtual void Tick(const float& DeltaTime) override;
	virtual void Exit() override;
};

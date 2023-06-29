// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IReceiver.h"
#include "GameFramework/Character.h"
#include "CutSceneCharacter.generated.h"

UCLASS()
class DESIGNPATTERNS_API ACutSceneCharacter : public ACharacter, public IIReceiver
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACutSceneCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimMontage* CutsceneMontage = nullptr;
	
private:
	
	void StartCutsceneAnimation();

public:

	virtual void Operation() override;
};

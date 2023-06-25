// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Command.h"
#include "IReceiver.h"
#include "UObject/WeakInterfacePtr.h"
#include "StartCharacterCutsceneAnimationCommand.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UStartCharacterCutsceneAnimationCommand : public UCommand
{
	GENERATED_BODY()
	
	TWeakInterfacePtr<IIReceiver> Receiver;

public:

	void SetCharacter(ACharacter* Character);

	virtual void Execute() override;
	virtual void Undo() override;
};

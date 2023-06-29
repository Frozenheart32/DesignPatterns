// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Command.h"
#include "IReceiver.h"
#include "Wall.h"
#include "UObject/WeakInterfacePtr.h"
#include "MoveUpWallCommand.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DESIGNPATTERNS_API UMoveUpWallCommand : public UCommand
{
	GENERATED_BODY()

private:
	
	TWeakInterfacePtr<IIReceiver> Receiver;

public:

	void SetWall(AWall* Wall);

	virtual void Execute() override;
	virtual void Undo() override;
};

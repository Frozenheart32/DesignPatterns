// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveUpWallCommand.h"

void UMoveUpWallCommand::SetWall(AWall* Wall)
{
	if(const auto ReceivePtr = Cast<IIReceiver>(Wall))
	{
		Receiver = ReceivePtr;
	}
}

void UMoveUpWallCommand::Execute()
{
	Receiver->Operation();
}

void UMoveUpWallCommand::Undo()
{
	auto Actor = Cast<AActor>(Receiver.Get());
	if(Actor)
	{
		Actor->Destroy();
	}
}

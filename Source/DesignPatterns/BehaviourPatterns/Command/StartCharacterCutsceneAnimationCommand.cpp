// Fill out your copyright notice in the Description page of Project Settings.


#include "StartCharacterCutsceneAnimationCommand.h"

#include "GameFramework/Character.h"

void UStartCharacterCutsceneAnimationCommand::SetCharacter(ACharacter* Character)
{
	if(const auto Char = Cast<IIReceiver>(Character))
	{
		Receiver = Char;
	}
}

void UStartCharacterCutsceneAnimationCommand::Execute()
{
	if(Receiver.IsValid())
		Receiver->Operation();
}

void UStartCharacterCutsceneAnimationCommand::Undo()
{
	if(Receiver.IsValid())
	{
		auto Character = Cast<ACharacter>(Receiver.Get());
		Character->Destroy();
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Invoker.h"


// Sets default values
AInvoker::AInvoker()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void AInvoker::AddCommand(UCommand* NewCommand)
{
	if(NewCommand)
		Commands.Add(TWeakObjectPtr<UCommand>{NewCommand});
}

void AInvoker::AddRangeCommand(const TArray<UCommand*>& NewCommands)
{
	for (const auto NewCommand : NewCommands)
	{
		AddCommand(NewCommand);
	} 
}

void AInvoker::Run()
{
	for (const auto& Command : Commands)
	{
		Command->Execute();
	} 
}

void AInvoker::CancelLastOperation()
{
	if(Commands.Num() < 1) return;
	
	const auto CanceledCommand = Commands.Pop();
	if(CanceledCommand.IsValid())
		CanceledCommand->Undo();
}

void AInvoker::CancelAllOperations()
{
	auto Size = Commands.Num();

	for (int32 i = 0; i < Size; i++)
	{
		const auto CanceledCommand = Commands.Pop();
		if(CanceledCommand.IsValid())
			CanceledCommand->Undo();
	}
}



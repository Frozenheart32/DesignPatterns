// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Command.h"
#include "GameFramework/Actor.h"
#include "Invoker.generated.h"

UCLASS(Abstract, NotBlueprintable)
class DESIGNPATTERNS_API AInvoker : public AActor
{
	GENERATED_BODY()

private:
	
	TArray<TWeakObjectPtr<UCommand>> Commands;
	
public:
	// Sets default values for this actor's properties
	AInvoker();

	void AddCommand(UCommand* NewCommand);
	void AddRangeCommand(const TArray<UCommand*>& NewCommands);

	void Run();

	void CancelLastOperation();
	void CancelAllOperations();
};

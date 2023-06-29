// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandPatternSimulation.h"

#include "CutSceneCharacter.h"
#include "CutSceneTrigger.h"
#include "MoveUpWallCommand.h"
#include "StartCharacterCutsceneAnimationCommand.h"
#include "Wall.h"

void ACommandPatternSimulation::StartSimulation()
{
	FActorSpawnParameters Parameters;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	auto Invoker = GetWorld()->SpawnActor<AInvoker>(ACutSceneTrigger::StaticClass(), FVector{50,50,50}, FRotator{0,0,0}, Parameters);

	const auto CutsceneChar = GetWorld()->SpawnActor<ACutSceneCharacter>(Parameters);
	const auto CharCutsceneCommand = NewObject<UStartCharacterCutsceneAnimationCommand>(Invoker);
	CharCutsceneCommand->SetCharacter(CutsceneChar);

	const auto Wall = GetWorld()->SpawnActor<AWall>(Parameters);
	const auto WallCommand = NewObject<UMoveUpWallCommand>(Invoker);
	WallCommand->SetWall(Wall);

	Invoker->AddCommand(CharCutsceneCommand);
	Invoker->AddCommand(WallCommand);
	
	//Cutscene trigger is ready
	//Simalation overlap
	//Invoker->Run();
}

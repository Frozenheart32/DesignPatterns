// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestItemBuilder.h"

#include "CreationalPatterns/AbstractFactory/QuestItem.h"
#include "Core/MyGameInstance.h"

ACollectableItem* UQuestItemBuilder::Build(const FVector& Position, const FRotator& Rotation)
{
	FActorSpawnParameters Parameters;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
	auto Item = GetWorld()->SpawnActor<AQuestItem>(Position, Rotation, Parameters);
	
	if(GetGameInstance())
	{
		auto GI = GetGameInstance();
		FQuestItemInfo Info{};
		GI->GetRandomQuestItemInfo(Info);
		Item->InitializeItem(Info.StaticMesh, Info.Material, Info.MissionID, Info.IsStackable);
	}
	
	return Item;
}

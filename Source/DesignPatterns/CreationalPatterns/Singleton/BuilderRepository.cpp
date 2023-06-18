// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderRepository.h"
#include "CreationalPatterns/AbstractFactory/CollectableItem.h"
#include "CreationalPatterns/AbstractFactory/EquipItem.h"
#include "CreationalPatterns/AbstractFactory/QuestItem.h"
#include "CreationalPatterns/Builder/EquipItemBuilder.h"
#include "CreationalPatterns/Builder/ItemBuilder.h"
#include "CreationalPatterns/Builder/QuestItemBuilder.h"

UBuilderRepository* UBuilderRepository::Instance;

UBuilderRepository* UBuilderRepository::GetBuilderRepository()
{
	if(!Instance)
	{
		Instance = NewObject<UBuilderRepository>();
	}
	return Instance;
}

void UBuilderRepository::DestroyBuilderRepository()
{
	if(Instance)
	{
		auto MyInstance = Instance;
		Instance = nullptr;
		MyInstance->ConditionalBeginDestroy();
	}
}

void UBuilderRepository::Initialize()
{
	if(Initialized) return;
	
	//TODO: Add all builders
	ItemBuilders.Add(AEquipItem::StaticClass(),NewObject<UEquipItemBuilder>(this));
	ItemBuilders.Add(AQuestItem::StaticClass(), NewObject<UQuestItemBuilder>(this));

	Initialized = true;
}

UItemBuilder* UBuilderRepository::TryGetItemBuilder(TSubclassOf<ACollectableItem> ItemType, bool& Result)
{
	Result = false;
	if(ItemBuilders.Contains(ItemType))
	{
		Result = true;
		return ItemBuilders[ItemType];
	}
	
	return nullptr;
}
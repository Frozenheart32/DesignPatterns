// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderRepository.h"

#include "Core/MyGameInstance.h"
#include "CreationalPatterns/AbstractFactory/CollectableItem.h"
#include "CreationalPatterns/AbstractFactory/FirstAidItem.h"
#include "CreationalPatterns/AbstractFactory/QuestItem.h"
#include "CreationalPatterns/Builder/FirstAidBuilder.h"
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

void UBuilderRepository::Initialize(UMyGameInstance* MyGameInstance)
{
	if(Initialized) return;
	
	auto QuestItemBuilder = NewObject<UQuestItemBuilder>(MyGameInstance->GetWorld());
	QuestItemBuilder->Init(MyGameInstance);
	ItemBuilders.Add(AQuestItem::StaticClass(), QuestItemBuilder);
	
	auto FirstAidBuilder = NewObject<UFirstAidBuilder>(MyGameInstance->GetWorld());
	FirstAidBuilder->Init(MyGameInstance);
	ItemBuilders.Add(AFirstAidItem::StaticClass(), FirstAidBuilder);

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
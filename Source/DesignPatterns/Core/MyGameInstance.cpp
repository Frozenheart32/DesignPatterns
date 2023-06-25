// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "Kismet/KismetMathLibrary.h"
#include "CreationalPatterns/AbstractFactory/ItemFactory.h"

void UMyGameInstance::Init()
{
	ItemFactory = NewObject<UItemFactory>(this);
	Super::Init();
}

bool UMyGameInstance::TryGetFirstAidInfo(EFirstAidType FirstAidType, FFirstAidInfo& Info)
{
	bool bIsFind = false;
	FFirstAidItemInfoDataTable* InfoRow = nullptr;
	
	if(!FirstAidItemInfoDataTable)
	{
		return false;
	}
	
	FText MyEnumValueText{};
	UEnum::GetDisplayValueAsText(FirstAidType, MyEnumValueText);
	FString RowNameStr = MyEnumValueText.ToString();
	
	const FName RowName{RowNameStr};
	
	InfoRow = FirstAidItemInfoDataTable->FindRow<FFirstAidItemInfoDataTable>(RowName, "", false);
	if(InfoRow)
	{
		bIsFind = true;
		Info = InfoRow->Info;
	}
	
	return bIsFind;
}

void UMyGameInstance::GetRandomQuestItemInfo(FQuestItemInfo& Info)
{
	FQuestItemInfoDataTable* InfoRow = nullptr;
	
	if(!QuestItemInfoDataTable)
	{
		return;
	}

	TArray<FName> Names = QuestItemInfoDataTable->GetRowNames();
	if(Names.Num() < 1)
	{
		return;
	}
	
	int32 LastIndex = Names.Num() - 1;
	int32 RandomIndex = UKismetMathLibrary::RandomIntegerInRange(0, LastIndex);
	const FName& RowName = Names[RandomIndex];

	InfoRow = QuestItemInfoDataTable->FindRow<FQuestItemInfoDataTable>(RowName, "", false);
	if(InfoRow)
	{
		Info = InfoRow->Info;
	}
}

UItemFactory* UMyGameInstance::GetItemFactory() const
{
	return ItemFactory;
}

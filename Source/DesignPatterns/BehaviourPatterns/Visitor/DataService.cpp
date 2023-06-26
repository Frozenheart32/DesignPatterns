// Fill out your copyright notice in the Description page of Project Settings.


#include "DataService.h"

void UDataService::Add(UAccountData* Data)
{
	const auto Type = Data->GetClass();
	
	if(DataRepository.Contains(Type)) return;

	DataRepository.Add(Type, Data);
}

void UDataService::Remove(UAccountData* Data)
{
	const auto Type = Data->GetClass();
	
	if(!DataRepository.Contains(Type)) return;

	DataRepository.Remove(Type);
}

void UDataService::Accept(UVisitorBase* Visitor)
{
	if(!Visitor) return;
	
	TArray<UClass*> Keys;
	DataRepository.GetKeys(Keys);

	for (const auto Key : Keys)
	{
		auto Data = DataRepository[Key];
		Data->Accept(Visitor);
	} 
}

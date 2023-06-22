// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxBase.h"


int32 ABoxBase::GetPrice() const
{
	int32 AllPrice = Super::GetPrice() * Count;
	for (const auto Resource : Resources)
	{
		AllPrice += Resource->GetPrice() * Resource->GetCount();
	}

	return AllPrice;
}

void ABoxBase::OpenBox()
{
	for (auto Resource : Resources)
	{
		for(int32 i = 0; i < Count; i++)
		{
			Resource->Take();
		}	
	}
	
	ClearBox();
}

void ABoxBase::ClearBox()
{
	for (auto Resource : Resources)
	{
		Resource->SelfDestroy();
	}

	Resources.Empty();
}

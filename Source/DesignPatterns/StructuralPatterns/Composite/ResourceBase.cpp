// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceBase.h"

AResourceBase::AResourceBase()
{
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

void AResourceBase::Take()
{
}

int32 AResourceBase::GetPrice() const
{
	return Price * Count;
}

int32 AResourceBase::GetCount() const
{
	return Count;
}

void AResourceBase::SelfDestroy()
{
	this->ConditionalBeginDestroy();
}
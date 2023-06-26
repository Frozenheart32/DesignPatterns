// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerProfileData.h"

void UPlayerProfileData::Accept(UVisitorBase* Visitor)
{
	Visitor->VisitPlayerProfile(this);
}

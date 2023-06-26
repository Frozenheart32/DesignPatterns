// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AccountData.h"
#include "PlayerProfileData.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UPlayerProfileData : public UAccountData
{
	GENERATED_BODY()

public:

	FString AccountName;
	int32 Level;

	virtual void Accept(UVisitorBase* Visitor) override;
};

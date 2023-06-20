// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/StaticMesh.h"
#include "ItemInfo.generated.h"


UENUM(BlueprintType)
enum class EFirstAidType : uint8
{
	SmallAid UMETA(DisplayName = "SmallAid"),
	NormalAid UMETA(DisplayName = "NormalAid"),
	BigAid UMETA(DisplayName = "BigAid"),
};

USTRUCT(BlueprintType)
struct FFirstAidInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fisrt Aid Settings")
	UStaticMesh* StaticMesh = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fisrt Aid Settings")
	UMaterialInterface* Material = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fisrt Aid Settings")
	float MinHealValue = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fisrt AidS ettings")
	float MaxHealValue = 100.f;
};

USTRUCT(BlueprintType)
struct FQuestItemInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Item Settings")
	UStaticMesh* StaticMesh = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Item Settings")
	UMaterialInterface* Material = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Item Settings")
	FName MissionID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Item Settings")
	bool IsStackable;
};


USTRUCT(BlueprintType)
struct FFirstAidItemInfoDataTable : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFirstAidInfo Info;
};

USTRUCT(BlueprintType)
struct FQuestItemInfoDataTable : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuestItemInfo Info;
};
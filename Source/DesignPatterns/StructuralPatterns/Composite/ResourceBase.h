// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ResourceBase.generated.h"

/**
 * 
 */
UCLASS(Abstract, NotBlueprintable)
class DESIGNPATTERNS_API AResourceBase : public AActor
{
	GENERATED_BODY()

public:
	
	AResourceBase();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 Count = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 Price = 100;

public:

	UFUNCTION(BlueprintCallable)
	virtual void Take();
	UFUNCTION(BlueprintCallable)
	virtual int32 GetPrice() const;
	UFUNCTION(BlueprintCallable)
	int32 GetCount() const;

	UFUNCTION(BlueprintCallable)
	virtual void SelfDestroy();
};

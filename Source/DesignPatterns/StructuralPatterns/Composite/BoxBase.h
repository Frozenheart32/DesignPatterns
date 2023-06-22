// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResourceBase.h"
#include "BoxBase.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class DESIGNPATTERNS_API ABoxBase : public AResourceBase
{
	GENERATED_BODY()

private:

	UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess))
	TArray<AResourceBase*> Resources;

	void ClearBox();
	
public:

	virtual int32 GetPrice() const override;

	UFUNCTION(BlueprintCallable)
	virtual void OpenBox();
};

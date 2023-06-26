// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HandlerBase.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable, Abstract)
class DESIGNPATTERNS_API UHandlerBase : public UObject
{
	GENERATED_BODY()

private:

	TWeakObjectPtr<UHandlerBase> Successor;

public:

	UFUNCTION(BlueprintCallable)
	UHandlerBase* GetSuccessor() const;
	UFUNCTION(BlueprintCallable)
	void SetSuccessor(UHandlerBase* Handler);

	UFUNCTION(BlueprintCallable)
	virtual void HandleRequest(int32 Condition) PURE_VIRTUAL(UHandlerBase::HandleRequest, );
};

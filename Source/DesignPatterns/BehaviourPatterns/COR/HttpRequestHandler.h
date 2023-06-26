// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HandlerBase.h"
#include "HttpRequestHandler.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class DESIGNPATTERNS_API UHttpRequestHandler : public UHandlerBase
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, meta=(AllowPrivateAccess))
	FString URL;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, meta=(AllowPrivateAccess))
	int32 QueueNum = 0;

public:
	
	UFUNCTION(BlueprintCallable)
	void Init(const FString& NewURL, int32 Num);

	virtual void HandleRequest(int32 Condition) override;
};

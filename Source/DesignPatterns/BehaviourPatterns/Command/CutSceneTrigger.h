// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Invoker.h"
#include "Components/BoxComponent.h"
#include "CutSceneTrigger.generated.h"

UCLASS(Blueprintable)
class DESIGNPATTERNS_API ACutSceneTrigger : public AInvoker
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACutSceneTrigger();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Trigger Settings")
	UBoxComponent* BoxCollider = nullptr;

private:
	
	UFUNCTION()
	void BoxColliderOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bBFromSweep,
	                           const FHitResult& SweepResult);
};

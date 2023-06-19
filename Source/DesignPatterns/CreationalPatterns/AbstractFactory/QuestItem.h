// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectableItem.h"
#include "QuestItem.generated.h"


UCLASS()
class DESIGNPATTERNS_API AQuestItem : public ACollectableItem
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AQuestItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	
	FName MissionID;
	bool IsStackable;

	bool IsInitialized = false;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GiveUp(AActor* Actor) override;
	virtual UObject* Clone() override;

	UFUNCTION(BlueprintCallable)
	void InitializeItem(UStaticMesh* Mesh, UMaterialInterface* Material, const FName& MissionId, const bool& bIsStackable);
};

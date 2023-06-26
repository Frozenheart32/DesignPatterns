// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "IEnemyEnumerable.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class DESIGNPATTERNS_API AEnemySpawner : public AActor, public IIEnemyEnumerable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 EnemyCount = 5;

	TArray<AEnemy*> Enemies;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnEnemy();

public:

	UFUNCTION(BlueprintCallable)
	void StartEnemySpawn();

	virtual UEnemyIteratorBase* CreateIterator() override;
	virtual int32 GetCount() const override;
	virtual AEnemy* GetEnemyByIndex(int32 Index) const override;
};

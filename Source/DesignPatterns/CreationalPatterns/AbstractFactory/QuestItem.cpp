// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestItem.h"

#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"


// Sets default values
AQuestItem::AQuestItem() : ACollectableItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AQuestItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQuestItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AQuestItem::GiveUp(AActor* Actor)
{
	if(!MissionID.IsNone())
	{
		//TODO: Notify QuestManager about GiveUp quest item
	}
}

UObject* AQuestItem::Clone()
{
	FVector SpawnLocation = GetActorLocation() + FVector{0,0,1};
	FRotator SpawnRotation = GetActorRotation();
	FActorSpawnParameters SpawnParameters;
	
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	auto NewQuestItem = GetWorld()->SpawnActor<AQuestItem>(SpawnLocation, SpawnRotation, SpawnParameters);
	NewQuestItem->InitializeItem(StaticMeshComponent->GetStaticMesh(), StaticMeshComponent->GetMaterial(0), MissionID, IsStackable);
	
	return NewQuestItem;
}

void AQuestItem::InitializeItem(UStaticMesh* Mesh, UMaterialInterface* Material, const FName& MissionId, const bool& bIsStackable)
{
	if(IsInitialized) return;
	
	StaticMeshComponent->SetStaticMesh(Mesh);
	StaticMeshComponent->SetMaterial(0, Material);
	MissionID = MissionId;
	this->IsStackable = bIsStackable;

	IsInitialized = true;
}


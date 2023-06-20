// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstAidItem.h"

#include "DesignPatternsCharacter.h"
#include "CreationalPatterns/AbstractFactory/ItemInfo.h"


// Sets default values
AFirstAidItem::AFirstAidItem() : ACollectableItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AFirstAidItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstAidItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFirstAidItem::GiveUp(AActor* Actor)
{
	auto Player = Cast<ADesignPatternsCharacter>(Actor);
	if(Player)
	{
		//TODO:Call heal method from HealthComponent
	}
}

UObject* AFirstAidItem::Clone()
{
	FVector SpawnLocation = GetActorLocation() + FVector{0,0,1};
	FRotator SpawnRotation = GetActorRotation();
	FActorSpawnParameters SpawnParameters;
	
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	auto NewFirstAid = GetWorld()->SpawnActor<AFirstAidItem>(SpawnLocation, SpawnRotation, SpawnParameters);
	NewFirstAid->InitializeItem(StaticMeshComponent->GetStaticMesh(), StaticMeshComponent->GetMaterial(0), HealValue);
	
	return NewFirstAid;
}

void AFirstAidItem::InitializeItem(UStaticMesh* Mesh, UMaterialInterface* Material, const float& Heal)
{
	if(IsInitialized) return;

	StaticMeshComponent->SetStaticMesh(Mesh);
	StaticMeshComponent->SetMaterial(0, Material);
	HealValue = Heal;

	IsInitialized = true;
}


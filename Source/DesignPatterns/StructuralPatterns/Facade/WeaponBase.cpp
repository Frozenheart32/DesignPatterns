// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"

#include "WeaponAnimationComponent.h"
#include "WeaponDamageComponent.h"
#include "WeaponFXComponent.h"
#include "WeaponInventory.h"


// Sets default values
AWeaponBase::AWeaponBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("StaticMssh"));
	SkeletalMeshComponent->SetupAttachment(RootComponent);

	ShootLocationComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ShootLocationComponent"));
	ShootLocationComponent->SetupAttachment(RootComponent);
	
	WeaponDamageComponent = CreateDefaultSubobject<UWeaponDamageComponent>(TEXT("WeaponDamageComponent"));
	WeaponAnimationComponent = CreateDefaultSubobject<UWeaponAnimationComponent>(TEXT("WeaponAnimationComponent"));
	WeaponFXComponent = CreateDefaultSubobject<UWeaponFXComponent>(TEXT("WeaponFXComponent"));
	WeaponInventory = CreateDefaultSubobject<UWeaponInventory>(TEXT("Inventory"));
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeaponBase::Fire()
{
	if(WeaponInventory->TryDecreaseAmmo())
	{
		WeaponDamageComponent->Shoot(ShootLocationComponent->GetComponentLocation(), ShootLocationComponent->GetForwardVector());
		WeaponAnimationComponent->StartFireAnimation();
		WeaponFXComponent->SpawnFireFX(ShootLocationComponent->GetComponentLocation(), ShootLocationComponent->GetComponentRotation());
	}
	else
	{
		Reload();
	}
	
}

void AWeaponBase::Reload()
{
	if(WeaponInventory->TryReloadAmmo())
	{
		WeaponAnimationComponent->StartReloadAnimation();
		WeaponFXComponent->StartReloadFX(GetOwner()->GetActorLocation());
	}
}

USkeletalMeshComponent* AWeaponBase::GetWeaponMesh() const
{
	return SkeletalMeshComponent;
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"


// Sets default values
AWall::AWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void AWall::MoveUp()
{
	//Open way to next level
}

void AWall::Operation()
{
	MoveUp();
}



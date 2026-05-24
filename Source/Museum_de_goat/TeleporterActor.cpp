// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleporterActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

// Sets default values
ATeleporterActor::ATeleporterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeleporterActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeleporterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATeleporterActor::TeleportPlayer(FVector NewPosition)
{
    // On récupère le personnage du joueur (index 0)
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);

    if (PlayerCharacter)
    {
        // On téléporte le joueur à la position reçue en paramètre
        PlayerCharacter->SetActorLocation(NewPosition);
    }
}


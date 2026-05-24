// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MuseumCustomComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MUSEUM_DE_GOAT_API UMuseumCustomComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UMuseumCustomComponent();

	UFUNCTION(BlueprintCallable, Category = "MuseumNodes")
	void TranslateActor(FVector Offset);

	UFUNCTION(BlueprintCallable, Category = "MuseumNodes")
	void RotateActor(FRotator NewRotation);

	UFUNCTION(BlueprintCallable, Category = "MuseumNodes")
	void ChangeMaterial(UMaterialInterface* NewMaterial, UStaticMeshComponent* MeshComponent);
};

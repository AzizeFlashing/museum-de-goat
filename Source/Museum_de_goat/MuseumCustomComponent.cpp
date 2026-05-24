#include "MuseumCustomComponent.h"
#include "GameFramework/Actor.h"

UMuseumCustomComponent::UMuseumCustomComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UMuseumCustomComponent::TranslateActor(FVector Offset)
{
	// [Code généré par IA : Logique de Translation]
	AActor* Owner = GetOwner(); // Récupère l'acteur qui possède ce composant
	if (Owner)
	{
		// AddActorWorldOffset ajoute le vecteur Offset à la position actuelle de l'acteur
		Owner->AddActorWorldOffset(Offset);
	}
}

void UMuseumCustomComponent::RotateActor(FRotator NewRotation)
{
	// [Code généré par IA : Logique de Rotation]
	AActor* Owner = GetOwner();
	if (Owner)
	{
		// SetActorRotation remplace la rotation actuelle par la nouvelle rotation (NewRotation)
		Owner->SetActorRotation(NewRotation);
	}
}

void UMuseumCustomComponent::ChangeMaterial(UMaterialInterface* NewMaterial, UStaticMeshComponent* MeshComponent)
{
	if (NewMaterial != nullptr && MeshComponent != nullptr)
	{
		MeshComponent->SetMaterial(0, NewMaterial);
	}
}


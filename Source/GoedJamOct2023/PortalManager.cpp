// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalManager.h"
#include "Portal.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SceneCaptureComponent2D.h"


// Sets default values
APortalManager::APortalManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
	}

}

// Called when the game starts or when spawned
void APortalManager::BeginPlay()
{
	Super::BeginPlay();
	PCM = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;

	//Disable tick event if there is an invalid camera
	if (!Target || !Source || !PCM)
	{
		SetActorTickEnabled(false);
	}
	
}

// Called every frame
void APortalManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation;
	FRotator NewRotation;
	if (ActiveSource)
	{
		//Convert player camera location to relative location of opposite portal
		NewLocation = UKismetMathLibrary::InverseTransformLocation(Target->GetActorTransform(), PCM->GetTransformComponent()->GetComponentLocation());
		//Flip X and Y values to mirror the portal camera
		NewLocation.X *= -1.0;
		NewLocation.Y *= -1.0;

		//Get the rotation of the player camera relative to the actor's set rotation
		NewRotation = UKismetMathLibrary::NormalizedDeltaRotator(PCM->GetTransformComponent()->GetComponentRotation(), Target->GetActorRotation());
		NewRotation.Yaw = NewRotation.Yaw + 180.0;

		//Set Camera rotation and locations
		Source->PortalView->SetRelativeLocation(NewLocation);
		Source->PortalView->SetRelativeRotation(NewRotation);
	}
		
	if (ActiveTarget)
	{
		NewLocation = UKismetMathLibrary::InverseTransformLocation(Source->GetActorTransform(), PCM->GetTransformComponent()->GetComponentLocation());
		NewLocation.X *= -1.0;
		NewLocation.Y *= -1.0;

		NewRotation = UKismetMathLibrary::NormalizedDeltaRotator(PCM->GetTransformComponent()->GetComponentRotation(), Source->GetActorRotation());
		NewRotation.Yaw = NewRotation.Yaw + 180.0;

		Target->PortalView->SetRelativeLocation(NewLocation);
		Target->PortalView->SetRelativeRotation(NewRotation);
	}
}


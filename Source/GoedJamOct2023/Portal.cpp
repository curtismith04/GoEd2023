// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ForwardArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ForwardArrow"));
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
	}
	ForwardArrow->SetupAttachment(RootComponent);
	ForwardArrow->ArrowSize = 1.0f;
	ForwardArrow->ArrowLength = 80.0f;

	PortalView = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("PortalView"));
	PortalView->SetupAttachment(RootComponent);

	Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
	Plane->SetupAttachment(RootComponent);
	auto Mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	if (Mesh.Object)
	{
		Plane->SetStaticMesh(Mesh.Object);
	}

	Plane->SetRelativeRotation(FRotator{ -90.0, 0.0, 0.0 });
}

void APortal::ReadyPortalCamera(FVector ReadyLocation, FRotator ReadyRotation)
{
	//Convert player camera location to relative location of opposite portal
	FVector NewLocation = UKismetMathLibrary::InverseTransformLocation(GetActorTransform(), ReadyLocation);
	//Flip X and Y values to mirror the portal camera
	NewLocation.X *= -1.0;
	NewLocation.Y *= -1.0;

	//Get the rotation of the player camera relative to the actor's set rotation
	FRotator NewRotation = UKismetMathLibrary::NormalizedDeltaRotator(GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetTransformComponent()->GetComponentRotation(), GetActorRotation());
	NewRotation.Yaw = NewRotation.Yaw + 180.0;

	//Set Camera rotation and locations
	PortalView->SetRelativeLocation(NewLocation);
	PortalView->SetRelativeRotation(NewRotation);
}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


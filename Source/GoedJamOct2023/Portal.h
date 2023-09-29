// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"

class UArrowComponent;
class UPortalSceneCaptureComponent2D;
class UStaticMeshComponent;

UCLASS()
class GOEDJAMOCT2023_API APortal : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Portals)
		AActor* OtherPortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* Plane;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPortalSceneCaptureComponent2D* PortalView;
	
public:	
	// Sets default values for this actor's properties
	APortal();

	UFUNCTION(BlueprintCallable)
		void ReadyPortalCamera(FVector ReadyLocation, FRotator ReadyRotation);

protected:
	UPROPERTY()
		UArrowComponent* ForwardArrow;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

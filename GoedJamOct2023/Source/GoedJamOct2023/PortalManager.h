// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PortalManager.generated.h"

class APortal;

UCLASS()
class GOEDJAMOCT2023_API APortalManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortalManager();

	UPROPERTY(EditAnywhere, Category = Portals)
		APortal* Source;

	UPROPERTY(EditAnywhere, Category = Portals)
		APortal* Target;

	//If true will enable relative motion on Source camera
	UPROPERTY(EditAnywhere, Category = Portals)
		bool ActiveSource = true;
	//If true will enable relative motion on Target camera
	UPROPERTY(EditAnywhere, Category = Portals)
		bool ActiveTarget = true;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
		APlayerCameraManager* PCM;

};

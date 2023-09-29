// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "PortalSceneCaptureComponent2D.generated.h"

/**
 * 
 */
UCLASS()
class GOEDJAMOCT2023_API UPortalSceneCaptureComponent2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()

public:

	UPortalSceneCaptureComponent2D();

		virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		virtual void SendRenderTransform_Concurrent() override;
	
};

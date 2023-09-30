// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalSceneCaptureComponent2D.h"

UPortalSceneCaptureComponent2D::UPortalSceneCaptureComponent2D()
{
	//PrimaryComponentTick.bCanEverTick = true;
	//SetTickGroup(ETickingGroup::TG_PostUpdateWork);

}

void UPortalSceneCaptureComponent2D::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	//Super::Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	const int32 NumTiles = GetNumXTiles() * GetNumYTiles();
	check(NumTiles >= 0);

	if (bCaptureEveryFrame || (GetEnableOrthographicTiling() && TileID < NumTiles))
	{
		CaptureScene();
	}

	if (!GetEnableOrthographicTiling())
	{
		return;
	}

	if (bCaptureEveryFrame)
	{
		TileID++;
		TileID %= NumTiles;
	}
	else if (TileID < NumTiles)
	{
		TileID++;
	}
	
}

void UPortalSceneCaptureComponent2D::SendRenderTransform_Concurrent()
{
	if (bCaptureOnMovement && !bCaptureEveryFrame)
	{
		CaptureScene();
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TheEclipseHUD.generated.h"

UCLASS()
class ATheEclipseHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATheEclipseHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


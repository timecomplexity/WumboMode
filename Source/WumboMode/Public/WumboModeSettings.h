// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WumboModeSettings.generated.h"

/**
 *
 */
UCLASS(config = WumboMode)
class WUMBOMODE_API UWumboModeSettings : public UObject
{
	GENERATED_BODY()

public:
	UWumboModeSettings(const FObjectInitializer& obj);

	UPROPERTY(Config, EditAnywhere, Category = "Wumbology")
	bool WumboMode;
};
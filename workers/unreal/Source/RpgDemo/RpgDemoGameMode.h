// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "SpatialOSGameMode.h"
#include "Improbable/Generated/cpp/unreal/EntityTemplate.h"
#include "RpgDemoGameMode.generated.h"

UCLASS(minimalapi)
class ARpgDemoGameMode : public ASpatialOSGameMode
{
	GENERATED_BODY()

public:
	ARpgDemoGameMode();
	virtual ~ARpgDemoGameMode();

	void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure, Category = "RpgDemoGameMode")
	UEntityTemplate* GetPlayerEntityTemplate();

private:
	static ARpgDemoGameMode* Instance;

};

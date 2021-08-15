﻿#pragma once

#include "AlsDynamicTransitionSettings.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAlsDynamicTransitionSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0))
	float FootIkDistanceThreshold{8};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequenceBase* TransitionLeftAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequenceBase* TransitionRightAnimation;
};
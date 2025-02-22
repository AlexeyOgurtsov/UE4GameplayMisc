#pragma once

#include "GameMathTypes.generated.h"

USTRUCT(BlueprintType, Category=GameMath)
struct FGameFloatUpdate
{
	GENERATED_BODY()
	
	/** Acceleration*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Acceleration = 0.0F;

	/** Deceleration*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Deceleration = 0.0F;

	FGameFloatUpdate() {}
	FGameFloatUpdate(float InAcceleration, float InDeceleration)  :
		Acceleration ( InAcceleration )
	,	Deceleration ( InDeceleration )
	{
	}
};

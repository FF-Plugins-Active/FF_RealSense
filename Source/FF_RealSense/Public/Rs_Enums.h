#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ERsStreamType : uint8
{
	None			UMETA(DisplayName = "None"),
	Color			UMETA(DisplayName = "Color"),
	Infrared		UMETA(DisplayName = "Infrared"),
	Depth			UMETA(DisplayName = "Depth"),
	Point_Cloud		UMETA(DisplayName = "Point Cloud"),
};
ENUM_CLASS_FLAGS(ERsStreamType)

UENUM(BlueprintType)
enum class ERsResolutions : uint8
{
	Reso_1280_800	UMETA(DisplayName = "1280 x 800"),
	Reso_1280_720	UMETA(DisplayName = "1280 x 720"),
	Reso_848_480	UMETA(DisplayName = "848 x 480"),
	Reso_640_480	UMETA(DisplayName = "640 x 480"),
	Reso_640_360	UMETA(DisplayName = "640 x 360"),
};
ENUM_CLASS_FLAGS(ERsResolutions)
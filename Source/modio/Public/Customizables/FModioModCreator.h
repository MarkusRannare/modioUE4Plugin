// Copyright 2019 modio. All Rights Reserved.
// Released under MIT.

#pragma once

#include "FModioModCreator.generated.h"

USTRUCT(BlueprintType)
struct FModioModCreator
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString LogoPath;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Name;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Summary;
};
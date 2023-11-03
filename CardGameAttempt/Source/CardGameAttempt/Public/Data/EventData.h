#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/Image.h"
#include "EventData.generated.h"

USTRUCT()
struct FCardData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    UTexture2D* CardImage;

    UPROPERTY(EditAnywhere)
    FText CardName;

    UPROPERTY(EditAnywhere)
    FText CardDescription;

    UPROPERTY(EditAnywhere)
    FName ConnectedEvent;
};

USTRUCT(BlueprintType)
struct FEventData : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Event Data")
    UTexture2D* EventImage;

    UPROPERTY(EditAnywhere, Category = "Event Data")
    class USoundBase* EventSFX;

    UPROPERTY(EditAnywhere, Category = "Event Data")
    FCardData LeftCardData;

    UPROPERTY(EditAnywhere, Category = "Event Data")
    FCardData RightCardData;

    UPROPERTY(EditAnywhere, Category = "Event Data")
    float EventDialogueDuration;
};
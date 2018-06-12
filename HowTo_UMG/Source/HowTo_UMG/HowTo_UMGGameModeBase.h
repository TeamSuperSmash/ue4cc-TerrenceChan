// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/GameModeBase.h"
#include "HowTo_UMGGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class HOWTO_UMG_API AHowTo_UMGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    // Remove current menu widget and create new one from the specified class.
    UFUNCTION(BlueprintCallable, Category = "UMG Game")
        void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
	
protected:
    // Called when the game starts.
    virtual void BeginPlay() override;

    // Widget class will be used as menu when game starts.
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
        TSubclassOf<UUserWidget> StartingWidgetClass;

    // The widget instance that we are using in our menu.
    UPROPERTY()
        UUserWidget* CurrentWidget;
};

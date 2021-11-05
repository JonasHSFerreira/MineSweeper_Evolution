// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ConsoleCotrolsManager.generated.h"

/**
 * 
 */
UCLASS()
class MINESWEEPER_API UConsoleCotrolsManager : public UCheatManager
{
	GENERATED_BODY()
public:

	UFUNCTION(Exec, BlueprintNativeEvent, meta=(OverrideNativeName = "openCell"))
		void ChooseBloc(int x, int y);
	UFUNCTION(Exec, BlueprintNativeEvent, meta = (OverrideNativeName = "reset"))
		void ResetGame();
	UFUNCTION(Exec, BlueprintCallable, BlueprintImplementableEvent, meta = (OverrideNativeName = "showMines"))
		void ShowMines();
};

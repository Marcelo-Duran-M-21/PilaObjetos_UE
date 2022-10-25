// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Brick01GameModeBase.generated.h"

/**
 * 
 */

class ABrick;

UCLASS()
class BRICK01_API ABrick01GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	//creamos el ladillo en el comienzo del game 
	ABrick *Brick1;
	ABrick* Brick2;
	ABrick* Brick3;
	

	

};

// Copyright Bulseeye

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IEnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	// Interface is used so it does not have to be derived from parent everytime but this needs to be inherited.
public:
	// adding = 0 to it makes it a pure virtual abstract function meaning you have to override it when inherited.
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;

};

// Copyright Bulseeye

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"

struct FOnAttributeChangeData;
// Dynamic multicast delegates.
// Delegate type who broadcasts a float.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnhealthChangedSignature, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxhealthChangedSignature, float, NewMaxHealth);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManaChangedSignature, float, NewMana);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxManaChangedSignature, float, NewMaxMana);


/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API UOverlayWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()

public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;


	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes") 
	FOnhealthChangedSignature OnHealthChanged; // The Delegate itself
	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes")
	FOnMaxhealthChangedSignature OnMaxHealthChanged; // The Delegate itself

	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes") 
	FOnManaChangedSignature OnManaChanged; // The Delegate itself
	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes")
	FOnMaxManaChangedSignature OnMaxManaChanged; // The Delegate itself

protected:
	void HealthChanged(const FOnAttributeChangeData& Data) const;
	void MaxHealthChanged(const FOnAttributeChangeData& Data) const;

	void ManaChanged(const FOnAttributeChangeData& Data) const;
	void MaxManaChanged(const FOnAttributeChangeData& Data) const;
};

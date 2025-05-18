// Vince Petrelli All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Options/DataObjects/ListDataObject_Base.h"
#include "CommonInputTypeEnum.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "ListDataObject_KeyRemap.generated.h"

class UEnhancedInputUserSettings;
class UEnhancedPlayerMappableKeyProfile;
/**
 * 
 */
UCLASS()
class FRONTENDUI_API UListDataObject_KeyRemap : public UListDataObject_Base
{
	GENERATED_BODY()
	
public:
	void InitKeyRemapData(UEnhancedInputUserSettings* InOwningInputUserSettings,UEnhancedPlayerMappableKeyProfile* InKeyProfile,ECommonInputType InDesiredInputKeyType,const FPlayerKeyMapping& InOwningPlayerKeyMapping);

private:
	UPROPERTY(Transient)
	UEnhancedInputUserSettings* CachedOwningInputUserSettings;

	UPROPERTY(Transient)
	UEnhancedPlayerMappableKeyProfile* CachedOwningKeyProfile;

	ECommonInputType CachedDesiredInputKeyType;

	FName CachedOwningMappingName;

	EPlayerMappableKeySlot CachedOwningMappableKeySlot;
};

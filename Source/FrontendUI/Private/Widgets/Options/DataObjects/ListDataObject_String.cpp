// Vince Petrelli All Rights Reserved


#include "Widgets/Options/DataObjects/ListDataObject_String.h"

void UListDataObject_String::AddDynamicOption(const FString& InStringValue, const FText& InDisplayText)
{
	AvailableOptionsStringArray.Add(InStringValue);
	AvailableOptionsTextArray.Add(InDisplayText);
}

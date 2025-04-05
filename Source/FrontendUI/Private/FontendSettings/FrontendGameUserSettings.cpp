// Vince Petrelli All Rights Reserved


#include "FontendSettings/FrontendGameUserSettings.h"

UFrontendGameUserSettings* UFrontendGameUserSettings::Get()
{	
	if (GEngine)
	{
		return CastChecked<UFrontendGameUserSettings>(GEngine->GetGameUserSettings());
	}

	return nullptr;
}

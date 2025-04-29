// Vince Petrelli All Rights Reserved


#include "FontendSettings/FrontendGameUserSettings.h"

UFrontendGameUserSettings::UFrontendGameUserSettings()
	: OverallVolume(1.f)
	, MusicVolume(1.f)
	, SoundFXVolume(1.f)
	, bAllowBackgroundAudio(false)
	, bUseHDRAudioMode(false)
{
}

UFrontendGameUserSettings* UFrontendGameUserSettings::Get()
{	
	if (GEngine)
	{
		return CastChecked<UFrontendGameUserSettings>(GEngine->GetGameUserSettings());
	}

	return nullptr;
}

void UFrontendGameUserSettings::SetOverallVolume(float InVolume)
{
	OverallVolume = InVolume;

	//The actual logic for controlling the volume goes here
}

void UFrontendGameUserSettings::SetMusicVolume(float InVolume)
{
	MusicVolume = InVolume;
}

void UFrontendGameUserSettings::SetSoundFXVolume(float InVolume)
{
	SoundFXVolume = InVolume;
}

void UFrontendGameUserSettings::SetAllowBackgroundAudio(bool bIsAllowed)
{
	bAllowBackgroundAudio = bIsAllowed;
}

void UFrontendGameUserSettings::SetUseHDRAudioMode(bool bIsAllowed)
{
	bUseHDRAudioMode = bIsAllowed;
}

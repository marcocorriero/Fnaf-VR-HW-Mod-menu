﻿#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
	 */
	enum class MediaAssets_EMediaWebcamCaptureDeviceFilter : uint8_t
	{
		EMediaWebcamCaptureDeviceFilter__DepthSensor                         = 0,
		EMediaWebcamCaptureDeviceFilter__Front                               = 1,
		EMediaWebcamCaptureDeviceFilter__Rear                                = 2,
		EMediaWebcamCaptureDeviceFilter__Unknown                             = 3,
		EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX = 4
	};

	/**
	 * Enum MediaAssets.EMediaVideoCaptureDeviceFilter
	 */
	enum class MediaAssets_EMediaVideoCaptureDeviceFilter : uint8_t
	{
		EMediaVideoCaptureDeviceFilter__Card                               = 0,
		EMediaVideoCaptureDeviceFilter__Software                           = 1,
		EMediaVideoCaptureDeviceFilter__Unknown                            = 2,
		EMediaVideoCaptureDeviceFilter__Webcam                             = 3,
		EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX = 4
	};

	/**
	 * Enum MediaAssets.EMediaAudioCaptureDeviceFilter
	 */
	enum class MediaAssets_EMediaAudioCaptureDeviceFilter : uint8_t
	{
		EMediaAudioCaptureDeviceFilter__Card                               = 0,
		EMediaAudioCaptureDeviceFilter__Microphone                         = 1,
		EMediaAudioCaptureDeviceFilter__Software                           = 2,
		EMediaAudioCaptureDeviceFilter__Unknown                            = 3,
		EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX = 4
	};

	/**
	 * Enum MediaAssets.EMediaPlayerTrack
	 */
	enum class MediaAssets_EMediaPlayerTrack : uint8_t
	{
		EMediaPlayerTrack__Audio                 = 0,
		EMediaPlayerTrack__Caption               = 1,
		EMediaPlayerTrack__Metadata              = 2,
		EMediaPlayerTrack__Script                = 3,
		EMediaPlayerTrack__Subtitle              = 4,
		EMediaPlayerTrack__Text                  = 5,
		EMediaPlayerTrack__Video                 = 6,
		EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7
	};

	/**
	 * Enum MediaAssets.EMediaSoundComponentFFTSize
	 */
	enum class MediaAssets_EMediaSoundComponentFFTSize : uint8_t
	{
		EMediaSoundComponentFFTSize__Min                             = 0,
		EMediaSoundComponentFFTSize__Small                           = 1,
		EMediaSoundComponentFFTSize__Medium                          = 2,
		EMediaSoundComponentFFTSize__Large                           = 3,
		EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX = 4
	};

	/**
	 * Enum MediaAssets.EMediaSoundChannels
	 */
	enum class MediaAssets_EMediaSoundChannels : uint8_t
	{
		EMediaSoundChannels__Mono                    = 0,
		EMediaSoundChannels__Stereo                  = 1,
		EMediaSoundChannels__Surround                = 2,
		EMediaSoundChannels__EMediaSoundChannels_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MediaAssets.MediaCaptureDevice
	 * Size -> 0x0028
	 */
	struct FMediaCaptureDevice
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MediaAssets.MediaSoundComponentSpectralData
	 * Size -> 0x0008
	 */
	struct FMediaSoundComponentSpectralData
	{
	public:
		float                                                      FrequencyHz;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

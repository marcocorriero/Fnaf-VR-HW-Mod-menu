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
	 * Enum TimeManagement.EFrameNumberDisplayFormats
	 */
	enum class TimeManagement_EFrameNumberDisplayFormats : uint8_t
	{
		EFrameNumberDisplayFormats__NonDropFrameTimecode           = 0,
		EFrameNumberDisplayFormats__DropFrameTimecode              = 1,
		EFrameNumberDisplayFormats__Seconds                        = 2,
		EFrameNumberDisplayFormats__Frames                         = 3,
		EFrameNumberDisplayFormats__MAX_Count                      = 4,
		EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

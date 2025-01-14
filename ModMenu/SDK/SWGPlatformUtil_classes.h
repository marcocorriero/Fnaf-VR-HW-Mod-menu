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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SWGPlatformUtil.SWGPlatformSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USWGPlatformSettings : public UDeveloperSettings
	{
	public:
		SWGPlatformUtil_ESWGPlatform                               BuildPlatform;                                           // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HYHQ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGPlatformUtil.SWGPlatformUtilFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGPlatformUtilFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SwitchOnPlatform(SWGPlatformUtil_ESWGPlatform* Platform);
		void STATIC_IsInEditorSwitch(SWGPlatformUtil_ESWGEditor* Editor);
		bool STATIC_IsInEditor();
		class FString STATIC_GetVersionString();
		SWGPlatformUtil_ESWGPlatform STATIC_GetBuildPlatform();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

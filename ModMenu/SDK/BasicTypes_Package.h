﻿#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#define UE4
#define FNAME_POOL
#define GOBJECTS_CHUNKS

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	class UObject;

	// --------------------------------------------------
	// # Global Functions
	// --------------------------------------------------
	bool InitSdk(const std::string& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset);
	bool InitSdk();
	template<typename Fn>
	Fn GetVFunction(const void* instance, size_t index)
	{
		auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
		return reinterpret_cast<Fn>(vtable[index]);
	}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#include "BasicTypes_Structs.h"
#include "BasicTypes_Classes.h"


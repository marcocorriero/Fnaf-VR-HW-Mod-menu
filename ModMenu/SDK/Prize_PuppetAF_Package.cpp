﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Prize_PuppetAF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_PuppetAF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_PuppetAF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_PuppetAF.Prize_PuppetAF_C");
		return ptr;
	}

}



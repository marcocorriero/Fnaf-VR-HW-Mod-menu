﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "HTML5Networking_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSocketConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSocketConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HTML5Networking.WebSocketConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSocketNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSocketNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HTML5Networking.WebSocketNetDriver");
		return ptr;
	}

}



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
	 * Enum OnlineSubsystemUtils.EBeaconConnectionState
	 */
	enum class OnlineSubsystemUtils_EBeaconConnectionState : uint8_t
	{
		EBeaconConnectionState__Invalid                    = 0,
		EBeaconConnectionState__Closed                     = 1,
		EBeaconConnectionState__Pending                    = 2,
		EBeaconConnectionState__Open                       = 3,
		EBeaconConnectionState__EBeaconConnectionState_MAX = 4
	};

	/**
	 * Enum OnlineSubsystemUtils.EClientRequestType
	 */
	enum class OnlineSubsystemUtils_EClientRequestType : uint8_t
	{
		EClientRequestType__NonePending                = 0,
		EClientRequestType__ExistingSessionReservation = 1,
		EClientRequestType__ReservationUpdate          = 2,
		EClientRequestType__EmptyServerReservation     = 3,
		EClientRequestType__Reconnect                  = 4,
		EClientRequestType__Abandon                    = 5,
		EClientRequestType__EClientRequestType_MAX     = 6
	};

	/**
	 * Enum OnlineSubsystemUtils.EPartyReservationResult
	 */
	enum class OnlineSubsystemUtils_EPartyReservationResult : uint8_t
	{
		EPartyReservationResult__NoResult                                  = 0,
		EPartyReservationResult__RequestPending                            = 1,
		EPartyReservationResult__GeneralError                              = 2,
		EPartyReservationResult__PartyLimitReached                         = 3,
		EPartyReservationResult__IncorrectPlayerCount                      = 4,
		EPartyReservationResult__RequestTimedOut                           = 5,
		EPartyReservationResult__ReservationDuplicate                      = 6,
		EPartyReservationResult__ReservationNotFound                       = 7,
		EPartyReservationResult__ReservationAccepted                       = 8,
		EPartyReservationResult__ReservationDenied                         = 9,
		EPartyReservationResult__ReservationDenied_CrossPlayRestriction    = 10,
		EPartyReservationResult__ReservationDenied_Banned                  = 11,
		EPartyReservationResult__ReservationRequestCanceled                = 12,
		EPartyReservationResult__ReservationInvalid                        = 13,
		EPartyReservationResult__BadSessionId                              = 14,
		EPartyReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
		EPartyReservationResult__EPartyReservationResult_MAX               = 16
	};

	/**
	 * Enum OnlineSubsystemUtils.ESpectatorClientRequestType
	 */
	enum class OnlineSubsystemUtils_ESpectatorClientRequestType : uint8_t
	{
		ESpectatorClientRequestType__NonePending                     = 0,
		ESpectatorClientRequestType__ExistingSessionReservation      = 1,
		ESpectatorClientRequestType__ReservationUpdate               = 2,
		ESpectatorClientRequestType__EmptyServerReservation          = 3,
		ESpectatorClientRequestType__Reconnect                       = 4,
		ESpectatorClientRequestType__Abandon                         = 5,
		ESpectatorClientRequestType__ESpectatorClientRequestType_MAX = 6
	};

	/**
	 * Enum OnlineSubsystemUtils.ESpectatorReservationResult
	 */
	enum class OnlineSubsystemUtils_ESpectatorReservationResult : uint8_t
	{
		ESpectatorReservationResult__NoResult                                  = 0,
		ESpectatorReservationResult__RequestPending                            = 1,
		ESpectatorReservationResult__GeneralError                              = 2,
		ESpectatorReservationResult__SpectatorLimitReached                     = 3,
		ESpectatorReservationResult__IncorrectPlayerCount                      = 4,
		ESpectatorReservationResult__RequestTimedOut                           = 5,
		ESpectatorReservationResult__ReservationDuplicate                      = 6,
		ESpectatorReservationResult__ReservationNotFound                       = 7,
		ESpectatorReservationResult__ReservationAccepted                       = 8,
		ESpectatorReservationResult__ReservationDenied                         = 9,
		ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction    = 10,
		ESpectatorReservationResult__ReservationDenied_Banned                  = 11,
		ESpectatorReservationResult__ReservationRequestCanceled                = 12,
		ESpectatorReservationResult__ReservationInvalid                        = 13,
		ESpectatorReservationResult__BadSessionId                              = 14,
		ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
		ESpectatorReservationResult__ESpectatorReservationResult_MAX           = 16
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
	 * Size -> 0x00B8
	 */
	struct FBlueprintSessionResult
	{
	public:
		unsigned char                                              UnknownData_PH4P[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
	 * Size -> 0x0040
	 */
	struct FPIELoginSettingsInternal
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      TokenBytes;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PlayerReservation
	 * Size -> 0x0050
	 */
	struct FPlayerReservation
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationStr;                                           // 0x0028(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0038(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowCrossplay;                                         // 0x0048(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X66R[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ElapsedTime;                                             // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PartyReservation
	 * Size -> 0x0050
	 */
	struct FPartyReservation
	{
	public:
		int                                                        TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Z0Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0008(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerReservation>                          PartyMembers;                                            // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FPlayerReservation>                          RemovedPartyMembers;                                     // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.SpectatorReservation
	 * Size -> 0x0078
	 */
	struct FSpectatorReservation
	{
	public:
		struct FUniqueNetIdRepl                                    SpectatorId;                                             // 0x0000(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlayerReservation                                  Spectator;                                               // 0x0028(0x0050) Transient, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

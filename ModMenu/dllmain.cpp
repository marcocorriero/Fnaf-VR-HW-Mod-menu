// dllmain.cpp : Defines the entry point for the DLL application.
#pragma once
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include "mem.h"
#include <limits>
#include <exception>
#include <typeinfo>
#include <stdexcept>
#include <thread>

using namespace std;

// THREADS

#pragma region  General Stuff.

string version = "3.1.1";

// THREADS BOOLS
bool fullbrightthreadmade = false;
bool lightblockerthreademade = false;
bool CheatsThreadMade = false;
bool Ref_brightnessthreadmade = false;
bool tex_brightnessthreadmade = false;
bool fog_threadmade = false;
bool curve_threadmade = false;

// Booleans
bool IsAiDeactivated = false;
bool isOffice01AiDeactivated = false;
bool IsOfficeGeneralAiDeactivated = false;
bool nolightblocker = false;
bool InitiateTempFullBright = false;
bool ShowOutputLights = false;
bool ShowOutputLightBlock = false;
bool isKillBlockerActive = false;
bool revealsize = false;
bool cheatsactive = false;
bool freezepowerlevel = false;
bool ChangeRefBrightness = false;
bool ChangeFogBrightness = false;
bool ChangeCurveBrightness = false;
bool ChangeTexBrightness = false;
bool showCheatOutput = false;
bool devviewenabled = false;
bool justsayonce = false;
bool HasBatteryMaxValBeenCaptured = false;
bool ShowOutputTextureEdits = false;
bool ShowOutputFogEdits = false;
bool ShowOutputCurveEdits = false;
bool ShowOutputRefEdits = false;
bool WitheredsAreActive = false;
bool WitheredFoxyActive = false;
bool WitheredBonnieActive = false;
bool WitheredChicaActive = false;
bool WitheredFreddyActive = false;
bool PuppetIsAwake = false;

// SAVEFILE GENERATION
bool SaveManageBool_Active_SaveEdits = false;

// ENABLE THE BOOL ABOVE TO UNLOCK THE GENERATIONS BELOW!

// UNLOCK ALL WITHOUT PRIZES
bool SaveManageBool_UnlockAll_NoPrizes = false;
// UNLOCK EVERYTHING
bool SaveManageBool_FullUnlock = false;

// Select what you want to unlock, just keep the above ones to false!
// Unlock Levels

bool SaveManageBool_UnlockLevels = true;
// Unlock Glitches
bool SaveManageBool_UnlockGlitches = true;
// Unlock Coins
bool SaveManageBool_UnlockCoins = false;
// Unlock Prizes
bool SaveManageBool_UnlockPrizes = false;

// Spotlight Configurator
float Spotlight_Multiplicator = 4.0f;
float Spotlight_Addiction = 0.12f;
float spotlight_brightness_divisor = 70.0f;
float Spotlight_brightness_subtractor = 50.f;
float Spotlight_intensity;

// vars
float texture_brightness = 100.f;
float Reflection_brightness = 100.f;
float fog_brightness = 100.f;
float curvebrightness = 100.f;

// GAMMA CONFIG
float Engine_Gamma = 4.5f;

// General Vars
float Max_float = FLT_MAX;
float Neg_float = -FLT_MAX;
int max_int = INT_MAX;
int neg_max_int = -INT_MAX;
int counter = 0;
unsigned char ColorVar = (unsigned char)1.0;
unsigned char zero = (unsigned char)0;
unsigned char max = (unsigned char)INT_MAX;

#pragma endregion

#pragma region Console Parts.

void DeAttach(const HMODULE hModule)
{
	FreeLibraryAndExitThread(hModule, 0);
}

bool allocate_console() {
	if (AllocConsole() != NULL) {
		SetConsoleTitle(TEXT("Five Night at Freddy's HELP Wanted MOD Console Built by marcocorriero#0001 For STEAM ONLY!"));
		freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
		freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
		freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);
		return true;
	}
	return false;
}

void ConsoleWrite(string text)
{
	cout << "\n " + text + "\n";

}
#pragma endregion

void EnableAI()
{

	auto Office02 = CG::UObject::FindObjects<CG::AOfficeAiBase_Bp_C>();

	if (!Office02.empty())
	{
		for (auto& mods : Office02)
		{
			if (mods)
			{
				if (mods->DisableAi == true)
				{
					mods->DisableAi = false;
				}
				IsOfficeGeneralAiDeactivated = false;
				cout << "[AI TOGGLER] : Office AI re-enabled successfully \n";
			}
		}
	}
}

void SetMonitorClock2(int hour)
{

	auto MonitorClock = CG::UObject::FindObjects<CG::AMonitorBoard_BP_C>();
	if (!MonitorClock.empty())
	{
		for (auto& mods : MonitorClock)
		{
			if (mods != nullptr)
			{
				mods->GameTimer = hour;
			}
		}
	}
}

void SetMonitorClock(int hour)
{

	auto MonitorClock = CG::UObject::FindObjects<CG::AOffice_BaseGamemanager_C>();
	if (!MonitorClock.empty())
	{
		for (auto& mods : MonitorClock)
		{
			if (mods != nullptr)
			{
				mods->GameTimer = hour;

			}
		}
	}
}

void SetMonitorClockOff1(int hour)
{

	auto MonitorClock = CG::UObject::FindObjects<CG::AOffice01_GameManager_C>();
	if (!MonitorClock.empty())
	{
		for (auto& mods : MonitorClock)
		{
			if (mods != nullptr)
			{
				mods->GameTimer = hour;
			}
		}
	}
}

void SetMonitorClockOff2(int hour)
{

	auto MonitorClock = CG::UObject::FindObjects<CG::AOffice02_GameManager_C>();
	if (!MonitorClock.empty())
	{
		for (auto& mods : MonitorClock)
		{
			if (mods != nullptr)
			{
				mods->GameTimer = hour;
			}
		}
	}
}

void SetMonitorClockOff3(int hour)
{

	auto MonitorClock = CG::UObject::FindObjects<CG::AOffice03_Gamemanager_C>();
	if (!MonitorClock.empty())
	{
		for (auto& mods : MonitorClock)
		{
			if (mods != nullptr)
			{
				mods->GameTimer = hour;
			}
		}
	}
}

void OfficeLVL1Cheat()
{
	do
	{

		auto Office1Vars = CG::UObject::FindObjects<CG::AOffice01_GameManager_C>();
		if (!Office1Vars.empty())
		{
			for (auto& mods : Office1Vars)
			{
				if (showCheatOutput)
				{
					cout << " Tweaking Power Usage... \n";
				}
				if (mods != nullptr)
				{

					mods->CurrentPowerUsage = 0;
					mods->PowerDrainPerUsageSecond = 0;
					mods->PowerLevel = mods->PowerLevel + 1;

				}
			}
		}
	} while (cheatsactive);
}

void OfficeLVL3Cheat()
{
	do
	{

		auto Office1Vars = CG::UObject::FindObjects<CG::AOffice_BaseGamemanager_C>();
		if (!Office1Vars.empty())
		{
			for (auto& mods : Office1Vars)
			{
				if (showCheatOutput)
				{
					cout << " Tweaking Ventilation, audio and camera in Office 3... \n";
				}
				if (mods != nullptr)
				{
					if (mods->MonitorBoard != nullptr)
					{
						mods->MonitorBoard->VentilationSystemEnabled = true;
						mods->MonitorBoard->AudioDevicesEnabled = true;
						mods->MonitorBoard->CameraSystemEnabled = true;
					}
				}
			}
		}
	} while (cheatsactive);

}

void MonitorBoardCheat()
{
	do
	{

		auto Office1Vars = CG::UObject::FindObjects<CG::AMonitorBoard_BP_C>();
		if (!Office1Vars.empty())
		{
			for (auto& mods : Office1Vars)
			{
				if (showCheatOutput)
				{
					cout << " Tweaking Ventilation, audio and camera in Office 3... \n";
				}
				if (mods != nullptr)
				{
					mods->VentilationSystemEnabled = true;
					mods->AudioDevicesEnabled = true;
					mods->CameraSystemEnabled = true;
				}
			}
		}
	} while (cheatsactive);

}

void batteryoff1(float powerbattery)
{

	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice01_GameManager_C>();
	if (!Office1Vars.empty())
	{
		for (auto& mods : Office1Vars)
		{
			if (showCheatOutput)
			{
				cout << " Tweaking Power Usage... \n";
			}
			if (mods != nullptr)
			{

				mods->PowerLevel = powerbattery;
				mods->PowerDrainPerUsageSecond = 0;
			}
		}
	}

}
//
//void ToggleWitheredChicaOn()
//{
//
//	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_WitheredChica_C>();
//	if (!Office1Vars.empty())
//	{
//		for (auto& mods : Office1Vars)
//		{
//			if (mods != nullptr)
//			{
//				cout << "[WITHERED CHICA STATUS]: Withered Chica is now activated! \n";
//				mods->DisableAi = false;
//				mods->IsActive = true;
//			}
//
//		}
//
//	}
//}
//
//void ToggleWitheredChicaOff()
//{
//
//	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_WitheredChica_C>();
//	if (!Office1Vars.empty())
//	{
//		for (auto& mods : Office1Vars)
//		{
//			if (mods != nullptr)
//			{
//				cout << "[WITHERED CHICA STATUS]: Withered Chica is now deactivated! \n";
//				mods->DisableAi = true;
//				mods->IsActive = false;
//			}
//		}
//	}
//}
//
//void ToggleWitheredFreddyOn()
//{
//
//	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_WitheredFreddy_C>();
//	if (!Office1Vars.empty())
//	{
//		for (auto& mods : Office1Vars)
//		{
//			if (mods != nullptr)
//			{
//				cout << "[WITHERED FREDDY STATUS]: Withered Freddy is now activated! \n";
//				mods->DisableAi = false;
//				mods->IsActive = true;
//			}
//
//		}
//
//	}
//}
//
//void ToggleWitheredFreddyOff()
//{
//
//	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_WitheredFreddy_C>();
//	if (!Office1Vars.empty())
//	{
//		for (auto& mods : Office1Vars)
//		{
//			if (mods != nullptr)
//			{
//				cout << "[WITHERED FREDDY STATUS]: Withered Freddy is now deactivated! \n";
//				mods->DisableAi = true;
//				mods->IsActive = false;
//			}
//		}
//	}
//}
//
//void ToggleWitheredBonnieOn()
//{
//
//	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_WitheredBonnie_C>();
//	if (!Office1Vars.empty())
//	{
//		for (auto& mods : Office1Vars)
//		{
//			if (mods != nullptr)
//			{
//				cout << "[WITHERED CHICA STATUS]: Withered Bonnie is now activated! \n";
//				mods->DisableAi = false;
//				mods->IsActive = true;
//			}
//
//		}
//
//	}
//}
//
//void ToggleWitheredBonnieOff()
//{
//
//	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_WitheredBonnie_C>();
//	if (!Office1Vars.empty())
//	{
//		for (auto& mods : Office1Vars)
//		{
//			if (mods != nullptr)
//			{
//				cout << "[WITHERED CHICA STATUS]: Withered Bonnie is now deactivated! \n";
//				mods->DisableAi = true;
//				mods->IsActive = false;
//			}
//		}
//	}
//}

//void ToggleEnnardsOn()
//{
//	
//	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_CircusBaby_C>();
//	if (!Office1Vars.empty())
//	{
//		for (auto& mods : Office1Vars)
//		{
//			if (mods != nullptr)
//			{
//				cout << "[Ennards]: Ennards is enabled! \n";
//				mods->IsActive = true;
//				mods->DisableAi = false;
//			}
//		}
//	}
//}
//	
//
//void ToggleEnnardsOff()
//{
//	
//	auto Office1Vars = CG::UObject::FindObjects<CG::>();
//	if (!Office1Vars.empty())
//	{
//		for (auto& mods : Office1Vars)
//		{
//			if (mods != nullptr)
//			{
//				cout << "[Ennards]: Ennards is deactivated! \n";
//				mods->IsActive = false;
//				mods->DisableAi = true;
//			}
//		}
//	}
//}

void ToggleWitheredFoxyOn()
{

	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_WitheredFoxy_C>();
	if (!Office1Vars.empty())
	{
		for (auto& mods : Office1Vars)
		{
			if (showCheatOutput)
			{
				cout << " Tweaking Foxy in office 02... \n";
			}
			if (mods != nullptr)
			{
				cout << "[WITHERED Foxy]: Withered Foxy is enabled! \n";
				mods->IsActive = true;
				mods->DisableAi = false;
			}
		}
	}
}

void ToggleWitheredFoxyOff()
{

	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_WitheredFoxy_C>();
	if (!Office1Vars.empty())
	{
		for (auto& mods : Office1Vars)
		{
			if (showCheatOutput)
			{
				cout << " Tweaking Foxy in office 02... \n";
			}
			if (mods != nullptr)
			{
				cout << "[WITHERED Foxy]: Withered Foxy is deactivated! \n";
				mods->IsActive = false;
				mods->DisableAi = true;
			}
		}
	}
}

void ToggleWitheredsOn()
{

	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_GameManager_C>();
	if (!Office1Vars.empty())
	{
		for (auto& mods : Office1Vars)
		{
			if (mods != nullptr)
			{
				cout << "[WITHERED STATUS]: Withered Animatronics are now activated! \n";
				mods->AllowWithered = true;
			}

		}

	}
}

void ToggleWitheredsOff()
{

	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_GameManager_C>();
	if (!Office1Vars.empty())
	{
		for (auto& mods : Office1Vars)
		{
			if (mods != nullptr)
			{
				cout << "[WITHERED STATUS]: Withered Animatronics are now deactivated! \n";
				mods->AllowWithered = false;
			}

		}

	}
}

void TogglePuppetOn()
{

	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_GameManager_C>();
	if (!Office1Vars.empty())
	{
		for (auto& mods : Office1Vars)
		{
			if (showCheatOutput)
			{
				cout << " Tweaking Puppet ... \n";
			}
			if (mods != nullptr)
			{

				cout << "[PUPPET STATUS]: Puppet is enabled! \n";
				mods->Disable_Puppet = true;
			}
		}
	}
}

void TogglePuppetOff()
{

	auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_GameManager_C>();
	if (!Office1Vars.empty())
	{
		for (auto& mods : Office1Vars)
		{
			if (showCheatOutput)
			{
				cout << " Tweaking Puppet ... \n";
			}
			if (mods != nullptr)
			{
				cout << "[PUPPET STATUS]: Puppet is deactivated! \n";
				mods->Disable_Puppet = false;
			}
		}
	}
}

//void NoFuckingBlackWalls()
//{
//
//			
//			auto Office1Vars = CG::UObject::FindObjects<CG::AOffice02_GameManager_C>();
//			if (!Office1Vars.empty())
//			{
//				for (auto& mods : Office1Vars)
//				{
//					if (showCheatOutput)
//					{
//						cout << " Tweaking Walls ... \n";
//					}
//					if (mods != nullptr)
//					{
//
//						mods->
//					}
//				}
//			}
//		}

void TorchLevelCheats()
{
	do
	{

		auto flashlight = CG::UObject::FindObjects<CG::AFNAFGM_FlashlightGame_C>();
		if (!flashlight.empty())
		{
			for (auto& mods : flashlight)
			{
				if (mods)
				{
					if (showCheatOutput)
					{
						cout << " Tweaking Flashlight Battery... \n";
					}
					if (mods->Flashlight != nullptr)
					{
						mods->Flashlight->FlashlightBattery = 100.f;
					}
				}
			}
		}
	} while (cheatsactive);

}

void DestroyDoubleLightBlockers()
{

	CG::FVector Max_float_vector;

	Max_float_vector.X = Max_float;
	Max_float_vector.Y = Max_float;
	Max_float_vector.Z = Max_float;

	CG::FVector Neg_float_vector;
	Neg_float_vector.X = Neg_float;
	Neg_float_vector.Y = Neg_float;
	Neg_float_vector.Z = Neg_float;

	CG::FVector vector_zero;
	vector_zero.X = 0.0f;
	vector_zero.Y = 0.0f;
	vector_zero.Z = 0.0f;

	// BLANK ROTATION
	CG::FRotator Blank_Rotation;
	Blank_Rotation.Pitch = 0.0f;
	Blank_Rotation.Roll = 0.0f;
	Blank_Rotation.Yaw = 0.0f;
	do
	{

		auto LightBlocker2 = CG::UObject::FindObjects<CG::ALightBlockerDoubleFaced_C>();
		if (!LightBlocker2.empty())
		{
			for (auto& mods : LightBlocker2)
			{
				if (mods)
				{
					mods->bIsEditorOnlyActor = true;
					mods->bAlwaysRelevant = false;
					mods->bHidden = true;
					if (mods->RootComponent != nullptr)
					{
						mods->RootComponent->bIsActive = false;
						mods->RootComponent->bHiddenInGame = true;
						mods->RootComponent->RelativeScale3D = vector_zero;
						mods->RootComponent->bAbsoluteScale = zero;
						//mods->RootComponent->SetVisibility(false, true);
						//CG::USceneComponent* deletethis_one;
						//deletethis_one = mods->RootComponent->K2_GetComponentToWorld;
						//mods->RootComponent->K2_DestroyComponent(deletethis_one);

					}
				}
				CG::USceneComponent* DeleteMe;
				DeleteMe = mods->K2_GetRootComponent();
				mods->K2_DestroyComponent(DeleteMe);
				mods->bActorIsBeingDestroyed = true;
				mods->K2_DestroyActor();
				if (ShowOutputLightBlock)
				{
					cout << "A DoubleLightblocker has been removed. \n";
				}
			}
		}
	} while (nolightblocker);
}

void DestroyDoubleLightBlockers1()
{

	CG::FVector Max_float_vector;

	Max_float_vector.X = Max_float;
	Max_float_vector.Y = Max_float;
	Max_float_vector.Z = Max_float;

	CG::FVector Neg_float_vector;
	Neg_float_vector.X = Neg_float;
	Neg_float_vector.Y = Neg_float;
	Neg_float_vector.Z = Neg_float;

	CG::FVector vector_zero;
	vector_zero.X = 0.0f;
	vector_zero.Y = 0.0f;
	vector_zero.Z = 0.0f;

	// BLANK ROTATION
	CG::FRotator Blank_Rotation;
	Blank_Rotation.Pitch = 0.0f;
	Blank_Rotation.Roll = 0.0f;
	Blank_Rotation.Yaw = 0.0f;
	do
	{

		auto LightBlocker2 = CG::UObject::FindObjects<CG::ADeskButton_Light_C>();
		if (!LightBlocker2.empty())
		{
			for (auto& mods : LightBlocker2)
			{
				if (mods)
				{
					mods->LightblockVector = vector_zero;

				}
				if (mods->DoubleSidedLightBlocker != nullptr)
				{
					CG::USceneComponent* DeleteMe;
					DeleteMe = mods->DoubleSidedLightBlocker->K2_GetRootComponent();
					mods->DoubleSidedLightBlocker->K2_DestroyComponent(DeleteMe);
					mods->DoubleSidedLightBlocker->bActorIsBeingDestroyed = true;
					mods->DoubleSidedLightBlocker->K2_DestroyActor();
				}
				if (mods->DoubleSidedLightBlocker->RootComponent != nullptr)
				{
					mods->DoubleSidedLightBlocker->RootComponent->bIsActive = false;
					mods->DoubleSidedLightBlocker->RootComponent->bHiddenInGame = true;
					mods->DoubleSidedLightBlocker->RootComponent->RelativeScale3D = vector_zero;
					mods->DoubleSidedLightBlocker->RootComponent->bAbsoluteScale = zero;
				}

				if (ShowOutputLightBlock)
				{
					cout << "A DoubleLightblocker has been removed. \n";
				}
			}
		}
	} while (nolightblocker);

}

void DestroyLightBlockers1()
{

	CG::FVector Max_float_vector;

	Max_float_vector.X = Max_float;
	Max_float_vector.Y = Max_float;
	Max_float_vector.Z = Max_float;

	CG::FVector Neg_float_vector;
	Neg_float_vector.X = Neg_float;
	Neg_float_vector.Y = Neg_float;
	Neg_float_vector.Z = Neg_float;

	CG::FVector vector_zero;
	vector_zero.X = 0.0f;
	vector_zero.Y = 0.0f;
	vector_zero.Z = 0.0f;

	// BLANK ROTATION
	CG::FRotator Blank_Rotation;
	Blank_Rotation.Pitch = 0.0f;
	Blank_Rotation.Roll = 0.0f;
	Blank_Rotation.Yaw = 0.0f;
	do
	{

		auto LightBlocker2 = CG::UObject::FindObjects<CG::ATeleportSpot_BP_C>();
		if (!LightBlocker2.empty())
		{
			for (auto& mods : LightBlocker2)
			{
				if (mods->LightBlockerID != nullptr)
				{
					CG::USceneComponent* DeleteMe;
					DeleteMe = mods->LightBlockerID->K2_GetRootComponent();
					mods->LightBlockerID->K2_DestroyComponent(DeleteMe);
					mods->LightBlockerID->bActorIsBeingDestroyed = true;
					mods->LightBlockerID->K2_DestroyActor();
				}
				if (ShowOutputLightBlock)
				{
					cout << "A DoubleLightblocker has been removed. \n";
				}
			}
		}
	} while (nolightblocker);

}

void DestroyLightBlockers()
{

	CG::FVector Max_float_vector;

	Max_float_vector.X = Max_float;
	Max_float_vector.Y = Max_float;
	Max_float_vector.Z = Max_float;

	CG::FVector Neg_float_vector;
	Neg_float_vector.X = Neg_float;
	Neg_float_vector.Y = Neg_float;
	Neg_float_vector.Z = Neg_float;

	CG::FVector vector_zero;
	vector_zero.X = 0.0f;
	vector_zero.Y = 0.0f;
	vector_zero.Z = 0.0f;

	// BLANK ROTATION
	CG::FRotator Blank_Rotation;
	Blank_Rotation.Pitch = 0.0f;
	Blank_Rotation.Roll = 0.0f;
	Blank_Rotation.Yaw = 0.0f;
	do
	{

		auto LightBlocker = CG::UObject::FindObjects<CG::ALightBlocker_C>();
		if (!LightBlocker.empty())
		{

			for (auto& mods : LightBlocker)
			{
				if (mods)
				{

					mods->bIsEditorOnlyActor = true;
					mods->bHidden = true;
					mods->bAlwaysRelevant = false;

					if (mods->RootComponent != nullptr)
					{
						mods->RootComponent->bIsActive = false;
						mods->RootComponent->bHiddenInGame = true;
						mods->RootComponent->RelativeScale3D = vector_zero;
						mods->RootComponent->bAbsoluteScale = zero;
						//mods->RootComponent->SetVisibility(false, true);
						//CG::USceneComponent* deletethis_one;
						//deletethis_one = mods->RootComponent->K2_GetComponentToWorld;
						//mods->RootComponent->K2_DestroyComponent(deletethis_one);
					}

					CG::USceneComponent* DeleteMe;
					DeleteMe = mods->K2_GetRootComponent();
					mods->K2_DestroyComponent(DeleteMe);
					mods->bActorIsBeingDestroyed = true;
					mods->K2_DestroyActor();
					if (ShowOutputLightBlock)
					{
						cout << "A Lightblocker has been removed. \n";
					}
				}
			}
		}

	} while (nolightblocker);

}

void DeactivateAI()
{

	auto Office02 = CG::UObject::FindObjects<CG::AOfficeAiBase_Bp_C>();

	if (!Office02.empty())
	{
		for (auto& mods : Office02)
		{
			if (mods)
			{
				if (mods->DisableAi == false)
				{
					mods->DisableAi = true;
				}
				cout << "[AI TOGGLER] : Office AI deactivated successfully \n";
			}
		}
	}
}

void InitiateSaveGen()
{

	auto SaulMotion = CG::UObject::FindObjects<CG::ASaul_MotionControllerPawn_C>();

	if (!SaulMotion.empty())
	{
		for (auto& mods : SaulMotion)
		{
			if (mods)
			{
				mods->UnlockAllLevels();
			}
		}
	}
}

void OnStartup()
{
	DestroyLightBlockers();
	DestroyDoubleLightBlockers();

}

void SetClockTime(int Timer)
{
	SetMonitorClock(Timer);
	SetMonitorClockOff1(Timer);
	SetMonitorClockOff2(Timer);
	SetMonitorClockOff3(Timer);
	SetMonitorClock2(Timer);
}

void EnableDebugView()
{

	justsayonce = true;
	auto SceneComponent = CG::UObject::FindObjects<CG::USceneComponent>();

	if (!SceneComponent.empty())
	{
		for (auto& mods : SceneComponent)
		{
			if (mods != nullptr)
			{
				mods->bVisible = true;
			}
		}
	}
}

void DeactivateDebugView()
{

	auto SceneComponent = CG::UObject::FindObjects<CG::USceneComponent>();

	if (!SceneComponent.empty())
	{
		for (auto& mods : SceneComponent)
		{
			if (mods != nullptr)
			{
				mods->bVisible = false;
			}
		}
	}
}

void ConsoleInput()
{
	cout << " \n ";

	cout << "\nModConsole Commands:  ";
	string input;
	cin >> input;

	if (input == "help")
	{

		cout << "\n For fullbright MOD Download from here : https://github.com/marcocorriero/Fullbright-for-FNAF-VR \n";

		cout << "FNAF VR Mod Console Available commands:\n";

		cout << "help  [DESC]:  This page. \n";

		cout << "toggleai   [DESC]:  Toggle Any AI (Animatronics).\n";

		cout << "removeblackwalls [DESC]:  Kills any black walls that interfere with the light \n";
		cout << "debug_fullbright [DESC]:  Shows the output of fullbright \n";
		cout << "debug_removeblackwalls [DESC]:  Shows the Output of removeblackwalls  \n";
		cout << "debug_cheats [DESC]: Shows the Output of toggle_cheats.  \n";
		cout << "toggle_cheats [DESC]: enables Some cheats to make things a bit easier. If you dont see any change in-game, toggle it on again, then check the level :)  \n";
		cout << "dev_view   [DESC]: Reveals any Hidden object in the game! \n";
		cout << "setclock <number> [DESC]: Sets the Game Clock on whatever hour you like! \n";
		cout << "setbattery <number> [DESC]: Sets the battery power in Office 1 ! \n";

		cout << "toggle_witheredfoxy [DESC]: Toggles  withered foxy in FNAF 2! \n";
		//cout << "toggle_witheredbonnie [DESC]: Toggles withered Bonnie in FNAF 2! \n";
		//cout << "toggle_witheredchica [DESC]: Toggles  withered Chica in FNAF 2! \n";
		//cout << "toggle_witheredfreddy [DESC]: Toggles  withered Freddy in FNAF 2! \n";

		cout << "toggle_withereds [DESC]: Toggles  withereds in FNAF 2! \n";
		cout << "toggle_puppet [DESC]: Toggles  Puppet in FNAF 2! \n";

		ConsoleInput();
	}

	// COMMAND REGISTRATION PAGE
	// ADD ANY FUTURE COMMAND HERE.

	//if (input == "toggle_witheredfreddy")
	//{

	//	if (WitheredFreddyActive)
	//	{
	//		ToggleWitheredFreddyOff();
	//		WitheredFreddyActive = false;
	//	}
	//	else
	//	{
	//		ToggleWitheredFreddyOn();
	//		WitheredFreddyActive = true;
	//	}
	//	ConsoleInput();
	//}

	//if (input == "toggle_witheredchica")
	//{

	//	if (WitheredChicaActive)
	//	{
	//		ToggleWitheredChicaOff();
	//		WitheredChicaActive = false;
	//	}
	//	else
	//	{
	//		ToggleWitheredChicaOn();
	//		WitheredChicaActive = true;
	//	}
	//	ConsoleInput();
	//}

	if (input == "toggle_witheredfoxy")
	{

		if (WitheredFoxyActive)
		{
			ToggleWitheredFoxyOff();
			WitheredFoxyActive = false;
		}
		else
		{
			ToggleWitheredFoxyOn();
			WitheredFoxyActive = true;
		}
		ConsoleInput();
	}

	//if (input == "toggle_witheredbonnie")
	//{

	//	if (WitheredBonnieActive)
	//	{
	//		ToggleWitheredBonnieOff();
	//		WitheredBonnieActive = false;
	//	}
	//	else
	//	{
	//		ToggleWitheredBonnieOn();
	//		WitheredBonnieActive = true;
	//	}
	//	ConsoleInput();
	//}

	if (input == "toggle_withereds")
	{
		if (WitheredsAreActive)
		{
			ToggleWitheredsOff();
			WitheredsAreActive = false;
		}
		else
		{
			ToggleWitheredsOn();
			WitheredsAreActive = true;
		}

		ConsoleInput();
	}

	if (input == "toggle_puppet")
	{
		if (PuppetIsAwake)
		{
			TogglePuppetOff();
			PuppetIsAwake = false;
		}
		else
		{
			TogglePuppetOn();
			PuppetIsAwake = true;
		}

		ConsoleInput();
	}

	if (input == "toggleai")
	{
		if (IsAiDeactivated)
		{
			cout << "[AI TOGGLER] Finding AI....  \n";
			EnableAI();
			IsAiDeactivated = false;
		}
		else
		{
			cout << "[AI TOGGLER] Finding AI....  \n";
			DeactivateAI();
			IsAiDeactivated = true;
		}
		ConsoleInput();
	}

	if (input == "setclock")
	{
		cout << "\n Type the Hour you want to set:  ";
		float inputb;
		cin >> inputb;
		int  inputtoint = static_cast<int>(inputb);
		SetClockTime(inputtoint);
		ConsoleInput();
	}

	if (input == "setbattery")
	{
		cout << "\n Type the amount of power:  ";
		float inputb;
		cin >> inputb;
		batteryoff1(inputb);
		ConsoleInput();
	}

	if (input == "debug_cheats")
	{
		if (!showCheatOutput)
		{
			cout << "\n Enabled Debugs Cheats Outputs \n  ";
			showCheatOutput = true;
		}
		else
		{
			cout << "\n Deactivated  Debugs Cheats  Outputs \n  ";
			showCheatOutput = false;
		}
		ConsoleInput();
	}
	if (input == "debug_removeblackwalls")
	{
		if (!ShowOutputLightBlock)
		{
			cout << "\n Enabled Debugs kill lightblocker Outputs \n  ";
			ShowOutputLightBlock = true;
		}
		else
		{
			cout << "\n Deactivated Debugs kill lightblocker Outputs \n  ";
			ShowOutputLightBlock = false;
		}
		ConsoleInput();
	}
	if (input == "dev_view")
	{
		if (!devviewenabled)
		{
			EnableDebugView();
			cout << "\n Finding any Hidden objects and making them visible.... \n  ";
			devviewenabled = true;
		}
		else
		{
			DeactivateDebugView();
			cout << "\n All Hidden objects should be hidden again!.... \n  ";
			devviewenabled = false;
		}

		ConsoleInput();
	}
	if (input == "toggle_cheats")
	{
		thread Office01Cheat(OfficeLVL1Cheat);
		thread TorchLevelHacks(TorchLevelCheats);
		thread Office03Cheat(OfficeLVL3Cheat);
		thread MonitorCheats(MonitorBoardCheat);
		if (!cheatsactive)
		{
			cout << "\n Cheats Enabled!\n";
			cheatsactive = true;
			TorchLevelHacks;
			Office01Cheat;
			Office03Cheat;
			MonitorCheats;
		}
		else
		{
			cout << "\n Cheats deactivated!\n";
			cheatsactive = false;
		}

		ConsoleInput();
	}

	if (input == "removeblackwalls")
	{
		thread FirstAntiLightblocker(DestroyDoubleLightBlockers);
		thread SecondAntiLightblocker(DestroyLightBlockers);
		thread ThirdAntiLightBlocker(DestroyDoubleLightBlockers1);
		thread FourthAntiLightBlocker(DestroyLightBlockers1);
		if (!nolightblocker)
		{
			nolightblocker = true;
			FirstAntiLightblocker;
			SecondAntiLightblocker;
			ThirdAntiLightBlocker;
			FourthAntiLightBlocker;
			cout << "\n Removing all black walls in-game. \n";
		}
		else
		{
			nolightblocker = false;
			cout << "\n Stopped removing all black walls in-game. \n";
		}
		ConsoleInput();

	}

	// TODO : NEW COMMANDS  LIST

	else
	{
		cout << "\n Command Not found. Type help for command list. \n";
		ConsoleInput();
	}
}

DWORD WINAPI OnAttach(const HMODULE hModule)
{
	allocate_console();
	Sleep(6000);

	CG::InitSdk();
	cout << "\nThis mod has been coded by xAstoBoy#1337, enjoy! \n";
	cout << " FNAF MISC MODS V" << version + "\n";
	cout << " FOR STEAM VERSION ONLY! \n";

	//InitiateSaveGen();

	ConsoleInput();

	return 0;
}

BOOL APIENTRY  DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	DisableThreadLibraryCalls(hModule);
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(nullptr, NULL, LPTHREAD_START_ROUTINE(OnAttach), hModule, NULL, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
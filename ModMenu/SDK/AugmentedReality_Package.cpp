﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "AugmentedReality_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00FBC900
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToUnpin                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");
		
		UARBlueprintLibrary_UnpinComponent_Params params {};
		params.ComponentToUnpin = ComponentToUnpin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC8E0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StopARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UARBlueprintLibrary::STATIC_StopARSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");
		
		UARBlueprintLibrary_StopARSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC870
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StartARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_StartARSession(class UARSessionConfig* SessionConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");
		
		UARBlueprintLibrary_StartARSession_Params params {};
		params.SessionConfig = SessionConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC150
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  InAlignmentTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");
		
		UARBlueprintLibrary_SetAlignmentTransform_Params params {};
		params.InAlignmentTransform = InAlignmentTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC0E0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemovePin
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARPin*                                      PinToRemove                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_RemovePin(class UARPin* PinToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");
		
		UARBlueprintLibrary_RemovePin_Params params {};
		params.PinToRemove = PinToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBBF60
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");
		
		UARBlueprintLibrary_PinComponentToTraceResult_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.TraceResult = TraceResult;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBBDC0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  PinToWorldTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");
		
		UARBlueprintLibrary_PinComponent_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.PinToWorldTransform = PinToWorldTransform;
		params.TrackedGeometry = TrackedGeometry;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBBDA0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UARBlueprintLibrary::STATIC_PauseARSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");
		
		UARBlueprintLibrary_PauseARSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB9C0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");
		
		UARBlueprintLibrary_LineTraceTrackedObjects3D_Params params {};
		params.Start = Start;
		params.End = End;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBBBD0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   ScreenCoord                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");
		
		UARBlueprintLibrary_LineTraceTrackedObjects_Params params {};
		params.ScreenCoord = ScreenCoord;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB940
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_IsSessionTypeSupported(AugmentedReality_EARSessionType SessionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");
		
		UARBlueprintLibrary_IsSessionTypeSupported_Params params {};
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB880
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARSessionTrackingFeature         SessionTrackingFeature                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_IsSessionTrackingFeatureSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported");
		
		UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params params {};
		params.SessionType = SessionType;
		params.SessionTrackingFeature = SessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00612A60
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UARBlueprintLibrary::STATIC_IsARSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");
		
		UARBlueprintLibrary_IsARSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB850
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	AugmentedReality_EARWorldMappingState UARBlueprintLibrary::STATIC_GetWorldMappingStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");
		
		UARBlueprintLibrary_GetWorldMappingStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x004D76D0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	AugmentedReality_EARTrackingQualityReason UARBlueprintLibrary::STATIC_GetTrackingQualityReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");
		
		UARBlueprintLibrary_GetTrackingQualityReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB7B0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	AugmentedReality_EARTrackingQuality UARBlueprintLibrary::STATIC_GetTrackingQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");
		
		UARBlueprintLibrary_GetTrackingQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB4C0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARVideoFormat> UARBlueprintLibrary::STATIC_GetSupportedVideoFormats(AugmentedReality_EARSessionType SessionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");
		
		UARBlueprintLibrary_GetSupportedVideoFormats_Params params {};
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB460
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UARSessionConfig* UARBlueprintLibrary::STATIC_GetSessionConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");
		
		UARBlueprintLibrary_GetSessionConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB3E0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FVector> UARBlueprintLibrary::STATIC_GetPointCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");
		
		UARBlueprintLibrary_GetPointCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB350
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetPersonSegmentationImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage");
		
		UARBlueprintLibrary_GetPersonSegmentationImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB320
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetPersonSegmentationDepthImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage");
		
		UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAD20
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UARLightEstimate* UARBlueprintLibrary::STATIC_GetCurrentLightEstimate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");
		
		UARBlueprintLibrary_GetCurrentLightEstimate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBABD0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetCameraImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");
		
		UARBlueprintLibrary_GetCameraImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBABA0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraDepth* UARBlueprintLibrary::STATIC_GetCameraDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");
		
		UARBlueprintLibrary_GetCameraDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA5B0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FARSessionStatus UARBlueprintLibrary::STATIC_GetARSessionStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");
		
		UARBlueprintLibrary_GetARSessionStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAA80
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedPose*> UARBlueprintLibrary::STATIC_GetAllTrackedPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses");
		
		UARBlueprintLibrary_GetAllTrackedPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAA00
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedPoint*> UARBlueprintLibrary::STATIC_GetAllTrackedPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");
		
		UARBlueprintLibrary_GetAllTrackedPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA980
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARPlaneGeometry*> UARBlueprintLibrary::STATIC_GetAllTrackedPlanes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");
		
		UARBlueprintLibrary_GetAllTrackedPlanes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA900
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedImage*> UARBlueprintLibrary::STATIC_GetAllTrackedImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");
		
		UARBlueprintLibrary_GetAllTrackedImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA880
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::STATIC_GetAllTrackedEnvironmentCaptureProbes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");
		
		UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA740
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<struct FARPose2D> UARBlueprintLibrary::STATIC_GetAllTracked2DPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses");
		
		UARBlueprintLibrary_GetAllTracked2DPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA6C0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARPin*> UARBlueprintLibrary::STATIC_GetAllPins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");
		
		UARBlueprintLibrary_GetAllPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA640
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedGeometry*> UARBlueprintLibrary::STATIC_GetAllGeometries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");
		
		UARBlueprintLibrary_GetAllGeometries_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA420
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutlineThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");
		
		UARBlueprintLibrary_DebugDrawTrackedGeometry_Params params {};
		params.TrackedGeometry = TrackedGeometry;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.OutlineThickness = OutlineThickness;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA290
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UARPin*                                      ARPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");
		
		UARBlueprintLibrary_DebugDrawPin_Params params {};
		params.ARPin = ARPin;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FB9FC0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARCandidateImage* UARBlueprintLibrary::STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");
		
		UARBlueprintLibrary_AddRuntimeCandidateImage_Params params {};
		params.SessionConfig = SessionConfig;
		params.CandidateTexture = CandidateTexture;
		params.FriendlyName = FriendlyName;
		params.PhysicalWidth = PhysicalWidth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FB9EE0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");
		
		UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params {};
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB6B0
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UARTrackedGeometry* UARTraceResultLibrary::STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");
		
		UARTraceResultLibrary_GetTrackedGeometry_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB580
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	AugmentedReality_EARLineTraceChannels UARTraceResultLibrary::STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");
		
		UARTraceResultLibrary_GetTraceChannel_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB1D0
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");
		
		UARTraceResultLibrary_GetLocalToWorldTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB050
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");
		
		UARTraceResultLibrary_GetLocalToTrackingTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBADD0
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UARTraceResultLibrary::STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");
		
		UARTraceResultLibrary_GetDistanceFromCamera_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTraceResultLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARBaseAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBaseAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FB9D60
	 * 		Name   -> Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::STATIC_ARSaveWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");
		
		UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARSaveWorldAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FB9C40
	 * 		Name   -> Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");
		
		UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARGetCandidateObjectAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARLightEstimate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAB70
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARBasicLightEstimate::GetAmbientIntensityLumens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");
		
		UARBasicLightEstimate_GetAmbientIntensityLumens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAB40
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");
		
		UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAB00
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");
		
		UARBasicLightEstimate_GetAmbientColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARBasicLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBasicLightEstimate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAROriginActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAROriginActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AROriginActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAED0
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackingState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARTrackingState UARPin::GetTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");
		
		UARPin_GetTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB680
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackedGeometry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARTrackedGeometry* UARPin::GetTrackedGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");
		
		UARPin_GetTrackedGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB380
	 * 		Name   -> Function AugmentedReality.ARPin.GetPinnedComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USceneComponent* UARPin::GetPinnedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");
		
		UARPin_GetPinnedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB170
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARPin::GetLocalToWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");
		
		UARPin_GetLocalToWorldTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAFF0
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARPin::GetLocalToTrackingTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");
		
		UARPin_GetLocalToTrackingTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAD50
	 * 		Name   -> Function AugmentedReality.ARPin.GetDebugName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UARPin::GetDebugName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");
		
		UARPin_GetDebugName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBA140
	 * 		Name   -> Function AugmentedReality.ARPin.DebugDraw
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, Const)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");
		
		UARPin_DebugDraw_Params params {};
		params.World = World;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARPin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC840
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldResetTrackedObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");
		
		UARSessionConfig_ShouldResetTrackedObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC810
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldResetCameraTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");
		
		UARSessionConfig_ShouldResetCameraTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC7E0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldRenderCameraOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");
		
		UARSessionConfig_ShouldRenderCameraOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC7B0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldEnableCameraTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");
		
		UARSessionConfig_ShouldEnableCameraTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC780
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldEnableAutoFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");
		
		UARSessionConfig_ShouldEnableAutoFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC6A0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetWorldMapData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              WorldMapData                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");
		
		UARSessionConfig_SetWorldMapData_Params params {};
		params.WorldMapData = WorldMapData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC620
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		AugmentedReality_EARSessionTrackingFeature         InSessionTrackingFeature                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetSessionTrackingFeatureToEnable(AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");
		
		UARSessionConfig_SetSessionTrackingFeatureToEnable_Params params {};
		params.InSessionTrackingFeature = InSessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC590
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");
		
		UARSessionConfig_SetResetTrackedObjects_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC500
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");
		
		UARSessionConfig_SetResetCameraTracking_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC480
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		AugmentedReality_EARFaceTrackingUpdate             InUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingUpdate(AugmentedReality_EARFaceTrackingUpdate InUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");
		
		UARSessionConfig_SetFaceTrackingUpdate_Params params {};
		params.InUpdate = InUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC400
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		AugmentedReality_EARFaceTrackingDirection          InDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingDirection(AugmentedReality_EARFaceTrackingDirection InDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");
		
		UARSessionConfig_SetFaceTrackingDirection_Params params {};
		params.InDirection = InDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC370
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");
		
		UARSessionConfig_SetEnableAutoFocus_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC2D0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FARVideoFormat                              NewFormat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");
		
		UARSessionConfig_SetDesiredVideoFormat_Params params {};
		params.NewFormat = NewFormat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBC220
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UARCandidateObject*>                  InCandidateObjects                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");
		
		UARSessionConfig_SetCandidateObjectList_Params params {};
		params.InCandidateObjects = InCandidateObjects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB810
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldMapData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<unsigned char> UARSessionConfig::GetWorldMapData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");
		
		UARSessionConfig_GetWorldMapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB7E0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARWorldAlignment UARSessionConfig::GetWorldAlignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");
		
		UARSessionConfig_GetWorldAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB490
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetSessionType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARSessionType UARSessionConfig::GetSessionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");
		
		UARSessionConfig_GetSessionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB3B0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");
		
		UARSessionConfig_GetPlaneDetectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBB2F0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");
		
		UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAFC0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");
		
		UARSessionConfig_GetLightEstimationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAF90
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");
		
		UARSessionConfig_GetFrameSyncMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAF60
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");
		
		UARSessionConfig_GetFaceTrackingUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAF30
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");
		
		UARSessionConfig_GetFaceTrackingDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAF00
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");
		
		UARSessionConfig_GetEnvironmentCaptureProbeType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAED0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");
		
		UARSessionConfig_GetEnabledSessionTrackingFeature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAD90
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");
		
		UARSessionConfig_GetDesiredVideoFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAC90
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");
		
		UARSessionConfig_GetCandidateObjectList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAC00
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");
		
		UARSessionConfig_GetCandidateImageList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FB9E60
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARCandidateObject*                          CandidateObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");
		
		UARSessionConfig_AddCandidateObject_Params params {};
		params.CandidateObject = CandidateObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FB9DE0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateImage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARCandidateImage*                           NewCandidateImage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");
		
		UARSessionConfig_AddCandidateImage_Params params {};
		params.NewCandidateImage = NewCandidateImage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARSessionConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSessionConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1780
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ImageData                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");
		
		AARSharedWorldGameMode_SetPreviewImageData_Params params {};
		params.ImageData = ImageData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC14B0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AARSharedWorldGameMode::SetARWorldSharingIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");
		
		AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC13D0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ARWorldData                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");
		
		AARSharedWorldGameMode_SetARSharedWorldData_Params params {};
		params.ARWorldData = ARWorldData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0BD0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");
		
		AARSharedWorldGameMode_GetARSharedWorldGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARSharedWorldGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");
		
		AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARSharedWorldGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1380
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");
		
		AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0AD0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");
		
		AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params {};
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC09D0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");
		
		AARSharedWorldPlayerController_ClientUpdateARWorldData_Params params {};
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC08D0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int                                                PreviewImageSize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                ARWorldDataSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");
		
		AARSharedWorldPlayerController_ClientInitSharedWorld_Params params {};
		params.PreviewImageSize = PreviewImageSize;
		params.ARWorldDataSize = ARWorldDataSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARSharedWorldPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1620
	 * 		Name   -> Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAREnvironmentCaptureProbe*                  InCaptureProbe                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");
		
		AARSkyLight_SetEnvironmentCaptureProbe_Params params {};
		params.InCaptureProbe = InCaptureProbe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARSkyLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSkyLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTextureCameraImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTextureCameraDepth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraDepth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAREnvironmentCaptureProbeTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbeTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTraceResultDummy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultDummy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1350
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.IsTracked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARTrackedGeometry::IsTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");
		
		UARTrackedGeometry_IsTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1270
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");
		
		UARTrackedGeometry_GetUnderlyingMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAED0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARTrackingState UARTrackedGeometry::GetTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");
		
		UARTrackedGeometry_GetTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1180
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARObjectClassification UARTrackedGeometry::GetObjectClassification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");
		
		UARTrackedGeometry_GetObjectClassification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1120
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");
		
		UARTrackedGeometry_GetLocalToWorldTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FBAFF0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");
		
		UARTrackedGeometry_GetLocalToTrackingTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1050
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARTrackedGeometry::GetLastUpdateTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");
		
		UARTrackedGeometry_GetLastUpdateTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1020
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int UARTrackedGeometry::GetLastUpdateFrameNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");
		
		UARTrackedGeometry_GetLastUpdateFrameNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0E80
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetDebugName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UARTrackedGeometry::GetDebugName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");
		
		UARTrackedGeometry_GetDebugName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1220
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");
		
		UARPlaneGeometry_GetSubsumedBy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC11C0
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetOrientation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARPlaneOrientation UARPlaneGeometry::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");
		
		UARPlaneGeometry_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0F90
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetExtent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UARPlaneGeometry::GetExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");
		
		UARPlaneGeometry_GetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0E50
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetCenter
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UARPlaneGeometry::GetCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");
		
		UARPlaneGeometry_GetCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0D10
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");
		
		UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARPlaneGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPlaneGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0F10
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetEstimateSize
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FVector2D UARTrackedImage::GetEstimateSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");
		
		UARTrackedImage_GetEstimateSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0EC0
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetDetectedImage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARCandidateImage* UARTrackedImage::GetDetectedImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");
		
		UARTrackedImage_GetDetectedImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC12A0
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		AugmentedReality_EAREye                            Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(AugmentedReality_EAREye Eye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");
		
		UARFaceGeometry_GetWorldSpaceEyeTransform_Params params {};
		params.Eye = Eye;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1080
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		AugmentedReality_EAREye                            Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(AugmentedReality_EAREye Eye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");
		
		UARFaceGeometry_GetLocalSpaceEyeTransform_Params params {};
		params.Eye = Eye;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0C00
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		AugmentedReality_EARFaceBlendShape                 BlendShape                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UARFaceGeometry::GetBlendShapeValue(AugmentedReality_EARFaceBlendShape BlendShape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");
		
		UARFaceGeometry_GetBlendShapeValue_Params params {};
		params.BlendShape = BlendShape;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0C90
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<AugmentedReality_EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");
		
		UARFaceGeometry_GetBlendShapes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARFaceGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARFaceGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0F50
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UAREnvironmentCaptureProbe::GetExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");
		
		UAREnvironmentCaptureProbe_GetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0EE0
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");
		
		UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAREnvironmentCaptureProbe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0EC0
	 * 		Name   -> Function AugmentedReality.ARTrackedObject.GetDetectedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARCandidateObject* UARTrackedObject::GetDetectedObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");
		
		UARTrackedObject_GetDetectedObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1240
	 * 		Name   -> Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FARPose3D UARTrackedPose::GetTrackedPoseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData");
		
		UARTrackedPose_GetTrackedPoseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedPose.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPose::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackableNotifyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackableNotifyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTypesDummyClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTypesDummyClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1200
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARCandidateImage::GetPhysicalWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");
		
		UARCandidateImage_GetPhysicalWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC11E0
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARCandidateImage::GetPhysicalHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");
		
		UARCandidateImage_GetPhysicalHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC11A0
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetOrientation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	AugmentedReality_EARCandidateImageOrientation UARCandidateImage::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");
		
		UARCandidateImage_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0FC0
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UARCandidateImage::GetFriendlyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");
		
		UARCandidateImage_GetFriendlyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0E30
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTexture2D* UARCandidateImage::GetCandidateTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");
		
		UARCandidateImage_GetCandidateTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARCandidateImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC16A0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetFriendlyName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");
		
		UARCandidateObject_SetFriendlyName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC1570
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              InCandidateObject                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");
		
		UARCandidateObject_SetCandidateObjectData_Params params {};
		params.InCandidateObject = InCandidateObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC14D0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetBoundingBox
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBox                                        InBoundingBox                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");
		
		UARCandidateObject_SetBoundingBox_Params params {};
		params.InBoundingBox = InBoundingBox;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0FF0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UARCandidateObject::GetFriendlyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");
		
		UARCandidateObject_GetFriendlyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0E00
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");
		
		UARCandidateObject_GetCandidateObjectData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00FC0DD0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetBoundingBox
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBox UARCandidateObject::GetBoundingBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");
		
		UARCandidateObject_GetBoundingBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARCandidateObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}

}



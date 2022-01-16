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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
	 */
	struct ULevelVariantSets_GetVariantSetByName_Params
	{
	public:
		class FString                                              VariantSetName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVariantSet*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.LevelVariantSets.GetVariantSet
	 */
	struct ULevelVariantSets_GetVariantSet_Params
	{
	public:
		int                                                        VariantSetIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVariantSet*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
	 */
	struct ULevelVariantSets_GetNumVariantSets_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	 */
	struct ALevelVariantSetsActor_SwitchOnVariantByName_Params
	{
	public:
		class FString                                              VariantSetName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              VariantName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	 */
	struct ALevelVariantSetsActor_SwitchOnVariantByIndex_Params
	{
	public:
		int                                                        VariantSetIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        VariantIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	 */
	struct ALevelVariantSetsActor_SetLevelVariantSets_Params
	{
	public:
		class ULevelVariantSets*                                   InVariantSets;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	 */
	struct ALevelVariantSetsActor_GetLevelVariantSets_Params
	{
	public:
		bool                                                       bLoad;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelVariantSets*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.PropertyValue.HasRecordedData
	 */
	struct UPropertyValue_HasRecordedData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.PropertyValue.GetPropertyTooltip
	 */
	struct UPropertyValue_GetPropertyTooltip_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.PropertyValue.GetFullDisplayString
	 */
	struct UPropertyValue_GetFullDisplayString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.Variant.SwitchOn
	 */
	struct UVariant_SwitchOn_Params
	{
	};

	/**
	 * Function VariantManagerContent.Variant.SetDisplayText
	 */
	struct UVariant_SetDisplayText_Params
	{
	public:
		class FText                                                NewDisplayText;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.Variant.GetNumActors
	 */
	struct UVariant_GetNumActors_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.Variant.GetDisplayText
	 */
	struct UVariant_GetDisplayText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.Variant.GetActor
	 */
	struct UVariant_GetActor_Params
	{
	public:
		int                                                        ActorIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.VariantSet.SetDisplayText
	 */
	struct UVariantSet_SetDisplayText_Params
	{
	public:
		class FText                                                NewDisplayText;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.VariantSet.GetVariantByName
	 */
	struct UVariantSet_GetVariantByName_Params
	{
	public:
		class FString                                              VariantName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVariant*                                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.VariantSet.GetVariant
	 */
	struct UVariantSet_GetVariant_Params
	{
	public:
		int                                                        VariantIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVariant*                                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.VariantSet.GetNumVariants
	 */
	struct UVariantSet_GetNumVariants_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VariantManagerContent.VariantSet.GetDisplayText
	 */
	struct UVariantSet_GetDisplayText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

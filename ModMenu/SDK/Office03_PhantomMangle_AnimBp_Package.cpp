﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office03_PhantomMangle_AnimBp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle_AnimBp.Office03_PhantomMangle_AnimBp_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UOffice03_PhantomMangle_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle_AnimBp.Office03_PhantomMangle_AnimBp_C.AnimGraph");
		
		UOffice03_PhantomMangle_AnimBp_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle_AnimBp.Office03_PhantomMangle_AnimBp_C.ExecuteUbergraph_Office03_PhantomMangle_AnimBp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOffice03_PhantomMangle_AnimBp_C::ExecuteUbergraph_Office03_PhantomMangle_AnimBp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle_AnimBp.Office03_PhantomMangle_AnimBp_C.ExecuteUbergraph_Office03_PhantomMangle_AnimBp");
		
		UOffice03_PhantomMangle_AnimBp_C_ExecuteUbergraph_Office03_PhantomMangle_AnimBp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOffice03_PhantomMangle_AnimBp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffice03_PhantomMangle_AnimBp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Office03_PhantomMangle_AnimBp.Office03_PhantomMangle_AnimBp_C");
		return ptr;
	}

}



#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrizeDLC_CandyBucket.PrizeDLC_CandyBucket_C
// 0x0008 (0x03E0 - 0x03D8)
class APrizeDLC_CandyBucket_C : public APrize_Parent_C
{
public:
	class UStaticMeshComponent*                        Mask_Bonnie;                                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrizeDLC_CandyBucket.PrizeDLC_CandyBucket_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
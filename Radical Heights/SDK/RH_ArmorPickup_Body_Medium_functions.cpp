// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ArmorPickup_Body_Medium_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorPickup_Body_Medium.ArmorPickup_Body_Medium_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AArmorPickup_Body_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorPickup_Body_Medium.ArmorPickup_Body_Medium_C.UserConstructionScript");

	AArmorPickup_Body_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

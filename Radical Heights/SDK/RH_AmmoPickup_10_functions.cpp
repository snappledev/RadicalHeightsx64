// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_AmmoPickup_10_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmmoPickup_10.AmmoPickup_9_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AAmmoPickup_9_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoPickup_10.AmmoPickup_9_C.UserConstructionScript");

	AAmmoPickup_9_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

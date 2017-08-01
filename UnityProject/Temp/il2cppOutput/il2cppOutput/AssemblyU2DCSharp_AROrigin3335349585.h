#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AROrigin_FindMode1452273230.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// ARMarker
struct ARMarker_t1554260723;
// System.Collections.Generic.List`1<ARMarker>
struct List_1_t923381855;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AROrigin
struct  AROrigin_t3335349585  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.String> AROrigin::findMarkerTags
	List_1_t1398341365 * ___findMarkerTags_3;
	// ARMarker AROrigin::baseMarker
	ARMarker_t1554260723 * ___baseMarker_4;
	// System.Collections.Generic.List`1<ARMarker> AROrigin::markersEligibleForBaseMarker
	List_1_t923381855 * ___markersEligibleForBaseMarker_5;
	// AROrigin/FindMode AROrigin::_findMarkerMode
	int32_t ____findMarkerMode_6;

public:
	inline static int32_t get_offset_of_findMarkerTags_3() { return static_cast<int32_t>(offsetof(AROrigin_t3335349585, ___findMarkerTags_3)); }
	inline List_1_t1398341365 * get_findMarkerTags_3() const { return ___findMarkerTags_3; }
	inline List_1_t1398341365 ** get_address_of_findMarkerTags_3() { return &___findMarkerTags_3; }
	inline void set_findMarkerTags_3(List_1_t1398341365 * value)
	{
		___findMarkerTags_3 = value;
		Il2CppCodeGenWriteBarrier(&___findMarkerTags_3, value);
	}

	inline static int32_t get_offset_of_baseMarker_4() { return static_cast<int32_t>(offsetof(AROrigin_t3335349585, ___baseMarker_4)); }
	inline ARMarker_t1554260723 * get_baseMarker_4() const { return ___baseMarker_4; }
	inline ARMarker_t1554260723 ** get_address_of_baseMarker_4() { return &___baseMarker_4; }
	inline void set_baseMarker_4(ARMarker_t1554260723 * value)
	{
		___baseMarker_4 = value;
		Il2CppCodeGenWriteBarrier(&___baseMarker_4, value);
	}

	inline static int32_t get_offset_of_markersEligibleForBaseMarker_5() { return static_cast<int32_t>(offsetof(AROrigin_t3335349585, ___markersEligibleForBaseMarker_5)); }
	inline List_1_t923381855 * get_markersEligibleForBaseMarker_5() const { return ___markersEligibleForBaseMarker_5; }
	inline List_1_t923381855 ** get_address_of_markersEligibleForBaseMarker_5() { return &___markersEligibleForBaseMarker_5; }
	inline void set_markersEligibleForBaseMarker_5(List_1_t923381855 * value)
	{
		___markersEligibleForBaseMarker_5 = value;
		Il2CppCodeGenWriteBarrier(&___markersEligibleForBaseMarker_5, value);
	}

	inline static int32_t get_offset_of__findMarkerMode_6() { return static_cast<int32_t>(offsetof(AROrigin_t3335349585, ____findMarkerMode_6)); }
	inline int32_t get__findMarkerMode_6() const { return ____findMarkerMode_6; }
	inline int32_t* get_address_of__findMarkerMode_6() { return &____findMarkerMode_6; }
	inline void set__findMarkerMode_6(int32_t value)
	{
		____findMarkerMode_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

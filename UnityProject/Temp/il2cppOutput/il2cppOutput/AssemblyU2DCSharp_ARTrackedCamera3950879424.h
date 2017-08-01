#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ARCamera431610428.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARTrackedCamera
struct  ARTrackedCamera_t3950879424  : public ARCamera_t431610428
{
public:
	// System.Single ARTrackedCamera::secondsToRemainVisible
	float ___secondsToRemainVisible_23;
	// System.Int32 ARTrackedCamera::cullingMask
	int32_t ___cullingMask_24;
	// System.Boolean ARTrackedCamera::lastArVisible
	bool ___lastArVisible_25;
	// System.String ARTrackedCamera::_markerTag
	String_t* ____markerTag_26;

public:
	inline static int32_t get_offset_of_secondsToRemainVisible_23() { return static_cast<int32_t>(offsetof(ARTrackedCamera_t3950879424, ___secondsToRemainVisible_23)); }
	inline float get_secondsToRemainVisible_23() const { return ___secondsToRemainVisible_23; }
	inline float* get_address_of_secondsToRemainVisible_23() { return &___secondsToRemainVisible_23; }
	inline void set_secondsToRemainVisible_23(float value)
	{
		___secondsToRemainVisible_23 = value;
	}

	inline static int32_t get_offset_of_cullingMask_24() { return static_cast<int32_t>(offsetof(ARTrackedCamera_t3950879424, ___cullingMask_24)); }
	inline int32_t get_cullingMask_24() const { return ___cullingMask_24; }
	inline int32_t* get_address_of_cullingMask_24() { return &___cullingMask_24; }
	inline void set_cullingMask_24(int32_t value)
	{
		___cullingMask_24 = value;
	}

	inline static int32_t get_offset_of_lastArVisible_25() { return static_cast<int32_t>(offsetof(ARTrackedCamera_t3950879424, ___lastArVisible_25)); }
	inline bool get_lastArVisible_25() const { return ___lastArVisible_25; }
	inline bool* get_address_of_lastArVisible_25() { return &___lastArVisible_25; }
	inline void set_lastArVisible_25(bool value)
	{
		___lastArVisible_25 = value;
	}

	inline static int32_t get_offset_of__markerTag_26() { return static_cast<int32_t>(offsetof(ARTrackedCamera_t3950879424, ____markerTag_26)); }
	inline String_t* get__markerTag_26() const { return ____markerTag_26; }
	inline String_t** get_address_of__markerTag_26() { return &____markerTag_26; }
	inline void set__markerTag_26(String_t* value)
	{
		____markerTag_26 = value;
		Il2CppCodeGenWriteBarrier(&____markerTag_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

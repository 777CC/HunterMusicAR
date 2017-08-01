#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimedSelfDestruct
struct  TimedSelfDestruct_t4043215813  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimedSelfDestruct::storedTime
	float ___storedTime_2;
	// System.Single TimedSelfDestruct::timeBeforeDestroy
	float ___timeBeforeDestroy_3;

public:
	inline static int32_t get_offset_of_storedTime_2() { return static_cast<int32_t>(offsetof(TimedSelfDestruct_t4043215813, ___storedTime_2)); }
	inline float get_storedTime_2() const { return ___storedTime_2; }
	inline float* get_address_of_storedTime_2() { return &___storedTime_2; }
	inline void set_storedTime_2(float value)
	{
		___storedTime_2 = value;
	}

	inline static int32_t get_offset_of_timeBeforeDestroy_3() { return static_cast<int32_t>(offsetof(TimedSelfDestruct_t4043215813, ___timeBeforeDestroy_3)); }
	inline float get_timeBeforeDestroy_3() const { return ___timeBeforeDestroy_3; }
	inline float* get_address_of_timeBeforeDestroy_3() { return &___timeBeforeDestroy_3; }
	inline void set_timeBeforeDestroy_3(float value)
	{
		___timeBeforeDestroy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

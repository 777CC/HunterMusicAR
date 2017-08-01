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

// TimedSelfDeactivate
struct  TimedSelfDeactivate_t3836150707  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimedSelfDeactivate::storedTime
	float ___storedTime_2;
	// System.Single TimedSelfDeactivate::timeBeforeDeactivate
	float ___timeBeforeDeactivate_3;

public:
	inline static int32_t get_offset_of_storedTime_2() { return static_cast<int32_t>(offsetof(TimedSelfDeactivate_t3836150707, ___storedTime_2)); }
	inline float get_storedTime_2() const { return ___storedTime_2; }
	inline float* get_address_of_storedTime_2() { return &___storedTime_2; }
	inline void set_storedTime_2(float value)
	{
		___storedTime_2 = value;
	}

	inline static int32_t get_offset_of_timeBeforeDeactivate_3() { return static_cast<int32_t>(offsetof(TimedSelfDeactivate_t3836150707, ___timeBeforeDeactivate_3)); }
	inline float get_timeBeforeDeactivate_3() const { return ___timeBeforeDeactivate_3; }
	inline float* get_address_of_timeBeforeDeactivate_3() { return &___timeBeforeDeactivate_3; }
	inline void set_timeBeforeDeactivate_3(float value)
	{
		___timeBeforeDeactivate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

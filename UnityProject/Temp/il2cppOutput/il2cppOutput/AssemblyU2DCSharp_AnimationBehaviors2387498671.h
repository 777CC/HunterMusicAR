#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationBehaviors
struct  AnimationBehaviors_t2387498671  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip AnimationBehaviors::ding
	AudioClip_t1932558630 * ___ding_2;
	// UnityEngine.AudioClip AnimationBehaviors::beepCount
	AudioClip_t1932558630 * ___beepCount_3;
	// UnityEngine.AudioClip AnimationBehaviors::fanfare
	AudioClip_t1932558630 * ___fanfare_4;
	// UnityEngine.AudioSource AnimationBehaviors::audioSource
	AudioSource_t1135106623 * ___audioSource_5;

public:
	inline static int32_t get_offset_of_ding_2() { return static_cast<int32_t>(offsetof(AnimationBehaviors_t2387498671, ___ding_2)); }
	inline AudioClip_t1932558630 * get_ding_2() const { return ___ding_2; }
	inline AudioClip_t1932558630 ** get_address_of_ding_2() { return &___ding_2; }
	inline void set_ding_2(AudioClip_t1932558630 * value)
	{
		___ding_2 = value;
		Il2CppCodeGenWriteBarrier(&___ding_2, value);
	}

	inline static int32_t get_offset_of_beepCount_3() { return static_cast<int32_t>(offsetof(AnimationBehaviors_t2387498671, ___beepCount_3)); }
	inline AudioClip_t1932558630 * get_beepCount_3() const { return ___beepCount_3; }
	inline AudioClip_t1932558630 ** get_address_of_beepCount_3() { return &___beepCount_3; }
	inline void set_beepCount_3(AudioClip_t1932558630 * value)
	{
		___beepCount_3 = value;
		Il2CppCodeGenWriteBarrier(&___beepCount_3, value);
	}

	inline static int32_t get_offset_of_fanfare_4() { return static_cast<int32_t>(offsetof(AnimationBehaviors_t2387498671, ___fanfare_4)); }
	inline AudioClip_t1932558630 * get_fanfare_4() const { return ___fanfare_4; }
	inline AudioClip_t1932558630 ** get_address_of_fanfare_4() { return &___fanfare_4; }
	inline void set_fanfare_4(AudioClip_t1932558630 * value)
	{
		___fanfare_4 = value;
		Il2CppCodeGenWriteBarrier(&___fanfare_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(AnimationBehaviors_t2387498671, ___audioSource_5)); }
	inline AudioSource_t1135106623 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1135106623 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

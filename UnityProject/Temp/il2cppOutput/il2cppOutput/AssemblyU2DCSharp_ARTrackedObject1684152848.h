#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// AROrigin
struct AROrigin_t3335349585;
// ARMarker
struct ARMarker_t1554260723;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARTrackedObject
struct  ARTrackedObject_t1684152848  : public MonoBehaviour_t1158329972
{
public:
	// AROrigin ARTrackedObject::_origin
	AROrigin_t3335349585 * ____origin_3;
	// ARMarker ARTrackedObject::_marker
	ARMarker_t1554260723 * ____marker_4;
	// System.Boolean ARTrackedObject::visible
	bool ___visible_5;
	// System.Single ARTrackedObject::timeTrackingLost
	float ___timeTrackingLost_6;
	// System.Single ARTrackedObject::secondsToRemainVisible
	float ___secondsToRemainVisible_7;
	// System.Boolean ARTrackedObject::visibleOrRemain
	bool ___visibleOrRemain_8;
	// UnityEngine.GameObject ARTrackedObject::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_9;
	// System.String ARTrackedObject::_markerTag
	String_t* ____markerTag_10;

public:
	inline static int32_t get_offset_of__origin_3() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ____origin_3)); }
	inline AROrigin_t3335349585 * get__origin_3() const { return ____origin_3; }
	inline AROrigin_t3335349585 ** get_address_of__origin_3() { return &____origin_3; }
	inline void set__origin_3(AROrigin_t3335349585 * value)
	{
		____origin_3 = value;
		Il2CppCodeGenWriteBarrier(&____origin_3, value);
	}

	inline static int32_t get_offset_of__marker_4() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ____marker_4)); }
	inline ARMarker_t1554260723 * get__marker_4() const { return ____marker_4; }
	inline ARMarker_t1554260723 ** get_address_of__marker_4() { return &____marker_4; }
	inline void set__marker_4(ARMarker_t1554260723 * value)
	{
		____marker_4 = value;
		Il2CppCodeGenWriteBarrier(&____marker_4, value);
	}

	inline static int32_t get_offset_of_visible_5() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___visible_5)); }
	inline bool get_visible_5() const { return ___visible_5; }
	inline bool* get_address_of_visible_5() { return &___visible_5; }
	inline void set_visible_5(bool value)
	{
		___visible_5 = value;
	}

	inline static int32_t get_offset_of_timeTrackingLost_6() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___timeTrackingLost_6)); }
	inline float get_timeTrackingLost_6() const { return ___timeTrackingLost_6; }
	inline float* get_address_of_timeTrackingLost_6() { return &___timeTrackingLost_6; }
	inline void set_timeTrackingLost_6(float value)
	{
		___timeTrackingLost_6 = value;
	}

	inline static int32_t get_offset_of_secondsToRemainVisible_7() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___secondsToRemainVisible_7)); }
	inline float get_secondsToRemainVisible_7() const { return ___secondsToRemainVisible_7; }
	inline float* get_address_of_secondsToRemainVisible_7() { return &___secondsToRemainVisible_7; }
	inline void set_secondsToRemainVisible_7(float value)
	{
		___secondsToRemainVisible_7 = value;
	}

	inline static int32_t get_offset_of_visibleOrRemain_8() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___visibleOrRemain_8)); }
	inline bool get_visibleOrRemain_8() const { return ___visibleOrRemain_8; }
	inline bool* get_address_of_visibleOrRemain_8() { return &___visibleOrRemain_8; }
	inline void set_visibleOrRemain_8(bool value)
	{
		___visibleOrRemain_8 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_9() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___eventReceiver_9)); }
	inline GameObject_t1756533147 * get_eventReceiver_9() const { return ___eventReceiver_9; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_9() { return &___eventReceiver_9; }
	inline void set_eventReceiver_9(GameObject_t1756533147 * value)
	{
		___eventReceiver_9 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_9, value);
	}

	inline static int32_t get_offset_of__markerTag_10() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ____markerTag_10)); }
	inline String_t* get__markerTag_10() const { return ____markerTag_10; }
	inline String_t** get_address_of__markerTag_10() { return &____markerTag_10; }
	inline void set__markerTag_10(String_t* value)
	{
		____markerTag_10 = value;
		Il2CppCodeGenWriteBarrier(&____markerTag_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

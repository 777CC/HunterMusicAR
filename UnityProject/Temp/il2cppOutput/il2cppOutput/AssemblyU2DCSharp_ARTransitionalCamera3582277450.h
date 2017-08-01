#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ARTrackedCamera3950879424.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARTransitionalCamera
struct  ARTransitionalCamera_t3582277450  : public ARTrackedCamera_t3950879424
{
public:
	// UnityEngine.Vector3 ARTransitionalCamera::vrTargetPosition
	Vector3_t2243707580  ___vrTargetPosition_27;
	// UnityEngine.Quaternion ARTransitionalCamera::vrTargetRotation
	Quaternion_t4030073918  ___vrTargetRotation_28;
	// UnityEngine.GameObject ARTransitionalCamera::targetObject
	GameObject_t1756533147 * ___targetObject_29;
	// System.Single ARTransitionalCamera::transitionAmount
	float ___transitionAmount_30;
	// System.Single ARTransitionalCamera::movementRate
	float ___movementRate_31;
	// System.Single ARTransitionalCamera::vrObserverAzimuth
	float ___vrObserverAzimuth_32;
	// System.Single ARTransitionalCamera::vrObserverElevation
	float ___vrObserverElevation_33;
	// UnityEngine.Vector3 ARTransitionalCamera::vrObserverOffset
	Vector3_t2243707580  ___vrObserverOffset_34;
	// System.Boolean ARTransitionalCamera::automaticTransition
	bool ___automaticTransition_35;
	// System.Single ARTransitionalCamera::automaticTransitionDistance
	float ___automaticTransitionDistance_36;

public:
	inline static int32_t get_offset_of_vrTargetPosition_27() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___vrTargetPosition_27)); }
	inline Vector3_t2243707580  get_vrTargetPosition_27() const { return ___vrTargetPosition_27; }
	inline Vector3_t2243707580 * get_address_of_vrTargetPosition_27() { return &___vrTargetPosition_27; }
	inline void set_vrTargetPosition_27(Vector3_t2243707580  value)
	{
		___vrTargetPosition_27 = value;
	}

	inline static int32_t get_offset_of_vrTargetRotation_28() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___vrTargetRotation_28)); }
	inline Quaternion_t4030073918  get_vrTargetRotation_28() const { return ___vrTargetRotation_28; }
	inline Quaternion_t4030073918 * get_address_of_vrTargetRotation_28() { return &___vrTargetRotation_28; }
	inline void set_vrTargetRotation_28(Quaternion_t4030073918  value)
	{
		___vrTargetRotation_28 = value;
	}

	inline static int32_t get_offset_of_targetObject_29() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___targetObject_29)); }
	inline GameObject_t1756533147 * get_targetObject_29() const { return ___targetObject_29; }
	inline GameObject_t1756533147 ** get_address_of_targetObject_29() { return &___targetObject_29; }
	inline void set_targetObject_29(GameObject_t1756533147 * value)
	{
		___targetObject_29 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_29, value);
	}

	inline static int32_t get_offset_of_transitionAmount_30() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___transitionAmount_30)); }
	inline float get_transitionAmount_30() const { return ___transitionAmount_30; }
	inline float* get_address_of_transitionAmount_30() { return &___transitionAmount_30; }
	inline void set_transitionAmount_30(float value)
	{
		___transitionAmount_30 = value;
	}

	inline static int32_t get_offset_of_movementRate_31() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___movementRate_31)); }
	inline float get_movementRate_31() const { return ___movementRate_31; }
	inline float* get_address_of_movementRate_31() { return &___movementRate_31; }
	inline void set_movementRate_31(float value)
	{
		___movementRate_31 = value;
	}

	inline static int32_t get_offset_of_vrObserverAzimuth_32() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___vrObserverAzimuth_32)); }
	inline float get_vrObserverAzimuth_32() const { return ___vrObserverAzimuth_32; }
	inline float* get_address_of_vrObserverAzimuth_32() { return &___vrObserverAzimuth_32; }
	inline void set_vrObserverAzimuth_32(float value)
	{
		___vrObserverAzimuth_32 = value;
	}

	inline static int32_t get_offset_of_vrObserverElevation_33() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___vrObserverElevation_33)); }
	inline float get_vrObserverElevation_33() const { return ___vrObserverElevation_33; }
	inline float* get_address_of_vrObserverElevation_33() { return &___vrObserverElevation_33; }
	inline void set_vrObserverElevation_33(float value)
	{
		___vrObserverElevation_33 = value;
	}

	inline static int32_t get_offset_of_vrObserverOffset_34() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___vrObserverOffset_34)); }
	inline Vector3_t2243707580  get_vrObserverOffset_34() const { return ___vrObserverOffset_34; }
	inline Vector3_t2243707580 * get_address_of_vrObserverOffset_34() { return &___vrObserverOffset_34; }
	inline void set_vrObserverOffset_34(Vector3_t2243707580  value)
	{
		___vrObserverOffset_34 = value;
	}

	inline static int32_t get_offset_of_automaticTransition_35() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___automaticTransition_35)); }
	inline bool get_automaticTransition_35() const { return ___automaticTransition_35; }
	inline bool* get_address_of_automaticTransition_35() { return &___automaticTransition_35; }
	inline void set_automaticTransition_35(bool value)
	{
		___automaticTransition_35 = value;
	}

	inline static int32_t get_offset_of_automaticTransitionDistance_36() { return static_cast<int32_t>(offsetof(ARTransitionalCamera_t3582277450, ___automaticTransitionDistance_36)); }
	inline float get_automaticTransitionDistance_36() const { return ___automaticTransitionDistance_36; }
	inline float* get_address_of_automaticTransitionDistance_36() { return &___automaticTransitionDistance_36; }
	inline void set_automaticTransitionDistance_36(float value)
	{
		___automaticTransitionDistance_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

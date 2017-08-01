#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARPose
struct  ARPose_t2822229314 
{
public:
	// UnityEngine.Quaternion ARPose::Rot
	Quaternion_t4030073918  ___Rot_0;
	// UnityEngine.Vector3 ARPose::Pos
	Vector3_t2243707580  ___Pos_1;
	// System.Single ARPose::deltaTime
	float ___deltaTime_2;

public:
	inline static int32_t get_offset_of_Rot_0() { return static_cast<int32_t>(offsetof(ARPose_t2822229314, ___Rot_0)); }
	inline Quaternion_t4030073918  get_Rot_0() const { return ___Rot_0; }
	inline Quaternion_t4030073918 * get_address_of_Rot_0() { return &___Rot_0; }
	inline void set_Rot_0(Quaternion_t4030073918  value)
	{
		___Rot_0 = value;
	}

	inline static int32_t get_offset_of_Pos_1() { return static_cast<int32_t>(offsetof(ARPose_t2822229314, ___Pos_1)); }
	inline Vector3_t2243707580  get_Pos_1() const { return ___Pos_1; }
	inline Vector3_t2243707580 * get_address_of_Pos_1() { return &___Pos_1; }
	inline void set_Pos_1(Vector3_t2243707580  value)
	{
		___Pos_1 = value;
	}

	inline static int32_t get_offset_of_deltaTime_2() { return static_cast<int32_t>(offsetof(ARPose_t2822229314, ___deltaTime_2)); }
	inline float get_deltaTime_2() const { return ___deltaTime_2; }
	inline float* get_address_of_deltaTime_2() { return &___deltaTime_2; }
	inline void set_deltaTime_2(float value)
	{
		___deltaTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

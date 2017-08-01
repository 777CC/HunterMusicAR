#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARPattern
struct  ARPattern_t3906840165  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D ARPattern::texture
	Texture2D_t3542995729 * ___texture_0;
	// UnityEngine.Matrix4x4 ARPattern::matrix
	Matrix4x4_t2933234003  ___matrix_1;
	// System.Single ARPattern::width
	float ___width_2;
	// System.Single ARPattern::height
	float ___height_3;
	// System.Int32 ARPattern::imageSizeX
	int32_t ___imageSizeX_4;
	// System.Int32 ARPattern::imageSizeY
	int32_t ___imageSizeY_5;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(ARPattern_t3906840165, ___texture_0)); }
	inline Texture2D_t3542995729 * get_texture_0() const { return ___texture_0; }
	inline Texture2D_t3542995729 ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture2D_t3542995729 * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___texture_0, value);
	}

	inline static int32_t get_offset_of_matrix_1() { return static_cast<int32_t>(offsetof(ARPattern_t3906840165, ___matrix_1)); }
	inline Matrix4x4_t2933234003  get_matrix_1() const { return ___matrix_1; }
	inline Matrix4x4_t2933234003 * get_address_of_matrix_1() { return &___matrix_1; }
	inline void set_matrix_1(Matrix4x4_t2933234003  value)
	{
		___matrix_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(ARPattern_t3906840165, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(ARPattern_t3906840165, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_imageSizeX_4() { return static_cast<int32_t>(offsetof(ARPattern_t3906840165, ___imageSizeX_4)); }
	inline int32_t get_imageSizeX_4() const { return ___imageSizeX_4; }
	inline int32_t* get_address_of_imageSizeX_4() { return &___imageSizeX_4; }
	inline void set_imageSizeX_4(int32_t value)
	{
		___imageSizeX_4 = value;
	}

	inline static int32_t get_offset_of_imageSizeY_5() { return static_cast<int32_t>(offsetof(ARPattern_t3906840165, ___imageSizeY_5)); }
	inline int32_t get_imageSizeY_5() const { return ___imageSizeY_5; }
	inline int32_t* get_address_of_imageSizeY_5() { return &___imageSizeY_5; }
	inline void set_imageSizeY_5(int32_t value)
	{
		___imageSizeY_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// Member
struct Member_t2771097690;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Memberinfo
struct  Memberinfo_t2572616686  : public Il2CppObject
{
public:
	// Member Memberinfo::<Member>k__BackingField
	Member_t2771097690 * ___U3CMemberU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Memberinfo_t2572616686, ___U3CMemberU3Ek__BackingField_2)); }
	inline Member_t2771097690 * get_U3CMemberU3Ek__BackingField_2() const { return ___U3CMemberU3Ek__BackingField_2; }
	inline Member_t2771097690 ** get_address_of_U3CMemberU3Ek__BackingField_2() { return &___U3CMemberU3Ek__BackingField_2; }
	inline void set_U3CMemberU3Ek__BackingField_2(Member_t2771097690 * value)
	{
		___U3CMemberU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMemberU3Ek__BackingField_2, value);
	}
};

struct Memberinfo_t2572616686_StaticFields
{
public:
	// Member Memberinfo::instance
	Member_t2771097690 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(Memberinfo_t2572616686_StaticFields, ___instance_1)); }
	inline Member_t2771097690 * get_instance_1() const { return ___instance_1; }
	inline Member_t2771097690 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(Member_t2771097690 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

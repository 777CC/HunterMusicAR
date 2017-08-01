#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle3409268066.h"

// PluginFunctions/LogCallback
struct LogCallback_t2143553514;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PluginFunctions
struct  PluginFunctions_t2887339240  : public Il2CppObject
{
public:

public:
};

struct PluginFunctions_t2887339240_StaticFields
{
public:
	// System.Boolean PluginFunctions::inited
	bool ___inited_0;
	// PluginFunctions/LogCallback PluginFunctions::logCallback
	LogCallback_t2143553514 * ___logCallback_1;
	// System.Runtime.InteropServices.GCHandle PluginFunctions::logCallbackGCH
	GCHandle_t3409268066  ___logCallbackGCH_2;

public:
	inline static int32_t get_offset_of_inited_0() { return static_cast<int32_t>(offsetof(PluginFunctions_t2887339240_StaticFields, ___inited_0)); }
	inline bool get_inited_0() const { return ___inited_0; }
	inline bool* get_address_of_inited_0() { return &___inited_0; }
	inline void set_inited_0(bool value)
	{
		___inited_0 = value;
	}

	inline static int32_t get_offset_of_logCallback_1() { return static_cast<int32_t>(offsetof(PluginFunctions_t2887339240_StaticFields, ___logCallback_1)); }
	inline LogCallback_t2143553514 * get_logCallback_1() const { return ___logCallback_1; }
	inline LogCallback_t2143553514 ** get_address_of_logCallback_1() { return &___logCallback_1; }
	inline void set_logCallback_1(LogCallback_t2143553514 * value)
	{
		___logCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___logCallback_1, value);
	}

	inline static int32_t get_offset_of_logCallbackGCH_2() { return static_cast<int32_t>(offsetof(PluginFunctions_t2887339240_StaticFields, ___logCallbackGCH_2)); }
	inline GCHandle_t3409268066  get_logCallbackGCH_2() const { return ___logCallbackGCH_2; }
	inline GCHandle_t3409268066 * get_address_of_logCallbackGCH_2() { return &___logCallbackGCH_2; }
	inline void set_logCallbackGCH_2(GCHandle_t3409268066  value)
	{
		___logCallbackGCH_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

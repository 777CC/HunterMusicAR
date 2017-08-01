#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// CharacterBehaviors
struct CharacterBehaviors_t674834278;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GloveScript
struct  GloveScript_t3172908102  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GloveScript::hitPoof
	GameObject_t1756533147 * ___hitPoof_2;
	// CharacterBehaviors GloveScript::characterBehvaiors
	CharacterBehaviors_t674834278 * ___characterBehvaiors_3;

public:
	inline static int32_t get_offset_of_hitPoof_2() { return static_cast<int32_t>(offsetof(GloveScript_t3172908102, ___hitPoof_2)); }
	inline GameObject_t1756533147 * get_hitPoof_2() const { return ___hitPoof_2; }
	inline GameObject_t1756533147 ** get_address_of_hitPoof_2() { return &___hitPoof_2; }
	inline void set_hitPoof_2(GameObject_t1756533147 * value)
	{
		___hitPoof_2 = value;
		Il2CppCodeGenWriteBarrier(&___hitPoof_2, value);
	}

	inline static int32_t get_offset_of_characterBehvaiors_3() { return static_cast<int32_t>(offsetof(GloveScript_t3172908102, ___characterBehvaiors_3)); }
	inline CharacterBehaviors_t674834278 * get_characterBehvaiors_3() const { return ___characterBehvaiors_3; }
	inline CharacterBehaviors_t674834278 ** get_address_of_characterBehvaiors_3() { return &___characterBehvaiors_3; }
	inline void set_characterBehvaiors_3(CharacterBehaviors_t674834278 * value)
	{
		___characterBehvaiors_3 = value;
		Il2CppCodeGenWriteBarrier(&___characterBehvaiors_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

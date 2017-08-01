#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// FisticuffsController
struct FisticuffsController_t308090938;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Transform
struct Transform_t3275118058;
// CharacterBehaviors
struct CharacterBehaviors_t674834278;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FisticuffsController
struct  FisticuffsController_t308090938  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 FisticuffsController::maxNumberOfCardsInPlay
	int32_t ___maxNumberOfCardsInPlay_3;
	// System.Int32 FisticuffsController::cardsNeededForGameToStart
	int32_t ___cardsNeededForGameToStart_4;
	// UnityEngine.GameObject FisticuffsController::bell
	GameObject_t1756533147 * ___bell_5;
	// UnityEngine.GameObject FisticuffsController::megaHit
	GameObject_t1756533147 * ___megaHit_6;
	// UnityEngine.GameObject FisticuffsController::megaHitParticles
	GameObject_t1756533147 * ___megaHitParticles_7;
	// UnityEngine.AudioClip FisticuffsController::pop
	AudioClip_t1932558630 * ___pop_8;
	// UnityEngine.AudioClip FisticuffsController::punchHit
	AudioClip_t1932558630 * ___punchHit_9;
	// UnityEngine.AudioClip FisticuffsController::punchMiss
	AudioClip_t1932558630 * ___punchMiss_10;
	// UnityEngine.AudioClip FisticuffsController::tada
	AudioClip_t1932558630 * ___tada_11;
	// UnityEngine.AudioClip FisticuffsController::crash
	AudioClip_t1932558630 * ___crash_12;
	// UnityEngine.AudioClip FisticuffsController::victory
	AudioClip_t1932558630 * ___victory_13;
	// UnityEngine.AudioClip FisticuffsController::hitExplosion
	AudioClip_t1932558630 * ___hitExplosion_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> FisticuffsController::cardsInPlay
	List_1_t1125654279 * ___cardsInPlay_15;
	// System.Boolean FisticuffsController::ready
	bool ___ready_16;
	// System.Single FisticuffsController::timeAllowedBeforeReset
	float ___timeAllowedBeforeReset_17;
	// UnityEngine.AudioSource FisticuffsController::oneShotAudio
	AudioSource_t1135106623 * ___oneShotAudio_18;
	// UnityEngine.AudioSource FisticuffsController::crowdAudio
	AudioSource_t1135106623 * ___crowdAudio_19;
	// System.Single FisticuffsController::megaDamageAmount
	float ___megaDamageAmount_20;
	// System.Boolean FisticuffsController::gameHasStarted
	bool ___gameHasStarted_21;
	// System.Boolean FisticuffsController::gameIsDone
	bool ___gameIsDone_22;
	// UnityEngine.Transform FisticuffsController::character1
	Transform_t3275118058 * ___character1_23;
	// UnityEngine.Transform FisticuffsController::character2
	Transform_t3275118058 * ___character2_24;
	// CharacterBehaviors FisticuffsController::char1behaviors
	CharacterBehaviors_t674834278 * ___char1behaviors_25;
	// CharacterBehaviors FisticuffsController::char2behaviors
	CharacterBehaviors_t674834278 * ___char2behaviors_26;

public:
	inline static int32_t get_offset_of_maxNumberOfCardsInPlay_3() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___maxNumberOfCardsInPlay_3)); }
	inline int32_t get_maxNumberOfCardsInPlay_3() const { return ___maxNumberOfCardsInPlay_3; }
	inline int32_t* get_address_of_maxNumberOfCardsInPlay_3() { return &___maxNumberOfCardsInPlay_3; }
	inline void set_maxNumberOfCardsInPlay_3(int32_t value)
	{
		___maxNumberOfCardsInPlay_3 = value;
	}

	inline static int32_t get_offset_of_cardsNeededForGameToStart_4() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___cardsNeededForGameToStart_4)); }
	inline int32_t get_cardsNeededForGameToStart_4() const { return ___cardsNeededForGameToStart_4; }
	inline int32_t* get_address_of_cardsNeededForGameToStart_4() { return &___cardsNeededForGameToStart_4; }
	inline void set_cardsNeededForGameToStart_4(int32_t value)
	{
		___cardsNeededForGameToStart_4 = value;
	}

	inline static int32_t get_offset_of_bell_5() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___bell_5)); }
	inline GameObject_t1756533147 * get_bell_5() const { return ___bell_5; }
	inline GameObject_t1756533147 ** get_address_of_bell_5() { return &___bell_5; }
	inline void set_bell_5(GameObject_t1756533147 * value)
	{
		___bell_5 = value;
		Il2CppCodeGenWriteBarrier(&___bell_5, value);
	}

	inline static int32_t get_offset_of_megaHit_6() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___megaHit_6)); }
	inline GameObject_t1756533147 * get_megaHit_6() const { return ___megaHit_6; }
	inline GameObject_t1756533147 ** get_address_of_megaHit_6() { return &___megaHit_6; }
	inline void set_megaHit_6(GameObject_t1756533147 * value)
	{
		___megaHit_6 = value;
		Il2CppCodeGenWriteBarrier(&___megaHit_6, value);
	}

	inline static int32_t get_offset_of_megaHitParticles_7() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___megaHitParticles_7)); }
	inline GameObject_t1756533147 * get_megaHitParticles_7() const { return ___megaHitParticles_7; }
	inline GameObject_t1756533147 ** get_address_of_megaHitParticles_7() { return &___megaHitParticles_7; }
	inline void set_megaHitParticles_7(GameObject_t1756533147 * value)
	{
		___megaHitParticles_7 = value;
		Il2CppCodeGenWriteBarrier(&___megaHitParticles_7, value);
	}

	inline static int32_t get_offset_of_pop_8() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___pop_8)); }
	inline AudioClip_t1932558630 * get_pop_8() const { return ___pop_8; }
	inline AudioClip_t1932558630 ** get_address_of_pop_8() { return &___pop_8; }
	inline void set_pop_8(AudioClip_t1932558630 * value)
	{
		___pop_8 = value;
		Il2CppCodeGenWriteBarrier(&___pop_8, value);
	}

	inline static int32_t get_offset_of_punchHit_9() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___punchHit_9)); }
	inline AudioClip_t1932558630 * get_punchHit_9() const { return ___punchHit_9; }
	inline AudioClip_t1932558630 ** get_address_of_punchHit_9() { return &___punchHit_9; }
	inline void set_punchHit_9(AudioClip_t1932558630 * value)
	{
		___punchHit_9 = value;
		Il2CppCodeGenWriteBarrier(&___punchHit_9, value);
	}

	inline static int32_t get_offset_of_punchMiss_10() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___punchMiss_10)); }
	inline AudioClip_t1932558630 * get_punchMiss_10() const { return ___punchMiss_10; }
	inline AudioClip_t1932558630 ** get_address_of_punchMiss_10() { return &___punchMiss_10; }
	inline void set_punchMiss_10(AudioClip_t1932558630 * value)
	{
		___punchMiss_10 = value;
		Il2CppCodeGenWriteBarrier(&___punchMiss_10, value);
	}

	inline static int32_t get_offset_of_tada_11() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___tada_11)); }
	inline AudioClip_t1932558630 * get_tada_11() const { return ___tada_11; }
	inline AudioClip_t1932558630 ** get_address_of_tada_11() { return &___tada_11; }
	inline void set_tada_11(AudioClip_t1932558630 * value)
	{
		___tada_11 = value;
		Il2CppCodeGenWriteBarrier(&___tada_11, value);
	}

	inline static int32_t get_offset_of_crash_12() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___crash_12)); }
	inline AudioClip_t1932558630 * get_crash_12() const { return ___crash_12; }
	inline AudioClip_t1932558630 ** get_address_of_crash_12() { return &___crash_12; }
	inline void set_crash_12(AudioClip_t1932558630 * value)
	{
		___crash_12 = value;
		Il2CppCodeGenWriteBarrier(&___crash_12, value);
	}

	inline static int32_t get_offset_of_victory_13() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___victory_13)); }
	inline AudioClip_t1932558630 * get_victory_13() const { return ___victory_13; }
	inline AudioClip_t1932558630 ** get_address_of_victory_13() { return &___victory_13; }
	inline void set_victory_13(AudioClip_t1932558630 * value)
	{
		___victory_13 = value;
		Il2CppCodeGenWriteBarrier(&___victory_13, value);
	}

	inline static int32_t get_offset_of_hitExplosion_14() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___hitExplosion_14)); }
	inline AudioClip_t1932558630 * get_hitExplosion_14() const { return ___hitExplosion_14; }
	inline AudioClip_t1932558630 ** get_address_of_hitExplosion_14() { return &___hitExplosion_14; }
	inline void set_hitExplosion_14(AudioClip_t1932558630 * value)
	{
		___hitExplosion_14 = value;
		Il2CppCodeGenWriteBarrier(&___hitExplosion_14, value);
	}

	inline static int32_t get_offset_of_cardsInPlay_15() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___cardsInPlay_15)); }
	inline List_1_t1125654279 * get_cardsInPlay_15() const { return ___cardsInPlay_15; }
	inline List_1_t1125654279 ** get_address_of_cardsInPlay_15() { return &___cardsInPlay_15; }
	inline void set_cardsInPlay_15(List_1_t1125654279 * value)
	{
		___cardsInPlay_15 = value;
		Il2CppCodeGenWriteBarrier(&___cardsInPlay_15, value);
	}

	inline static int32_t get_offset_of_ready_16() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___ready_16)); }
	inline bool get_ready_16() const { return ___ready_16; }
	inline bool* get_address_of_ready_16() { return &___ready_16; }
	inline void set_ready_16(bool value)
	{
		___ready_16 = value;
	}

	inline static int32_t get_offset_of_timeAllowedBeforeReset_17() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___timeAllowedBeforeReset_17)); }
	inline float get_timeAllowedBeforeReset_17() const { return ___timeAllowedBeforeReset_17; }
	inline float* get_address_of_timeAllowedBeforeReset_17() { return &___timeAllowedBeforeReset_17; }
	inline void set_timeAllowedBeforeReset_17(float value)
	{
		___timeAllowedBeforeReset_17 = value;
	}

	inline static int32_t get_offset_of_oneShotAudio_18() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___oneShotAudio_18)); }
	inline AudioSource_t1135106623 * get_oneShotAudio_18() const { return ___oneShotAudio_18; }
	inline AudioSource_t1135106623 ** get_address_of_oneShotAudio_18() { return &___oneShotAudio_18; }
	inline void set_oneShotAudio_18(AudioSource_t1135106623 * value)
	{
		___oneShotAudio_18 = value;
		Il2CppCodeGenWriteBarrier(&___oneShotAudio_18, value);
	}

	inline static int32_t get_offset_of_crowdAudio_19() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___crowdAudio_19)); }
	inline AudioSource_t1135106623 * get_crowdAudio_19() const { return ___crowdAudio_19; }
	inline AudioSource_t1135106623 ** get_address_of_crowdAudio_19() { return &___crowdAudio_19; }
	inline void set_crowdAudio_19(AudioSource_t1135106623 * value)
	{
		___crowdAudio_19 = value;
		Il2CppCodeGenWriteBarrier(&___crowdAudio_19, value);
	}

	inline static int32_t get_offset_of_megaDamageAmount_20() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___megaDamageAmount_20)); }
	inline float get_megaDamageAmount_20() const { return ___megaDamageAmount_20; }
	inline float* get_address_of_megaDamageAmount_20() { return &___megaDamageAmount_20; }
	inline void set_megaDamageAmount_20(float value)
	{
		___megaDamageAmount_20 = value;
	}

	inline static int32_t get_offset_of_gameHasStarted_21() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___gameHasStarted_21)); }
	inline bool get_gameHasStarted_21() const { return ___gameHasStarted_21; }
	inline bool* get_address_of_gameHasStarted_21() { return &___gameHasStarted_21; }
	inline void set_gameHasStarted_21(bool value)
	{
		___gameHasStarted_21 = value;
	}

	inline static int32_t get_offset_of_gameIsDone_22() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___gameIsDone_22)); }
	inline bool get_gameIsDone_22() const { return ___gameIsDone_22; }
	inline bool* get_address_of_gameIsDone_22() { return &___gameIsDone_22; }
	inline void set_gameIsDone_22(bool value)
	{
		___gameIsDone_22 = value;
	}

	inline static int32_t get_offset_of_character1_23() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___character1_23)); }
	inline Transform_t3275118058 * get_character1_23() const { return ___character1_23; }
	inline Transform_t3275118058 ** get_address_of_character1_23() { return &___character1_23; }
	inline void set_character1_23(Transform_t3275118058 * value)
	{
		___character1_23 = value;
		Il2CppCodeGenWriteBarrier(&___character1_23, value);
	}

	inline static int32_t get_offset_of_character2_24() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___character2_24)); }
	inline Transform_t3275118058 * get_character2_24() const { return ___character2_24; }
	inline Transform_t3275118058 ** get_address_of_character2_24() { return &___character2_24; }
	inline void set_character2_24(Transform_t3275118058 * value)
	{
		___character2_24 = value;
		Il2CppCodeGenWriteBarrier(&___character2_24, value);
	}

	inline static int32_t get_offset_of_char1behaviors_25() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___char1behaviors_25)); }
	inline CharacterBehaviors_t674834278 * get_char1behaviors_25() const { return ___char1behaviors_25; }
	inline CharacterBehaviors_t674834278 ** get_address_of_char1behaviors_25() { return &___char1behaviors_25; }
	inline void set_char1behaviors_25(CharacterBehaviors_t674834278 * value)
	{
		___char1behaviors_25 = value;
		Il2CppCodeGenWriteBarrier(&___char1behaviors_25, value);
	}

	inline static int32_t get_offset_of_char2behaviors_26() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938, ___char2behaviors_26)); }
	inline CharacterBehaviors_t674834278 * get_char2behaviors_26() const { return ___char2behaviors_26; }
	inline CharacterBehaviors_t674834278 ** get_address_of_char2behaviors_26() { return &___char2behaviors_26; }
	inline void set_char2behaviors_26(CharacterBehaviors_t674834278 * value)
	{
		___char2behaviors_26 = value;
		Il2CppCodeGenWriteBarrier(&___char2behaviors_26, value);
	}
};

struct FisticuffsController_t308090938_StaticFields
{
public:
	// FisticuffsController FisticuffsController::<Instance>k__BackingField
	FisticuffsController_t308090938 * ___U3CInstanceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FisticuffsController_t308090938_StaticFields, ___U3CInstanceU3Ek__BackingField_2)); }
	inline FisticuffsController_t308090938 * get_U3CInstanceU3Ek__BackingField_2() const { return ___U3CInstanceU3Ek__BackingField_2; }
	inline FisticuffsController_t308090938 ** get_address_of_U3CInstanceU3Ek__BackingField_2() { return &___U3CInstanceU3Ek__BackingField_2; }
	inline void set_U3CInstanceU3Ek__BackingField_2(FisticuffsController_t308090938 * value)
	{
		___U3CInstanceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

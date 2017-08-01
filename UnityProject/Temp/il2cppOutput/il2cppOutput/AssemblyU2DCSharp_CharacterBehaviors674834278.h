#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_CharacterBehaviors_PopupMode1897899772.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animation
struct Animation_t2068071072;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterBehaviors
struct  CharacterBehaviors_t674834278  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CharacterBehaviors::originalTouchPosY
	float ___originalTouchPosY_3;
	// System.Single CharacterBehaviors::popTargetHeight
	float ___popTargetHeight_4;
	// CharacterBehaviors/PopupMode CharacterBehaviors::popUpMode
	int32_t ___popUpMode_5;
	// System.Boolean CharacterBehaviors::imTouched
	bool ___imTouched_6;
	// System.Boolean CharacterBehaviors::okToPlaySounds
	bool ___okToPlaySounds_7;
	// System.Boolean CharacterBehaviors::iLost
	bool ___iLost_8;
	// System.Single CharacterBehaviors::punchTimer
	float ___punchTimer_9;
	// System.Single CharacterBehaviors::punchStartTime
	float ___punchStartTime_10;
	// System.Single CharacterBehaviors::maxPunchTime
	float ___maxPunchTime_11;
	// System.Boolean CharacterBehaviors::punchTimerHasStarted
	bool ___punchTimerHasStarted_12;
	// System.Boolean CharacterBehaviors::glovesShouldRetract
	bool ___glovesShouldRetract_13;
	// UnityEngine.Transform CharacterBehaviors::punchingGlove
	Transform_t3275118058 * ___punchingGlove_14;
	// UnityEngine.Vector3 CharacterBehaviors::punchingGloveStartPosition
	Vector3_t2243707580  ___punchingGloveStartPosition_15;
	// System.Single CharacterBehaviors::healthScaleFactor
	float ___healthScaleFactor_16;
	// UnityEngine.Vector3 CharacterBehaviors::healthOriginalScale
	Vector3_t2243707580  ___healthOriginalScale_17;
	// System.Single CharacterBehaviors::totalHealthPoints
	float ___totalHealthPoints_18;
	// UnityEngine.GameObject CharacterBehaviors::myFace
	GameObject_t1756533147 * ___myFace_19;
	// UnityEngine.Transform CharacterBehaviors::leftShoulderAttachPoint
	Transform_t3275118058 * ___leftShoulderAttachPoint_20;
	// UnityEngine.Transform CharacterBehaviors::rightShoulderAttachPoint
	Transform_t3275118058 * ___rightShoulderAttachPoint_21;
	// UnityEngine.Transform CharacterBehaviors::leftGloveAttachPoint
	Transform_t3275118058 * ___leftGloveAttachPoint_22;
	// UnityEngine.Transform CharacterBehaviors::rightGloveAttachPoint
	Transform_t3275118058 * ___rightGloveAttachPoint_23;
	// System.Int32 CharacterBehaviors::myPositionInControllerList
	int32_t ___myPositionInControllerList_24;
	// UnityEngine.GameObject CharacterBehaviors::myAttributes
	GameObject_t1756533147 * ___myAttributes_25;
	// UnityEngine.GameObject CharacterBehaviors::myHealthHolder
	GameObject_t1756533147 * ___myHealthHolder_26;
	// UnityEngine.GameObject CharacterBehaviors::myHealthScaler
	GameObject_t1756533147 * ___myHealthScaler_27;
	// UnityEngine.GameObject CharacterBehaviors::targetPointColliderObj
	GameObject_t1756533147 * ___targetPointColliderObj_28;
	// UnityEngine.GameObject CharacterBehaviors::myTempTarget
	GameObject_t1756533147 * ___myTempTarget_29;
	// UnityEngine.Transform CharacterBehaviors::opponentTargetPoint
	Transform_t3275118058 * ___opponentTargetPoint_30;
	// UnityEngine.GameObject CharacterBehaviors::myLeftGloveHolder
	GameObject_t1756533147 * ___myLeftGloveHolder_31;
	// UnityEngine.GameObject CharacterBehaviors::myRightGloveHolder
	GameObject_t1756533147 * ___myRightGloveHolder_32;
	// UnityEngine.Transform CharacterBehaviors::leftGlove
	Transform_t3275118058 * ___leftGlove_33;
	// UnityEngine.Transform CharacterBehaviors::rightGlove
	Transform_t3275118058 * ___rightGlove_34;
	// UnityEngine.Vector3 CharacterBehaviors::origLeftGloveLocalPos
	Vector3_t2243707580  ___origLeftGloveLocalPos_35;
	// UnityEngine.Vector3 CharacterBehaviors::origRightGloveLocalPos
	Vector3_t2243707580  ___origRightGloveLocalPos_36;
	// System.Single CharacterBehaviors::startLocalPosY
	float ___startLocalPosY_37;
	// System.Int32 CharacterBehaviors::punchPhase
	int32_t ___punchPhase_38;
	// System.Boolean CharacterBehaviors::okToAnimate
	bool ___okToAnimate_39;
	// System.Single CharacterBehaviors::damageGivenPerPunch
	float ___damageGivenPerPunch_40;
	// System.Single CharacterBehaviors::attackTimeIncrement
	float ___attackTimeIncrement_41;
	// System.Single CharacterBehaviors::punchSpeedModifier
	float ___punchSpeedModifier_42;
	// System.Single CharacterBehaviors::defenseModifier
	float ___defenseModifier_43;
	// System.Int32 CharacterBehaviors::chanceOfMassiveHit
	int32_t ___chanceOfMassiveHit_44;
	// System.Single CharacterBehaviors::modifiedAttackTimeIncrement
	float ___modifiedAttackTimeIncrement_45;
	// System.Boolean CharacterBehaviors::allowTouch
	bool ___allowTouch_46;
	// System.Boolean CharacterBehaviors::loseAnimPlayed
	bool ___loseAnimPlayed_47;
	// UnityEngine.Vector2 CharacterBehaviors::lastTouchPos
	Vector2_t2243707579  ___lastTouchPos_48;
	// System.Boolean CharacterBehaviors::lastTouchValid
	bool ___lastTouchValid_49;
	// UnityEngine.Animation CharacterBehaviors::characterAnimation
	Animation_t2068071072 * ___characterAnimation_50;
	// UnityEngine.Animation CharacterBehaviors::faceAnimation
	Animation_t2068071072 * ___faceAnimation_51;

public:
	inline static int32_t get_offset_of_originalTouchPosY_3() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___originalTouchPosY_3)); }
	inline float get_originalTouchPosY_3() const { return ___originalTouchPosY_3; }
	inline float* get_address_of_originalTouchPosY_3() { return &___originalTouchPosY_3; }
	inline void set_originalTouchPosY_3(float value)
	{
		___originalTouchPosY_3 = value;
	}

	inline static int32_t get_offset_of_popTargetHeight_4() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___popTargetHeight_4)); }
	inline float get_popTargetHeight_4() const { return ___popTargetHeight_4; }
	inline float* get_address_of_popTargetHeight_4() { return &___popTargetHeight_4; }
	inline void set_popTargetHeight_4(float value)
	{
		___popTargetHeight_4 = value;
	}

	inline static int32_t get_offset_of_popUpMode_5() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___popUpMode_5)); }
	inline int32_t get_popUpMode_5() const { return ___popUpMode_5; }
	inline int32_t* get_address_of_popUpMode_5() { return &___popUpMode_5; }
	inline void set_popUpMode_5(int32_t value)
	{
		___popUpMode_5 = value;
	}

	inline static int32_t get_offset_of_imTouched_6() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___imTouched_6)); }
	inline bool get_imTouched_6() const { return ___imTouched_6; }
	inline bool* get_address_of_imTouched_6() { return &___imTouched_6; }
	inline void set_imTouched_6(bool value)
	{
		___imTouched_6 = value;
	}

	inline static int32_t get_offset_of_okToPlaySounds_7() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___okToPlaySounds_7)); }
	inline bool get_okToPlaySounds_7() const { return ___okToPlaySounds_7; }
	inline bool* get_address_of_okToPlaySounds_7() { return &___okToPlaySounds_7; }
	inline void set_okToPlaySounds_7(bool value)
	{
		___okToPlaySounds_7 = value;
	}

	inline static int32_t get_offset_of_iLost_8() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___iLost_8)); }
	inline bool get_iLost_8() const { return ___iLost_8; }
	inline bool* get_address_of_iLost_8() { return &___iLost_8; }
	inline void set_iLost_8(bool value)
	{
		___iLost_8 = value;
	}

	inline static int32_t get_offset_of_punchTimer_9() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___punchTimer_9)); }
	inline float get_punchTimer_9() const { return ___punchTimer_9; }
	inline float* get_address_of_punchTimer_9() { return &___punchTimer_9; }
	inline void set_punchTimer_9(float value)
	{
		___punchTimer_9 = value;
	}

	inline static int32_t get_offset_of_punchStartTime_10() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___punchStartTime_10)); }
	inline float get_punchStartTime_10() const { return ___punchStartTime_10; }
	inline float* get_address_of_punchStartTime_10() { return &___punchStartTime_10; }
	inline void set_punchStartTime_10(float value)
	{
		___punchStartTime_10 = value;
	}

	inline static int32_t get_offset_of_maxPunchTime_11() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___maxPunchTime_11)); }
	inline float get_maxPunchTime_11() const { return ___maxPunchTime_11; }
	inline float* get_address_of_maxPunchTime_11() { return &___maxPunchTime_11; }
	inline void set_maxPunchTime_11(float value)
	{
		___maxPunchTime_11 = value;
	}

	inline static int32_t get_offset_of_punchTimerHasStarted_12() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___punchTimerHasStarted_12)); }
	inline bool get_punchTimerHasStarted_12() const { return ___punchTimerHasStarted_12; }
	inline bool* get_address_of_punchTimerHasStarted_12() { return &___punchTimerHasStarted_12; }
	inline void set_punchTimerHasStarted_12(bool value)
	{
		___punchTimerHasStarted_12 = value;
	}

	inline static int32_t get_offset_of_glovesShouldRetract_13() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___glovesShouldRetract_13)); }
	inline bool get_glovesShouldRetract_13() const { return ___glovesShouldRetract_13; }
	inline bool* get_address_of_glovesShouldRetract_13() { return &___glovesShouldRetract_13; }
	inline void set_glovesShouldRetract_13(bool value)
	{
		___glovesShouldRetract_13 = value;
	}

	inline static int32_t get_offset_of_punchingGlove_14() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___punchingGlove_14)); }
	inline Transform_t3275118058 * get_punchingGlove_14() const { return ___punchingGlove_14; }
	inline Transform_t3275118058 ** get_address_of_punchingGlove_14() { return &___punchingGlove_14; }
	inline void set_punchingGlove_14(Transform_t3275118058 * value)
	{
		___punchingGlove_14 = value;
		Il2CppCodeGenWriteBarrier(&___punchingGlove_14, value);
	}

	inline static int32_t get_offset_of_punchingGloveStartPosition_15() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___punchingGloveStartPosition_15)); }
	inline Vector3_t2243707580  get_punchingGloveStartPosition_15() const { return ___punchingGloveStartPosition_15; }
	inline Vector3_t2243707580 * get_address_of_punchingGloveStartPosition_15() { return &___punchingGloveStartPosition_15; }
	inline void set_punchingGloveStartPosition_15(Vector3_t2243707580  value)
	{
		___punchingGloveStartPosition_15 = value;
	}

	inline static int32_t get_offset_of_healthScaleFactor_16() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___healthScaleFactor_16)); }
	inline float get_healthScaleFactor_16() const { return ___healthScaleFactor_16; }
	inline float* get_address_of_healthScaleFactor_16() { return &___healthScaleFactor_16; }
	inline void set_healthScaleFactor_16(float value)
	{
		___healthScaleFactor_16 = value;
	}

	inline static int32_t get_offset_of_healthOriginalScale_17() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___healthOriginalScale_17)); }
	inline Vector3_t2243707580  get_healthOriginalScale_17() const { return ___healthOriginalScale_17; }
	inline Vector3_t2243707580 * get_address_of_healthOriginalScale_17() { return &___healthOriginalScale_17; }
	inline void set_healthOriginalScale_17(Vector3_t2243707580  value)
	{
		___healthOriginalScale_17 = value;
	}

	inline static int32_t get_offset_of_totalHealthPoints_18() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___totalHealthPoints_18)); }
	inline float get_totalHealthPoints_18() const { return ___totalHealthPoints_18; }
	inline float* get_address_of_totalHealthPoints_18() { return &___totalHealthPoints_18; }
	inline void set_totalHealthPoints_18(float value)
	{
		___totalHealthPoints_18 = value;
	}

	inline static int32_t get_offset_of_myFace_19() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___myFace_19)); }
	inline GameObject_t1756533147 * get_myFace_19() const { return ___myFace_19; }
	inline GameObject_t1756533147 ** get_address_of_myFace_19() { return &___myFace_19; }
	inline void set_myFace_19(GameObject_t1756533147 * value)
	{
		___myFace_19 = value;
		Il2CppCodeGenWriteBarrier(&___myFace_19, value);
	}

	inline static int32_t get_offset_of_leftShoulderAttachPoint_20() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___leftShoulderAttachPoint_20)); }
	inline Transform_t3275118058 * get_leftShoulderAttachPoint_20() const { return ___leftShoulderAttachPoint_20; }
	inline Transform_t3275118058 ** get_address_of_leftShoulderAttachPoint_20() { return &___leftShoulderAttachPoint_20; }
	inline void set_leftShoulderAttachPoint_20(Transform_t3275118058 * value)
	{
		___leftShoulderAttachPoint_20 = value;
		Il2CppCodeGenWriteBarrier(&___leftShoulderAttachPoint_20, value);
	}

	inline static int32_t get_offset_of_rightShoulderAttachPoint_21() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___rightShoulderAttachPoint_21)); }
	inline Transform_t3275118058 * get_rightShoulderAttachPoint_21() const { return ___rightShoulderAttachPoint_21; }
	inline Transform_t3275118058 ** get_address_of_rightShoulderAttachPoint_21() { return &___rightShoulderAttachPoint_21; }
	inline void set_rightShoulderAttachPoint_21(Transform_t3275118058 * value)
	{
		___rightShoulderAttachPoint_21 = value;
		Il2CppCodeGenWriteBarrier(&___rightShoulderAttachPoint_21, value);
	}

	inline static int32_t get_offset_of_leftGloveAttachPoint_22() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___leftGloveAttachPoint_22)); }
	inline Transform_t3275118058 * get_leftGloveAttachPoint_22() const { return ___leftGloveAttachPoint_22; }
	inline Transform_t3275118058 ** get_address_of_leftGloveAttachPoint_22() { return &___leftGloveAttachPoint_22; }
	inline void set_leftGloveAttachPoint_22(Transform_t3275118058 * value)
	{
		___leftGloveAttachPoint_22 = value;
		Il2CppCodeGenWriteBarrier(&___leftGloveAttachPoint_22, value);
	}

	inline static int32_t get_offset_of_rightGloveAttachPoint_23() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___rightGloveAttachPoint_23)); }
	inline Transform_t3275118058 * get_rightGloveAttachPoint_23() const { return ___rightGloveAttachPoint_23; }
	inline Transform_t3275118058 ** get_address_of_rightGloveAttachPoint_23() { return &___rightGloveAttachPoint_23; }
	inline void set_rightGloveAttachPoint_23(Transform_t3275118058 * value)
	{
		___rightGloveAttachPoint_23 = value;
		Il2CppCodeGenWriteBarrier(&___rightGloveAttachPoint_23, value);
	}

	inline static int32_t get_offset_of_myPositionInControllerList_24() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___myPositionInControllerList_24)); }
	inline int32_t get_myPositionInControllerList_24() const { return ___myPositionInControllerList_24; }
	inline int32_t* get_address_of_myPositionInControllerList_24() { return &___myPositionInControllerList_24; }
	inline void set_myPositionInControllerList_24(int32_t value)
	{
		___myPositionInControllerList_24 = value;
	}

	inline static int32_t get_offset_of_myAttributes_25() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___myAttributes_25)); }
	inline GameObject_t1756533147 * get_myAttributes_25() const { return ___myAttributes_25; }
	inline GameObject_t1756533147 ** get_address_of_myAttributes_25() { return &___myAttributes_25; }
	inline void set_myAttributes_25(GameObject_t1756533147 * value)
	{
		___myAttributes_25 = value;
		Il2CppCodeGenWriteBarrier(&___myAttributes_25, value);
	}

	inline static int32_t get_offset_of_myHealthHolder_26() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___myHealthHolder_26)); }
	inline GameObject_t1756533147 * get_myHealthHolder_26() const { return ___myHealthHolder_26; }
	inline GameObject_t1756533147 ** get_address_of_myHealthHolder_26() { return &___myHealthHolder_26; }
	inline void set_myHealthHolder_26(GameObject_t1756533147 * value)
	{
		___myHealthHolder_26 = value;
		Il2CppCodeGenWriteBarrier(&___myHealthHolder_26, value);
	}

	inline static int32_t get_offset_of_myHealthScaler_27() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___myHealthScaler_27)); }
	inline GameObject_t1756533147 * get_myHealthScaler_27() const { return ___myHealthScaler_27; }
	inline GameObject_t1756533147 ** get_address_of_myHealthScaler_27() { return &___myHealthScaler_27; }
	inline void set_myHealthScaler_27(GameObject_t1756533147 * value)
	{
		___myHealthScaler_27 = value;
		Il2CppCodeGenWriteBarrier(&___myHealthScaler_27, value);
	}

	inline static int32_t get_offset_of_targetPointColliderObj_28() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___targetPointColliderObj_28)); }
	inline GameObject_t1756533147 * get_targetPointColliderObj_28() const { return ___targetPointColliderObj_28; }
	inline GameObject_t1756533147 ** get_address_of_targetPointColliderObj_28() { return &___targetPointColliderObj_28; }
	inline void set_targetPointColliderObj_28(GameObject_t1756533147 * value)
	{
		___targetPointColliderObj_28 = value;
		Il2CppCodeGenWriteBarrier(&___targetPointColliderObj_28, value);
	}

	inline static int32_t get_offset_of_myTempTarget_29() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___myTempTarget_29)); }
	inline GameObject_t1756533147 * get_myTempTarget_29() const { return ___myTempTarget_29; }
	inline GameObject_t1756533147 ** get_address_of_myTempTarget_29() { return &___myTempTarget_29; }
	inline void set_myTempTarget_29(GameObject_t1756533147 * value)
	{
		___myTempTarget_29 = value;
		Il2CppCodeGenWriteBarrier(&___myTempTarget_29, value);
	}

	inline static int32_t get_offset_of_opponentTargetPoint_30() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___opponentTargetPoint_30)); }
	inline Transform_t3275118058 * get_opponentTargetPoint_30() const { return ___opponentTargetPoint_30; }
	inline Transform_t3275118058 ** get_address_of_opponentTargetPoint_30() { return &___opponentTargetPoint_30; }
	inline void set_opponentTargetPoint_30(Transform_t3275118058 * value)
	{
		___opponentTargetPoint_30 = value;
		Il2CppCodeGenWriteBarrier(&___opponentTargetPoint_30, value);
	}

	inline static int32_t get_offset_of_myLeftGloveHolder_31() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___myLeftGloveHolder_31)); }
	inline GameObject_t1756533147 * get_myLeftGloveHolder_31() const { return ___myLeftGloveHolder_31; }
	inline GameObject_t1756533147 ** get_address_of_myLeftGloveHolder_31() { return &___myLeftGloveHolder_31; }
	inline void set_myLeftGloveHolder_31(GameObject_t1756533147 * value)
	{
		___myLeftGloveHolder_31 = value;
		Il2CppCodeGenWriteBarrier(&___myLeftGloveHolder_31, value);
	}

	inline static int32_t get_offset_of_myRightGloveHolder_32() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___myRightGloveHolder_32)); }
	inline GameObject_t1756533147 * get_myRightGloveHolder_32() const { return ___myRightGloveHolder_32; }
	inline GameObject_t1756533147 ** get_address_of_myRightGloveHolder_32() { return &___myRightGloveHolder_32; }
	inline void set_myRightGloveHolder_32(GameObject_t1756533147 * value)
	{
		___myRightGloveHolder_32 = value;
		Il2CppCodeGenWriteBarrier(&___myRightGloveHolder_32, value);
	}

	inline static int32_t get_offset_of_leftGlove_33() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___leftGlove_33)); }
	inline Transform_t3275118058 * get_leftGlove_33() const { return ___leftGlove_33; }
	inline Transform_t3275118058 ** get_address_of_leftGlove_33() { return &___leftGlove_33; }
	inline void set_leftGlove_33(Transform_t3275118058 * value)
	{
		___leftGlove_33 = value;
		Il2CppCodeGenWriteBarrier(&___leftGlove_33, value);
	}

	inline static int32_t get_offset_of_rightGlove_34() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___rightGlove_34)); }
	inline Transform_t3275118058 * get_rightGlove_34() const { return ___rightGlove_34; }
	inline Transform_t3275118058 ** get_address_of_rightGlove_34() { return &___rightGlove_34; }
	inline void set_rightGlove_34(Transform_t3275118058 * value)
	{
		___rightGlove_34 = value;
		Il2CppCodeGenWriteBarrier(&___rightGlove_34, value);
	}

	inline static int32_t get_offset_of_origLeftGloveLocalPos_35() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___origLeftGloveLocalPos_35)); }
	inline Vector3_t2243707580  get_origLeftGloveLocalPos_35() const { return ___origLeftGloveLocalPos_35; }
	inline Vector3_t2243707580 * get_address_of_origLeftGloveLocalPos_35() { return &___origLeftGloveLocalPos_35; }
	inline void set_origLeftGloveLocalPos_35(Vector3_t2243707580  value)
	{
		___origLeftGloveLocalPos_35 = value;
	}

	inline static int32_t get_offset_of_origRightGloveLocalPos_36() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___origRightGloveLocalPos_36)); }
	inline Vector3_t2243707580  get_origRightGloveLocalPos_36() const { return ___origRightGloveLocalPos_36; }
	inline Vector3_t2243707580 * get_address_of_origRightGloveLocalPos_36() { return &___origRightGloveLocalPos_36; }
	inline void set_origRightGloveLocalPos_36(Vector3_t2243707580  value)
	{
		___origRightGloveLocalPos_36 = value;
	}

	inline static int32_t get_offset_of_startLocalPosY_37() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___startLocalPosY_37)); }
	inline float get_startLocalPosY_37() const { return ___startLocalPosY_37; }
	inline float* get_address_of_startLocalPosY_37() { return &___startLocalPosY_37; }
	inline void set_startLocalPosY_37(float value)
	{
		___startLocalPosY_37 = value;
	}

	inline static int32_t get_offset_of_punchPhase_38() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___punchPhase_38)); }
	inline int32_t get_punchPhase_38() const { return ___punchPhase_38; }
	inline int32_t* get_address_of_punchPhase_38() { return &___punchPhase_38; }
	inline void set_punchPhase_38(int32_t value)
	{
		___punchPhase_38 = value;
	}

	inline static int32_t get_offset_of_okToAnimate_39() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___okToAnimate_39)); }
	inline bool get_okToAnimate_39() const { return ___okToAnimate_39; }
	inline bool* get_address_of_okToAnimate_39() { return &___okToAnimate_39; }
	inline void set_okToAnimate_39(bool value)
	{
		___okToAnimate_39 = value;
	}

	inline static int32_t get_offset_of_damageGivenPerPunch_40() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___damageGivenPerPunch_40)); }
	inline float get_damageGivenPerPunch_40() const { return ___damageGivenPerPunch_40; }
	inline float* get_address_of_damageGivenPerPunch_40() { return &___damageGivenPerPunch_40; }
	inline void set_damageGivenPerPunch_40(float value)
	{
		___damageGivenPerPunch_40 = value;
	}

	inline static int32_t get_offset_of_attackTimeIncrement_41() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___attackTimeIncrement_41)); }
	inline float get_attackTimeIncrement_41() const { return ___attackTimeIncrement_41; }
	inline float* get_address_of_attackTimeIncrement_41() { return &___attackTimeIncrement_41; }
	inline void set_attackTimeIncrement_41(float value)
	{
		___attackTimeIncrement_41 = value;
	}

	inline static int32_t get_offset_of_punchSpeedModifier_42() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___punchSpeedModifier_42)); }
	inline float get_punchSpeedModifier_42() const { return ___punchSpeedModifier_42; }
	inline float* get_address_of_punchSpeedModifier_42() { return &___punchSpeedModifier_42; }
	inline void set_punchSpeedModifier_42(float value)
	{
		___punchSpeedModifier_42 = value;
	}

	inline static int32_t get_offset_of_defenseModifier_43() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___defenseModifier_43)); }
	inline float get_defenseModifier_43() const { return ___defenseModifier_43; }
	inline float* get_address_of_defenseModifier_43() { return &___defenseModifier_43; }
	inline void set_defenseModifier_43(float value)
	{
		___defenseModifier_43 = value;
	}

	inline static int32_t get_offset_of_chanceOfMassiveHit_44() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___chanceOfMassiveHit_44)); }
	inline int32_t get_chanceOfMassiveHit_44() const { return ___chanceOfMassiveHit_44; }
	inline int32_t* get_address_of_chanceOfMassiveHit_44() { return &___chanceOfMassiveHit_44; }
	inline void set_chanceOfMassiveHit_44(int32_t value)
	{
		___chanceOfMassiveHit_44 = value;
	}

	inline static int32_t get_offset_of_modifiedAttackTimeIncrement_45() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___modifiedAttackTimeIncrement_45)); }
	inline float get_modifiedAttackTimeIncrement_45() const { return ___modifiedAttackTimeIncrement_45; }
	inline float* get_address_of_modifiedAttackTimeIncrement_45() { return &___modifiedAttackTimeIncrement_45; }
	inline void set_modifiedAttackTimeIncrement_45(float value)
	{
		___modifiedAttackTimeIncrement_45 = value;
	}

	inline static int32_t get_offset_of_allowTouch_46() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___allowTouch_46)); }
	inline bool get_allowTouch_46() const { return ___allowTouch_46; }
	inline bool* get_address_of_allowTouch_46() { return &___allowTouch_46; }
	inline void set_allowTouch_46(bool value)
	{
		___allowTouch_46 = value;
	}

	inline static int32_t get_offset_of_loseAnimPlayed_47() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___loseAnimPlayed_47)); }
	inline bool get_loseAnimPlayed_47() const { return ___loseAnimPlayed_47; }
	inline bool* get_address_of_loseAnimPlayed_47() { return &___loseAnimPlayed_47; }
	inline void set_loseAnimPlayed_47(bool value)
	{
		___loseAnimPlayed_47 = value;
	}

	inline static int32_t get_offset_of_lastTouchPos_48() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___lastTouchPos_48)); }
	inline Vector2_t2243707579  get_lastTouchPos_48() const { return ___lastTouchPos_48; }
	inline Vector2_t2243707579 * get_address_of_lastTouchPos_48() { return &___lastTouchPos_48; }
	inline void set_lastTouchPos_48(Vector2_t2243707579  value)
	{
		___lastTouchPos_48 = value;
	}

	inline static int32_t get_offset_of_lastTouchValid_49() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___lastTouchValid_49)); }
	inline bool get_lastTouchValid_49() const { return ___lastTouchValid_49; }
	inline bool* get_address_of_lastTouchValid_49() { return &___lastTouchValid_49; }
	inline void set_lastTouchValid_49(bool value)
	{
		___lastTouchValid_49 = value;
	}

	inline static int32_t get_offset_of_characterAnimation_50() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___characterAnimation_50)); }
	inline Animation_t2068071072 * get_characterAnimation_50() const { return ___characterAnimation_50; }
	inline Animation_t2068071072 ** get_address_of_characterAnimation_50() { return &___characterAnimation_50; }
	inline void set_characterAnimation_50(Animation_t2068071072 * value)
	{
		___characterAnimation_50 = value;
		Il2CppCodeGenWriteBarrier(&___characterAnimation_50, value);
	}

	inline static int32_t get_offset_of_faceAnimation_51() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278, ___faceAnimation_51)); }
	inline Animation_t2068071072 * get_faceAnimation_51() const { return ___faceAnimation_51; }
	inline Animation_t2068071072 ** get_address_of_faceAnimation_51() { return &___faceAnimation_51; }
	inline void set_faceAnimation_51(Animation_t2068071072 * value)
	{
		___faceAnimation_51 = value;
		Il2CppCodeGenWriteBarrier(&___faceAnimation_51, value);
	}
};

struct CharacterBehaviors_t674834278_StaticFields
{
public:
	// UnityEngine.Camera CharacterBehaviors::arCamera
	Camera_t189460977 * ___arCamera_2;

public:
	inline static int32_t get_offset_of_arCamera_2() { return static_cast<int32_t>(offsetof(CharacterBehaviors_t674834278_StaticFields, ___arCamera_2)); }
	inline Camera_t189460977 * get_arCamera_2() const { return ___arCamera_2; }
	inline Camera_t189460977 ** get_address_of_arCamera_2() { return &___arCamera_2; }
	inline void set_arCamera_2(Camera_t189460977 * value)
	{
		___arCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___arCamera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_ARCamera_ViewEye928886047.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Collections.Generic.List`1<ARPose>
struct List_1_t2191350446;
// System.String
struct String_t;
// AROrigin
struct AROrigin_t3335349585;
// ARMarker
struct ARMarker_t1554260723;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARCamera
struct  ARCamera_t431610428  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<ARPose> ARCamera::arPose
	List_1_t2191350446 * ___arPose_2;
	// AROrigin ARCamera::_origin
	AROrigin_t3335349585 * ____origin_5;
	// ARMarker ARCamera::_marker
	ARMarker_t1554260723 * ____marker_6;
	// UnityEngine.Vector3 ARCamera::arPosition
	Vector3_t2243707580  ___arPosition_7;
	// UnityEngine.Quaternion ARCamera::arRotation
	Quaternion_t4030073918  ___arRotation_8;
	// System.Boolean ARCamera::arVisible
	bool ___arVisible_9;
	// System.Single ARCamera::timeLastUpdate
	float ___timeLastUpdate_10;
	// System.Single ARCamera::timeTrackingLost
	float ___timeTrackingLost_11;
	// UnityEngine.GameObject ARCamera::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_12;
	// System.Boolean ARCamera::Stereo
	bool ___Stereo_13;
	// ARCamera/ViewEye ARCamera::StereoEye
	int32_t ___StereoEye_14;
	// System.Boolean ARCamera::Optical
	bool ___Optical_15;
	// System.Boolean ARCamera::opticalSetupOK
	bool ___opticalSetupOK_16;
	// System.Int32 ARCamera::OpticalParamsFilenameIndex
	int32_t ___OpticalParamsFilenameIndex_17;
	// System.String ARCamera::OpticalParamsFilename
	String_t* ___OpticalParamsFilename_18;
	// System.Byte[] ARCamera::OpticalParamsFileContents
	ByteU5BU5D_t3397334013* ___OpticalParamsFileContents_19;
	// System.Single ARCamera::OpticalEyeLateralOffsetRight
	float ___OpticalEyeLateralOffsetRight_20;
	// UnityEngine.Matrix4x4 ARCamera::opticalViewMatrix
	Matrix4x4_t2933234003  ___opticalViewMatrix_21;

public:
	inline static int32_t get_offset_of_arPose_2() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___arPose_2)); }
	inline List_1_t2191350446 * get_arPose_2() const { return ___arPose_2; }
	inline List_1_t2191350446 ** get_address_of_arPose_2() { return &___arPose_2; }
	inline void set_arPose_2(List_1_t2191350446 * value)
	{
		___arPose_2 = value;
		Il2CppCodeGenWriteBarrier(&___arPose_2, value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ____origin_5)); }
	inline AROrigin_t3335349585 * get__origin_5() const { return ____origin_5; }
	inline AROrigin_t3335349585 ** get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(AROrigin_t3335349585 * value)
	{
		____origin_5 = value;
		Il2CppCodeGenWriteBarrier(&____origin_5, value);
	}

	inline static int32_t get_offset_of__marker_6() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ____marker_6)); }
	inline ARMarker_t1554260723 * get__marker_6() const { return ____marker_6; }
	inline ARMarker_t1554260723 ** get_address_of__marker_6() { return &____marker_6; }
	inline void set__marker_6(ARMarker_t1554260723 * value)
	{
		____marker_6 = value;
		Il2CppCodeGenWriteBarrier(&____marker_6, value);
	}

	inline static int32_t get_offset_of_arPosition_7() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___arPosition_7)); }
	inline Vector3_t2243707580  get_arPosition_7() const { return ___arPosition_7; }
	inline Vector3_t2243707580 * get_address_of_arPosition_7() { return &___arPosition_7; }
	inline void set_arPosition_7(Vector3_t2243707580  value)
	{
		___arPosition_7 = value;
	}

	inline static int32_t get_offset_of_arRotation_8() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___arRotation_8)); }
	inline Quaternion_t4030073918  get_arRotation_8() const { return ___arRotation_8; }
	inline Quaternion_t4030073918 * get_address_of_arRotation_8() { return &___arRotation_8; }
	inline void set_arRotation_8(Quaternion_t4030073918  value)
	{
		___arRotation_8 = value;
	}

	inline static int32_t get_offset_of_arVisible_9() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___arVisible_9)); }
	inline bool get_arVisible_9() const { return ___arVisible_9; }
	inline bool* get_address_of_arVisible_9() { return &___arVisible_9; }
	inline void set_arVisible_9(bool value)
	{
		___arVisible_9 = value;
	}

	inline static int32_t get_offset_of_timeLastUpdate_10() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___timeLastUpdate_10)); }
	inline float get_timeLastUpdate_10() const { return ___timeLastUpdate_10; }
	inline float* get_address_of_timeLastUpdate_10() { return &___timeLastUpdate_10; }
	inline void set_timeLastUpdate_10(float value)
	{
		___timeLastUpdate_10 = value;
	}

	inline static int32_t get_offset_of_timeTrackingLost_11() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___timeTrackingLost_11)); }
	inline float get_timeTrackingLost_11() const { return ___timeTrackingLost_11; }
	inline float* get_address_of_timeTrackingLost_11() { return &___timeTrackingLost_11; }
	inline void set_timeTrackingLost_11(float value)
	{
		___timeTrackingLost_11 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_12() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___eventReceiver_12)); }
	inline GameObject_t1756533147 * get_eventReceiver_12() const { return ___eventReceiver_12; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_12() { return &___eventReceiver_12; }
	inline void set_eventReceiver_12(GameObject_t1756533147 * value)
	{
		___eventReceiver_12 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_12, value);
	}

	inline static int32_t get_offset_of_Stereo_13() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___Stereo_13)); }
	inline bool get_Stereo_13() const { return ___Stereo_13; }
	inline bool* get_address_of_Stereo_13() { return &___Stereo_13; }
	inline void set_Stereo_13(bool value)
	{
		___Stereo_13 = value;
	}

	inline static int32_t get_offset_of_StereoEye_14() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___StereoEye_14)); }
	inline int32_t get_StereoEye_14() const { return ___StereoEye_14; }
	inline int32_t* get_address_of_StereoEye_14() { return &___StereoEye_14; }
	inline void set_StereoEye_14(int32_t value)
	{
		___StereoEye_14 = value;
	}

	inline static int32_t get_offset_of_Optical_15() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___Optical_15)); }
	inline bool get_Optical_15() const { return ___Optical_15; }
	inline bool* get_address_of_Optical_15() { return &___Optical_15; }
	inline void set_Optical_15(bool value)
	{
		___Optical_15 = value;
	}

	inline static int32_t get_offset_of_opticalSetupOK_16() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___opticalSetupOK_16)); }
	inline bool get_opticalSetupOK_16() const { return ___opticalSetupOK_16; }
	inline bool* get_address_of_opticalSetupOK_16() { return &___opticalSetupOK_16; }
	inline void set_opticalSetupOK_16(bool value)
	{
		___opticalSetupOK_16 = value;
	}

	inline static int32_t get_offset_of_OpticalParamsFilenameIndex_17() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___OpticalParamsFilenameIndex_17)); }
	inline int32_t get_OpticalParamsFilenameIndex_17() const { return ___OpticalParamsFilenameIndex_17; }
	inline int32_t* get_address_of_OpticalParamsFilenameIndex_17() { return &___OpticalParamsFilenameIndex_17; }
	inline void set_OpticalParamsFilenameIndex_17(int32_t value)
	{
		___OpticalParamsFilenameIndex_17 = value;
	}

	inline static int32_t get_offset_of_OpticalParamsFilename_18() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___OpticalParamsFilename_18)); }
	inline String_t* get_OpticalParamsFilename_18() const { return ___OpticalParamsFilename_18; }
	inline String_t** get_address_of_OpticalParamsFilename_18() { return &___OpticalParamsFilename_18; }
	inline void set_OpticalParamsFilename_18(String_t* value)
	{
		___OpticalParamsFilename_18 = value;
		Il2CppCodeGenWriteBarrier(&___OpticalParamsFilename_18, value);
	}

	inline static int32_t get_offset_of_OpticalParamsFileContents_19() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___OpticalParamsFileContents_19)); }
	inline ByteU5BU5D_t3397334013* get_OpticalParamsFileContents_19() const { return ___OpticalParamsFileContents_19; }
	inline ByteU5BU5D_t3397334013** get_address_of_OpticalParamsFileContents_19() { return &___OpticalParamsFileContents_19; }
	inline void set_OpticalParamsFileContents_19(ByteU5BU5D_t3397334013* value)
	{
		___OpticalParamsFileContents_19 = value;
		Il2CppCodeGenWriteBarrier(&___OpticalParamsFileContents_19, value);
	}

	inline static int32_t get_offset_of_OpticalEyeLateralOffsetRight_20() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___OpticalEyeLateralOffsetRight_20)); }
	inline float get_OpticalEyeLateralOffsetRight_20() const { return ___OpticalEyeLateralOffsetRight_20; }
	inline float* get_address_of_OpticalEyeLateralOffsetRight_20() { return &___OpticalEyeLateralOffsetRight_20; }
	inline void set_OpticalEyeLateralOffsetRight_20(float value)
	{
		___OpticalEyeLateralOffsetRight_20 = value;
	}

	inline static int32_t get_offset_of_opticalViewMatrix_21() { return static_cast<int32_t>(offsetof(ARCamera_t431610428, ___opticalViewMatrix_21)); }
	inline Matrix4x4_t2933234003  get_opticalViewMatrix_21() const { return ___opticalViewMatrix_21; }
	inline Matrix4x4_t2933234003 * get_address_of_opticalViewMatrix_21() { return &___opticalViewMatrix_21; }
	inline void set_opticalViewMatrix_21(Matrix4x4_t2933234003  value)
	{
		___opticalViewMatrix_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

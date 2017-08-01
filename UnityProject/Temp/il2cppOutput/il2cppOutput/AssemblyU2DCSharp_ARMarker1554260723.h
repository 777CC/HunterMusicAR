#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MarkerType961965194.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Collections.Generic.Dictionary`2<MarkerType,System.String>
struct Dictionary_2_t1569850338;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// ARPattern[]
struct ARPatternU5BU5D_t59458152;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARMarker
struct  ARMarker_t1554260723  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ARMarker::UID
	int32_t ___UID_5;
	// MarkerType ARMarker::MarkerType
	int32_t ___MarkerType_6;
	// System.String ARMarker::Tag
	String_t* ___Tag_7;
	// System.Int32 ARMarker::PatternFilenameIndex
	int32_t ___PatternFilenameIndex_8;
	// System.String ARMarker::PatternFilename
	String_t* ___PatternFilename_9;
	// System.String ARMarker::PatternContents
	String_t* ___PatternContents_10;
	// System.Single ARMarker::PatternWidth
	float ___PatternWidth_11;
	// System.Int32 ARMarker::BarcodeID
	int32_t ___BarcodeID_12;
	// System.String ARMarker::MultiConfigFile
	String_t* ___MultiConfigFile_13;
	// System.String ARMarker::NFTDataName
	String_t* ___NFTDataName_14;
	// System.String[] ARMarker::NFTDataExts
	StringU5BU5D_t1642385972* ___NFTDataExts_15;
	// System.Single ARMarker::NFTWidth
	float ___NFTWidth_16;
	// System.Single ARMarker::NFTHeight
	float ___NFTHeight_17;
	// ARPattern[] ARMarker::patterns
	ARPatternU5BU5D_t59458152* ___patterns_18;
	// System.Boolean ARMarker::currentUseContPoseEstimation
	bool ___currentUseContPoseEstimation_19;
	// System.Boolean ARMarker::currentFiltered
	bool ___currentFiltered_20;
	// System.Single ARMarker::currentFilterSampleRate
	float ___currentFilterSampleRate_21;
	// System.Single ARMarker::currentFilterCutoffFreq
	float ___currentFilterCutoffFreq_22;
	// System.Single ARMarker::currentNFTScale
	float ___currentNFTScale_23;
	// System.Boolean ARMarker::visible
	bool ___visible_24;
	// UnityEngine.Matrix4x4 ARMarker::transformationMatrix
	Matrix4x4_t2933234003  ___transformationMatrix_25;

public:
	inline static int32_t get_offset_of_UID_5() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___UID_5)); }
	inline int32_t get_UID_5() const { return ___UID_5; }
	inline int32_t* get_address_of_UID_5() { return &___UID_5; }
	inline void set_UID_5(int32_t value)
	{
		___UID_5 = value;
	}

	inline static int32_t get_offset_of_MarkerType_6() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___MarkerType_6)); }
	inline int32_t get_MarkerType_6() const { return ___MarkerType_6; }
	inline int32_t* get_address_of_MarkerType_6() { return &___MarkerType_6; }
	inline void set_MarkerType_6(int32_t value)
	{
		___MarkerType_6 = value;
	}

	inline static int32_t get_offset_of_Tag_7() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___Tag_7)); }
	inline String_t* get_Tag_7() const { return ___Tag_7; }
	inline String_t** get_address_of_Tag_7() { return &___Tag_7; }
	inline void set_Tag_7(String_t* value)
	{
		___Tag_7 = value;
		Il2CppCodeGenWriteBarrier(&___Tag_7, value);
	}

	inline static int32_t get_offset_of_PatternFilenameIndex_8() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___PatternFilenameIndex_8)); }
	inline int32_t get_PatternFilenameIndex_8() const { return ___PatternFilenameIndex_8; }
	inline int32_t* get_address_of_PatternFilenameIndex_8() { return &___PatternFilenameIndex_8; }
	inline void set_PatternFilenameIndex_8(int32_t value)
	{
		___PatternFilenameIndex_8 = value;
	}

	inline static int32_t get_offset_of_PatternFilename_9() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___PatternFilename_9)); }
	inline String_t* get_PatternFilename_9() const { return ___PatternFilename_9; }
	inline String_t** get_address_of_PatternFilename_9() { return &___PatternFilename_9; }
	inline void set_PatternFilename_9(String_t* value)
	{
		___PatternFilename_9 = value;
		Il2CppCodeGenWriteBarrier(&___PatternFilename_9, value);
	}

	inline static int32_t get_offset_of_PatternContents_10() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___PatternContents_10)); }
	inline String_t* get_PatternContents_10() const { return ___PatternContents_10; }
	inline String_t** get_address_of_PatternContents_10() { return &___PatternContents_10; }
	inline void set_PatternContents_10(String_t* value)
	{
		___PatternContents_10 = value;
		Il2CppCodeGenWriteBarrier(&___PatternContents_10, value);
	}

	inline static int32_t get_offset_of_PatternWidth_11() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___PatternWidth_11)); }
	inline float get_PatternWidth_11() const { return ___PatternWidth_11; }
	inline float* get_address_of_PatternWidth_11() { return &___PatternWidth_11; }
	inline void set_PatternWidth_11(float value)
	{
		___PatternWidth_11 = value;
	}

	inline static int32_t get_offset_of_BarcodeID_12() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___BarcodeID_12)); }
	inline int32_t get_BarcodeID_12() const { return ___BarcodeID_12; }
	inline int32_t* get_address_of_BarcodeID_12() { return &___BarcodeID_12; }
	inline void set_BarcodeID_12(int32_t value)
	{
		___BarcodeID_12 = value;
	}

	inline static int32_t get_offset_of_MultiConfigFile_13() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___MultiConfigFile_13)); }
	inline String_t* get_MultiConfigFile_13() const { return ___MultiConfigFile_13; }
	inline String_t** get_address_of_MultiConfigFile_13() { return &___MultiConfigFile_13; }
	inline void set_MultiConfigFile_13(String_t* value)
	{
		___MultiConfigFile_13 = value;
		Il2CppCodeGenWriteBarrier(&___MultiConfigFile_13, value);
	}

	inline static int32_t get_offset_of_NFTDataName_14() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___NFTDataName_14)); }
	inline String_t* get_NFTDataName_14() const { return ___NFTDataName_14; }
	inline String_t** get_address_of_NFTDataName_14() { return &___NFTDataName_14; }
	inline void set_NFTDataName_14(String_t* value)
	{
		___NFTDataName_14 = value;
		Il2CppCodeGenWriteBarrier(&___NFTDataName_14, value);
	}

	inline static int32_t get_offset_of_NFTDataExts_15() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___NFTDataExts_15)); }
	inline StringU5BU5D_t1642385972* get_NFTDataExts_15() const { return ___NFTDataExts_15; }
	inline StringU5BU5D_t1642385972** get_address_of_NFTDataExts_15() { return &___NFTDataExts_15; }
	inline void set_NFTDataExts_15(StringU5BU5D_t1642385972* value)
	{
		___NFTDataExts_15 = value;
		Il2CppCodeGenWriteBarrier(&___NFTDataExts_15, value);
	}

	inline static int32_t get_offset_of_NFTWidth_16() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___NFTWidth_16)); }
	inline float get_NFTWidth_16() const { return ___NFTWidth_16; }
	inline float* get_address_of_NFTWidth_16() { return &___NFTWidth_16; }
	inline void set_NFTWidth_16(float value)
	{
		___NFTWidth_16 = value;
	}

	inline static int32_t get_offset_of_NFTHeight_17() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___NFTHeight_17)); }
	inline float get_NFTHeight_17() const { return ___NFTHeight_17; }
	inline float* get_address_of_NFTHeight_17() { return &___NFTHeight_17; }
	inline void set_NFTHeight_17(float value)
	{
		___NFTHeight_17 = value;
	}

	inline static int32_t get_offset_of_patterns_18() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___patterns_18)); }
	inline ARPatternU5BU5D_t59458152* get_patterns_18() const { return ___patterns_18; }
	inline ARPatternU5BU5D_t59458152** get_address_of_patterns_18() { return &___patterns_18; }
	inline void set_patterns_18(ARPatternU5BU5D_t59458152* value)
	{
		___patterns_18 = value;
		Il2CppCodeGenWriteBarrier(&___patterns_18, value);
	}

	inline static int32_t get_offset_of_currentUseContPoseEstimation_19() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___currentUseContPoseEstimation_19)); }
	inline bool get_currentUseContPoseEstimation_19() const { return ___currentUseContPoseEstimation_19; }
	inline bool* get_address_of_currentUseContPoseEstimation_19() { return &___currentUseContPoseEstimation_19; }
	inline void set_currentUseContPoseEstimation_19(bool value)
	{
		___currentUseContPoseEstimation_19 = value;
	}

	inline static int32_t get_offset_of_currentFiltered_20() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___currentFiltered_20)); }
	inline bool get_currentFiltered_20() const { return ___currentFiltered_20; }
	inline bool* get_address_of_currentFiltered_20() { return &___currentFiltered_20; }
	inline void set_currentFiltered_20(bool value)
	{
		___currentFiltered_20 = value;
	}

	inline static int32_t get_offset_of_currentFilterSampleRate_21() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___currentFilterSampleRate_21)); }
	inline float get_currentFilterSampleRate_21() const { return ___currentFilterSampleRate_21; }
	inline float* get_address_of_currentFilterSampleRate_21() { return &___currentFilterSampleRate_21; }
	inline void set_currentFilterSampleRate_21(float value)
	{
		___currentFilterSampleRate_21 = value;
	}

	inline static int32_t get_offset_of_currentFilterCutoffFreq_22() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___currentFilterCutoffFreq_22)); }
	inline float get_currentFilterCutoffFreq_22() const { return ___currentFilterCutoffFreq_22; }
	inline float* get_address_of_currentFilterCutoffFreq_22() { return &___currentFilterCutoffFreq_22; }
	inline void set_currentFilterCutoffFreq_22(float value)
	{
		___currentFilterCutoffFreq_22 = value;
	}

	inline static int32_t get_offset_of_currentNFTScale_23() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___currentNFTScale_23)); }
	inline float get_currentNFTScale_23() const { return ___currentNFTScale_23; }
	inline float* get_address_of_currentNFTScale_23() { return &___currentNFTScale_23; }
	inline void set_currentNFTScale_23(float value)
	{
		___currentNFTScale_23 = value;
	}

	inline static int32_t get_offset_of_visible_24() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___visible_24)); }
	inline bool get_visible_24() const { return ___visible_24; }
	inline bool* get_address_of_visible_24() { return &___visible_24; }
	inline void set_visible_24(bool value)
	{
		___visible_24 = value;
	}

	inline static int32_t get_offset_of_transformationMatrix_25() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723, ___transformationMatrix_25)); }
	inline Matrix4x4_t2933234003  get_transformationMatrix_25() const { return ___transformationMatrix_25; }
	inline Matrix4x4_t2933234003 * get_address_of_transformationMatrix_25() { return &___transformationMatrix_25; }
	inline void set_transformationMatrix_25(Matrix4x4_t2933234003  value)
	{
		___transformationMatrix_25 = value;
	}
};

struct ARMarker_t1554260723_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<MarkerType,System.String> ARMarker::MarkerTypeNames
	Dictionary_2_t1569850338 * ___MarkerTypeNames_2;

public:
	inline static int32_t get_offset_of_MarkerTypeNames_2() { return static_cast<int32_t>(offsetof(ARMarker_t1554260723_StaticFields, ___MarkerTypeNames_2)); }
	inline Dictionary_2_t1569850338 * get_MarkerTypeNames_2() const { return ___MarkerTypeNames_2; }
	inline Dictionary_2_t1569850338 ** get_address_of_MarkerTypeNames_2() { return &___MarkerTypeNames_2; }
	inline void set_MarkerTypeNames_2(Dictionary_2_t1569850338 * value)
	{
		___MarkerTypeNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___MarkerTypeNames_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

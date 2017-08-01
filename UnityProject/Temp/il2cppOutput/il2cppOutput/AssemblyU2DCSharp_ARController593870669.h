#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "AssemblyU2DCSharp_ContentAlign2517740362.h"
#include "AssemblyU2DCSharp_ContentMode2920913530.h"
#include "AssemblyU2DCSharp_ARController_ARToolKitThresholdM2161580787.h"
#include "AssemblyU2DCSharp_ARController_ARToolKitLabelingMod925999490.h"
#include "AssemblyU2DCSharp_ARController_ARToolKitPatternDet1396884775.h"
#include "AssemblyU2DCSharp_ARController_ARToolKitMatrixCode3871848761.h"
#include "AssemblyU2DCSharp_ARController_ARToolKitImageProcM1927279569.h"
#include "AssemblyU2DCSharp_ARController_AR_LOG_LEVEL1976762171.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.Generic.Dictionary`2<ContentMode,System.String>
struct Dictionary_2_t3757846578;
// System.Collections.Generic.Dictionary`2<ARController/ARToolKitThresholdMode,System.String>
struct Dictionary_2_t3314526645;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2497716199;
// PluginFunctions/LogCallback
struct LogCallback_t2143553514;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARController
struct  ARController_t593870669  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ARController::UseNativeGLTexturingIfAvailable
	bool ___UseNativeGLTexturingIfAvailable_6;
	// System.Boolean ARController::AllowNonRGBVideo
	bool ___AllowNonRGBVideo_7;
	// System.Boolean ARController::QuitOnEscOrBack
	bool ___QuitOnEscOrBack_8;
	// System.Boolean ARController::AutoStartAR
	bool ___AutoStartAR_9;
	// System.String ARController::_version
	String_t* ____version_10;
	// System.Boolean ARController::_running
	bool ____running_11;
	// System.Boolean ARController::_runOnUnpause
	bool ____runOnUnpause_12;
	// System.Boolean ARController::_sceneConfiguredForVideo
	bool ____sceneConfiguredForVideo_13;
	// System.Boolean ARController::_sceneConfiguredForVideoWaitingMessageLogged
	bool ____sceneConfiguredForVideoWaitingMessageLogged_14;
	// System.Boolean ARController::_useNativeGLTexturing
	bool ____useNativeGLTexturing_15;
	// System.Boolean ARController::_useColor32
	bool ____useColor32_16;
	// System.String ARController::videoCParamName0
	String_t* ___videoCParamName0_17;
	// System.String ARController::videoConfigurationWindows0
	String_t* ___videoConfigurationWindows0_18;
	// System.String ARController::videoConfigurationMacOSX0
	String_t* ___videoConfigurationMacOSX0_19;
	// System.String ARController::videoConfigurationiOS0
	String_t* ___videoConfigurationiOS0_20;
	// System.String ARController::videoConfigurationAndroid0
	String_t* ___videoConfigurationAndroid0_21;
	// System.String ARController::videoConfigurationWindowsStore0
	String_t* ___videoConfigurationWindowsStore0_22;
	// System.String ARController::videoConfigurationLinux0
	String_t* ___videoConfigurationLinux0_23;
	// System.Int32 ARController::BackgroundLayer0
	int32_t ___BackgroundLayer0_24;
	// System.Int32 ARController::_videoWidth0
	int32_t ____videoWidth0_25;
	// System.Int32 ARController::_videoHeight0
	int32_t ____videoHeight0_26;
	// System.Int32 ARController::_videoPixelSize0
	int32_t ____videoPixelSize0_27;
	// System.String ARController::_videoPixelFormatString0
	String_t* ____videoPixelFormatString0_28;
	// UnityEngine.Matrix4x4 ARController::_videoProjectionMatrix0
	Matrix4x4_t2933234003  ____videoProjectionMatrix0_29;
	// UnityEngine.GameObject ARController::_videoBackgroundMeshGO0
	GameObject_t1756533147 * ____videoBackgroundMeshGO0_30;
	// UnityEngine.Color[] ARController::_videoColorArray0
	ColorU5BU5D_t672350442* ____videoColorArray0_31;
	// UnityEngine.Color32[] ARController::_videoColor32Array0
	Color32U5BU5D_t30278651* ____videoColor32Array0_32;
	// UnityEngine.Texture2D ARController::_videoTexture0
	Texture2D_t3542995729 * ____videoTexture0_33;
	// UnityEngine.Material ARController::_videoMaterial0
	Material_t193706927 * ____videoMaterial0_34;
	// System.Boolean ARController::VideoIsStereo
	bool ___VideoIsStereo_35;
	// System.String ARController::transL2RName
	String_t* ___transL2RName_36;
	// System.String ARController::videoCParamName1
	String_t* ___videoCParamName1_37;
	// System.String ARController::videoConfigurationWindows1
	String_t* ___videoConfigurationWindows1_38;
	// System.String ARController::videoConfigurationMacOSX1
	String_t* ___videoConfigurationMacOSX1_39;
	// System.String ARController::videoConfigurationiOS1
	String_t* ___videoConfigurationiOS1_40;
	// System.String ARController::videoConfigurationAndroid1
	String_t* ___videoConfigurationAndroid1_41;
	// System.String ARController::videoConfigurationWindowsStore1
	String_t* ___videoConfigurationWindowsStore1_42;
	// System.String ARController::videoConfigurationLinux1
	String_t* ___videoConfigurationLinux1_43;
	// System.Int32 ARController::BackgroundLayer1
	int32_t ___BackgroundLayer1_44;
	// System.Int32 ARController::_videoWidth1
	int32_t ____videoWidth1_45;
	// System.Int32 ARController::_videoHeight1
	int32_t ____videoHeight1_46;
	// System.Int32 ARController::_videoPixelSize1
	int32_t ____videoPixelSize1_47;
	// System.String ARController::_videoPixelFormatString1
	String_t* ____videoPixelFormatString1_48;
	// UnityEngine.Matrix4x4 ARController::_videoProjectionMatrix1
	Matrix4x4_t2933234003  ____videoProjectionMatrix1_49;
	// UnityEngine.GameObject ARController::_videoBackgroundMeshGO1
	GameObject_t1756533147 * ____videoBackgroundMeshGO1_50;
	// UnityEngine.Color[] ARController::_videoColorArray1
	ColorU5BU5D_t672350442* ____videoColorArray1_51;
	// UnityEngine.Color32[] ARController::_videoColor32Array1
	Color32U5BU5D_t30278651* ____videoColor32Array1_52;
	// UnityEngine.Texture2D ARController::_videoTexture1
	Texture2D_t3542995729 * ____videoTexture1_53;
	// UnityEngine.Material ARController::_videoMaterial1
	Material_t193706927 * ____videoMaterial1_54;
	// UnityEngine.Camera ARController::clearCamera
	Camera_t189460977 * ___clearCamera_55;
	// UnityEngine.GameObject ARController::_videoBackgroundCameraGO0
	GameObject_t1756533147 * ____videoBackgroundCameraGO0_56;
	// UnityEngine.Camera ARController::_videoBackgroundCamera0
	Camera_t189460977 * ____videoBackgroundCamera0_57;
	// UnityEngine.GameObject ARController::_videoBackgroundCameraGO1
	GameObject_t1756533147 * ____videoBackgroundCameraGO1_58;
	// UnityEngine.Camera ARController::_videoBackgroundCamera1
	Camera_t189460977 * ____videoBackgroundCamera1_59;
	// System.Single ARController::NearPlane
	float ___NearPlane_60;
	// System.Single ARController::FarPlane
	float ___FarPlane_61;
	// System.Boolean ARController::ContentRotate90
	bool ___ContentRotate90_62;
	// System.Boolean ARController::ContentFlipH
	bool ___ContentFlipH_63;
	// System.Boolean ARController::ContentFlipV
	bool ___ContentFlipV_64;
	// ContentAlign ARController::ContentAlign
	int32_t ___ContentAlign_65;
	// System.Int32 ARController::frameCounter
	int32_t ___frameCounter_67;
	// System.Single ARController::timeCounter
	float ___timeCounter_68;
	// System.Single ARController::lastFramerate
	float ___lastFramerate_69;
	// System.Single ARController::refreshTime
	float ___refreshTime_70;
	// ContentMode ARController::currentContentMode
	int32_t ___currentContentMode_72;
	// ARController/ARToolKitThresholdMode ARController::currentThresholdMode
	int32_t ___currentThresholdMode_73;
	// System.Int32 ARController::currentThreshold
	int32_t ___currentThreshold_74;
	// ARController/ARToolKitLabelingMode ARController::currentLabelingMode
	int32_t ___currentLabelingMode_75;
	// System.Int32 ARController::currentTemplateSize
	int32_t ___currentTemplateSize_76;
	// System.Int32 ARController::currentTemplateCountMax
	int32_t ___currentTemplateCountMax_77;
	// System.Single ARController::currentBorderSize
	float ___currentBorderSize_78;
	// ARController/ARToolKitPatternDetectionMode ARController::currentPatternDetectionMode
	int32_t ___currentPatternDetectionMode_79;
	// ARController/ARToolKitMatrixCodeType ARController::currentMatrixCodeType
	int32_t ___currentMatrixCodeType_80;
	// ARController/ARToolKitImageProcMode ARController::currentImageProcMode
	int32_t ___currentImageProcMode_81;
	// System.Boolean ARController::currentUseVideoBackground
	bool ___currentUseVideoBackground_82;
	// System.Boolean ARController::currentNFTMultiMode
	bool ___currentNFTMultiMode_83;
	// ARController/AR_LOG_LEVEL ARController::currentLogLevel
	int32_t ___currentLogLevel_84;
	// UnityEngine.GUIStyle[] ARController::style
	GUIStyleU5BU5D_t2497716199* ___style_85;
	// System.Boolean ARController::guiSetup
	bool ___guiSetup_86;
	// System.Boolean ARController::showGUIErrorDialog
	bool ___showGUIErrorDialog_87;
	// System.String ARController::showGUIErrorDialogContent
	String_t* ___showGUIErrorDialogContent_88;
	// UnityEngine.Rect ARController::showGUIErrorDialogWinRect
	Rect_t3681755626  ___showGUIErrorDialogWinRect_89;
	// System.Boolean ARController::showGUIDebug
	bool ___showGUIDebug_90;
	// System.Boolean ARController::showGUIDebugInfo
	bool ___showGUIDebugInfo_91;
	// System.Boolean ARController::showGUIDebugLogConsole
	bool ___showGUIDebugLogConsole_92;
	// UnityEngine.Vector2 ARController::scrollPosition
	Vector2_t2243707579  ___scrollPosition_93;

public:
	inline static int32_t get_offset_of_UseNativeGLTexturingIfAvailable_6() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___UseNativeGLTexturingIfAvailable_6)); }
	inline bool get_UseNativeGLTexturingIfAvailable_6() const { return ___UseNativeGLTexturingIfAvailable_6; }
	inline bool* get_address_of_UseNativeGLTexturingIfAvailable_6() { return &___UseNativeGLTexturingIfAvailable_6; }
	inline void set_UseNativeGLTexturingIfAvailable_6(bool value)
	{
		___UseNativeGLTexturingIfAvailable_6 = value;
	}

	inline static int32_t get_offset_of_AllowNonRGBVideo_7() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___AllowNonRGBVideo_7)); }
	inline bool get_AllowNonRGBVideo_7() const { return ___AllowNonRGBVideo_7; }
	inline bool* get_address_of_AllowNonRGBVideo_7() { return &___AllowNonRGBVideo_7; }
	inline void set_AllowNonRGBVideo_7(bool value)
	{
		___AllowNonRGBVideo_7 = value;
	}

	inline static int32_t get_offset_of_QuitOnEscOrBack_8() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___QuitOnEscOrBack_8)); }
	inline bool get_QuitOnEscOrBack_8() const { return ___QuitOnEscOrBack_8; }
	inline bool* get_address_of_QuitOnEscOrBack_8() { return &___QuitOnEscOrBack_8; }
	inline void set_QuitOnEscOrBack_8(bool value)
	{
		___QuitOnEscOrBack_8 = value;
	}

	inline static int32_t get_offset_of_AutoStartAR_9() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___AutoStartAR_9)); }
	inline bool get_AutoStartAR_9() const { return ___AutoStartAR_9; }
	inline bool* get_address_of_AutoStartAR_9() { return &___AutoStartAR_9; }
	inline void set_AutoStartAR_9(bool value)
	{
		___AutoStartAR_9 = value;
	}

	inline static int32_t get_offset_of__version_10() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____version_10)); }
	inline String_t* get__version_10() const { return ____version_10; }
	inline String_t** get_address_of__version_10() { return &____version_10; }
	inline void set__version_10(String_t* value)
	{
		____version_10 = value;
		Il2CppCodeGenWriteBarrier(&____version_10, value);
	}

	inline static int32_t get_offset_of__running_11() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____running_11)); }
	inline bool get__running_11() const { return ____running_11; }
	inline bool* get_address_of__running_11() { return &____running_11; }
	inline void set__running_11(bool value)
	{
		____running_11 = value;
	}

	inline static int32_t get_offset_of__runOnUnpause_12() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____runOnUnpause_12)); }
	inline bool get__runOnUnpause_12() const { return ____runOnUnpause_12; }
	inline bool* get_address_of__runOnUnpause_12() { return &____runOnUnpause_12; }
	inline void set__runOnUnpause_12(bool value)
	{
		____runOnUnpause_12 = value;
	}

	inline static int32_t get_offset_of__sceneConfiguredForVideo_13() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____sceneConfiguredForVideo_13)); }
	inline bool get__sceneConfiguredForVideo_13() const { return ____sceneConfiguredForVideo_13; }
	inline bool* get_address_of__sceneConfiguredForVideo_13() { return &____sceneConfiguredForVideo_13; }
	inline void set__sceneConfiguredForVideo_13(bool value)
	{
		____sceneConfiguredForVideo_13 = value;
	}

	inline static int32_t get_offset_of__sceneConfiguredForVideoWaitingMessageLogged_14() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____sceneConfiguredForVideoWaitingMessageLogged_14)); }
	inline bool get__sceneConfiguredForVideoWaitingMessageLogged_14() const { return ____sceneConfiguredForVideoWaitingMessageLogged_14; }
	inline bool* get_address_of__sceneConfiguredForVideoWaitingMessageLogged_14() { return &____sceneConfiguredForVideoWaitingMessageLogged_14; }
	inline void set__sceneConfiguredForVideoWaitingMessageLogged_14(bool value)
	{
		____sceneConfiguredForVideoWaitingMessageLogged_14 = value;
	}

	inline static int32_t get_offset_of__useNativeGLTexturing_15() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____useNativeGLTexturing_15)); }
	inline bool get__useNativeGLTexturing_15() const { return ____useNativeGLTexturing_15; }
	inline bool* get_address_of__useNativeGLTexturing_15() { return &____useNativeGLTexturing_15; }
	inline void set__useNativeGLTexturing_15(bool value)
	{
		____useNativeGLTexturing_15 = value;
	}

	inline static int32_t get_offset_of__useColor32_16() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____useColor32_16)); }
	inline bool get__useColor32_16() const { return ____useColor32_16; }
	inline bool* get_address_of__useColor32_16() { return &____useColor32_16; }
	inline void set__useColor32_16(bool value)
	{
		____useColor32_16 = value;
	}

	inline static int32_t get_offset_of_videoCParamName0_17() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoCParamName0_17)); }
	inline String_t* get_videoCParamName0_17() const { return ___videoCParamName0_17; }
	inline String_t** get_address_of_videoCParamName0_17() { return &___videoCParamName0_17; }
	inline void set_videoCParamName0_17(String_t* value)
	{
		___videoCParamName0_17 = value;
		Il2CppCodeGenWriteBarrier(&___videoCParamName0_17, value);
	}

	inline static int32_t get_offset_of_videoConfigurationWindows0_18() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationWindows0_18)); }
	inline String_t* get_videoConfigurationWindows0_18() const { return ___videoConfigurationWindows0_18; }
	inline String_t** get_address_of_videoConfigurationWindows0_18() { return &___videoConfigurationWindows0_18; }
	inline void set_videoConfigurationWindows0_18(String_t* value)
	{
		___videoConfigurationWindows0_18 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationWindows0_18, value);
	}

	inline static int32_t get_offset_of_videoConfigurationMacOSX0_19() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationMacOSX0_19)); }
	inline String_t* get_videoConfigurationMacOSX0_19() const { return ___videoConfigurationMacOSX0_19; }
	inline String_t** get_address_of_videoConfigurationMacOSX0_19() { return &___videoConfigurationMacOSX0_19; }
	inline void set_videoConfigurationMacOSX0_19(String_t* value)
	{
		___videoConfigurationMacOSX0_19 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationMacOSX0_19, value);
	}

	inline static int32_t get_offset_of_videoConfigurationiOS0_20() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationiOS0_20)); }
	inline String_t* get_videoConfigurationiOS0_20() const { return ___videoConfigurationiOS0_20; }
	inline String_t** get_address_of_videoConfigurationiOS0_20() { return &___videoConfigurationiOS0_20; }
	inline void set_videoConfigurationiOS0_20(String_t* value)
	{
		___videoConfigurationiOS0_20 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationiOS0_20, value);
	}

	inline static int32_t get_offset_of_videoConfigurationAndroid0_21() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationAndroid0_21)); }
	inline String_t* get_videoConfigurationAndroid0_21() const { return ___videoConfigurationAndroid0_21; }
	inline String_t** get_address_of_videoConfigurationAndroid0_21() { return &___videoConfigurationAndroid0_21; }
	inline void set_videoConfigurationAndroid0_21(String_t* value)
	{
		___videoConfigurationAndroid0_21 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationAndroid0_21, value);
	}

	inline static int32_t get_offset_of_videoConfigurationWindowsStore0_22() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationWindowsStore0_22)); }
	inline String_t* get_videoConfigurationWindowsStore0_22() const { return ___videoConfigurationWindowsStore0_22; }
	inline String_t** get_address_of_videoConfigurationWindowsStore0_22() { return &___videoConfigurationWindowsStore0_22; }
	inline void set_videoConfigurationWindowsStore0_22(String_t* value)
	{
		___videoConfigurationWindowsStore0_22 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationWindowsStore0_22, value);
	}

	inline static int32_t get_offset_of_videoConfigurationLinux0_23() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationLinux0_23)); }
	inline String_t* get_videoConfigurationLinux0_23() const { return ___videoConfigurationLinux0_23; }
	inline String_t** get_address_of_videoConfigurationLinux0_23() { return &___videoConfigurationLinux0_23; }
	inline void set_videoConfigurationLinux0_23(String_t* value)
	{
		___videoConfigurationLinux0_23 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationLinux0_23, value);
	}

	inline static int32_t get_offset_of_BackgroundLayer0_24() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___BackgroundLayer0_24)); }
	inline int32_t get_BackgroundLayer0_24() const { return ___BackgroundLayer0_24; }
	inline int32_t* get_address_of_BackgroundLayer0_24() { return &___BackgroundLayer0_24; }
	inline void set_BackgroundLayer0_24(int32_t value)
	{
		___BackgroundLayer0_24 = value;
	}

	inline static int32_t get_offset_of__videoWidth0_25() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoWidth0_25)); }
	inline int32_t get__videoWidth0_25() const { return ____videoWidth0_25; }
	inline int32_t* get_address_of__videoWidth0_25() { return &____videoWidth0_25; }
	inline void set__videoWidth0_25(int32_t value)
	{
		____videoWidth0_25 = value;
	}

	inline static int32_t get_offset_of__videoHeight0_26() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoHeight0_26)); }
	inline int32_t get__videoHeight0_26() const { return ____videoHeight0_26; }
	inline int32_t* get_address_of__videoHeight0_26() { return &____videoHeight0_26; }
	inline void set__videoHeight0_26(int32_t value)
	{
		____videoHeight0_26 = value;
	}

	inline static int32_t get_offset_of__videoPixelSize0_27() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoPixelSize0_27)); }
	inline int32_t get__videoPixelSize0_27() const { return ____videoPixelSize0_27; }
	inline int32_t* get_address_of__videoPixelSize0_27() { return &____videoPixelSize0_27; }
	inline void set__videoPixelSize0_27(int32_t value)
	{
		____videoPixelSize0_27 = value;
	}

	inline static int32_t get_offset_of__videoPixelFormatString0_28() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoPixelFormatString0_28)); }
	inline String_t* get__videoPixelFormatString0_28() const { return ____videoPixelFormatString0_28; }
	inline String_t** get_address_of__videoPixelFormatString0_28() { return &____videoPixelFormatString0_28; }
	inline void set__videoPixelFormatString0_28(String_t* value)
	{
		____videoPixelFormatString0_28 = value;
		Il2CppCodeGenWriteBarrier(&____videoPixelFormatString0_28, value);
	}

	inline static int32_t get_offset_of__videoProjectionMatrix0_29() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoProjectionMatrix0_29)); }
	inline Matrix4x4_t2933234003  get__videoProjectionMatrix0_29() const { return ____videoProjectionMatrix0_29; }
	inline Matrix4x4_t2933234003 * get_address_of__videoProjectionMatrix0_29() { return &____videoProjectionMatrix0_29; }
	inline void set__videoProjectionMatrix0_29(Matrix4x4_t2933234003  value)
	{
		____videoProjectionMatrix0_29 = value;
	}

	inline static int32_t get_offset_of__videoBackgroundMeshGO0_30() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoBackgroundMeshGO0_30)); }
	inline GameObject_t1756533147 * get__videoBackgroundMeshGO0_30() const { return ____videoBackgroundMeshGO0_30; }
	inline GameObject_t1756533147 ** get_address_of__videoBackgroundMeshGO0_30() { return &____videoBackgroundMeshGO0_30; }
	inline void set__videoBackgroundMeshGO0_30(GameObject_t1756533147 * value)
	{
		____videoBackgroundMeshGO0_30 = value;
		Il2CppCodeGenWriteBarrier(&____videoBackgroundMeshGO0_30, value);
	}

	inline static int32_t get_offset_of__videoColorArray0_31() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoColorArray0_31)); }
	inline ColorU5BU5D_t672350442* get__videoColorArray0_31() const { return ____videoColorArray0_31; }
	inline ColorU5BU5D_t672350442** get_address_of__videoColorArray0_31() { return &____videoColorArray0_31; }
	inline void set__videoColorArray0_31(ColorU5BU5D_t672350442* value)
	{
		____videoColorArray0_31 = value;
		Il2CppCodeGenWriteBarrier(&____videoColorArray0_31, value);
	}

	inline static int32_t get_offset_of__videoColor32Array0_32() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoColor32Array0_32)); }
	inline Color32U5BU5D_t30278651* get__videoColor32Array0_32() const { return ____videoColor32Array0_32; }
	inline Color32U5BU5D_t30278651** get_address_of__videoColor32Array0_32() { return &____videoColor32Array0_32; }
	inline void set__videoColor32Array0_32(Color32U5BU5D_t30278651* value)
	{
		____videoColor32Array0_32 = value;
		Il2CppCodeGenWriteBarrier(&____videoColor32Array0_32, value);
	}

	inline static int32_t get_offset_of__videoTexture0_33() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoTexture0_33)); }
	inline Texture2D_t3542995729 * get__videoTexture0_33() const { return ____videoTexture0_33; }
	inline Texture2D_t3542995729 ** get_address_of__videoTexture0_33() { return &____videoTexture0_33; }
	inline void set__videoTexture0_33(Texture2D_t3542995729 * value)
	{
		____videoTexture0_33 = value;
		Il2CppCodeGenWriteBarrier(&____videoTexture0_33, value);
	}

	inline static int32_t get_offset_of__videoMaterial0_34() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoMaterial0_34)); }
	inline Material_t193706927 * get__videoMaterial0_34() const { return ____videoMaterial0_34; }
	inline Material_t193706927 ** get_address_of__videoMaterial0_34() { return &____videoMaterial0_34; }
	inline void set__videoMaterial0_34(Material_t193706927 * value)
	{
		____videoMaterial0_34 = value;
		Il2CppCodeGenWriteBarrier(&____videoMaterial0_34, value);
	}

	inline static int32_t get_offset_of_VideoIsStereo_35() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___VideoIsStereo_35)); }
	inline bool get_VideoIsStereo_35() const { return ___VideoIsStereo_35; }
	inline bool* get_address_of_VideoIsStereo_35() { return &___VideoIsStereo_35; }
	inline void set_VideoIsStereo_35(bool value)
	{
		___VideoIsStereo_35 = value;
	}

	inline static int32_t get_offset_of_transL2RName_36() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___transL2RName_36)); }
	inline String_t* get_transL2RName_36() const { return ___transL2RName_36; }
	inline String_t** get_address_of_transL2RName_36() { return &___transL2RName_36; }
	inline void set_transL2RName_36(String_t* value)
	{
		___transL2RName_36 = value;
		Il2CppCodeGenWriteBarrier(&___transL2RName_36, value);
	}

	inline static int32_t get_offset_of_videoCParamName1_37() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoCParamName1_37)); }
	inline String_t* get_videoCParamName1_37() const { return ___videoCParamName1_37; }
	inline String_t** get_address_of_videoCParamName1_37() { return &___videoCParamName1_37; }
	inline void set_videoCParamName1_37(String_t* value)
	{
		___videoCParamName1_37 = value;
		Il2CppCodeGenWriteBarrier(&___videoCParamName1_37, value);
	}

	inline static int32_t get_offset_of_videoConfigurationWindows1_38() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationWindows1_38)); }
	inline String_t* get_videoConfigurationWindows1_38() const { return ___videoConfigurationWindows1_38; }
	inline String_t** get_address_of_videoConfigurationWindows1_38() { return &___videoConfigurationWindows1_38; }
	inline void set_videoConfigurationWindows1_38(String_t* value)
	{
		___videoConfigurationWindows1_38 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationWindows1_38, value);
	}

	inline static int32_t get_offset_of_videoConfigurationMacOSX1_39() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationMacOSX1_39)); }
	inline String_t* get_videoConfigurationMacOSX1_39() const { return ___videoConfigurationMacOSX1_39; }
	inline String_t** get_address_of_videoConfigurationMacOSX1_39() { return &___videoConfigurationMacOSX1_39; }
	inline void set_videoConfigurationMacOSX1_39(String_t* value)
	{
		___videoConfigurationMacOSX1_39 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationMacOSX1_39, value);
	}

	inline static int32_t get_offset_of_videoConfigurationiOS1_40() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationiOS1_40)); }
	inline String_t* get_videoConfigurationiOS1_40() const { return ___videoConfigurationiOS1_40; }
	inline String_t** get_address_of_videoConfigurationiOS1_40() { return &___videoConfigurationiOS1_40; }
	inline void set_videoConfigurationiOS1_40(String_t* value)
	{
		___videoConfigurationiOS1_40 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationiOS1_40, value);
	}

	inline static int32_t get_offset_of_videoConfigurationAndroid1_41() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationAndroid1_41)); }
	inline String_t* get_videoConfigurationAndroid1_41() const { return ___videoConfigurationAndroid1_41; }
	inline String_t** get_address_of_videoConfigurationAndroid1_41() { return &___videoConfigurationAndroid1_41; }
	inline void set_videoConfigurationAndroid1_41(String_t* value)
	{
		___videoConfigurationAndroid1_41 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationAndroid1_41, value);
	}

	inline static int32_t get_offset_of_videoConfigurationWindowsStore1_42() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationWindowsStore1_42)); }
	inline String_t* get_videoConfigurationWindowsStore1_42() const { return ___videoConfigurationWindowsStore1_42; }
	inline String_t** get_address_of_videoConfigurationWindowsStore1_42() { return &___videoConfigurationWindowsStore1_42; }
	inline void set_videoConfigurationWindowsStore1_42(String_t* value)
	{
		___videoConfigurationWindowsStore1_42 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationWindowsStore1_42, value);
	}

	inline static int32_t get_offset_of_videoConfigurationLinux1_43() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___videoConfigurationLinux1_43)); }
	inline String_t* get_videoConfigurationLinux1_43() const { return ___videoConfigurationLinux1_43; }
	inline String_t** get_address_of_videoConfigurationLinux1_43() { return &___videoConfigurationLinux1_43; }
	inline void set_videoConfigurationLinux1_43(String_t* value)
	{
		___videoConfigurationLinux1_43 = value;
		Il2CppCodeGenWriteBarrier(&___videoConfigurationLinux1_43, value);
	}

	inline static int32_t get_offset_of_BackgroundLayer1_44() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___BackgroundLayer1_44)); }
	inline int32_t get_BackgroundLayer1_44() const { return ___BackgroundLayer1_44; }
	inline int32_t* get_address_of_BackgroundLayer1_44() { return &___BackgroundLayer1_44; }
	inline void set_BackgroundLayer1_44(int32_t value)
	{
		___BackgroundLayer1_44 = value;
	}

	inline static int32_t get_offset_of__videoWidth1_45() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoWidth1_45)); }
	inline int32_t get__videoWidth1_45() const { return ____videoWidth1_45; }
	inline int32_t* get_address_of__videoWidth1_45() { return &____videoWidth1_45; }
	inline void set__videoWidth1_45(int32_t value)
	{
		____videoWidth1_45 = value;
	}

	inline static int32_t get_offset_of__videoHeight1_46() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoHeight1_46)); }
	inline int32_t get__videoHeight1_46() const { return ____videoHeight1_46; }
	inline int32_t* get_address_of__videoHeight1_46() { return &____videoHeight1_46; }
	inline void set__videoHeight1_46(int32_t value)
	{
		____videoHeight1_46 = value;
	}

	inline static int32_t get_offset_of__videoPixelSize1_47() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoPixelSize1_47)); }
	inline int32_t get__videoPixelSize1_47() const { return ____videoPixelSize1_47; }
	inline int32_t* get_address_of__videoPixelSize1_47() { return &____videoPixelSize1_47; }
	inline void set__videoPixelSize1_47(int32_t value)
	{
		____videoPixelSize1_47 = value;
	}

	inline static int32_t get_offset_of__videoPixelFormatString1_48() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoPixelFormatString1_48)); }
	inline String_t* get__videoPixelFormatString1_48() const { return ____videoPixelFormatString1_48; }
	inline String_t** get_address_of__videoPixelFormatString1_48() { return &____videoPixelFormatString1_48; }
	inline void set__videoPixelFormatString1_48(String_t* value)
	{
		____videoPixelFormatString1_48 = value;
		Il2CppCodeGenWriteBarrier(&____videoPixelFormatString1_48, value);
	}

	inline static int32_t get_offset_of__videoProjectionMatrix1_49() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoProjectionMatrix1_49)); }
	inline Matrix4x4_t2933234003  get__videoProjectionMatrix1_49() const { return ____videoProjectionMatrix1_49; }
	inline Matrix4x4_t2933234003 * get_address_of__videoProjectionMatrix1_49() { return &____videoProjectionMatrix1_49; }
	inline void set__videoProjectionMatrix1_49(Matrix4x4_t2933234003  value)
	{
		____videoProjectionMatrix1_49 = value;
	}

	inline static int32_t get_offset_of__videoBackgroundMeshGO1_50() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoBackgroundMeshGO1_50)); }
	inline GameObject_t1756533147 * get__videoBackgroundMeshGO1_50() const { return ____videoBackgroundMeshGO1_50; }
	inline GameObject_t1756533147 ** get_address_of__videoBackgroundMeshGO1_50() { return &____videoBackgroundMeshGO1_50; }
	inline void set__videoBackgroundMeshGO1_50(GameObject_t1756533147 * value)
	{
		____videoBackgroundMeshGO1_50 = value;
		Il2CppCodeGenWriteBarrier(&____videoBackgroundMeshGO1_50, value);
	}

	inline static int32_t get_offset_of__videoColorArray1_51() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoColorArray1_51)); }
	inline ColorU5BU5D_t672350442* get__videoColorArray1_51() const { return ____videoColorArray1_51; }
	inline ColorU5BU5D_t672350442** get_address_of__videoColorArray1_51() { return &____videoColorArray1_51; }
	inline void set__videoColorArray1_51(ColorU5BU5D_t672350442* value)
	{
		____videoColorArray1_51 = value;
		Il2CppCodeGenWriteBarrier(&____videoColorArray1_51, value);
	}

	inline static int32_t get_offset_of__videoColor32Array1_52() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoColor32Array1_52)); }
	inline Color32U5BU5D_t30278651* get__videoColor32Array1_52() const { return ____videoColor32Array1_52; }
	inline Color32U5BU5D_t30278651** get_address_of__videoColor32Array1_52() { return &____videoColor32Array1_52; }
	inline void set__videoColor32Array1_52(Color32U5BU5D_t30278651* value)
	{
		____videoColor32Array1_52 = value;
		Il2CppCodeGenWriteBarrier(&____videoColor32Array1_52, value);
	}

	inline static int32_t get_offset_of__videoTexture1_53() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoTexture1_53)); }
	inline Texture2D_t3542995729 * get__videoTexture1_53() const { return ____videoTexture1_53; }
	inline Texture2D_t3542995729 ** get_address_of__videoTexture1_53() { return &____videoTexture1_53; }
	inline void set__videoTexture1_53(Texture2D_t3542995729 * value)
	{
		____videoTexture1_53 = value;
		Il2CppCodeGenWriteBarrier(&____videoTexture1_53, value);
	}

	inline static int32_t get_offset_of__videoMaterial1_54() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoMaterial1_54)); }
	inline Material_t193706927 * get__videoMaterial1_54() const { return ____videoMaterial1_54; }
	inline Material_t193706927 ** get_address_of__videoMaterial1_54() { return &____videoMaterial1_54; }
	inline void set__videoMaterial1_54(Material_t193706927 * value)
	{
		____videoMaterial1_54 = value;
		Il2CppCodeGenWriteBarrier(&____videoMaterial1_54, value);
	}

	inline static int32_t get_offset_of_clearCamera_55() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___clearCamera_55)); }
	inline Camera_t189460977 * get_clearCamera_55() const { return ___clearCamera_55; }
	inline Camera_t189460977 ** get_address_of_clearCamera_55() { return &___clearCamera_55; }
	inline void set_clearCamera_55(Camera_t189460977 * value)
	{
		___clearCamera_55 = value;
		Il2CppCodeGenWriteBarrier(&___clearCamera_55, value);
	}

	inline static int32_t get_offset_of__videoBackgroundCameraGO0_56() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoBackgroundCameraGO0_56)); }
	inline GameObject_t1756533147 * get__videoBackgroundCameraGO0_56() const { return ____videoBackgroundCameraGO0_56; }
	inline GameObject_t1756533147 ** get_address_of__videoBackgroundCameraGO0_56() { return &____videoBackgroundCameraGO0_56; }
	inline void set__videoBackgroundCameraGO0_56(GameObject_t1756533147 * value)
	{
		____videoBackgroundCameraGO0_56 = value;
		Il2CppCodeGenWriteBarrier(&____videoBackgroundCameraGO0_56, value);
	}

	inline static int32_t get_offset_of__videoBackgroundCamera0_57() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoBackgroundCamera0_57)); }
	inline Camera_t189460977 * get__videoBackgroundCamera0_57() const { return ____videoBackgroundCamera0_57; }
	inline Camera_t189460977 ** get_address_of__videoBackgroundCamera0_57() { return &____videoBackgroundCamera0_57; }
	inline void set__videoBackgroundCamera0_57(Camera_t189460977 * value)
	{
		____videoBackgroundCamera0_57 = value;
		Il2CppCodeGenWriteBarrier(&____videoBackgroundCamera0_57, value);
	}

	inline static int32_t get_offset_of__videoBackgroundCameraGO1_58() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoBackgroundCameraGO1_58)); }
	inline GameObject_t1756533147 * get__videoBackgroundCameraGO1_58() const { return ____videoBackgroundCameraGO1_58; }
	inline GameObject_t1756533147 ** get_address_of__videoBackgroundCameraGO1_58() { return &____videoBackgroundCameraGO1_58; }
	inline void set__videoBackgroundCameraGO1_58(GameObject_t1756533147 * value)
	{
		____videoBackgroundCameraGO1_58 = value;
		Il2CppCodeGenWriteBarrier(&____videoBackgroundCameraGO1_58, value);
	}

	inline static int32_t get_offset_of__videoBackgroundCamera1_59() { return static_cast<int32_t>(offsetof(ARController_t593870669, ____videoBackgroundCamera1_59)); }
	inline Camera_t189460977 * get__videoBackgroundCamera1_59() const { return ____videoBackgroundCamera1_59; }
	inline Camera_t189460977 ** get_address_of__videoBackgroundCamera1_59() { return &____videoBackgroundCamera1_59; }
	inline void set__videoBackgroundCamera1_59(Camera_t189460977 * value)
	{
		____videoBackgroundCamera1_59 = value;
		Il2CppCodeGenWriteBarrier(&____videoBackgroundCamera1_59, value);
	}

	inline static int32_t get_offset_of_NearPlane_60() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___NearPlane_60)); }
	inline float get_NearPlane_60() const { return ___NearPlane_60; }
	inline float* get_address_of_NearPlane_60() { return &___NearPlane_60; }
	inline void set_NearPlane_60(float value)
	{
		___NearPlane_60 = value;
	}

	inline static int32_t get_offset_of_FarPlane_61() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___FarPlane_61)); }
	inline float get_FarPlane_61() const { return ___FarPlane_61; }
	inline float* get_address_of_FarPlane_61() { return &___FarPlane_61; }
	inline void set_FarPlane_61(float value)
	{
		___FarPlane_61 = value;
	}

	inline static int32_t get_offset_of_ContentRotate90_62() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___ContentRotate90_62)); }
	inline bool get_ContentRotate90_62() const { return ___ContentRotate90_62; }
	inline bool* get_address_of_ContentRotate90_62() { return &___ContentRotate90_62; }
	inline void set_ContentRotate90_62(bool value)
	{
		___ContentRotate90_62 = value;
	}

	inline static int32_t get_offset_of_ContentFlipH_63() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___ContentFlipH_63)); }
	inline bool get_ContentFlipH_63() const { return ___ContentFlipH_63; }
	inline bool* get_address_of_ContentFlipH_63() { return &___ContentFlipH_63; }
	inline void set_ContentFlipH_63(bool value)
	{
		___ContentFlipH_63 = value;
	}

	inline static int32_t get_offset_of_ContentFlipV_64() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___ContentFlipV_64)); }
	inline bool get_ContentFlipV_64() const { return ___ContentFlipV_64; }
	inline bool* get_address_of_ContentFlipV_64() { return &___ContentFlipV_64; }
	inline void set_ContentFlipV_64(bool value)
	{
		___ContentFlipV_64 = value;
	}

	inline static int32_t get_offset_of_ContentAlign_65() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___ContentAlign_65)); }
	inline int32_t get_ContentAlign_65() const { return ___ContentAlign_65; }
	inline int32_t* get_address_of_ContentAlign_65() { return &___ContentAlign_65; }
	inline void set_ContentAlign_65(int32_t value)
	{
		___ContentAlign_65 = value;
	}

	inline static int32_t get_offset_of_frameCounter_67() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___frameCounter_67)); }
	inline int32_t get_frameCounter_67() const { return ___frameCounter_67; }
	inline int32_t* get_address_of_frameCounter_67() { return &___frameCounter_67; }
	inline void set_frameCounter_67(int32_t value)
	{
		___frameCounter_67 = value;
	}

	inline static int32_t get_offset_of_timeCounter_68() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___timeCounter_68)); }
	inline float get_timeCounter_68() const { return ___timeCounter_68; }
	inline float* get_address_of_timeCounter_68() { return &___timeCounter_68; }
	inline void set_timeCounter_68(float value)
	{
		___timeCounter_68 = value;
	}

	inline static int32_t get_offset_of_lastFramerate_69() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___lastFramerate_69)); }
	inline float get_lastFramerate_69() const { return ___lastFramerate_69; }
	inline float* get_address_of_lastFramerate_69() { return &___lastFramerate_69; }
	inline void set_lastFramerate_69(float value)
	{
		___lastFramerate_69 = value;
	}

	inline static int32_t get_offset_of_refreshTime_70() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___refreshTime_70)); }
	inline float get_refreshTime_70() const { return ___refreshTime_70; }
	inline float* get_address_of_refreshTime_70() { return &___refreshTime_70; }
	inline void set_refreshTime_70(float value)
	{
		___refreshTime_70 = value;
	}

	inline static int32_t get_offset_of_currentContentMode_72() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentContentMode_72)); }
	inline int32_t get_currentContentMode_72() const { return ___currentContentMode_72; }
	inline int32_t* get_address_of_currentContentMode_72() { return &___currentContentMode_72; }
	inline void set_currentContentMode_72(int32_t value)
	{
		___currentContentMode_72 = value;
	}

	inline static int32_t get_offset_of_currentThresholdMode_73() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentThresholdMode_73)); }
	inline int32_t get_currentThresholdMode_73() const { return ___currentThresholdMode_73; }
	inline int32_t* get_address_of_currentThresholdMode_73() { return &___currentThresholdMode_73; }
	inline void set_currentThresholdMode_73(int32_t value)
	{
		___currentThresholdMode_73 = value;
	}

	inline static int32_t get_offset_of_currentThreshold_74() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentThreshold_74)); }
	inline int32_t get_currentThreshold_74() const { return ___currentThreshold_74; }
	inline int32_t* get_address_of_currentThreshold_74() { return &___currentThreshold_74; }
	inline void set_currentThreshold_74(int32_t value)
	{
		___currentThreshold_74 = value;
	}

	inline static int32_t get_offset_of_currentLabelingMode_75() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentLabelingMode_75)); }
	inline int32_t get_currentLabelingMode_75() const { return ___currentLabelingMode_75; }
	inline int32_t* get_address_of_currentLabelingMode_75() { return &___currentLabelingMode_75; }
	inline void set_currentLabelingMode_75(int32_t value)
	{
		___currentLabelingMode_75 = value;
	}

	inline static int32_t get_offset_of_currentTemplateSize_76() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentTemplateSize_76)); }
	inline int32_t get_currentTemplateSize_76() const { return ___currentTemplateSize_76; }
	inline int32_t* get_address_of_currentTemplateSize_76() { return &___currentTemplateSize_76; }
	inline void set_currentTemplateSize_76(int32_t value)
	{
		___currentTemplateSize_76 = value;
	}

	inline static int32_t get_offset_of_currentTemplateCountMax_77() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentTemplateCountMax_77)); }
	inline int32_t get_currentTemplateCountMax_77() const { return ___currentTemplateCountMax_77; }
	inline int32_t* get_address_of_currentTemplateCountMax_77() { return &___currentTemplateCountMax_77; }
	inline void set_currentTemplateCountMax_77(int32_t value)
	{
		___currentTemplateCountMax_77 = value;
	}

	inline static int32_t get_offset_of_currentBorderSize_78() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentBorderSize_78)); }
	inline float get_currentBorderSize_78() const { return ___currentBorderSize_78; }
	inline float* get_address_of_currentBorderSize_78() { return &___currentBorderSize_78; }
	inline void set_currentBorderSize_78(float value)
	{
		___currentBorderSize_78 = value;
	}

	inline static int32_t get_offset_of_currentPatternDetectionMode_79() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentPatternDetectionMode_79)); }
	inline int32_t get_currentPatternDetectionMode_79() const { return ___currentPatternDetectionMode_79; }
	inline int32_t* get_address_of_currentPatternDetectionMode_79() { return &___currentPatternDetectionMode_79; }
	inline void set_currentPatternDetectionMode_79(int32_t value)
	{
		___currentPatternDetectionMode_79 = value;
	}

	inline static int32_t get_offset_of_currentMatrixCodeType_80() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentMatrixCodeType_80)); }
	inline int32_t get_currentMatrixCodeType_80() const { return ___currentMatrixCodeType_80; }
	inline int32_t* get_address_of_currentMatrixCodeType_80() { return &___currentMatrixCodeType_80; }
	inline void set_currentMatrixCodeType_80(int32_t value)
	{
		___currentMatrixCodeType_80 = value;
	}

	inline static int32_t get_offset_of_currentImageProcMode_81() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentImageProcMode_81)); }
	inline int32_t get_currentImageProcMode_81() const { return ___currentImageProcMode_81; }
	inline int32_t* get_address_of_currentImageProcMode_81() { return &___currentImageProcMode_81; }
	inline void set_currentImageProcMode_81(int32_t value)
	{
		___currentImageProcMode_81 = value;
	}

	inline static int32_t get_offset_of_currentUseVideoBackground_82() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentUseVideoBackground_82)); }
	inline bool get_currentUseVideoBackground_82() const { return ___currentUseVideoBackground_82; }
	inline bool* get_address_of_currentUseVideoBackground_82() { return &___currentUseVideoBackground_82; }
	inline void set_currentUseVideoBackground_82(bool value)
	{
		___currentUseVideoBackground_82 = value;
	}

	inline static int32_t get_offset_of_currentNFTMultiMode_83() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentNFTMultiMode_83)); }
	inline bool get_currentNFTMultiMode_83() const { return ___currentNFTMultiMode_83; }
	inline bool* get_address_of_currentNFTMultiMode_83() { return &___currentNFTMultiMode_83; }
	inline void set_currentNFTMultiMode_83(bool value)
	{
		___currentNFTMultiMode_83 = value;
	}

	inline static int32_t get_offset_of_currentLogLevel_84() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___currentLogLevel_84)); }
	inline int32_t get_currentLogLevel_84() const { return ___currentLogLevel_84; }
	inline int32_t* get_address_of_currentLogLevel_84() { return &___currentLogLevel_84; }
	inline void set_currentLogLevel_84(int32_t value)
	{
		___currentLogLevel_84 = value;
	}

	inline static int32_t get_offset_of_style_85() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___style_85)); }
	inline GUIStyleU5BU5D_t2497716199* get_style_85() const { return ___style_85; }
	inline GUIStyleU5BU5D_t2497716199** get_address_of_style_85() { return &___style_85; }
	inline void set_style_85(GUIStyleU5BU5D_t2497716199* value)
	{
		___style_85 = value;
		Il2CppCodeGenWriteBarrier(&___style_85, value);
	}

	inline static int32_t get_offset_of_guiSetup_86() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___guiSetup_86)); }
	inline bool get_guiSetup_86() const { return ___guiSetup_86; }
	inline bool* get_address_of_guiSetup_86() { return &___guiSetup_86; }
	inline void set_guiSetup_86(bool value)
	{
		___guiSetup_86 = value;
	}

	inline static int32_t get_offset_of_showGUIErrorDialog_87() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___showGUIErrorDialog_87)); }
	inline bool get_showGUIErrorDialog_87() const { return ___showGUIErrorDialog_87; }
	inline bool* get_address_of_showGUIErrorDialog_87() { return &___showGUIErrorDialog_87; }
	inline void set_showGUIErrorDialog_87(bool value)
	{
		___showGUIErrorDialog_87 = value;
	}

	inline static int32_t get_offset_of_showGUIErrorDialogContent_88() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___showGUIErrorDialogContent_88)); }
	inline String_t* get_showGUIErrorDialogContent_88() const { return ___showGUIErrorDialogContent_88; }
	inline String_t** get_address_of_showGUIErrorDialogContent_88() { return &___showGUIErrorDialogContent_88; }
	inline void set_showGUIErrorDialogContent_88(String_t* value)
	{
		___showGUIErrorDialogContent_88 = value;
		Il2CppCodeGenWriteBarrier(&___showGUIErrorDialogContent_88, value);
	}

	inline static int32_t get_offset_of_showGUIErrorDialogWinRect_89() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___showGUIErrorDialogWinRect_89)); }
	inline Rect_t3681755626  get_showGUIErrorDialogWinRect_89() const { return ___showGUIErrorDialogWinRect_89; }
	inline Rect_t3681755626 * get_address_of_showGUIErrorDialogWinRect_89() { return &___showGUIErrorDialogWinRect_89; }
	inline void set_showGUIErrorDialogWinRect_89(Rect_t3681755626  value)
	{
		___showGUIErrorDialogWinRect_89 = value;
	}

	inline static int32_t get_offset_of_showGUIDebug_90() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___showGUIDebug_90)); }
	inline bool get_showGUIDebug_90() const { return ___showGUIDebug_90; }
	inline bool* get_address_of_showGUIDebug_90() { return &___showGUIDebug_90; }
	inline void set_showGUIDebug_90(bool value)
	{
		___showGUIDebug_90 = value;
	}

	inline static int32_t get_offset_of_showGUIDebugInfo_91() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___showGUIDebugInfo_91)); }
	inline bool get_showGUIDebugInfo_91() const { return ___showGUIDebugInfo_91; }
	inline bool* get_address_of_showGUIDebugInfo_91() { return &___showGUIDebugInfo_91; }
	inline void set_showGUIDebugInfo_91(bool value)
	{
		___showGUIDebugInfo_91 = value;
	}

	inline static int32_t get_offset_of_showGUIDebugLogConsole_92() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___showGUIDebugLogConsole_92)); }
	inline bool get_showGUIDebugLogConsole_92() const { return ___showGUIDebugLogConsole_92; }
	inline bool* get_address_of_showGUIDebugLogConsole_92() { return &___showGUIDebugLogConsole_92; }
	inline void set_showGUIDebugLogConsole_92(bool value)
	{
		___showGUIDebugLogConsole_92 = value;
	}

	inline static int32_t get_offset_of_scrollPosition_93() { return static_cast<int32_t>(offsetof(ARController_t593870669, ___scrollPosition_93)); }
	inline Vector2_t2243707579  get_scrollPosition_93() const { return ___scrollPosition_93; }
	inline Vector2_t2243707579 * get_address_of_scrollPosition_93() { return &___scrollPosition_93; }
	inline void set_scrollPosition_93(Vector2_t2243707579  value)
	{
		___scrollPosition_93 = value;
	}
};

struct ARController_t593870669_StaticFields
{
public:
	// System.Action`1<System.String> ARController::<logCallback>k__BackingField
	Action_1_t1831019615 * ___U3ClogCallbackU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> ARController::logMessages
	List_1_t1398341365 * ___logMessages_3;
	// System.Collections.Generic.Dictionary`2<ContentMode,System.String> ARController::ContentModeNames
	Dictionary_2_t3757846578 * ___ContentModeNames_66;
	// System.Collections.Generic.Dictionary`2<ARController/ARToolKitThresholdMode,System.String> ARController::ThresholdModeDescriptions
	Dictionary_2_t3314526645 * ___ThresholdModeDescriptions_71;
	// PluginFunctions/LogCallback ARController::<>f__mg$cache0
	LogCallback_t2143553514 * ___U3CU3Ef__mgU24cache0_94;
	// PluginFunctions/LogCallback ARController::<>f__mg$cache1
	LogCallback_t2143553514 * ___U3CU3Ef__mgU24cache1_95;

public:
	inline static int32_t get_offset_of_U3ClogCallbackU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARController_t593870669_StaticFields, ___U3ClogCallbackU3Ek__BackingField_2)); }
	inline Action_1_t1831019615 * get_U3ClogCallbackU3Ek__BackingField_2() const { return ___U3ClogCallbackU3Ek__BackingField_2; }
	inline Action_1_t1831019615 ** get_address_of_U3ClogCallbackU3Ek__BackingField_2() { return &___U3ClogCallbackU3Ek__BackingField_2; }
	inline void set_U3ClogCallbackU3Ek__BackingField_2(Action_1_t1831019615 * value)
	{
		___U3ClogCallbackU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ClogCallbackU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_logMessages_3() { return static_cast<int32_t>(offsetof(ARController_t593870669_StaticFields, ___logMessages_3)); }
	inline List_1_t1398341365 * get_logMessages_3() const { return ___logMessages_3; }
	inline List_1_t1398341365 ** get_address_of_logMessages_3() { return &___logMessages_3; }
	inline void set_logMessages_3(List_1_t1398341365 * value)
	{
		___logMessages_3 = value;
		Il2CppCodeGenWriteBarrier(&___logMessages_3, value);
	}

	inline static int32_t get_offset_of_ContentModeNames_66() { return static_cast<int32_t>(offsetof(ARController_t593870669_StaticFields, ___ContentModeNames_66)); }
	inline Dictionary_2_t3757846578 * get_ContentModeNames_66() const { return ___ContentModeNames_66; }
	inline Dictionary_2_t3757846578 ** get_address_of_ContentModeNames_66() { return &___ContentModeNames_66; }
	inline void set_ContentModeNames_66(Dictionary_2_t3757846578 * value)
	{
		___ContentModeNames_66 = value;
		Il2CppCodeGenWriteBarrier(&___ContentModeNames_66, value);
	}

	inline static int32_t get_offset_of_ThresholdModeDescriptions_71() { return static_cast<int32_t>(offsetof(ARController_t593870669_StaticFields, ___ThresholdModeDescriptions_71)); }
	inline Dictionary_2_t3314526645 * get_ThresholdModeDescriptions_71() const { return ___ThresholdModeDescriptions_71; }
	inline Dictionary_2_t3314526645 ** get_address_of_ThresholdModeDescriptions_71() { return &___ThresholdModeDescriptions_71; }
	inline void set_ThresholdModeDescriptions_71(Dictionary_2_t3314526645 * value)
	{
		___ThresholdModeDescriptions_71 = value;
		Il2CppCodeGenWriteBarrier(&___ThresholdModeDescriptions_71, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_94() { return static_cast<int32_t>(offsetof(ARController_t593870669_StaticFields, ___U3CU3Ef__mgU24cache0_94)); }
	inline LogCallback_t2143553514 * get_U3CU3Ef__mgU24cache0_94() const { return ___U3CU3Ef__mgU24cache0_94; }
	inline LogCallback_t2143553514 ** get_address_of_U3CU3Ef__mgU24cache0_94() { return &___U3CU3Ef__mgU24cache0_94; }
	inline void set_U3CU3Ef__mgU24cache0_94(LogCallback_t2143553514 * value)
	{
		___U3CU3Ef__mgU24cache0_94 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_94, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_95() { return static_cast<int32_t>(offsetof(ARController_t593870669_StaticFields, ___U3CU3Ef__mgU24cache1_95)); }
	inline LogCallback_t2143553514 * get_U3CU3Ef__mgU24cache1_95() const { return ___U3CU3Ef__mgU24cache1_95; }
	inline LogCallback_t2143553514 ** get_address_of_U3CU3Ef__mgU24cache1_95() { return &___U3CU3Ef__mgU24cache1_95; }
	inline void set_U3CU3Ef__mgU24cache1_95(LogCallback_t2143553514 * value)
	{
		___U3CU3Ef__mgU24cache1_95 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_95, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<ZXing.Result>
struct Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6;
// System.Action`1<ZXing.ResultPoint>
struct Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>
struct Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Target>
struct IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996;
// System.Collections.Generic.IEnumerable`1<TargetFacade>
struct IEnumerable_1_tF3B8FD5596FA13C92B5ED485F4835E2D2D158A6D;
// System.Collections.Generic.IEnumerable`1<TMPro.TMP_Dropdown/OptionData>
struct IEnumerable_1_tA6A98529A099A09F113B700F78085F2959AE4BB6;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<TargetFacade>
struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<TargetFacade>
struct Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Rendering.CameraEvent[]
struct CameraEventU5BU5D_tCE64254E9E2B285C33AE3AA6C3D1E9AA3BE6CE1E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// Target[]
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B;
// TargetFacade[]
struct TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Dropdown/OptionData[]
struct OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARCameraBackground
struct ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GetImageAlternative
struct GetImageAlternative_t4AD9915FCE33B62597BF3AE183556E5D68801C68;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// ZXing.IBarcodeReader
struct IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// KeepScreenAlive
struct KeepScreenAlive_t2F16AC03F9E5D64687D4ABE3B01449F3D9364FAC;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// NavigationController
struct NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PathArrowVisualisation
struct PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4;
// PathLineVisualisation
struct PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D;
// QrCodeRecenter
struct QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365;
// ZXing.Reader
struct Reader_t1A9C7CADF7A2C1EDCB670DAA63F259E7B798FE4C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetUiText
struct SetUiText_t138DAB61BB52772194BAD42D32248EE7C549BEC9;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// SwitchPathVisualisation
struct SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5;
// TargetFacade
struct TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1;
// TargetHandler
struct TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751;
// TargetWrapper
struct TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ToggleVisibility
struct ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// TargetHandler/<>c
struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47;
// TargetHandler/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t03400D16907E6F18C6A96BC8077E180A40CF2BEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mA87CB9E1246C2C7429BE6266A26A0BFF9428FF42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m7BB352FCF22398033C06C070FB816DFA3EFC1646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_mAA634BA2804D030DDFAC95C361D3B006AE28939A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__10_0_m975329254106D2DBB005D2D5EE5B4CA78F26F718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetCurrentTargetByTargetTextU3Eb__0_mC933BC44CCCE45C4841672F0EDFD6655EDCD239C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TargetFacade>
struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// ZXing.BarcodeReaderGeneric
struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254  : public RuntimeObject
{
	// ZXing.Reader ZXing.BarcodeReaderGeneric::reader
	RuntimeObject* ___reader_2;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::createRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___createRGBLuminanceSource_3;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::createBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___createBinarizer_4;
	// System.Boolean ZXing.BarcodeReaderGeneric::usePreviousState
	bool ___usePreviousState_5;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric::options
	DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB* ___options_6;
	// System.Action`1<ZXing.ResultPoint> ZXing.BarcodeReaderGeneric::explicitResultPointFound
	Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF* ___explicitResultPointFound_7;
	// System.Action`1<ZXing.Result> ZXing.BarcodeReaderGeneric::ResultFound
	Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6* ___ResultFound_8;
	// System.Boolean ZXing.BarcodeReaderGeneric::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_9;
};

struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254_StaticFields
{
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::defaultCreateBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___defaultCreateBinarizer_0;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::defaultCreateRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___defaultCreateRGBLuminanceSource_1;
};

// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF  : public RuntimeObject
{
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
	// System.Int32 ZXing.Result::<NumBits>k__BackingField
	int32_t ___U3CNumBitsU3Ek__BackingField_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TargetWrapper
struct TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE  : public RuntimeObject
{
	// Target[] TargetWrapper::TargetList
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ___TargetList_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E  : public RuntimeObject
{
	// System.String TMPro.TMP_Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite TMPro.TMP_Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// TargetHandler/<>c
struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47  : public RuntimeObject
{
};

struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields
{
	// TargetHandler/<>c TargetHandler/<>c::<>9
	U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* ___U3CU3E9_0;
	// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData> TargetHandler/<>c::<>9__10_0
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* ___U3CU3E9__10_0_1;
};

// TargetHandler/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95  : public RuntimeObject
{
	// System.String TargetHandler/<>c__DisplayClass13_0::targetText
	String_t* ___targetText_0;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<UnityEngine.CameraClearFlags>
struct Nullable_1_t14BBC3DE3B6A54EBB06977978775A190F1D6DA44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB  : public BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::createLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___createLuminanceSource_11;
};

struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_StaticFields
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___defaultCreateLuminanceSource_10;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5  : public RuntimeObject
{
	// System.String Target::Name
	String_t* ___Name_0;
	// System.Int32 Target::FloorNumber
	int32_t ___FloorNumber_1;
	// UnityEngine.Vector3 Target::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_2;
	// UnityEngine.Vector3 Target::Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Rotation_3;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;
};

struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995* ___s_OnAsyncConversionCompleteDelegate_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>
struct Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13  : public MulticastDelegate_t
{
};

// System.Predicate`1<TargetFacade>
struct Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.ARCameraBackground
struct ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraBackground::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_10;
	// UnityEngine.XR.ARFoundation.ARCameraManager UnityEngine.XR.ARFoundation.ARCameraBackground::m_CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___m_CameraManager_11;
	// UnityEngine.XR.ARFoundation.AROcclusionManager UnityEngine.XR.ARFoundation.ARCameraBackground::m_OcclusionManager
	AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* ___m_OcclusionManager_12;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.ARFoundation.ARCameraBackground::m_CommandBuffer
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_CommandBuffer_13;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraBackground::m_UseCustomMaterial
	bool ___m_UseCustomMaterial_14;
	// UnityEngine.Material UnityEngine.XR.ARFoundation.ARCameraBackground::m_CustomMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_CustomMaterial_15;
	// UnityEngine.Material UnityEngine.XR.ARFoundation.ARCameraBackground::m_DefaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DefaultMaterial_16;
	// System.Nullable`1<UnityEngine.CameraClearFlags> UnityEngine.XR.ARFoundation.ARCameraBackground::m_PreviousCameraClearFlags
	Nullable_1_t14BBC3DE3B6A54EBB06977978775A190F1D6DA44 ___m_PreviousCameraClearFlags_17;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraBackground::m_PreviousCameraFieldOfView
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_PreviousCameraFieldOfView_18;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraBackground::m_BackgroundRenderingEnabled
	bool ___m_BackgroundRenderingEnabled_19;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraBackground::m_CommandBufferCullingState
	bool ___m_CommandBufferCullingState_20;
};

struct ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703_StaticFields
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARCameraBackground::k_MainTexId
	int32_t ___k_MainTexId_7;
	// System.Int32 UnityEngine.XR.ARFoundation.ARCameraBackground::k_DisplayTransformId
	int32_t ___k_DisplayTransformId_8;
	// System.Int32 UnityEngine.XR.ARFoundation.ARCameraBackground::k_CameraForwardScaleId
	int32_t ___k_CameraForwardScaleId_9;
	// System.Action`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraBackground::s_BeforeBackgroundRenderHandler
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___s_BeforeBackgroundRenderHandler_21;
	// System.IntPtr UnityEngine.XR.ARFoundation.ARCameraBackground::s_BeforeBackgroundRenderHandlerFuncPtr
	intptr_t ___s_BeforeBackgroundRenderHandlerFuncPtr_22;
	// UnityEngine.XR.ARSubsystems.XRCameraSubsystem UnityEngine.XR.ARFoundation.ARCameraBackground::s_CameraSubsystem
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___s_CameraSubsystem_23;
	// UnityEngine.Rendering.CameraEvent[] UnityEngine.XR.ARFoundation.ARCameraBackground::s_DefaultCameraEvents
	CameraEventU5BU5D_tCE64254E9E2B285C33AE3AA6C3D1E9AA3BE6CE1E* ___s_DefaultCameraEvents_24;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// GetImageAlternative
struct GetImageAlternative_t4AD9915FCE33B62597BF3AE183556E5D68801C68  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARCameraBackground GetImageAlternative::arCameraBackground
	ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703* ___arCameraBackground_4;
	// UnityEngine.RenderTexture GetImageAlternative::targetRenderTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetRenderTexture_5;
	// TMPro.TextMeshProUGUI GetImageAlternative::qrCodeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___qrCodeText_6;
	// UnityEngine.Texture2D GetImageAlternative::cameraImageTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cameraImageTexture_7;
	// ZXing.IBarcodeReader GetImageAlternative::reader
	RuntimeObject* ___reader_8;
};

// KeepScreenAlive
struct KeepScreenAlive_t2F16AC03F9E5D64687D4ABE3B01449F3D9364FAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NavigationController
struct NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 NavigationController::<TargetPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTargetPositionU3Ek__BackingField_4;
	// UnityEngine.AI.NavMeshPath NavigationController::<CalculatedPath>k__BackingField
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___U3CCalculatedPathU3Ek__BackingField_5;
};

// PathArrowVisualisation
struct PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NavigationController PathArrowVisualisation::navigationController
	NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* ___navigationController_4;
	// UnityEngine.GameObject PathArrowVisualisation::arrow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arrow_5;
	// UnityEngine.UI.Slider PathArrowVisualisation::navigationYOffset
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___navigationYOffset_6;
	// System.Single PathArrowVisualisation::moveOnDistance
	float ___moveOnDistance_7;
	// UnityEngine.AI.NavMeshPath PathArrowVisualisation::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_8;
	// System.Single PathArrowVisualisation::currentDistance
	float ___currentDistance_9;
	// UnityEngine.Vector3[] PathArrowVisualisation::pathOffset
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pathOffset_10;
	// UnityEngine.Vector3 PathArrowVisualisation::nextNavigationPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextNavigationPoint_11;
};

// PathLineVisualisation
struct PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NavigationController PathLineVisualisation::navigationController
	NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* ___navigationController_4;
	// UnityEngine.LineRenderer PathLineVisualisation::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_5;
	// UnityEngine.UI.Slider PathLineVisualisation::navigationYOffset
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___navigationYOffset_6;
	// UnityEngine.AI.NavMeshPath PathLineVisualisation::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_7;
	// UnityEngine.Vector3[] PathLineVisualisation::calculatedPathAndOffset
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___calculatedPathAndOffset_8;
};

// QrCodeRecenter
struct QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession QrCodeRecenter::session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin QrCodeRecenter::sessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager QrCodeRecenter::cameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager_6;
	// TargetHandler QrCodeRecenter::targetHandler
	TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* ___targetHandler_7;
	// UnityEngine.GameObject QrCodeRecenter::qrCodeScanningPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___qrCodeScanningPanel_8;
	// UnityEngine.Texture2D QrCodeRecenter::cameraImageTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cameraImageTexture_9;
	// ZXing.IBarcodeReader QrCodeRecenter::reader
	RuntimeObject* ___reader_10;
	// System.Boolean QrCodeRecenter::scanningEnabled
	bool ___scanningEnabled_11;
};

// SetUiText
struct SetUiText_t138DAB61BB52772194BAD42D32248EE7C549BEC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text SetUiText::textField
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textField_4;
	// System.String SetUiText::fixedText
	String_t* ___fixedText_5;
};

// SwitchPathVisualisation
struct SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PathLineVisualisation SwitchPathVisualisation::pathLineVis
	PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* ___pathLineVis_4;
	// PathArrowVisualisation SwitchPathVisualisation::arrowLineVis
	PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* ___arrowLineVis_5;
	// System.Int32 SwitchPathVisualisation::visualisationCounter
	int32_t ___visualisationCounter_6;
	// UnityEngine.GameObject SwitchPathVisualisation::activeVisualisation
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeVisualisation_7;
};

// TargetFacade
struct TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TargetFacade::Name
	String_t* ___Name_4;
	// System.Int32 TargetFacade::FloorNumber
	int32_t ___FloorNumber_5;
};

// TargetHandler
struct TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NavigationController TargetHandler::navigationController
	NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* ___navigationController_4;
	// UnityEngine.TextAsset TargetHandler::targetModelData
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___targetModelData_5;
	// TMPro.TMP_Dropdown TargetHandler::targetDataDropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___targetDataDropdown_6;
	// UnityEngine.GameObject TargetHandler::targetObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObjectPrefab_7;
	// UnityEngine.Transform[] TargetHandler::targetObjectsParentTransforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___targetObjectsParentTransforms_8;
	// System.Collections.Generic.List`1<TargetFacade> TargetHandler::currentTargetItems
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* ___currentTargetItems_9;
};

// ToggleVisibility
struct ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ToggleVisibility::toggleObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___toggleObject_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// Target[]
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B  : public RuntimeArray
{
	ALIGN_FIELD (8) Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* m_Items[1];

	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void NavigationController::set_CalculatedPath(UnityEngine.AI.NavMeshPath)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_CalculatedPath_m104DCC698C93B121B57A4C5BBAC8A4BF77141131_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 NavigationController::get_TargetPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.AI.NavMeshPath NavigationController::get_CalculatedPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::TryAcquireLatestCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* ___cpuImage0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_inputRect(UnityEngine.RectInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputDimensions(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputFormat(UnityEngine.TextureFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_transformation(UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::GetConvertedDataSize(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___conversionParams0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
inline NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_gshared)(___array0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Convert(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,Unity.Collections.NativeSlice`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___conversionParams0, NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___destinationBuffer1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_gshared)(__this, ___data0, method);
}
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared)(__this, method);
}
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.String ZXing.Result::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.Void QrCodeRecenter::SetQrCodeRecenterTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___targetText0, const RuntimeMethod* method) ;
// System.Void QrCodeRecenter::ToggleScanning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) ;
// TargetFacade TargetHandler::GetCurrentTargetByTargetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_GetCurrentTargetByTargetText_mE318E32826DAF7A5175F84911CD68946C7A7A38E (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, String_t* ___targetText0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSession::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_Reset_mE905496B8400CB5BF1EB50A01C675771FCCF9A91 (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.BarcodeReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* __this, const RuntimeMethod* method) ;
// System.Void TargetHandler::GenerateTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// System.Void TargetHandler::FillDropdownWithTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Target> TargetHandler::GenerateTargetDataFromSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetHandler_GenerateTargetDataFromSource_mD66D3551EB6DB26C917D581030F8FD15664ECF5F (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// TargetFacade TargetHandler::CreateTargetFacade(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TargetFacade>::Add(T)
inline void List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_inline (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<TargetWrapper>(System.String)
inline TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_mAA634BA2804D030DDFAC95C361D3B006AE28939A (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TargetFacade>()
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7C41A97BBBCE52B7BC10772C8DFE11EC79C08548 (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<TargetFacade,TMPro.TMP_Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mA87CB9E1246C2C7429BE6266A26A0BFF9428FF42 (RuntimeObject* ___source0, Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<TMPro.TMP_Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m7BB352FCF22398033C06C070FB816DFA3EFC1646 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void TMPro.TMP_Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::AddOptions(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_AddOptions_m0552A59BC909364951E1661FABADBC076715E4DD (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* ___options0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TargetHandler::GetCurrentlySelectedTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) ;
// System.Void NavigationController::set_TargetPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TargetFacade>::get_Count()
inline int32_t List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_inline (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TargetFacade>::get_Item(System.Int32)
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void TargetHandler/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m2AC827ADC7FC6E412662C150748A4ECD91A1B5E2 (U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<TargetFacade>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m12E7562663181EB5C096D32D4CC8AA69C6948DB5 (Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<TargetFacade>::Find(System.Predicate`1<T>)
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A* ___match0, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<TargetFacade>::.ctor()
inline void List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4 (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TargetHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6 (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.XR.ARFoundation.ARCameraBackground::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ARCameraBackground_get_material_mD444C30747216E7E7B5FF0F714EE0DF57CC93EC8 (ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___dst1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void PathArrowVisualisation::AddOffsetToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualisation_AddOffsetToPath_m19DF93E5C75637D1C15AE8DDA73D9A8E1B6B8455 (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) ;
// System.Void PathArrowVisualisation::SelectNextNavigationPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualisation_SelectNextNavigationPoint_m19A81BC5FCA1E69373111EFEB8958EBFDA554BFB (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) ;
// System.Void PathArrowVisualisation::AddArrowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualisation_AddArrowOffset_m31CEA1EF3BCAB2F2A6AC996D325D487879190AED (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PathArrowVisualisation::SelectNextNavigationPointWithinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PathArrowVisualisation_SelectNextNavigationPointWithinDistance_m771BAB8AEC8AFBCC3D4872E4EFF3D67D28E4DAFA (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void PathLineVisualisation::AddOffsetToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualisation_AddOffsetToPath_m993C043877B807938C5CB2B04BDE658C04466DDD (PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* __this, const RuntimeMethod* method) ;
// System.Void PathLineVisualisation::AddLineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualisation_AddLineOffset_m8F2630722898D7863826AD27FA8FE217D7C22E42 (PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* __this, const RuntimeMethod* method) ;
// System.Void PathLineVisualisation::SetLineRendererPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualisation_SetLineRendererPositions_m192328EEB33BC2C3377926E63C60B7AB0E80FD4E (PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void SwitchPathVisualisation::DisableAllPathVisuals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualisation_DisableAllPathVisuals_m0BB881FC0EA87F4A534E0DE6F9E723DBC6500A41 (SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59* __this, const RuntimeMethod* method) ;
// System.Void SwitchPathVisualisation::EnablePathVisualsByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualisation_EnablePathVisualsByIndex_mC083BFAF4C17D44B4D067918A50B6E5EF93E59AC (SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59* __this, int32_t ___visIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 NavigationController::get_TargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTargetPositionU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void NavigationController::set_TargetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.AI.NavMeshPath NavigationController::get_CalculatedPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public NavMeshPath CalculatedPath { get; private set; }
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = __this->___U3CCalculatedPathU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void NavigationController::set_CalculatedPath(UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_set_CalculatedPath_m104DCC698C93B121B57A4C5BBAC8A4BF77141131 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___value0, const RuntimeMethod* method) 
{
	{
		// public NavMeshPath CalculatedPath { get; private set; }
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = ___value0;
		__this->___U3CCalculatedPathU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCalculatedPathU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void NavigationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_Start_mD61804247723EB264D8C4B9DEDC264306DB32792 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CalculatedPath = new NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_0, NULL);
		NavigationController_set_CalculatedPath_m104DCC698C93B121B57A4C5BBAC8A4BF77141131_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void NavigationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_Update_m225B1D786B920C330F53FC0608E836C3EE4AE160 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// if (TargetPosition != Vector3.zero) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// NavMesh.CalculatePath(transform.position, TargetPosition, NavMesh.AllAreas, CalculatedPath);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline(__this, NULL);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_6;
		L_6 = NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline(__this, NULL);
		bool L_7;
		L_7 = NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9(L_4, L_5, (-1), L_6, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void NavigationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController__ctor_mAF12F851C3ECFC21B433A29BAEE0F98D3D2A70BF (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QrCodeRecenter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnEnable_mD1D7D5F40B155C306E1818A862E4CCD33A54A51F (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraManager.frameReceived += OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnDisable_m13A17AC01263D9EE1E2DC0B2CAEA646DFE939BC8 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraManager.frameReceived -= OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnCameraFrameReceived(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___eventArgs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* V_4 = NULL;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (!scanningEnabled) {
		bool L_0 = __this->___scanningEnabled_11;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image)) {
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_1 = __this->___cameraManager_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874(L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// var conversionParams = new XRCpuImage.ConversionParams {
		//     // Get the entire image.
		//     inputRect = new RectInt(0, 0, image.width, image.height),
		// 
		//     // Downsample by 2.
		//     outputDimensions = new Vector2Int(image.width / 2, image.height / 2),
		// 
		//     // Choose RGBA format.
		//     outputFormat = TextureFormat.RGBA32,
		// 
		//     // Flip across the vertical axis (mirror image).
		//     transformation = XRCpuImage.Transformation.MirrorY
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62));
		int32_t L_3;
		L_3 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
		int32_t L_4;
		L_4 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_5), 0, 0, L_3, L_4, /*hidden argument*/NULL);
		ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline((&V_5), L_5, NULL);
		int32_t L_6;
		L_6 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
		int32_t L_7;
		L_7 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_8), ((int32_t)(L_6/2)), ((int32_t)(L_7/2)), /*hidden argument*/NULL);
		ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline((&V_5), L_8, NULL);
		ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline((&V_5), 4, NULL);
		ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline((&V_5), 2, NULL);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_9 = V_5;
		V_1 = L_9;
		// int size = image.GetConvertedDataSize(conversionParams);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_10 = V_1;
		int32_t L_11;
		L_11 = XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE((&V_0), L_10, NULL);
		V_2 = L_11;
		// var buffer = new NativeArray<byte>(size, Allocator.Temp);
		int32_t L_12 = V_2;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_3), L_12, 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// image.Convert(conversionParams, buffer);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_13 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_14 = V_3;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_15;
		L_15 = NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9(L_14, NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var);
		XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1((&V_0), L_13, L_15, NULL);
		// image.Dispose();
		XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B((&V_0), NULL);
		// cameraImageTexture = new Texture2D(
		//     conversionParams.outputDimensions.x,
		//     conversionParams.outputDimensions.y,
		//     conversionParams.outputFormat,
		//     false);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_16;
		L_16 = ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline((&V_1), NULL);
		V_6 = L_16;
		int32_t L_17;
		L_17 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_6), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18;
		L_18 = ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline((&V_1), NULL);
		V_6 = L_18;
		int32_t L_19;
		L_19 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_6), NULL);
		int32_t L_20;
		L_20 = ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline((&V_1), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_21, L_17, L_19, L_20, (bool)0, NULL);
		__this->___cameraImageTexture_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraImageTexture_9), (void*)L_21);
		// cameraImageTexture.LoadRawTextureData(buffer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = __this->___cameraImageTexture_9;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_23 = V_3;
		NullCheck(L_22);
		Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3(L_22, L_23, Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var);
		// cameraImageTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = __this->___cameraImageTexture_9;
		NullCheck(L_24);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_24, NULL);
		// buffer.Dispose();
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_3), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		// var result = reader.Decode(cameraImageTexture.GetPixels32(), cameraImageTexture.width, cameraImageTexture.height);
		RuntimeObject* L_25 = __this->___reader_10;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = __this->___cameraImageTexture_9;
		NullCheck(L_26);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_27;
		L_27 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_26, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___cameraImageTexture_9;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_28);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___cameraImageTexture_9;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_30);
		NullCheck(L_25);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_32;
		L_32 = InterfaceFuncInvoker3< Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, int32_t, int32_t >::Invoke(0 /* ZXing.Result ZXing.IBarcodeReader::Decode(UnityEngine.Color32[],System.Int32,System.Int32) */, IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var, L_25, L_27, L_29, L_31);
		V_4 = L_32;
		// if (result != null) {
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_33 = V_4;
		if (!L_33)
		{
			goto IL_012c;
		}
	}
	{
		// SetQrCodeRecenterTarget(result.Text);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_34 = V_4;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(L_34, NULL);
		QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD(__this, L_35, NULL);
		// ToggleScanning();
		QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD(__this, NULL);
	}

IL_012c:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::SetQrCodeRecenterTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___targetText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* V_0 = NULL;
	{
		// TargetFacade currentTarget = targetHandler.GetCurrentTargetByTargetText(targetText);
		TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_0 = __this->___targetHandler_7;
		String_t* L_1 = ___targetText0;
		NullCheck(L_0);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_2;
		L_2 = TargetHandler_GetCurrentTargetByTargetText_mE318E32826DAF7A5175F84911CD68946C7A7A38E(L_0, L_1, NULL);
		V_0 = L_2;
		// if (currentTarget != null) {
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// session.Reset();
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_5 = __this->___session_4;
		NullCheck(L_5);
		ARSession_Reset_mE905496B8400CB5BF1EB50A01C675771FCCF9A91(L_5, NULL);
		// sessionOrigin.transform.position = currentTarget.transform.position;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_6 = __this->___sessionOrigin_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_10, NULL);
		// sessionOrigin.transform.rotation = currentTarget.transform.rotation;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_11 = __this->___sessionOrigin_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_15, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::ChangeActiveFloor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_ChangeActiveFloor_m16AB91252BF9D24E2D48F2789F0BE512A6813E99 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___floorEntrance0, const RuntimeMethod* method) 
{
	{
		// SetQrCodeRecenterTarget(floorEntrance);
		String_t* L_0 = ___floorEntrance0;
		QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::ToggleScanning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	{
		// scanningEnabled = !scanningEnabled;
		bool L_0 = __this->___scanningEnabled_11;
		__this->___scanningEnabled_11 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// qrCodeScanningPanel.SetActive(scanningEnabled);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___qrCodeScanningPanel_8;
		bool L_2 = __this->___scanningEnabled_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter__ctor_mA089181E2E59AC0F2538D1DF51D403784D4D5EDD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IBarcodeReader reader = new BarcodeReader(); // create a barcode reader instance
		BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* L_0 = (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB*)il2cpp_codegen_object_new(BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D(L_0, NULL);
		__this->___reader_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_Start_m56B9094E87064E32320FF4212D9B2E415580A4E5 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	{
		// GenerateTargetItems();
		TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D(__this, NULL);
		// FillDropdownWithTargetItems();
		TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D(__this, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::GenerateTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t03400D16907E6F18C6A96BC8077E180A40CF2BEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_1 = NULL;
	{
		// IEnumerable<Target> targets = GenerateTargetDataFromSource();
		RuntimeObject* L_0;
		L_0 = TargetHandler_GenerateTargetDataFromSource_mD66D3551EB6DB26C917D581030F8FD15664ECF5F(__this, NULL);
		// foreach (Target target in targets) {
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Target>::GetEnumerator() */, IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_000e_1:
			{
				// foreach (Target target in targets) {
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_5;
				L_5 = InterfaceFuncInvoker0< Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Target>::get_Current() */, IEnumerator_1_t03400D16907E6F18C6A96BC8077E180A40CF2BEB_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// currentTargetItems.Add(CreateTargetFacade(target));
				List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_6 = __this->___currentTargetItems_9;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_7 = V_1;
				TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_8;
				L_8 = TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A(__this, L_7, NULL);
				NullCheck(L_6);
				List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_inline(L_6, L_8, List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var);
			}

IL_0027_1:
			{
				// foreach (Target target in targets) {
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Target> TargetHandler::GenerateTargetDataFromSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetHandler_GenerateTargetDataFromSource_mD66D3551EB6DB26C917D581030F8FD15664ECF5F (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_mAA634BA2804D030DDFAC95C361D3B006AE28939A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<TargetWrapper>(targetModelData.text).TargetList;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___targetModelData_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* L_2;
		L_2 = JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_mAA634BA2804D030DDFAC95C361D3B006AE28939A(L_1, JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_mAA634BA2804D030DDFAC95C361D3B006AE28939A_RuntimeMethod_var);
		NullCheck(L_2);
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_3 = L_2->___TargetList_0;
		return (RuntimeObject*)L_3;
	}
}
// TargetFacade TargetHandler::CreateTargetFacade(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject targetObject = Instantiate(targetObjectPrefab, targetObjectsParentTransforms[target.FloorNumber], false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___targetObjectPrefab_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___targetObjectsParentTransforms_8;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___FloorNumber_1;
		NullCheck(L_1);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6(L_0, L_5, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		// targetObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// targetObject.name = $"{target.FloorNumber} - {target.Name}";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_9 = ___target0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___FloorNumber_1;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_13 = ___target0;
		NullCheck(L_13);
		String_t* L_14 = L_13->___Name_0;
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB, L_12, L_14, NULL);
		NullCheck(L_8);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_8, L_15, NULL);
		// targetObject.transform.localPosition = target.Position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_18 = ___target0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___Position_2;
		NullCheck(L_17);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_19, NULL);
		// targetObject.transform.localRotation = Quaternion.Euler(target.Rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_16;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_22 = ___target0;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___Rotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_23, NULL);
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_24, NULL);
		// TargetFacade targetData = targetObject.GetComponent<TargetFacade>();
		NullCheck(L_20);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_25;
		L_25 = GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9(L_20, GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var);
		// targetData.Name = target.Name;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_26 = L_25;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_27 = ___target0;
		NullCheck(L_27);
		String_t* L_28 = L_27->___Name_0;
		NullCheck(L_26);
		L_26->___Name_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___Name_4), (void*)L_28);
		// targetData.FloorNumber = target.FloorNumber;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_29 = L_26;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_30 = ___target0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___FloorNumber_1;
		NullCheck(L_29);
		L_29->___FloorNumber_5 = L_31;
		// return targetData;
		return L_29;
	}
}
// System.Void TargetHandler::FillDropdownWithTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mA87CB9E1246C2C7429BE6266A26A0BFF9428FF42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m7BB352FCF22398033C06C070FB816DFA3EFC1646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__10_0_m975329254106D2DBB005D2D5EE5B4CA78F26F718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* V_0 = NULL;
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* G_B2_0 = NULL;
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* G_B2_1 = NULL;
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* G_B1_0 = NULL;
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* G_B1_1 = NULL;
	{
		// List<TMP_Dropdown.OptionData> targetFacadeOptionData =
		//     currentTargetItems.Select(x => new TMP_Dropdown.OptionData {
		//         text = $"{x.FloorNumber} - {x.Name}"
		//     }).ToList();
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_0 = __this->___currentTargetItems_9;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_1 = ((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1;
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* L_3 = ((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_4 = (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*)il2cpp_codegen_object_new(Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m7C41A97BBBCE52B7BC10772C8DFE11EC79C08548(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__10_0_m975329254106D2DBB005D2D5EE5B4CA78F26F718_RuntimeMethod_var), NULL);
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_5 = L_4;
		((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mA87CB9E1246C2C7429BE6266A26A0BFF9428FF42(G_B2_1, G_B2_0, Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mA87CB9E1246C2C7429BE6266A26A0BFF9428FF42_RuntimeMethod_var);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_7;
		L_7 = Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m7BB352FCF22398033C06C070FB816DFA3EFC1646(L_6, Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m7BB352FCF22398033C06C070FB816DFA3EFC1646_RuntimeMethod_var);
		V_0 = L_7;
		// targetDataDropdown.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_8 = __this->___targetDataDropdown_6;
		NullCheck(L_8);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_8, NULL);
		// targetDataDropdown.AddOptions(targetFacadeOptionData);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_9 = __this->___targetDataDropdown_6;
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_10 = V_0;
		NullCheck(L_9);
		TMP_Dropdown_AddOptions_m0552A59BC909364951E1661FABADBC076715E4DD(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::SetSelectedTargetPositionWithDropdown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_SetSelectedTargetPositionWithDropdown_mF065641E0F1AA3710569A24A543535AC7A269CE3 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	{
		// navigationController.TargetPosition = GetCurrentlySelectedTarget(selectedValue);
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_0 = __this->___navigationController_4;
		int32_t L_1 = ___selectedValue0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847(__this, L_1, NULL);
		NullCheck(L_0);
		NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline(L_0, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 TargetHandler::GetCurrentlySelectedTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selectedValue >= currentTargetItems.Count) {
		int32_t L_0 = ___selectedValue0;
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_1 = __this->___currentTargetItems_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_inline(L_1, List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_3;
	}

IL_0014:
	{
		// return currentTargetItems[selectedValue].transform.position;
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_4 = __this->___currentTargetItems_9;
		int32_t L_5 = ___selectedValue0;
		NullCheck(L_4);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_6;
		L_6 = List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D(L_4, L_5, List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		return L_8;
	}
}
// TargetFacade TargetHandler::GetCurrentTargetByTargetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_GetCurrentTargetByTargetText_mE318E32826DAF7A5175F84911CD68946C7A7A38E (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, String_t* ___targetText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetCurrentTargetByTargetTextU3Eb__0_mC933BC44CCCE45C4841672F0EDFD6655EDCD239C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* L_0 = (U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m2AC827ADC7FC6E412662C150748A4ECD91A1B5E2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* L_1 = V_0;
		String_t* L_2 = ___targetText0;
		NullCheck(L_1);
		L_1->___targetText_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___targetText_0), (void*)L_2);
		// return currentTargetItems.Find(x =>
		//     x.Name.ToLower().Equals(targetText.ToLower()));
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_3 = __this->___currentTargetItems_9;
		U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* L_4 = V_0;
		Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A* L_5 = (Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A*)il2cpp_codegen_object_new(Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m12E7562663181EB5C096D32D4CC8AA69C6948DB5(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetCurrentTargetByTargetTextU3Eb__0_mC933BC44CCCE45C4841672F0EDFD6655EDCD239C_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_6;
		L_6 = List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D(L_3, L_5, List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void TargetHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler__ctor_m4960DCAB72C0C58A6E03EA5ED0DE395C8B8B34D4 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<TargetFacade> currentTargetItems = new List<TargetFacade>();
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_0 = (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*)il2cpp_codegen_object_new(List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4(L_0, List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var);
		__this->___currentTargetItems_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTargetItems_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF434F78F7B00C831D0BAA0353041CFF18EE4D6B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* L_0 = (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47*)il2cpp_codegen_object_new(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D(L_0, NULL);
		((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TargetHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// TMPro.TMP_Dropdown/OptionData TargetHandler/<>c::<FillDropdownWithTargetItems>b__10_0(TargetFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__10_0_m975329254106D2DBB005D2D5EE5B4CA78F26F718 (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTargetItems.Select(x => new TMP_Dropdown.OptionData {
		//     text = $"{x.FloorNumber} - {x.Name}"
		// }).ToList();
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_0 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6(L_0, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_1 = L_0;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_2 = ___x0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___FloorNumber_5;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_6 = ___x0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Name_4;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB, L_5, L_7, NULL);
		NullCheck(L_1);
		OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline(L_1, L_8, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetHandler/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m2AC827ADC7FC6E412662C150748A4ECD91A1B5E2 (U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TargetHandler/<>c__DisplayClass13_0::<GetCurrentTargetByTargetText>b__0(TargetFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetCurrentTargetByTargetTextU3Eb__0_mC933BC44CCCE45C4841672F0EDFD6655EDCD239C (U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___x0, const RuntimeMethod* method) 
{
	{
		// x.Name.ToLower().Equals(targetText.ToLower()));
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		String_t* L_3 = __this->___targetText_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFacade__ctor_mE11CAF4E53BAE3BECF7DE207337FDD38C30002A6 (TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWrapper__ctor_mCFEF636C6168DA23D079B9D639C2BACA9829D288 (TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GetImageAlternative::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetImageAlternative_Update_mA046E7E3C6731086AA2AC43B2560BACD09C5F3CA (GetImageAlternative_t4AD9915FCE33B62597BF3AE183556E5D68801C68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* V_0 = NULL;
	{
		// Graphics.Blit(null, targetRenderTexture, arCameraBackground.material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___targetRenderTexture_5;
		ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703* L_1 = __this->___arCameraBackground_4;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = ARCameraBackground_get_material_mD444C30747216E7E7B5FF0F714EE0DF57CC93EC8(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_0, L_2, NULL);
		// cameraImageTexture = new Texture2D(targetRenderTexture.width, targetRenderTexture.height, TextureFormat.RGBA32, false);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___targetRenderTexture_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___targetRenderTexture_5;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_7, L_4, L_6, 4, (bool)0, NULL);
		__this->___cameraImageTexture_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraImageTexture_7), (void*)L_7);
		// Graphics.CopyTexture(targetRenderTexture, cameraImageTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___targetRenderTexture_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___cameraImageTexture_7;
		Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58(L_8, L_9, NULL);
		// var result = reader.Decode(cameraImageTexture.GetPixels32(), cameraImageTexture.width, cameraImageTexture.height);
		RuntimeObject* L_10 = __this->___reader_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___cameraImageTexture_7;
		NullCheck(L_11);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_12;
		L_12 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_11, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = __this->___cameraImageTexture_7;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = __this->___cameraImageTexture_7;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		NullCheck(L_10);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_17;
		L_17 = InterfaceFuncInvoker3< Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, int32_t, int32_t >::Invoke(0 /* ZXing.Result ZXing.IBarcodeReader::Decode(UnityEngine.Color32[],System.Int32,System.Int32) */, IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var, L_10, L_12, L_14, L_16);
		V_0 = L_17;
		// if (result != null) {
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_18 = V_0;
		if (!L_18)
		{
			goto IL_008c;
		}
	}
	{
		// qrCodeText.text = result.Text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19 = __this->___qrCodeText_6;
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(L_20, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_21);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void GetImageAlternative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetImageAlternative__ctor_m6ADE9089C9D895A989EFAA5864A174DBDA2B5A21 (GetImageAlternative_t4AD9915FCE33B62597BF3AE183556E5D68801C68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IBarcodeReader reader = new BarcodeReader(); // create a barcode reader instance
		BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* L_0 = (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB*)il2cpp_codegen_object_new(BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D(L_0, NULL);
		__this->___reader_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KeepScreenAlive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeepScreenAlive_Start_m8F0225CC9C114A014CED2C414D7D40C5BCF29726 (KeepScreenAlive_t2F16AC03F9E5D64687D4ABE3B01449F3D9364FAC* __this, const RuntimeMethod* method) 
{
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// }
		return;
	}
}
// System.Void KeepScreenAlive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeepScreenAlive__ctor_mEEED06B74C738C85121398D9E405DC409F46C703 (KeepScreenAlive_t2F16AC03F9E5D64687D4ABE3B01449F3D9364FAC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PathArrowVisualisation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualisation_Update_m5D1B5313BEACDE35D2C12FD84A37FDF40FB11582 (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) 
{
	{
		// path = navigationController.CalculatedPath;
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_0 = __this->___navigationController_4;
		NullCheck(L_0);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_1;
		L_1 = NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline(L_0, NULL);
		__this->___path_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_8), (void*)L_1);
		// AddOffsetToPath();
		PathArrowVisualisation_AddOffsetToPath_m19DF93E5C75637D1C15AE8DDA73D9A8E1B6B8455(__this, NULL);
		// SelectNextNavigationPoint();
		PathArrowVisualisation_SelectNextNavigationPoint_m19A81BC5FCA1E69373111EFEB8958EBFDA554BFB(__this, NULL);
		// AddArrowOffset();
		PathArrowVisualisation_AddArrowOffset_m31CEA1EF3BCAB2F2A6AC996D325D487879190AED(__this, NULL);
		// arrow.transform.LookAt(nextNavigationPoint);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___arrow_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___nextNavigationPoint_11;
		NullCheck(L_3);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PathArrowVisualisation::AddOffsetToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualisation_AddOffsetToPath_m19DF93E5C75637D1C15AE8DDA73D9A8E1B6B8455 (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// pathOffset = new Vector3[path.corners.Length];
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = __this->___path_8;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_0, NULL);
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->___pathOffset_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathOffset_10), (void*)L_2);
		// for (int i = 0; i < path.corners.Length; i++) {
		V_0 = 0;
		goto IL_006d;
	}

IL_001c:
	{
		// pathOffset[i] = new Vector3(path.corners[i].x, transform.position.y, path.corners[i].z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___pathOffset_10;
		int32_t L_4 = V_0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_5 = __this->___path_8;
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6;
		L_6 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_5, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_12 = __this->___path_8;
		NullCheck(L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13;
		L_13 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_12, NULL);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		float L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_8, L_11, L_15, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// for (int i = 0; i < path.corners.Length; i++) {
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < path.corners.Length; i++) {
		int32_t L_18 = V_0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_19 = __this->___path_8;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20;
		L_20 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_19, NULL);
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PathArrowVisualisation::SelectNextNavigationPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualisation_SelectNextNavigationPoint_m19A81BC5FCA1E69373111EFEB8958EBFDA554BFB (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) 
{
	{
		// nextNavigationPoint = SelectNextNavigationPointWithinDistance();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = PathArrowVisualisation_SelectNextNavigationPointWithinDistance_m771BAB8AEC8AFBCC3D4872E4EFF3D67D28E4DAFA(__this, NULL);
		__this->___nextNavigationPoint_11 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector3 PathArrowVisualisation::SelectNextNavigationPointWithinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PathArrowVisualisation_SelectNextNavigationPointWithinDistance_m771BAB8AEC8AFBCC3D4872E4EFF3D67D28E4DAFA (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < pathOffset.Length; i++) {
		V_0 = 0;
		goto IL_0045;
	}

IL_0004:
	{
		// currentDistance = Vector3.Distance(transform.position, pathOffset[i]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___pathOffset_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_5, NULL);
		__this->___currentDistance_9 = L_6;
		// if (currentDistance > moveOnDistance) {
		float L_7 = __this->___currentDistance_9;
		float L_8 = __this->___moveOnDistance_7;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0041;
		}
	}
	{
		// return pathOffset[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___pathOffset_10;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_0041:
	{
		// for (int i = 0; i < pathOffset.Length; i++) {
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < pathOffset.Length; i++) {
		int32_t L_14 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = __this->___pathOffset_10;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return navigationController.TargetPosition;
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_16 = __this->___navigationController_4;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline(L_16, NULL);
		return L_17;
	}
}
// System.Void PathArrowVisualisation::AddArrowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualisation_AddArrowOffset_m31CEA1EF3BCAB2F2A6AC996D325D487879190AED (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) 
{
	{
		// if (navigationYOffset.value != 0) {
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___navigationYOffset_6;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_005c;
		}
	}
	{
		// arrow.transform.position = new Vector3(arrow.transform.position.x, navigationYOffset.value, arrow.transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___arrow_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___arrow_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___navigationYOffset_6;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___arrow_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_7, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_14, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void PathArrowVisualisation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualisation__ctor_mABBEE6F9B10DE70BF083E563EC8F7E25132B31DD (PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 nextNavigationPoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___nextNavigationPoint_11 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PathLineVisualisation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualisation_Update_m5BDC2A6D04C27DCC2D99AD56870C8E389DDC6CEA (PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* __this, const RuntimeMethod* method) 
{
	{
		// path = navigationController.CalculatedPath;
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_0 = __this->___navigationController_4;
		NullCheck(L_0);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_1;
		L_1 = NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline(L_0, NULL);
		__this->___path_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_7), (void*)L_1);
		// AddOffsetToPath();
		PathLineVisualisation_AddOffsetToPath_m993C043877B807938C5CB2B04BDE658C04466DDD(__this, NULL);
		// AddLineOffset();
		PathLineVisualisation_AddLineOffset_m8F2630722898D7863826AD27FA8FE217D7C22E42(__this, NULL);
		// SetLineRendererPositions();
		PathLineVisualisation_SetLineRendererPositions_m192328EEB33BC2C3377926E63C60B7AB0E80FD4E(__this, NULL);
		// }
		return;
	}
}
// System.Void PathLineVisualisation::AddOffsetToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualisation_AddOffsetToPath_m993C043877B807938C5CB2B04BDE658C04466DDD (PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// calculatedPathAndOffset = new Vector3[path.corners.Length];
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = __this->___path_7;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_0, NULL);
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->___calculatedPathAndOffset_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___calculatedPathAndOffset_8), (void*)L_2);
		// for (int i = 0; i < path.corners.Length; i++) {
		V_0 = 0;
		goto IL_006d;
	}

IL_001c:
	{
		// calculatedPathAndOffset[i] = new Vector3(path.corners[i].x, transform.position.y, path.corners[i].z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___calculatedPathAndOffset_8;
		int32_t L_4 = V_0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_5 = __this->___path_7;
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6;
		L_6 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_5, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_12 = __this->___path_7;
		NullCheck(L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13;
		L_13 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_12, NULL);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		float L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_8, L_11, L_15, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// for (int i = 0; i < path.corners.Length; i++) {
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < path.corners.Length; i++) {
		int32_t L_18 = V_0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_19 = __this->___path_7;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20;
		L_20 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_19, NULL);
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PathLineVisualisation::AddLineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualisation_AddLineOffset_m8F2630722898D7863826AD27FA8FE217D7C22E42 (PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (navigationYOffset.value != 0) {
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___navigationYOffset_6;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_005b;
		}
	}
	{
		// for (int i = 0; i < calculatedPathAndOffset.Length; i++) {
		V_0 = 0;
		goto IL_0050;
	}

IL_0016:
	{
		// calculatedPathAndOffset[i] += new Vector3(0, navigationYOffset.value, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___calculatedPathAndOffset_8;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___navigationYOffset_6;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_8, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_9;
		// for (int i = 0; i < calculatedPathAndOffset.Length; i++) {
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0050:
	{
		// for (int i = 0; i < calculatedPathAndOffset.Length; i++) {
		int32_t L_11 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = __this->___calculatedPathAndOffset_8;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0016;
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void PathLineVisualisation::SetLineRendererPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualisation_SetLineRendererPositions_m192328EEB33BC2C3377926E63C60B7AB0E80FD4E (PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* __this, const RuntimeMethod* method) 
{
	{
		// line.positionCount = calculatedPathAndOffset.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___line_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___calculatedPathAndOffset_8;
		NullCheck(L_1);
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// line.SetPositions(calculatedPathAndOffset);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___line_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___calculatedPathAndOffset_8;
		NullCheck(L_2);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void PathLineVisualisation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualisation__ctor_m9F17124834ED03BB6959096A28B908DF3C94BC5B (PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchPathVisualisation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualisation_Start_mC7CD722A8FEFDAFC099A4C2A52F36B458561CB9A (SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59* __this, const RuntimeMethod* method) 
{
	{
		// activeVisualisation = pathLineVis.gameObject;
		PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* L_0 = __this->___pathLineVis_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		__this->___activeVisualisation_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeVisualisation_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void SwitchPathVisualisation::NextLineVisualisation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualisation_NextLineVisualisation_m3A87CFB9CA161901E5A4094DACE09E8B5D4A5FAD (SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59* __this, const RuntimeMethod* method) 
{
	{
		// visualisationCounter++;
		int32_t L_0 = __this->___visualisationCounter_6;
		__this->___visualisationCounter_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// DisableAllPathVisuals();
		SwitchPathVisualisation_DisableAllPathVisuals_m0BB881FC0EA87F4A534E0DE6F9E723DBC6500A41(__this, NULL);
		// EnablePathVisualsByIndex(visualisationCounter);
		int32_t L_1 = __this->___visualisationCounter_6;
		SwitchPathVisualisation_EnablePathVisualsByIndex_mC083BFAF4C17D44B4D067918A50B6E5EF93E59AC(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void SwitchPathVisualisation::DisableAllPathVisuals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualisation_DisableAllPathVisuals_m0BB881FC0EA87F4A534E0DE6F9E723DBC6500A41 (SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59* __this, const RuntimeMethod* method) 
{
	{
		// pathLineVis.gameObject.SetActive(false);
		PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* L_0 = __this->___pathLineVis_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// arrowLineVis.gameObject.SetActive(false);
		PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* L_2 = __this->___arrowLineVis_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SwitchPathVisualisation::EnablePathVisualsByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualisation_EnablePathVisualsByIndex_mC083BFAF4C17D44B4D067918A50B6E5EF93E59AC (SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59* __this, int32_t ___visIndex0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___visIndex0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// activeVisualisation = arrowLineVis.gameObject;
		PathArrowVisualisation_tA719A44CD372D6EFBBF897D1C72824DDA5BB9CE4* L_1 = __this->___arrowLineVis_5;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		__this->___activeVisualisation_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeVisualisation_7), (void*)L_2);
		// break;
		goto IL_002f;
	}

IL_0017:
	{
		// activeVisualisation = pathLineVis.gameObject;
		PathLineVisualisation_tA5518ACF3CA7361289D17F7DFB892033F411C77D* L_3 = __this->___pathLineVis_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		__this->___activeVisualisation_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeVisualisation_7), (void*)L_4);
		// visualisationCounter = 0;
		__this->___visualisationCounter_6 = 0;
	}

IL_002f:
	{
		// activeVisualisation.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___activeVisualisation_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SwitchPathVisualisation::ToggleVisualVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualisation_ToggleVisualVisibility_m3F8B0BD9DF4069558E99FC6E1DC1FC3BB3DDE7EB (SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59* __this, const RuntimeMethod* method) 
{
	{
		// activeVisualisation.SetActive(!activeVisualisation.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeVisualisation_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___activeVisualisation_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void SwitchPathVisualisation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualisation__ctor_m562F36C560CA508737682AEB7EF286F601D35FFB (SwitchPathVisualisation_tE6B74282161C758C5920208591EFDCFABE7CAB59* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SetUiText::OnSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetUiText_OnSliderValueChanged_m9C32EF2F88025DB4A630C44B8518F58296FA675A (SetUiText_t138DAB61BB52772194BAD42D32248EE7C549BEC9* __this, float ___numericValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textField.text = $"{fixedText}: {numericValue}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___textField_4;
		String_t* L_1 = __this->___fixedText_5;
		float L_2 = ___numericValue0;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_1, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void SetUiText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetUiText__ctor_m3BD6A154A5D8584BF04C389DFE529114D76DA8D3 (SetUiText_t138DAB61BB52772194BAD42D32248EE7C549BEC9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToggleVisibility::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleVisibility_Toggle_m4619024B7E8887AF4109D68BB2DC0138294DD7EA (ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF* __this, const RuntimeMethod* method) 
{
	{
		// toggleObject.SetActive(!toggleObject.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___toggleObject_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___toggleObject_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ToggleVisibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleVisibility__ctor_mE4E932DEA46AC21B69B1024C244E229629352F34 (ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_CalculatedPath_m104DCC698C93B121B57A4C5BBAC8A4BF77141131_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___value0, const RuntimeMethod* method) 
{
	{
		// public NavMeshPath CalculatedPath { get; private set; }
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = ___value0;
		__this->___U3CCalculatedPathU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCalculatedPathU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTargetPositionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public NavMeshPath CalculatedPath { get; private set; }
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = __this->___U3CCalculatedPathU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InputRect = value;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = ___value0;
		__this->___m_InputRect_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_OutputDimensions = value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___value0;
		__this->___m_OutputDimensions_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Format = value;
		int32_t L_0 = ___value0;
		__this->___m_Format_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Transformation = value;
		int32_t L_0 = ___value0;
		__this->___m_Transformation_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OutputDimensions;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___m_OutputDimensions_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Format;
		int32_t L_0 = __this->___m_Format_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string text { get { return m_Text; } set { m_Text = value; } }
		String_t* L_0 = ___value0;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		// public string text { get { return m_Text; } set { m_Text = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}

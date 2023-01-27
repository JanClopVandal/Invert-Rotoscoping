#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<System.String,System.Int32>
struct Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`3<System.String,System.String,System.String>
struct Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>
struct List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Video.VideoClip[]
struct VideoClipU5BU5D_t280906F030F50822EA9106636084805768BACC32;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// ButtonController
struct ButtonController_t8BBD437FF0ACF311359579ED9B00DC8DB2A30DEB;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GroundHandDetecte
struct GroundHandDetecte_tA7D1891C54CEC88690B7194EC6EB16CF8DF7B5AC;
// Hand
struct Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1;
// HandController
struct HandController_tD866B993094B1833037D30396BB39F6C15DDC10C;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// IsGround
struct IsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F;
// IsLineCollider
struct IsLineCollider_t768A2C23DC173B44793F1F098F64F216ABAA0460;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlyController
struct PlyController_tBDA8443D99D01DAB4BE501630743DA61D9FD5AE2;
// ThreeDeeBear.Models.Ply.PlyHeader
struct PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD;
// ThreeDeeBear.Models.Ply.PlyResult
struct PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Singularity
struct Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302;
// SingularityCore
struct SingularityCore_t6DD1E09F70BE5C82E481A9212D23FE8A354E7DB6;
// SingularityPullable
struct SingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// Swimmer
struct Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE;
// TextCreate
struct TextCreate_t1013DB0B84F59413BB0E5EE04C6507C4ED7E2311;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// TimeLine
struct TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// ZoneDetecte
struct ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// ThreeDeeBear.Models.Ply.PlyHandler/<>c
struct U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D;
// ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7;
// ThreeDeeBear.Models.Ply.PlyHeader/<>c
struct U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0003B14F695AB7215B136EA26D31E90AFF0EB15A;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615;
IL2CPP_EXTERN_C String_t* _stringLiteral2A00C9C86C5F09036FFCDFE9235D3D340A0648F2;
IL2CPP_EXTERN_C String_t* _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74;
IL2CPP_EXTERN_C String_t* _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379;
IL2CPP_EXTERN_C String_t* _stringLiteral5439D1933F6D88BD17050AD99CF8188D584B175F;
IL2CPP_EXTERN_C String_t* _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420;
IL2CPP_EXTERN_C String_t* _stringLiteral68C4151801AC3371F7F067E10133602F7204B6D2;
IL2CPP_EXTERN_C String_t* _stringLiteral6AD52C42AF1B98B7554273BA677D7CB0F948EF45;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral8C8FD42DE739569767886AA8F0E3D5D9932C0260;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral94946EAC70E5CEA4EFC559DFC67DF8BF306303EC;
IL2CPP_EXTERN_C String_t* _stringLiteral97AA9171171979A8D7A7B49134745A7C1E8B51E4;
IL2CPP_EXTERN_C String_t* _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E41C1E0B851E27D5F5E27BAC1B2FB099FE87796;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF303B94B2267619D4F5BE7700056FF63B3E98E;
IL2CPP_EXTERN_C String_t* _stringLiteralAF09A6BC0279473D57B36A82CF658E854D58181E;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EA7848C284AD4F488019F03D67CC19F31B8FDF;
IL2CPP_EXTERN_C String_t* _stringLiteralD6B0EB3E1E4AE4BCDAD5B0AAECF5C5C0B3FDD907;
IL2CPP_EXTERN_C String_t* _stringLiteralF2F086189B26212ADEE86AD14210C2BFDFB8780F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C224B2BBAE31362E9129E70DD95BCDEF2EFE27;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836_m8205E57DF95D8FBC4289F876163078C79CD5CD39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumerableExtensions_TakeUntilIncluding_TisString_t_mE986F3C8E9D1204B785C99AA3FBDDEC50ED7C70E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Aggregate_TisString_t_mE91CF40C639FFB958F5EA190CCEE0EABE463D577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisString_t_mB3879ED95FE5D75F6951C746C895FCE961E507BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEA8C398289AB9E039D771645B6A0D91A45DA56ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1_mA9D57438F895994D8B24780B9CD99419BAFD0D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F_m0ABE550D9FDBCECF1AE5C7EB09164A2EE2BEBCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_mA2F47F871C2D6978ABB20BE90D82586968C199B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTrianglesU3Eb__3_0_mE052514A4DBAAE214739547091EDF1F9847AA4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTrianglesU3Eb__3_1_m6C66EA29FE61CC9760462A23B0E71F9FB88CDE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetVerticesAndTrianglesU3Eb__9_0_m6295C6B878A6B758F5255EB6EBBF9AD37F5B432D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CParseBinaryLittleEndianU3Eb__4_0_m497BD021507D0071058C849F51BD246F3ED68C53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__13_0_m0C980259B0C98092E9388CD8F8399AEC9AA9A513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__13_1_mEC0521066F21E20BFA33030A7943C0E6F5F88BAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__13_2_m6D526B22A5F17DDCFF986A92A4452315FEA9E424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CParseAsciiU3Eb__0_mB82DEA448301AFA059C23AB814028B4337A82A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CParseAsciiU3Eb__1_m3E1C036A9CD1537CF1134789F723347CE6CE74C0_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
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

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>
struct List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VideoClipU5BU5D_t280906F030F50822EA9106636084805768BACC32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VideoClipU5BU5D_t280906F030F50822EA9106636084805768BACC32* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// ArrayExtensions
struct ArrayExtensions_t1A9EDF7ED527EB86DD22B3988085CD179B63AE87  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// EnumerableExtensions
struct EnumerableExtensions_t59408F261D7DEF2493820B296993FC87914A17EA  : public RuntimeObject
{
};

// ThreeDeeBear.Models.Ply.PlyHandler
struct PlyHandler_t4579F65F23DB1F413DCFB30C53B6C8A7A713D7F0  : public RuntimeObject
{
};

// ThreeDeeBear.Models.Ply.PlyResult
struct PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ThreeDeeBear.Models.Ply.PlyResult::Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Vertices_0;
	// System.Collections.Generic.List`1<System.Int32> ThreeDeeBear.Models.Ply.PlyResult::Triangles
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___Triangles_1;
	// System.Collections.Generic.List`1<UnityEngine.Color> ThreeDeeBear.Models.Ply.PlyResult::Colors
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___Colors_2;
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

// ThreeDeeBear.Models.Ply.PlyHandler/<>c
struct U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D  : public RuntimeObject
{
};

struct U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields
{
	// ThreeDeeBear.Models.Ply.PlyHandler/<>c ThreeDeeBear.Models.Ply.PlyHandler/<>c::<>9
	U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* ___U3CU3E9_0;
	// System.Func`2<System.String,System.Int32> ThreeDeeBear.Models.Ply.PlyHandler/<>c::<>9__3_0
	Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* ___U3CU3E9__3_0_1;
	// System.Func`2<System.String,System.Int32> ThreeDeeBear.Models.Ply.PlyHandler/<>c::<>9__3_1
	Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* ___U3CU3E9__3_1_2;
	// System.Func`3<System.String,System.String,System.String> ThreeDeeBear.Models.Ply.PlyHandler/<>c::<>9__4_0
	Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* ___U3CU3E9__4_0_3;
	// System.Func`2<System.String,System.Boolean> ThreeDeeBear.Models.Ply.PlyHandler/<>c::<>9__9_0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__9_0_4;
};

// ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0::vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices_0;
	// ThreeDeeBear.Models.Ply.PlyHeader ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0::header
	PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header_1;
	// System.Collections.Generic.List`1<UnityEngine.Color> ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0::colors
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___colors_2;
	// System.Collections.Generic.List`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0::triangles
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___triangles_3;
};

// ThreeDeeBear.Models.Ply.PlyHeader/<>c
struct U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562  : public RuntimeObject
{
};

struct U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields
{
	// ThreeDeeBear.Models.Ply.PlyHeader/<>c ThreeDeeBear.Models.Ply.PlyHeader/<>c::<>9
	U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> ThreeDeeBear.Models.Ply.PlyHeader/<>c::<>9__13_0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__13_0_1;
	// System.Func`2<System.String,System.Boolean> ThreeDeeBear.Models.Ply.PlyHeader/<>c::<>9__13_1
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__13_1_2;
	// System.Func`2<System.String,System.Boolean> ThreeDeeBear.Models.Ply.PlyHeader/<>c::<>9__13_2
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__13_2_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// ThreeDeeBear.Models.Ply.PlyHeader
struct PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD  : public RuntimeObject
{
	// ThreeDeeBear.Models.Ply.PlyFormat ThreeDeeBear.Models.Ply.PlyHeader::Format
	int32_t ___Format_0;
	// System.Int32 ThreeDeeBear.Models.Ply.PlyHeader::VertexCount
	int32_t ___VertexCount_1;
	// System.Int32 ThreeDeeBear.Models.Ply.PlyHeader::FaceCount
	int32_t ___FaceCount_2;
	// System.Int32 ThreeDeeBear.Models.Ply.PlyHeader::XIndex
	int32_t ___XIndex_3;
	// System.Int32 ThreeDeeBear.Models.Ply.PlyHeader::YIndex
	int32_t ___YIndex_4;
	// System.Int32 ThreeDeeBear.Models.Ply.PlyHeader::ZIndex
	int32_t ___ZIndex_5;
	// System.Nullable`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHeader::RedIndex
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___RedIndex_6;
	// System.Nullable`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHeader::GreenIndex
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___GreenIndex_7;
	// System.Nullable`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHeader::BlueIndex
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___BlueIndex_8;
	// System.Nullable`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHeader::AlphaIndex
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___AlphaIndex_9;
	// ThreeDeeBear.Models.Ply.PlyFaceParseMode ThreeDeeBear.Models.Ply.PlyHeader::FaceParseMode
	int32_t ___FaceParseMode_10;
	// System.Collections.Generic.List`1<System.String> ThreeDeeBear.Models.Ply.PlyHeader::RawHeader
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___RawHeader_11;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Int32>
struct Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.String,System.String>
struct Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA  : public MulticastDelegate_t
{
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ButtonController
struct ButtonController_t8BBD437FF0ACF311359579ED9B00DC8DB2A30DEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference ButtonController::controlleEvent
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___controlleEvent_4;
	// TimeLine ButtonController::timeLine
	TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* ___timeLine_5;
	// System.Boolean ButtonController::controllerPress
	bool ___controllerPress_6;
	// System.Boolean ButtonController::colliderPress
	bool ___colliderPress_7;
};

// GroundHandDetecte
struct GroundHandDetecte_tA7D1891C54CEC88690B7194EC6EB16CF8DF7B5AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Swimmer GroundHandDetecte::swimmer
	Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* ___swimmer_4;
	// System.Int32 GroundHandDetecte::handIndex
	int32_t ___handIndex_5;
};

// Hand
struct Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Hand::speed
	float ___speed_4;
	// System.String Hand::animatorGripParametr
	String_t* ___animatorGripParametr_5;
	// System.String Hand::animatorTriggParametr
	String_t* ___animatorTriggParametr_6;
	// UnityEngine.Animator Hand::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// System.Single Hand::gripTarget
	float ___gripTarget_8;
	// System.Single Hand::triggerTarget
	float ___triggerTarget_9;
	// System.Single Hand::gripCurrent
	float ___gripCurrent_10;
	// System.Single Hand::triggerCurrent
	float ___triggerCurrent_11;
};

// HandController
struct HandController_tD866B993094B1833037D30396BB39F6C15DDC10C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController HandController::controller
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___controller_4;
	// Hand HandController::hand
	Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* ___hand_5;
};

// IsGround
struct IsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// IsLineCollider
struct IsLineCollider_t768A2C23DC173B44793F1F098F64F216ABAA0460  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PlyController
struct PlyController_tBDA8443D99D01DAB4BE501630743DA61D9FD5AE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Singularity
struct Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Singularity::GRAVITY_PULL
	float ___GRAVITY_PULL_4;
	// UnityEngine.ForceMode Singularity::forceMode
	int32_t ___forceMode_5;
};

struct Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_StaticFields
{
	// System.Single Singularity::m_GravityRadius
	float ___m_GravityRadius_6;
};

// SingularityCore
struct SingularityCore_t6DD1E09F70BE5C82E481A9212D23FE8A354E7DB6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SingularityPullable
struct SingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingularityPullable::pullable
	bool ___pullable_4;
};

// Swimmer
struct Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Swimmer::swimForce
	float ___swimForce_4;
	// System.Single Swimmer::dragForce
	float ___dragForce_5;
	// System.Single Swimmer::minForce
	float ___minForce_6;
	// System.Single Swimmer::minTimeBetweenStrokes
	float ___minTimeBetweenStrokes_7;
	// System.Single Swimmer::maxForce
	float ___maxForce_8;
	// UnityEngine.InputSystem.InputActionReference Swimmer::leftControllerSwimReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftControllerSwimReference_9;
	// UnityEngine.InputSystem.InputActionReference Swimmer::leftControllerVelocity
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftControllerVelocity_10;
	// UnityEngine.InputSystem.InputActionReference Swimmer::rightControllerSwimReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightControllerSwimReference_11;
	// UnityEngine.InputSystem.InputActionReference Swimmer::rightControllerVelocity
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightControllerVelocity_12;
	// UnityEngine.Transform Swimmer::trackingReference
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trackingReference_13;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Swimmer::leftcontroller
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___leftcontroller_14;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Swimmer::rightcontroller
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___rightcontroller_15;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Swimmer::handColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___handColliders_16;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Swimmer::groundColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___groundColliders_17;
	// System.Boolean Swimmer::leftHandOnGround
	bool ___leftHandOnGround_18;
	// System.Boolean Swimmer::rightHandOnGround
	bool ___rightHandOnGround_19;
	// UnityEngine.Rigidbody Swimmer::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_20;
	// System.Single Swimmer::_cooldownTimer
	float ____cooldownTimer_21;
	// UnityEngine.Vector3 Swimmer::leftHandVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftHandVelocity_22;
	// UnityEngine.Vector3 Swimmer::rightHandVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightHandVelocity_23;
};

// TextCreate
struct TextCreate_t1013DB0B84F59413BB0E5EE04C6507C4ED7E2311  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TimeLine
struct TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animation TimeLine::timeLineaAimation
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___timeLineaAimation_4;
	// UnityEngine.AnimationClip TimeLine::clipAimation
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clipAimation_5;
	// System.Collections.Generic.List`1<UnityEngine.Video.VideoClip> TimeLine::clips
	List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* ___clips_6;
	// UnityEngine.Video.VideoPlayer TimeLine::player
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___player_7;
	// UnityEngine.GameObject TimeLine::videoPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___videoPlane_8;
	// UnityEngine.GameObject TimeLine::backGroundPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___backGroundPlane_9;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> TimeLine::audioClips
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___audioClips_10;
	// UnityEngine.AudioSource TimeLine::audioPlayer
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioPlayer_11;
	// Swimmer TimeLine::swimmer
	Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* ___swimmer_12;
	// UnityEngine.Transform TimeLine::gamePlayer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gamePlayer_13;
	// UnityEngine.Vector3 TimeLine::startPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint_14;
	// UnityEngine.Animation TimeLine::lastaAimation
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___lastaAimation_15;
	// UnityEngine.AnimationClip TimeLine::lastClipAimation
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___lastClipAimation_16;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// ZoneDetecte
struct ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ZoneDetecte::materialParametr
	String_t* ___materialParametr_4;
	// System.Single ZoneDetecte::speed
	float ___speed_5;
	// UnityEngine.GameObject ZoneDetecte::textObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___textObj_6;
	// UnityEngine.Renderer ZoneDetecte::renderCom
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderCom_7;
	// UnityEngine.Material ZoneDetecte::changeMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___changeMat_8;
	// System.Single ZoneDetecte::target
	float ___target_9;
	// System.Single ZoneDetecte::current
	float ___current_10;
	// UnityEngine.AudioSource ZoneDetecte::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_11;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_PositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PositionAction_24;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotationAction_25;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TrackingStateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TrackingStateAction_26;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectAction_27;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectActionValue_28;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateAction_29;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateActionValue_30;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressAction_31;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressActionValue_32;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HapticDeviceAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_HapticDeviceAction_33;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotateAnchorAction_34;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TranslateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TranslateAnchorAction_35;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledTrackingInputReferenceActions
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledInputReferenceActions
	bool ___m_HasCheckedDisabledInputReferenceActions_37;
	// System.Single UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ButtonPressPoint
	float ___m_ButtonPressPoint_38;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_GetRange_m8F5CCE68284D0E231F22C5C2DBBA51B856D70F25_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Aggregate<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,TSource,TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Aggregate_TisRuntimeObject_mA6E191832F9B71EC31D2C3115CADC5F16EE18182_gshared (RuntimeObject* ___source0, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___func1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T[] ArrayExtensions::SubArray<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_gshared_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> EnumerableExtensions::TakeUntilIncluding<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Func`2<T,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumerableExtensions_TakeUntilIncluding_TisRuntimeObject_m2A773B2C4F242ABFA8E4BC99EEFD6772D834A4E3_gshared (RuntimeObject* ___list0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<SingularityPullable>()
inline SingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836* Component_GetComponent_TisSingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836_m8205E57DF95D8FBC4289F876163078C79CD5CD39 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rigidbody::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_mass_m09DDDDC437499B83B3BD0D77C134BFDC3E667054 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_smoothDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_smoothDeltaTime_m41881A3290CC95E6EF2D55289D1D872A45DC1775 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void TimeLine::StartTimeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_StartTimeLine_m9CA52826BDF895FC729CC9148030815CFF77E64C (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Hand::AnimateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_AnimateHand_mE6F1ECCB9FC50C6BD4E416B4432B7B6014F4D848 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.ActionBasedController>()
inline ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_selectAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// System.Void Hand::SetGrip(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetGrip_m3696EA53C1FCF4B36ACCBA9D647167FA4813B8F1_inline (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) ;
// System.Void Hand::SetTrigger(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetTrigger_m4C9AE4BA5A37823DA8E5259F03C56627AF30250D_inline (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<IsGround>()
inline IsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F* GameObject_GetComponent_TisIsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F_m0ABE550D9FDBCECF1AE5C7EB09164A2EE2BEBCD9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  IsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GroundHandDetecte::ChangeState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundHandDetecte_ChangeState_m48E14D5F0DB19F4DE9C986D1A5F552DBBD01F934 (GroundHandDetecte_tA7D1891C54CEC88690B7194EC6EB16CF8DF7B5AC* __this, bool ___newState0, const RuntimeMethod* method) ;
// System.Void Swimmer::set__leftHandOnGround(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Swimmer_set__leftHandOnGround_m5D0BE79A1231F9D3EFA76F3D1F76DF3BF01D5598_inline (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Swimmer::set__rightHandOnGround(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Swimmer_set__rightHandOnGround_mADBB77FFF253067E0105EA923960EB16C09F2F02_inline (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean System.Convert::ToBoolean(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m73A44AA68F53847BAC4B938953612587F8FBF61B (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Swimmer::ForvardForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer_ForvardForce_m7B8E6C3E9919C247B35984137340A4949D505BF1 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___loaclVelocity0, const RuntimeMethod* method) ;
// System.Void Swimmer::RevertForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer_RevertForce_mF1F358F8CF49DDD51FBA6308865EE6634871D88A (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>::get_Item(System.Int32)
inline VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646 (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* (*) (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Item(System.Int32)
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53 (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void TimeLine::MoreSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_MoreSpeed_mAFCA24AF1058C65C09CAEC2BE1CDA581CC8DAF77 (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ZoneDetecte::DoAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneDetecte_DoAnimation_m53B86E6C0A56CDBCE831019F7D0BA40D18C630EA (ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Hand>()
inline Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* GameObject_GetComponent_TisHand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1_mA9D57438F895994D8B24780B9CD99419BAFD0D45 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mD70BC1EDB325B689C82B50EAE8400ACFABAB0866 (U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
inline void List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, const RuntimeMethod*))List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
inline int32_t List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.String>::GetRange(System.Int32,System.Int32)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_m8F5CCE68284D0E231F22C5C2DBBA51B856D70F25_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_mA2F47F871C2D6978ABB20BE90D82586968C199B4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// System.Void ThreeDeeBear.Models.Ply.PlyResult::.ctor(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyResult__ctor_m5A7F53715C9CBD934A45D7B30F67FBA2AC6475C3 (PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___triangles1, List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___colors2, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Decimal::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_TryParse_mA3CAA172CC95A384FDB25A3FCEA91F9F1ABF23B6 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___result3, const RuntimeMethod* method) ;
// System.Single System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Decimal_op_Explicit_mFE383D1954522ECA8822B56A7C59794B850FE4C1 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mB8E246A7D6D6308EF36DE3473643BDE4CF8F71FF (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline String_t* Enumerable_First_TisString_t_mB3879ED95FE5D75F6951C746C895FCE961E507BD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___source0, method);
}
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Func`2<System.String,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8735C973EB9B6C7545BC87E34D15C7FE2DD84B81 (Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEA8C398289AB9E039D771645B6A0D91A45DA56ED (RuntimeObject* ___source0, Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHandler::QuadToTriangles(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* PlyHandler_QuadToTriangles_mC5AFB4D8FF10B3446EC68C607359791968ADC10E (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___quad0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m275CCA1C836EECF7962B6DFFCA1EF52FD862A6EC (Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::Aggregate<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,TSource,TSource>)
inline String_t* Enumerable_Aggregate_TisString_t_mE91CF40C639FFB958F5EA190CCEE0EABE463D577 (RuntimeObject* ___source0, Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* ___func1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA*, const RuntimeMethod*))Enumerable_Aggregate_TisRuntimeObject_mA6E191832F9B71EC31D2C3115CADC5F16EE18182_gshared)(___source0, ___func1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_gshared)(___source0, ___count1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> ThreeDeeBear.Models.Ply.PlyHandler::GetVertices(System.Byte[],ThreeDeeBear.Models.Ply.PlyHeader,System.Collections.Generic.List`1<UnityEngine.Color>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* PlyHandler_GetVertices_m7A6F8126A8BCA5DBB87745CB4C16B82A1BB17368 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF** ___colors2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHandler::GetTriangles(System.Byte[],ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* PlyHandler_GetTriangles_m3510BE440C53A0DC0F10A288AEB2AD95A1CF900E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) ;
// System.Int32 ThreeDeeBear.Models.Ply.PlyHandler::GetByteCountPerVertex(ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyHandler_GetByteCountPerVertex_m913CE57468C8818BD6EF5845E29955D69788B556 (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header0, const RuntimeMethod* method) ;
// T[] ArrayExtensions::SubArray<System.Byte>(T[],System.Int32,System.Int32)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_gshared)(___data0, ___index1, ___length2, method);
}
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(T)
inline void List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> System.IO.File::ReadLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* File_ReadLines_mD8EF6C087859E5268943F4F6A408EC0C0328680D (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<T> EnumerableExtensions::TakeUntilIncluding<System.String>(System.Collections.Generic.IEnumerable`1<T>,System.Func`2<T,System.Boolean>)
inline RuntimeObject* EnumerableExtensions_TakeUntilIncluding_TisString_t_mE986F3C8E9D1204B785C99AA3FBDDEC50ED7C70E (RuntimeObject* ___list0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))EnumerableExtensions_TakeUntilIncluding_TisRuntimeObject_m2A773B2C4F242ABFA8E4BC99EEFD6772D834A4E3_gshared)(___list0, ___predicate1, method);
}
// System.Void ThreeDeeBear.Models.Ply.PlyHeader::.ctor(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyHeader__ctor_mB6D220C724F94C0C3909FC091B70C9E23A17564B (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___headerUnparsed0, const RuntimeMethod* method) ;
// System.String[] System.IO.File::ReadAllLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* File_ReadAllLines_mB084BF4726ECCB1B083E5B53DEE519C821F97BD5 (String_t* ___path0, const RuntimeMethod* method) ;
// ThreeDeeBear.Models.Ply.PlyResult ThreeDeeBear.Models.Ply.PlyHandler::ParseAscii(System.Collections.Generic.List`1<System.String>,ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* PlyHandler_ParseAscii_m4F0E6E357249044AA8089642289C254916A77956 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___plyFile0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) ;
// ThreeDeeBear.Models.Ply.PlyResult ThreeDeeBear.Models.Ply.PlyHandler::ParseBinaryLittleEndian(System.String,ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* PlyHandler_ParseBinaryLittleEndian_mC6A000F729F34F4D661E42842F55302CDF48FA8A (String_t* ___path0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ThreeDeeBear.Models.Ply.PlyHandler::ParseVertex(System.String[],ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlyHandler_ParseVertex_mE01BEAF72F7EA168519128206F72F0A5310D3B1F (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___xyzrgb0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) ;
// UnityEngine.Color ThreeDeeBear.Models.Ply.PlyHandler::ParseColor(System.String[],ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlyHandler_ParseColor_m8A28B5C98198AF60EBC1001C87F87CD70A3F44BA (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___xyzrgb0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHandler::GetTriangles(System.String,ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* PlyHandler_GetTriangles_m0D42131C4C87F1ADA2C802001B9C9F12FD194F97 (String_t* ___faceVertexList0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) ;
// System.Void ThreeDeeBear.Models.Ply.PlyHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2F5E2F16515DF141C2913A8ADD5B060C4D34981D (U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline String_t* Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74 (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// ThreeDeeBear.Models.Ply.PlyFormat ThreeDeeBear.Models.Ply.PlyHeader::GetFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyHeader_GetFormat_m3FE30AD3418FA01527211E1CD66CE4A112B88097 (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, String_t* ___formatLine0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<System.String> ThreeDeeBear.Models.Ply.PlyHeader::GetProperties(System.Collections.Generic.IList`1<System.String>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* PlyHeader_GetProperties_mFE6D195EE9F248F3891D4C7F5874E17CB4A67D5C (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, RuntimeObject* ___header0, int32_t ___elementIndex1, const RuntimeMethod* method) ;
// System.Void ThreeDeeBear.Models.Ply.PlyHeader::SetVertexProperties(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyHeader_SetVertexProperties_m824B17C863A727FBF2227BB661E8E72A40171475 (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void ThreeDeeBear.Models.Ply.PlyHeader::SetFaceProperties(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyHeader_SetFaceProperties_m749DDD702238DD8EBDE218355CF47C43CE234848 (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline String_t* Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared)(___source0, method);
}
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ThreeDeeBear.Models.Ply.PlyHeader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD989E3814B982222919A6C3BC3D2454BFA989B5 (U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Void Singularity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singularity_Awake_mA4E0B924E0243CEA7ED7D1A6426A6047BEAF3F81 (Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GravityRadius = GetComponent<SphereCollider>().radius;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_0;
		L_0 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(__this, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var);
		((Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_StaticFields*)il2cpp_codegen_static_fields_for(Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var))->___m_GravityRadius_6 = L_1;
		// if(GetComponent<SphereCollider>()){
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_2;
		L_2 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(__this, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// GetComponent<SphereCollider>().isTrigger = true;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_4;
		L_4 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(__this, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		NullCheck(L_4);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_4, (bool)1, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Singularity::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singularity_OnTriggerStay_m38C402FE59C38DCA03B1D7B207729A97814061A4 (Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836_m8205E57DF95D8FBC4289F876163078C79CD5CD39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if(other.attachedRigidbody && other.GetComponent<SingularityPullable>()) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0096;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		SingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836* L_4;
		L_4 = Component_GetComponent_TisSingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836_m8205E57DF95D8FBC4289F876163078C79CD5CD39(L_3, Component_GetComponent_TisSingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836_m8205E57DF95D8FBC4289F876163078C79CD5CD39_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0096;
		}
	}
	{
		// float gravityIntensity = Vector3.Distance(transform.position, other.transform.position) / m_GravityRadius;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___other0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_7, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var);
		float L_12 = ((Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_StaticFields*)il2cpp_codegen_static_fields_for(Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var))->___m_GravityRadius_6;
		V_0 = ((float)(L_11/L_12));
		// other.attachedRigidbody.AddForce((transform.position - other.transform.position) * gravityIntensity * other.attachedRigidbody.mass
		//     * GRAVITY_PULL * Time.smoothDeltaTime, forceMode);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = ___other0;
		NullCheck(L_13);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14;
		L_14 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17 = ___other0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_19, NULL);
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23 = ___other0;
		NullCheck(L_23);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24;
		L_24 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_23, NULL);
		NullCheck(L_24);
		float L_25;
		L_25 = Rigidbody_get_mass_m09DDDDC437499B83B3BD0D77C134BFDC3E667054(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_25, NULL);
		float L_27 = __this->___GRAVITY_PULL_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		float L_29;
		L_29 = Time_get_smoothDeltaTime_m41881A3290CC95E6EF2D55289D1D872A45DC1775(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		int32_t L_31 = __this->___forceMode_5;
		NullCheck(L_14);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_14, L_30, L_31, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void Singularity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singularity__ctor_mEA4B6C8EBD7158FF20128375705DBAB1616880C1 (Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public float GRAVITY_PULL = 100f;
		__this->___GRAVITY_PULL_4 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Singularity::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singularity__cctor_m752DF0F9D77D59904D2232F812F1020601B0A992 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float m_GravityRadius = 1f;
		((Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_StaticFields*)il2cpp_codegen_static_fields_for(Singularity_tC47768ED3BE6AD6C7C3F44A880ED9377C8F74302_il2cpp_TypeInfo_var))->___m_GravityRadius_6 = (1.0f);
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
// System.Void SingularityCore::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityCore_OnTriggerStay_mD8B303E40A20B6E2F6F1626D5524F7A661524A8F (SingularityCore_t6DD1E09F70BE5C82E481A9212D23FE8A354E7DB6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836_m8205E57DF95D8FBC4289F876163078C79CD5CD39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.GetComponent<SingularityPullable>()){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		SingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836* L_1;
		L_1 = Component_GetComponent_TisSingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836_m8205E57DF95D8FBC4289F876163078C79CD5CD39(L_0, Component_GetComponent_TisSingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836_m8205E57DF95D8FBC4289F876163078C79CD5CD39_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// other.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void SingularityCore::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityCore_Awake_m64200065B094B09B09AE78875A3FEBFF47AA180A (SingularityCore_t6DD1E09F70BE5C82E481A9212D23FE8A354E7DB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GetComponent<SphereCollider>()){
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_0;
		L_0 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(__this, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<SphereCollider>().isTrigger = true;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_2;
		L_2 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(__this, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		NullCheck(L_2);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void SingularityCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityCore__ctor_m366B77AD8E639BCDE85A6F64D2B5933A6660E319 (SingularityCore_t6DD1E09F70BE5C82E481A9212D23FE8A354E7DB6* __this, const RuntimeMethod* method) 
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
// System.Void SingularityPullable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityPullable__ctor_mD742BD00D313AE903BB0F4BC2814DE677943779B (SingularityPullable_t4E839C62AF0E9A815B80949D62BD800B4CA71836* __this, const RuntimeMethod* method) 
{
	{
		// public bool pullable = true;
		__this->___pullable_4 = (bool)1;
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
// System.Void ButtonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_Update_mC4815FC01744FC6EBA746BEBA612C59B9AF44A9B (ButtonController_t8BBD437FF0ACF311359579ED9B00DC8DB2A30DEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C224B2BBAE31362E9129E70DD95BCDEF2EFE27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float press = controlleEvent.action.ReadValue<float>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___controlleEvent_4;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		// if (press == 1f) controllerPress = true;
		if ((!(((float)L_2) == ((float)(1.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// if (press == 1f) controllerPress = true;
		__this->___controllerPress_6 = (bool)1;
	}

IL_001e:
	{
		// if (controllerPress)
		bool L_3 = __this->___controllerPress_6;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// Debug.Log("Preeees");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF3C224B2BBAE31362E9129E70DD95BCDEF2EFE27, NULL);
		// timeLine.StartTimeLine();
		TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* L_4 = __this->___timeLine_5;
		NullCheck(L_4);
		TimeLine_StartTimeLine_m9CA52826BDF895FC729CC9148030815CFF77E64C(L_4, NULL);
		// controllerPress = false;
		__this->___controllerPress_6 = (bool)0;
		// colliderPress = false;
		__this->___colliderPress_7 = (bool)0;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void ButtonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController__ctor_mC603FB38AA9F87A8FBAB2F8CB0FAEB74166A1282 (ButtonController_t8BBD437FF0ACF311359579ED9B00DC8DB2A30DEB* __this, const RuntimeMethod* method) 
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
// System.Void IsLineCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsLineCollider__ctor_m3EDC331172F51B2FB0C2240C24194B8770946E35 (IsLineCollider_t768A2C23DC173B44793F1F098F64F216ABAA0460* __this, const RuntimeMethod* method) 
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
// System.Void Hand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Start_mF97170CC92093DE16E9DD633908D8FF76D6386DB (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Hand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Update_mE9D471ECB2864A5ADFBB6C01668A39778E8BFE1F (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	{
		// AnimateHand();
		Hand_AnimateHand_mE6F1ECCB9FC50C6BD4E416B4432B7B6014F4D848(__this, NULL);
		// }
		return;
	}
}
// System.Void Hand::SetGrip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_SetGrip_m3696EA53C1FCF4B36ACCBA9D647167FA4813B8F1 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// gripTarget = v;
		float L_0 = ___v0;
		__this->___gripTarget_8 = L_0;
		// }
		return;
	}
}
// System.Void Hand::SetTrigger(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_SetTrigger_m4C9AE4BA5A37823DA8E5259F03C56627AF30250D (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// triggerTarget = v;
		float L_0 = ___v0;
		__this->___triggerTarget_9 = L_0;
		// }
		return;
	}
}
// System.Void Hand::AnimateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_AnimateHand_mE6F1ECCB9FC50C6BD4E416B4432B7B6014F4D848 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	{
		// if(gripCurrent != gripTarget)
		float L_0 = __this->___gripCurrent_10;
		float L_1 = __this->___gripTarget_8;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		// gripCurrent = Mathf.MoveTowards(gripCurrent, gripTarget, Time.deltaTime * speed);
		float L_2 = __this->___gripCurrent_10;
		float L_3 = __this->___gripTarget_8;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___speed_4;
		float L_6;
		L_6 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		__this->___gripCurrent_10 = L_6;
		// animator.SetFloat(animatorGripParametr, gripCurrent);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_7;
		String_t* L_8 = __this->___animatorGripParametr_5;
		float L_9 = __this->___gripCurrent_10;
		NullCheck(L_7);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_7, L_8, L_9, NULL);
	}

IL_0048:
	{
		// if (triggerCurrent != triggerTarget)
		float L_10 = __this->___triggerCurrent_11;
		float L_11 = __this->___triggerTarget_9;
		if ((((float)L_10) == ((float)L_11)))
		{
			goto IL_0090;
		}
	}
	{
		// triggerCurrent = Mathf.MoveTowards(triggerCurrent, triggerTarget, Time.deltaTime * speed);
		float L_12 = __this->___triggerCurrent_11;
		float L_13 = __this->___triggerTarget_9;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_15 = __this->___speed_4;
		float L_16;
		L_16 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_12, L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		__this->___triggerCurrent_11 = L_16;
		// animator.SetFloat(animatorTriggParametr, triggerCurrent);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___animator_7;
		String_t* L_18 = __this->___animatorTriggParametr_6;
		float L_19 = __this->___triggerCurrent_11;
		NullCheck(L_17);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_17, L_18, L_19, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Hand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand__ctor_m98922058C1A056306D560A36EAEDCE0247110FA8 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float speed = 1f;
		__this->___speed_4 = (1.0f);
		// [SerializeField] private string animatorGripParametr = "Grip";
		__this->___animatorGripParametr_5 = _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animatorGripParametr_5), (void*)_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		// [SerializeField] private string animatorTriggParametr = "Trigger";
		__this->___animatorTriggParametr_6 = _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animatorTriggParametr_6), (void*)_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
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
// System.Void HandController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Start_m83BA4ED4B162A79177B32DCFCAC05906D4AD8A94 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<ActionBasedController>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0;
		L_0 = Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2(__this, Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var);
		__this->___controller_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void HandController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Update_mD7420626ECC5A2E7D45A63CAC4A2971400371418 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// hand.SetGrip(controller.selectAction.action.ReadValue<float>());
		Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* L_0 = __this->___hand_5;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_1 = __this->___controller_4;
		NullCheck(L_1);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_2;
		L_2 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_3, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_0);
		Hand_SetGrip_m3696EA53C1FCF4B36ACCBA9D647167FA4813B8F1_inline(L_0, L_4, NULL);
		// hand.SetTrigger(controller.selectAction.action.ReadValue<float>());
		Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* L_5 = __this->___hand_5;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_6 = __this->___controller_4;
		NullCheck(L_6);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_7;
		L_7 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_6, NULL);
		V_0 = L_7;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_8, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_5);
		Hand_SetTrigger_m4C9AE4BA5A37823DA8E5259F03C56627AF30250D_inline(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void HandController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController__ctor_mC7FBA1DBB0123D91F5AA40872B63ABCFD650884F (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
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
// System.Void GroundHandDetecte::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundHandDetecte_OnTriggerEnter_m172B4E6F756C9FBB84410758932900083BF31C57 (GroundHandDetecte_tA7D1891C54CEC88690B7194EC6EB16CF8DF7B5AC* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F_m0ABE550D9FDBCECF1AE5C7EB09164A2EE2BEBCD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.GetComponent<IsGround>())
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		IsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F* L_2;
		L_2 = GameObject_GetComponent_TisIsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F_m0ABE550D9FDBCECF1AE5C7EB09164A2EE2BEBCD9(L_1, GameObject_GetComponent_TisIsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F_m0ABE550D9FDBCECF1AE5C7EB09164A2EE2BEBCD9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// ChangeState(true);
		GroundHandDetecte_ChangeState_m48E14D5F0DB19F4DE9C986D1A5F552DBBD01F934(__this, (bool)1, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GroundHandDetecte::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundHandDetecte_OnCollisionExit_m24256AFDA1FA4A8F3165571F958FC038ACA05C40 (GroundHandDetecte_tA7D1891C54CEC88690B7194EC6EB16CF8DF7B5AC* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// ChangeState(false);
		GroundHandDetecte_ChangeState_m48E14D5F0DB19F4DE9C986D1A5F552DBBD01F934(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GroundHandDetecte::ChangeState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundHandDetecte_ChangeState_m48E14D5F0DB19F4DE9C986D1A5F552DBBD01F934 (GroundHandDetecte_tA7D1891C54CEC88690B7194EC6EB16CF8DF7B5AC* __this, bool ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A00C9C86C5F09036FFCDFE9235D3D340A0648F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collider");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2A00C9C86C5F09036FFCDFE9235D3D340A0648F2, NULL);
		// if(handIndex == 0)
		int32_t L_0 = __this->___handIndex_5;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		// swimmer._leftHandOnGround = newState;
		Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* L_1 = __this->___swimmer_4;
		bool L_2 = ___newState0;
		NullCheck(L_1);
		Swimmer_set__leftHandOnGround_m5D0BE79A1231F9D3EFA76F3D1F76DF3BF01D5598_inline(L_1, L_2, NULL);
		return;
	}

IL_001f:
	{
		// swimmer._rightHandOnGround = newState;
		Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* L_3 = __this->___swimmer_4;
		bool L_4 = ___newState0;
		NullCheck(L_3);
		Swimmer_set__rightHandOnGround_mADBB77FFF253067E0105EA923960EB16C09F2F02_inline(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void GroundHandDetecte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundHandDetecte__ctor_mDBF463842EA4BAB1202AB9011954CCF591D13408 (GroundHandDetecte_tA7D1891C54CEC88690B7194EC6EB16CF8DF7B5AC* __this, const RuntimeMethod* method) 
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
// System.Void IsGround::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsGround_Start_mD443EF5FFEB1CBEDEE971BFE2463C455B7C83E7F (IsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void IsGround::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsGround_Update_m0A49510EB09F04E33D7AC4BD683CBF967603EF98 (IsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void IsGround::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsGround__ctor_m69B7641A3DE3597D5FB684501A885F7E038D1409 (IsGround_t316C4E223675E01D8D9A2EE20F6BD1FA351F397F* __this, const RuntimeMethod* method) 
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
// System.Boolean Swimmer::get__leftHandOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Swimmer_get__leftHandOnGround_m051A7A1E0D7A42DA70D8061109AD228EA0073DF0 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, const RuntimeMethod* method) 
{
	{
		// get { return leftHandOnGround; }
		bool L_0 = __this->___leftHandOnGround_18;
		return L_0;
	}
}
// System.Void Swimmer::set__leftHandOnGround(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer_set__leftHandOnGround_m5D0BE79A1231F9D3EFA76F3D1F76DF3BF01D5598 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { leftHandOnGround = value; }
		bool L_0 = ___value0;
		__this->___leftHandOnGround_18 = L_0;
		// set { leftHandOnGround = value; }
		return;
	}
}
// System.Boolean Swimmer::get__rightHandOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Swimmer_get__rightHandOnGround_m98900AEF58FB6AA8D18AB959B697B34943D42972 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, const RuntimeMethod* method) 
{
	{
		// get { return rightHandOnGround; }
		bool L_0 = __this->___rightHandOnGround_19;
		return L_0;
	}
}
// System.Void Swimmer::set__rightHandOnGround(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer_set__rightHandOnGround_mADBB77FFF253067E0105EA923960EB16C09F2F02 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { rightHandOnGround = value; }
		bool L_0 = ___value0;
		__this->___rightHandOnGround_19 = L_0;
		// set { rightHandOnGround = value; }
		return;
	}
}
// System.Void Swimmer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer_Awake_mA8C95B998EC80BBFB0F0DB5D7E81BF1AB93EFE94 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rigidbody_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_20), (void*)L_0);
		// }
		return;
	}
}
// System.Void Swimmer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer_FixedUpdate_mCFF285235637E907057C1298C5F14FDFB21D1CE6 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool leftHandPress = Convert.ToBoolean(leftcontroller.selectAction.action.ReadValue<float>());
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___leftcontroller_14;
		NullCheck(L_0);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		L_1 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_0, NULL);
		V_3 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_3), NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Convert_ToBoolean_m73A44AA68F53847BAC4B938953612587F8FBF61B(L_3, NULL);
		V_0 = L_4;
		// bool rightHandPress = Convert.ToBoolean(rightcontroller.selectAction.action.ReadValue<float>());
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_5 = __this->___rightcontroller_15;
		NullCheck(L_5);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_6;
		L_6 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_5, NULL);
		V_3 = L_6;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_3), NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_7, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		bool L_9;
		L_9 = Convert_ToBoolean_m73A44AA68F53847BAC4B938953612587F8FBF61B(L_8, NULL);
		V_1 = L_9;
		// _cooldownTimer += Time.fixedDeltaTime;
		float L_10 = __this->____cooldownTimer_21;
		float L_11;
		L_11 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		__this->____cooldownTimer_21 = ((float)il2cpp_codegen_add(L_10, L_11));
		// Vector3 loaclVelocity = new Vector3();
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (_cooldownTimer > minTimeBetweenStrokes
		//     && leftHandPress
		//     && rightHandPress
		//     )
		float L_12 = __this->____cooldownTimer_21;
		float L_13 = __this->___minTimeBetweenStrokes_7;
		bool L_14 = V_0;
		bool L_15 = V_1;
		if (!((int32_t)(((int32_t)(((((float)L_12) > ((float)L_13))? 1 : 0)&(int32_t)L_14))&(int32_t)L_15)))
		{
			goto IL_00c2;
		}
	}
	{
		// leftHandVelocity = leftControllerVelocity.action.ReadValue<Vector3>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_16 = __this->___leftControllerVelocity_10;
		NullCheck(L_16);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_17, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		__this->___leftHandVelocity_22 = L_18;
		// rightHandVelocity = rightControllerVelocity.action.ReadValue<Vector3>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_19 = __this->___rightControllerVelocity_12;
		NullCheck(L_19);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20;
		L_20 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_20, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		__this->___rightHandVelocity_23 = L_21;
		// loaclVelocity = leftHandVelocity + rightHandVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___leftHandVelocity_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___rightHandVelocity_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_23, NULL);
		V_2 = L_24;
		// loaclVelocity *= -1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, (-1.0f), NULL);
		V_2 = L_26;
		// ForvardForce(loaclVelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		Swimmer_ForvardForce_m7B8E6C3E9919C247B35984137340A4949D505BF1(__this, L_27, NULL);
		// RevertForce();
		Swimmer_RevertForce_mF1F358F8CF49DDD51FBA6308865EE6634871D88A(__this, NULL);
		return;
	}

IL_00c2:
	{
		// else if (_cooldownTimer > minTimeBetweenStrokes
		//     && leftHandPress
		//     )
		float L_28 = __this->____cooldownTimer_21;
		float L_29 = __this->___minTimeBetweenStrokes_7;
		bool L_30 = V_0;
		if (!((int32_t)(((((float)L_28) > ((float)L_29))? 1 : 0)&(int32_t)L_30)))
		{
			goto IL_00ff;
		}
	}
	{
		// loaclVelocity = leftControllerVelocity.action.ReadValue<Vector3>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_31 = __this->___leftControllerVelocity_10;
		NullCheck(L_31);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_32, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		V_2 = L_33;
		// loaclVelocity *= -2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, (-2.0f), NULL);
		V_2 = L_35;
		// ForvardForce(loaclVelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_2;
		Swimmer_ForvardForce_m7B8E6C3E9919C247B35984137340A4949D505BF1(__this, L_36, NULL);
		// RevertForce();
		Swimmer_RevertForce_mF1F358F8CF49DDD51FBA6308865EE6634871D88A(__this, NULL);
		return;
	}

IL_00ff:
	{
		// else if (_cooldownTimer > minTimeBetweenStrokes
		//     && rightHandPress
		//     )
		float L_37 = __this->____cooldownTimer_21;
		float L_38 = __this->___minTimeBetweenStrokes_7;
		bool L_39 = V_1;
		if (!((int32_t)(((((float)L_37) > ((float)L_38))? 1 : 0)&(int32_t)L_39)))
		{
			goto IL_013b;
		}
	}
	{
		// loaclVelocity = rightControllerVelocity.action.ReadValue<Vector3>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_40 = __this->___rightControllerVelocity_12;
		NullCheck(L_40);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41;
		L_41 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_40, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_41, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		V_2 = L_42;
		// loaclVelocity *= -2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, (-2.0f), NULL);
		V_2 = L_44;
		// ForvardForce(loaclVelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_2;
		Swimmer_ForvardForce_m7B8E6C3E9919C247B35984137340A4949D505BF1(__this, L_45, NULL);
		// RevertForce();
		Swimmer_RevertForce_mF1F358F8CF49DDD51FBA6308865EE6634871D88A(__this, NULL);
	}

IL_013b:
	{
		// }
		return;
	}
}
// System.Void Swimmer::ForvardForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer_ForvardForce_m7B8E6C3E9919C247B35984137340A4949D505BF1 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___loaclVelocity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (loaclVelocity.sqrMagnitude > minForce * minForce)
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___loaclVelocity0), NULL);
		float L_1 = __this->___minForce_6;
		float L_2 = __this->___minForce_6;
		if ((!(((float)L_0) > ((float)((float)il2cpp_codegen_multiply(L_1, L_2))))))
		{
			goto IL_005f;
		}
	}
	{
		// loaclVelocity = Vector3.ClampMagnitude(loaclVelocity, maxForce);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___loaclVelocity0;
		float L_4 = __this->___maxForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_3, L_4, NULL);
		___loaclVelocity0 = L_5;
		// Debug.Log(loaclVelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___loaclVelocity0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// Vector3 worldVelocity = trackingReference.TransformDirection(loaclVelocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___trackingReference_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___loaclVelocity0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_9, L_10, NULL);
		V_0 = L_11;
		// _rigidbody.AddForce(worldVelocity * swimForce, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->____rigidbody_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = __this->___swimForce_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		NullCheck(L_12);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_12, L_15, 5, NULL);
		// _cooldownTimer = 0f;
		__this->____cooldownTimer_21 = (0.0f);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Swimmer::RevertForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer_RevertForce_mF1F358F8CF49DDD51FBA6308865EE6634871D88A (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_rigidbody.velocity.sqrMagnitude > 0.01f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rigidbody_20;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.00999999978f)))))
		{
			goto IL_0041;
		}
	}
	{
		// _rigidbody.AddForce(-_rigidbody.velocity * dragForce, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->____rigidbody_20;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->____rigidbody_20;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_5, NULL);
		float L_7 = __this->___dragForce_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		NullCheck(L_3);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_3, L_8, 5, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Swimmer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swimmer__ctor_m0FA99970A2E3E9D6C48258078DA005FBBBDA6205 (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float swimForce = 2f;
		__this->___swimForce_4 = (2.0f);
		// [SerializeField] private float dragForce = 1f;
		__this->___dragForce_5 = (1.0f);
		// [SerializeField] public float maxForce = 0.5f;
		__this->___maxForce_8 = (0.5f);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void PlyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyController_Start_m486D3F5EA36C8F504C2AD5F12DDA92351D743795 (PlyController_tBDA8443D99D01DAB4BE501630743DA61D9FD5AE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyController_Update_m460D4F8622687827CD866AA47F3664B6B235E9FE (PlyController_tBDA8443D99D01DAB4BE501630743DA61D9FD5AE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyController__ctor_m06B81263A7BD9C7C89F169CF3CD5FC1736DC5D20 (PlyController_tBDA8443D99D01DAB4BE501630743DA61D9FD5AE2* __this, const RuntimeMethod* method) 
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
// System.Void TextCreate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextCreate__ctor_m451C11D4753B9984594E75D9DE91D0BC0368EBDD (TextCreate_t1013DB0B84F59413BB0E5EE04C6507C4ED7E2311* __this, const RuntimeMethod* method) 
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
// System.Void TimeLine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_Awake_m4537388EB4A10DF46489E51E7E02825C37159B73 (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeLineaAimation = GetComponent<Animation>();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0;
		L_0 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		__this->___timeLineaAimation_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeLineaAimation_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void TimeLine::StartTimeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_StartTimeLine_m9CA52826BDF895FC729CC9148030815CFF77E64C (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	{
		// timeLineaAimation.clip = clipAimation;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___timeLineaAimation_4;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1 = __this->___clipAimation_5;
		NullCheck(L_0);
		Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119(L_0, L_1, NULL);
		// timeLineaAimation.Play();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_2 = __this->___timeLineaAimation_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E(L_2, NULL);
		// }
		return;
	}
}
// System.Void TimeLine::StopTimeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_StopTimeLine_m64DCA1916F77066A15B7415604A0EFF94E4E20A5 (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	{
		// timeLineaAimation.Stop();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___timeLineaAimation_4;
		NullCheck(L_0);
		Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756(L_0, NULL);
		// timeLineaAimation.clip = null;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_1 = __this->___timeLineaAimation_4;
		NullCheck(L_1);
		Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119(L_1, (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*)NULL, NULL);
		// timeLineaAimation.clip = clipAimation;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_2 = __this->___timeLineaAimation_4;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_3 = __this->___clipAimation_5;
		NullCheck(L_2);
		Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TimeLine::PlayVideo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_PlayVideo_m0982790A6A4ED09D7FDF202B3B28F0D69A042B0F (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, int32_t ___videoIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.clip = clips[videoIndex];
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___player_7;
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_1 = __this->___clips_6;
		int32_t L_2 = ___videoIndex0;
		NullCheck(L_1);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_3;
		L_3 = List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646(L_1, L_2, List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646_RuntimeMethod_var);
		NullCheck(L_0);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_0, L_3, NULL);
		// audioPlayer.clip = audioClips[videoIndex];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioPlayer_11;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_5 = __this->___audioClips_10;
		int32_t L_6 = ___videoIndex0;
		NullCheck(L_5);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7;
		L_7 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_5, L_6, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		NullCheck(L_4);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_7, NULL);
		// audioPlayer.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___audioPlayer_11;
		NullCheck(L_8);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_8, NULL);
		// player.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_9 = __this->___player_7;
		NullCheck(L_9);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_9, NULL);
		// }
		return;
	}
}
// System.Void TimeLine::OnLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_OnLoop_mA816F9A9A7A4D41DB25B5D66FFECD5F41C0C2CAF (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	{
		// audioPlayer.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioPlayer_11;
		NullCheck(L_0);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_0, (bool)1, NULL);
		// player.isLooping = true;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1 = __this->___player_7;
		NullCheck(L_1);
		VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TimeLine::OffLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_OffLoop_mDDB3DC10FA371A65303038A5DCDA51CA5B221549 (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	{
		// audioPlayer.loop = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioPlayer_11;
		NullCheck(L_0);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_0, (bool)0, NULL);
		// player.isLooping = false;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1 = __this->___player_7;
		NullCheck(L_1);
		VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TimeLine::MoreSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_MoreSpeed_mAFCA24AF1058C65C09CAEC2BE1CDA581CC8DAF77 (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TimeLine::LessSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_LessSpeed_mCE9EA037B08218C74C4A5DB4DD790E5A7099A942 (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TimeLine::StartPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_StartPoint_mCE7434C7717A5B54AA06ED6C8A975D3FDECD7A6B (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	{
		// gamePlayer.position = startPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___gamePlayer_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startPoint_14;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// MoreSpeed();
		TimeLine_MoreSpeed_mAFCA24AF1058C65C09CAEC2BE1CDA581CC8DAF77(__this, NULL);
		// }
		return;
	}
}
// System.Void TimeLine::LastAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine_LastAnimation_mD6E8DE21A7F276856392B1BE457F44BBB19EFDC2 (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
{
	{
		// lastaAimation.clip = lastClipAimation;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___lastaAimation_15;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1 = __this->___lastClipAimation_16;
		NullCheck(L_0);
		Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119(L_0, L_1, NULL);
		// lastaAimation.Play();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_2 = __this->___lastaAimation_15;
		NullCheck(L_2);
		bool L_3;
		L_3 = Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E(L_2, NULL);
		// }
		return;
	}
}
// System.Void TimeLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLine__ctor_m6A32426CCABD59F2F0493F6500D3DCD14ADAA0A7 (TimeLine_t8518DD8443F7E190B1810327B9EAF9AD06B84DB7* __this, const RuntimeMethod* method) 
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
// System.Void ZoneDetecte::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneDetecte_Awake_mD6038A59C93EEA83E071454445518564791B3C40 (ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source= GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___source_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_11), (void*)L_0);
		// textObj = transform.GetChild(0).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		__this->___textObj_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textObj_6), (void*)L_3);
		// renderCom = textObj.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___textObj_6;
		NullCheck(L_4);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_4, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		__this->___renderCom_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderCom_7), (void*)L_5);
		// }
		return;
	}
}
// System.Void ZoneDetecte::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneDetecte_Update_m6EEDE7C3EE8E5269791BA7A5CABA68FD1819F2BC (ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792* __this, const RuntimeMethod* method) 
{
	{
		// if (current != target) DoAnimation();
		float L_0 = __this->___current_10;
		float L_1 = __this->___target_9;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// if (current != target) DoAnimation();
		ZoneDetecte_DoAnimation_m53B86E6C0A56CDBCE831019F7D0BA40D18C630EA(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ZoneDetecte::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneDetecte_OnTriggerEnter_mFE959F8DE5FE248CD9B1D151DBF493B993E6935C (ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1_mA9D57438F895994D8B24780B9CD99419BAFD0D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F086189B26212ADEE86AD14210C2BFDFB8780F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.GetComponent<Hand>())
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* L_2;
		L_2 = GameObject_GetComponent_TisHand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1_mA9D57438F895994D8B24780B9CD99419BAFD0D45(L_1, GameObject_GetComponent_TisHand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1_mA9D57438F895994D8B24780B9CD99419BAFD0D45_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// source.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___source_11;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// Debug.Log("Enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF2F086189B26212ADEE86AD14210C2BFDFB8780F, NULL);
		// target = 1f;
		__this->___target_9 = (1.0f);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void ZoneDetecte::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneDetecte_OnTriggerExit_m9F37E29226AC551D3970A9CB89F82A78B3800B32 (ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1_mA9D57438F895994D8B24780B9CD99419BAFD0D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.GetComponent<Hand>())
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* L_2;
		L_2 = GameObject_GetComponent_TisHand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1_mA9D57438F895994D8B24780B9CD99419BAFD0D45(L_1, GameObject_GetComponent_TisHand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1_mA9D57438F895994D8B24780B9CD99419BAFD0D45_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// target = 0f;
		__this->___target_9 = (0.0f);
		// Debug.Log("Exit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ZoneDetecte::DoAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneDetecte_DoAnimation_m53B86E6C0A56CDBCE831019F7D0BA40D18C630EA (ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// current += Mathf.Lerp(-speed, speed, target);
		float L_0 = __this->___current_10;
		float L_1 = __this->___speed_5;
		float L_2 = __this->___speed_5;
		float L_3 = __this->___target_9;
		float L_4;
		L_4 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((-L_1)), L_2, L_3, NULL);
		__this->___current_10 = ((float)il2cpp_codegen_add(L_0, L_4));
		// current = Mathf.Clamp(current, 0f, 1f);
		float L_5 = __this->___current_10;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, (0.0f), (1.0f), NULL);
		__this->___current_10 = L_6;
		// renderCom.material.color = new Color(1, 1, 1, current);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->___renderCom_7;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		float L_9 = __this->___current_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), (1.0f), (1.0f), (1.0f), L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_10, NULL);
		// Debug.Log(current);
		float L_11 = __this->___current_10;
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_12);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void ZoneDetecte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneDetecte__ctor_mF93CFF43FEBC1315E1E301A38537688CC2AFCE21 (ZoneDetecte_t2B9006CE6097D6F59C896906280B2A032C3FD792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string materialParametr = "_BaseColor"; //_Color
		__this->___materialParametr_4 = _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materialParametr_4), (void*)_stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379);
		// [SerializeField] private float speed = 0.1f;
		__this->___speed_5 = (0.100000001f);
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
// System.Void ThreeDeeBear.Models.Ply.PlyResult::.ctor(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyResult__ctor_m5A7F53715C9CBD934A45D7B30F67FBA2AC6475C3 (PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___triangles1, List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___colors2, const RuntimeMethod* method) 
{
	{
		// public PlyResult(List<Vector3> vertices, List<int> triangles, List<Color> colors)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Vertices = vertices;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___vertices0;
		__this->___Vertices_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Vertices_0), (void*)L_0);
		// Triangles = triangles;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___triangles1;
		__this->___Triangles_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Triangles_1), (void*)L_1);
		// Colors = colors;
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_2 = ___colors2;
		__this->___Colors_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Colors_2), (void*)L_2);
		// }
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
// ThreeDeeBear.Models.Ply.PlyResult ThreeDeeBear.Models.Ply.PlyHandler::ParseAscii(System.Collections.Generic.List`1<System.String>,ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* PlyHandler_ParseAscii_m4F0E6E357249044AA8089642289C254916A77956 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___plyFile0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_mA2F47F871C2D6978ABB20BE90D82586968C199B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CParseAsciiU3Eb__0_mB82DEA448301AFA059C23AB814028B4337A82A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CParseAsciiU3Eb__1_m3E1C036A9CD1537CF1134789F723347CE6CE74C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5439D1933F6D88BD17050AD99CF8188D584B175F);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_0 = (U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mD70BC1EDB325B689C82B50EAE8400ACFABAB0866(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_1 = V_0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_2 = ___header1;
		NullCheck(L_1);
		L_1->___header_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___header_1), (void*)L_2);
		// var vertices = new List<Vector3>();
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_3 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_4, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___vertices_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___vertices_0), (void*)L_4);
		// var triangles = new List<int>();
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_5 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_6, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___triangles_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___triangles_3), (void*)L_6);
		// var colors = new List<Color>();
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_7 = V_0;
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_8 = (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*)il2cpp_codegen_object_new(List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D(L_8, List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___colors_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___colors_2), (void*)L_8);
		// var headerEndIndex = plyFile.IndexOf("end_header");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = ___plyFile0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_9, _stringLiteral5439D1933F6D88BD17050AD99CF8188D584B175F, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		// var vertexStartIndex = headerEndIndex + 1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// var faceStartIndex = vertexStartIndex + header.VertexCount + 1;
		int32_t L_11 = V_1;
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_12 = V_0;
		NullCheck(L_12);
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_13 = L_12->___header_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___VertexCount_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_11, L_14)), 1));
		// plyFile.GetRange(vertexStartIndex, header.VertexCount).ForEach(vertex =>
		// {
		//     var xyzrgb = vertex.Split(' ');
		//     vertices.Add(ParseVertex(xyzrgb, header));
		//     colors.Add(ParseColor(xyzrgb, header));
		// });
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = ___plyFile0;
		int32_t L_16 = V_1;
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_17 = V_0;
		NullCheck(L_17);
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_18 = L_17->___header_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->___VertexCount_1;
		NullCheck(L_15);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20;
		L_20 = List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4(L_15, L_16, L_19, List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_21 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_22 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CParseAsciiU3Eb__0_mB82DEA448301AFA059C23AB814028B4337A82A3F_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		List_1_ForEach_mA2F47F871C2D6978ABB20BE90D82586968C199B4(L_20, L_22, List_1_ForEach_mA2F47F871C2D6978ABB20BE90D82586968C199B4_RuntimeMethod_var);
		// plyFile.GetRange(faceStartIndex, header.FaceCount).ForEach(face =>
		// {
		//     triangles.AddRange(GetTriangles(face, header));
		// });
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = ___plyFile0;
		int32_t L_24 = V_2;
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_25 = V_0;
		NullCheck(L_25);
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_26 = L_25->___header_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->___FaceCount_2;
		NullCheck(L_23);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28;
		L_28 = List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4(L_23, L_24, L_27, List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_29 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_30 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_30, L_29, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CParseAsciiU3Eb__1_m3E1C036A9CD1537CF1134789F723347CE6CE74C0_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		List_1_ForEach_mA2F47F871C2D6978ABB20BE90D82586968C199B4(L_28, L_30, List_1_ForEach_mA2F47F871C2D6978ABB20BE90D82586968C199B4_RuntimeMethod_var);
		// return new PlyResult(vertices, triangles, colors);
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_31 = V_0;
		NullCheck(L_31);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = L_31->___vertices_0;
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_33 = V_0;
		NullCheck(L_33);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_34 = L_33->___triangles_3;
		U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* L_35 = V_0;
		NullCheck(L_35);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_36 = L_35->___colors_2;
		PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* L_37 = (PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8*)il2cpp_codegen_object_new(PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		PlyResult__ctor_m5A7F53715C9CBD934A45D7B30F67FBA2AC6475C3(L_37, L_32, L_34, L_36, NULL);
		return L_37;
	}
}
// UnityEngine.Vector3 ThreeDeeBear.Models.Ply.PlyHandler::ParseVertex(System.String[],ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlyHandler_ParseVertex_mE01BEAF72F7EA168519128206F72F0A5310D3B1F (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___xyzrgb0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// decimal.TryParse(xyzrgb[header.XIndex], NumberStyles.Float, CultureInfo.InvariantCulture, out dx);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___xyzrgb0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_1 = ___header1;
		NullCheck(L_1);
		int32_t L_2 = L_1->___XIndex_3;
		NullCheck(L_0);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Decimal_TryParse_mA3CAA172CC95A384FDB25A3FCEA91F9F1ABF23B6(L_4, ((int32_t)167), L_5, (&V_0), NULL);
		// decimal.TryParse(xyzrgb[header.YIndex], NumberStyles.Float, CultureInfo.InvariantCulture, out dy);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___xyzrgb0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_8 = ___header1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___YIndex_4;
		NullCheck(L_7);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12;
		L_12 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_13;
		L_13 = Decimal_TryParse_mA3CAA172CC95A384FDB25A3FCEA91F9F1ABF23B6(L_11, ((int32_t)167), L_12, (&V_1), NULL);
		// decimal.TryParse(xyzrgb[header.ZIndex], NumberStyles.Float, CultureInfo.InvariantCulture, out dz);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___xyzrgb0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_15 = ___header1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___ZIndex_5;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_19;
		L_19 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_20;
		L_20 = Decimal_TryParse_mA3CAA172CC95A384FDB25A3FCEA91F9F1ABF23B6(L_18, ((int32_t)167), L_19, (&V_2), NULL);
		// return new Vector3((float)dx, (float)dy, (float)dz);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_21 = V_0;
		float L_22;
		L_22 = Decimal_op_Explicit_mFE383D1954522ECA8822B56A7C59794B850FE4C1(L_21, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23 = V_1;
		float L_24;
		L_24 = Decimal_op_Explicit_mFE383D1954522ECA8822B56A7C59794B850FE4C1(L_23, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25 = V_2;
		float L_26;
		L_26 = Decimal_op_Explicit_mFE383D1954522ECA8822B56A7C59794B850FE4C1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), ((float)L_22), ((float)L_24), ((float)L_26), /*hidden argument*/NULL);
		return L_27;
	}
}
// UnityEngine.Color ThreeDeeBear.Models.Ply.PlyHandler::ParseColor(System.String[],ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PlyHandler_ParseColor_m8A28B5C98198AF60EBC1001C87F87CD70A3F44BA (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___xyzrgb0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int r = 255;
		V_0 = ((int32_t)255);
		// int g = 255;
		V_1 = ((int32_t)255);
		// int b = 255;
		V_2 = ((int32_t)255);
		// int a = 255;
		V_3 = ((int32_t)255);
		// if (header.RedIndex.HasValue)
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_0 = ___header1;
		NullCheck(L_0);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_1 = (&L_0->___RedIndex_6);
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_1, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// int.TryParse(xyzrgb[header.RedIndex.Value], NumberStyles.Integer, CultureInfo.InvariantCulture, out r);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___xyzrgb0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_4 = ___header1;
		NullCheck(L_4);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5 = (&L_4->___RedIndex_6);
		int32_t L_6;
		L_6 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_5, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_10;
		L_10 = Int32_TryParse_mB8E246A7D6D6308EF36DE3473643BDE4CF8F71FF(L_8, 7, L_9, (&V_0), NULL);
	}

IL_0040:
	{
		// if (header.GreenIndex.HasValue)
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_11 = ___header1;
		NullCheck(L_11);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_12 = (&L_11->___GreenIndex_7);
		bool L_13;
		L_13 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_12, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0068;
		}
	}
	{
		// int.TryParse(xyzrgb[header.GreenIndex.Value], NumberStyles.Integer, CultureInfo.InvariantCulture, out g);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___xyzrgb0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_15 = ___header1;
		NullCheck(L_15);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_16 = (&L_15->___GreenIndex_7);
		int32_t L_17;
		L_17 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_16, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_20;
		L_20 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_21;
		L_21 = Int32_TryParse_mB8E246A7D6D6308EF36DE3473643BDE4CF8F71FF(L_19, 7, L_20, (&V_1), NULL);
	}

IL_0068:
	{
		// if (header.BlueIndex.HasValue)
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_22 = ___header1;
		NullCheck(L_22);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23 = (&L_22->___BlueIndex_8);
		bool L_24;
		L_24 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_23, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0090;
		}
	}
	{
		// int.TryParse(xyzrgb[header.BlueIndex.Value], NumberStyles.Integer, CultureInfo.InvariantCulture, out b);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = ___xyzrgb0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_26 = ___header1;
		NullCheck(L_26);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_27 = (&L_26->___BlueIndex_8);
		int32_t L_28;
		L_28 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_27, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_29 = L_28;
		String_t* L_30 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_31;
		L_31 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_32;
		L_32 = Int32_TryParse_mB8E246A7D6D6308EF36DE3473643BDE4CF8F71FF(L_30, 7, L_31, (&V_2), NULL);
	}

IL_0090:
	{
		// if (header.AlphaIndex.HasValue)
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_33 = ___header1;
		NullCheck(L_33);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_34 = (&L_33->___AlphaIndex_9);
		bool L_35;
		L_35 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_34, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_00b8;
		}
	}
	{
		// int.TryParse(xyzrgb[header.AlphaIndex.Value], NumberStyles.Integer, CultureInfo.InvariantCulture, out a);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = ___xyzrgb0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_37 = ___header1;
		NullCheck(L_37);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_38 = (&L_37->___AlphaIndex_9);
		int32_t L_39;
		L_39 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_38, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_36);
		int32_t L_40 = L_39;
		String_t* L_41 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_42;
		L_42 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_43;
		L_43 = Int32_TryParse_mB8E246A7D6D6308EF36DE3473643BDE4CF8F71FF(L_41, 7, L_42, (&V_3), NULL);
	}

IL_00b8:
	{
		// return new Color(r / 255f, g / 255f, b / 255f, a / 255f);
		int32_t L_44 = V_0;
		int32_t L_45 = V_1;
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		memset((&L_48), 0, sizeof(L_48));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_48), ((float)(((float)L_44)/(255.0f))), ((float)(((float)L_45)/(255.0f))), ((float)(((float)L_46)/(255.0f))), ((float)(((float)L_47)/(255.0f))), /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Collections.Generic.List`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHandler::GetTriangles(System.String,ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* PlyHandler_GetTriangles_m0D42131C4C87F1ADA2C802001B9C9F12FD194F97 (String_t* ___faceVertexList0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisString_t_mB3879ED95FE5D75F6951C746C895FCE961E507BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEA8C398289AB9E039D771645B6A0D91A45DA56ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTrianglesU3Eb__3_0_mE052514A4DBAAE214739547091EDF1F9847AA4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTrianglesU3Eb__3_1_m6C66EA29FE61CC9760462A23B0E71F9FB88CDE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AD52C42AF1B98B7554273BA677D7CB0F948EF45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF303B94B2267619D4F5BE7700056FF63B3E98E);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* G_B6_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B6_1 = NULL;
	Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* G_B5_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B5_1 = NULL;
	Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* G_B9_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B9_1 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B9_2 = NULL;
	Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* G_B8_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B8_1 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B8_2 = NULL;
	{
		// switch (header.FaceParseMode)
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_0 = ___header1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___FaceParseMode_10;
		if (L_1)
		{
			goto IL_00be;
		}
	}
	{
		// var split = faceVertexList.Split(' ');
		String_t* L_2 = ___faceVertexList0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)32), 0, NULL);
		V_0 = L_3;
		// var count = Convert.ToInt32(split.First());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		String_t* L_5;
		L_5 = Enumerable_First_TisString_t_mB3879ED95FE5D75F6951C746C895FCE961E507BD((RuntimeObject*)L_4, Enumerable_First_TisString_t_mB3879ED95FE5D75F6951C746C895FCE961E507BD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00ae;
	}

IL_002e:
	{
		// return split.ToList().GetRange(1, 3).Select(x => Convert.ToInt32(x)).ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_9, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11;
		L_11 = List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4(L_10, 1, 3, List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_12 = ((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_13 = L_12;
		G_B5_0 = L_13;
		G_B5_1 = L_11;
		if (L_13)
		{
			G_B6_0 = L_13;
			G_B6_1 = L_11;
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* L_14 = ((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_15 = (Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783*)il2cpp_codegen_object_new(Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_m8735C973EB9B6C7545BC87E34D15C7FE2DD84B81(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3CGetTrianglesU3Eb__3_0_mE052514A4DBAAE214739547091EDF1F9847AA4A1_RuntimeMethod_var), NULL);
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_16 = L_15;
		((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_16);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_1;
	}

IL_005a:
	{
		RuntimeObject* L_17;
		L_17 = Enumerable_Select_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEA8C398289AB9E039D771645B6A0D91A45DA56ED(G_B6_1, G_B6_0, Enumerable_Select_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEA8C398289AB9E039D771645B6A0D91A45DA56ED_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18;
		L_18 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC(L_17, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		return L_18;
	}

IL_0065:
	{
		// var triangles = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_19, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		// var indices = split.ToList().GetRange(1, 4).Select(x => Convert.ToInt32(x)).ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21;
		L_21 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_20, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		NullCheck(L_21);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22;
		L_22 = List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4(L_21, 1, 4, List_1_GetRange_m29F035592DD2D73FA34CC4F9DB6561E9AD9478C4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_23 = ((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_2;
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_24 = L_23;
		G_B8_0 = L_24;
		G_B8_1 = L_22;
		G_B8_2 = L_19;
		if (L_24)
		{
			G_B9_0 = L_24;
			G_B9_1 = L_22;
			G_B9_2 = L_19;
			goto IL_0096;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* L_25 = ((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_26 = (Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783*)il2cpp_codegen_object_new(Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Func_2__ctor_m8735C973EB9B6C7545BC87E34D15C7FE2DD84B81(L_26, L_25, (intptr_t)((void*)U3CU3Ec_U3CGetTrianglesU3Eb__3_1_m6C66EA29FE61CC9760462A23B0E71F9FB88CDE72_RuntimeMethod_var), NULL);
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_27 = L_26;
		((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_2), (void*)L_27);
		G_B9_0 = L_27;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
	}

IL_0096:
	{
		RuntimeObject* L_28;
		L_28 = Enumerable_Select_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEA8C398289AB9E039D771645B6A0D91A45DA56ED(G_B9_1, G_B9_0, Enumerable_Select_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEA8C398289AB9E039D771645B6A0D91A45DA56ED_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_29;
		L_29 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC(L_28, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		V_2 = L_29;
		// triangles.AddRange(QuadToTriangles(indices));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = G_B9_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_31 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32;
		L_32 = PlyHandler_QuadToTriangles_mC5AFB4D8FF10B3446EC68C607359791968ADC10E(L_31, NULL);
		NullCheck(L_30);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_30, L_32, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// return triangles;
		return L_30;
	}

IL_00ae:
	{
		// Debug.LogWarning("Warning: Found a face with more than 4 vertices, skipping...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralAAF303B94B2267619D4F5BE7700056FF63B3E98E, NULL);
		// return new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_33, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		return L_33;
	}

IL_00be:
	{
		// Debug.LogWarning("Ply GetTriangles: Unknown parse mode");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral6AD52C42AF1B98B7554273BA677D7CB0F948EF45, NULL);
		// return new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_34 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_34, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		return L_34;
	}
}
// ThreeDeeBear.Models.Ply.PlyResult ThreeDeeBear.Models.Ply.PlyHandler::ParseBinaryLittleEndian(System.String,ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* PlyHandler_ParseBinaryLittleEndian_mC6A000F729F34F4D661E42842F55302CDF48FA8A (String_t* ___path0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Aggregate_TisString_t_mE91CF40C639FFB958F5EA190CCEE0EABE463D577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CParseBinaryLittleEndianU3Eb__4_0_m497BD021507D0071058C849F51BD246F3ED68C53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* V_2 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* G_B2_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B2_1 = NULL;
	Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* G_B1_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B1_1 = NULL;
	{
		// var headerAsText = header.RawHeader.Aggregate((a, b) => $"{a}\n{b}") + "\n";
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_0 = ___header1;
		NullCheck(L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0->___RawHeader_11;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* L_2 = ((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_3;
		Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* L_4 = ((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* L_5 = (Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA*)il2cpp_codegen_object_new(Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_3__ctor_m275CCA1C836EECF7962B6DFFCA1EF52FD862A6EC(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CParseBinaryLittleEndianU3Eb__4_0_m497BD021507D0071058C849F51BD246F3ED68C53_RuntimeMethod_var), NULL);
		Func_3_t939A6EACCC1AF5BEBF329B74AD1D13109632A3DA* L_6 = L_5;
		((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_3), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		String_t* L_7;
		L_7 = Enumerable_Aggregate_TisString_t_mE91CF40C639FFB958F5EA190CCEE0EABE463D577(G_B2_1, G_B2_0, Enumerable_Aggregate_TisString_t_mE91CF40C639FFB958F5EA190CCEE0EABE463D577_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_8;
		// var headerAsBytes = Encoding.ASCII.GetBytes(headerAsText);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
		L_9 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, L_10);
		V_1 = L_11;
		// var withoutHeader = File.ReadAllBytes(path).Skip(headerAsBytes.Length).ToArray();
		String_t* L_12 = ___path0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length)), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_15, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		// var colors = new List<Color>();
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_17 = (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*)il2cpp_codegen_object_new(List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D(L_17, List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		V_2 = L_17;
		// var vertices = GetVertices(withoutHeader, header, out colors);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_16;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_19 = ___header1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_20;
		L_20 = PlyHandler_GetVertices_m7A6F8126A8BCA5DBB87745CB4C16B82A1BB17368(L_18, L_19, (&V_2), NULL);
		V_3 = L_20;
		// var triangles = GetTriangles(withoutHeader, header);
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_21 = ___header1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_22;
		L_22 = PlyHandler_GetTriangles_m3510BE440C53A0DC0F10A288AEB2AD95A1CF900E(L_18, L_21, NULL);
		V_4 = L_22;
		// return new PlyResult(vertices, triangles, colors);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_23 = V_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_24 = V_4;
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_25 = V_2;
		PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* L_26 = (PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8*)il2cpp_codegen_object_new(PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		PlyResult__ctor_m5A7F53715C9CBD934A45D7B30F67FBA2AC6475C3(L_26, L_23, L_24, L_25, NULL);
		return L_26;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> ThreeDeeBear.Models.Ply.PlyHandler::GetVertices(System.Byte[],ThreeDeeBear.Models.Ply.PlyHeader,System.Collections.Generic.List`1<UnityEngine.Color>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* PlyHandler_GetVertices_m7A6F8126A8BCA5DBB87745CB4C16B82A1BB17368 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF** ___colors2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	uint8_t V_10 = 0x0;
	uint8_t V_11 = 0x0;
	uint8_t V_12 = 0x0;
	uint8_t V_13 = 0x0;
	int32_t G_B4_0 = 0;
	{
		// var vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// colors = new List<Color>();
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF** L_1 = ___colors2;
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_2 = (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*)il2cpp_codegen_object_new(List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D(L_2, List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_2);
		// int bpvc = 4; // bytes per vertex component
		V_1 = 4;
		// int bpcc = 1; // bytes per color component
		V_2 = 1;
		// bool hasColor = header.RedIndex.HasValue && header.GreenIndex.HasValue && header.BlueIndex.HasValue;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_3 = ___header1;
		NullCheck(L_3);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_4 = (&L_3->___RedIndex_6);
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_4, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_6 = ___header1;
		NullCheck(L_6);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_7 = (&L_6->___GreenIndex_7);
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_7, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_9 = ___header1;
		NullCheck(L_9);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_10 = (&L_9->___BlueIndex_8);
		bool L_11;
		L_11 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_10, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_11));
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		// int bytesPerVertex = GetByteCountPerVertex(header);
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_12 = ___header1;
		int32_t L_13;
		L_13 = PlyHandler_GetByteCountPerVertex_m913CE57468C8818BD6EF5845E29955D69788B556(L_12, NULL);
		V_4 = L_13;
		// for (int i = 0; i < header.VertexCount; i++)
		V_5 = 0;
		goto IL_011a;
	}

IL_004a:
	{
		// int byteIndex = i * bytesPerVertex;
		int32_t L_14 = V_5;
		int32_t L_15 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_14, L_15));
		// var x = System.BitConverter.ToSingle(bytes.SubArray(byteIndex + 0 * bpvc, bpvc), 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bytes0;
		int32_t L_17 = V_6;
		int32_t L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B(L_16, L_17, L_18, ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_19, 0, NULL);
		V_7 = L_20;
		// var y = System.BitConverter.ToSingle(bytes.SubArray(byteIndex + 1 * bpvc, bpvc), 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___bytes0;
		int32_t L_22 = V_6;
		int32_t L_23 = V_1;
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B(L_21, ((int32_t)il2cpp_codegen_add(L_22, L_23)), L_24, ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_RuntimeMethod_var);
		float L_26;
		L_26 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_25, 0, NULL);
		V_8 = L_26;
		// var z = System.BitConverter.ToSingle(bytes.SubArray(byteIndex + 2 * bpvc, bpvc), 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___bytes0;
		int32_t L_28 = V_6;
		int32_t L_29 = V_1;
		int32_t L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B(L_27, ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)il2cpp_codegen_multiply(2, L_29)))), L_30, ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_RuntimeMethod_var);
		float L_32;
		L_32 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_31, 0, NULL);
		V_9 = L_32;
		// if (hasColor)
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_0103;
		}
	}
	{
		// byte r, g, b, a = 255;
		V_13 = (uint8_t)((int32_t)255);
		// r = bytes[byteIndex + 3 * bpvc + 0 * bpcc];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___bytes0;
		int32_t L_35 = V_6;
		int32_t L_36 = V_1;
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)il2cpp_codegen_multiply(3, L_36))));
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_10 = L_38;
		// g = bytes[byteIndex + 3 * bpvc + 1 * bpcc];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___bytes0;
		int32_t L_40 = V_6;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		NullCheck(L_39);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(3, L_41)))), L_42));
		uint8_t L_44 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_11 = L_44;
		// b = bytes[byteIndex + 3 * bpvc + 2 * bpcc];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___bytes0;
		int32_t L_46 = V_6;
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_45);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_46, ((int32_t)il2cpp_codegen_multiply(3, L_47)))), ((int32_t)il2cpp_codegen_multiply(2, L_48))));
		uint8_t L_50 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_12 = L_50;
		// if (header.AlphaIndex.HasValue)
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_51 = ___header1;
		NullCheck(L_51);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_52 = (&L_51->___AlphaIndex_9);
		bool L_53;
		L_53 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_52, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_53)
		{
			goto IL_00d3;
		}
	}
	{
		// a = bytes[byteIndex + 3 * bpvc + 3 * bpcc];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ___bytes0;
		int32_t L_55 = V_6;
		int32_t L_56 = V_1;
		int32_t L_57 = V_2;
		NullCheck(L_54);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_55, ((int32_t)il2cpp_codegen_multiply(3, L_56)))), ((int32_t)il2cpp_codegen_multiply(3, L_57))));
		uint8_t L_59 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_13 = L_59;
	}

IL_00d3:
	{
		// colors.Add(new Color(r/255f, g/255f, b/255f, a/255f));
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF** L_60 = ___colors2;
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_61 = *((List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF**)L_60);
		uint8_t L_62 = V_10;
		uint8_t L_63 = V_11;
		uint8_t L_64 = V_12;
		uint8_t L_65 = V_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		memset((&L_66), 0, sizeof(L_66));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_66), ((float)(((float)L_62)/(255.0f))), ((float)(((float)L_63)/(255.0f))), ((float)(((float)L_64)/(255.0f))), ((float)(((float)L_65)/(255.0f))), /*hidden argument*/NULL);
		NullCheck(L_61);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_61, L_66, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
	}

IL_0103:
	{
		// vertices.Add(new Vector3(x, y, z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_67 = V_0;
		float L_68 = V_7;
		float L_69 = V_8;
		float L_70 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_71), L_68, L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_67);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_67, L_71, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < header.VertexCount; i++)
		int32_t L_72 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_011a:
	{
		// for (int i = 0; i < header.VertexCount; i++)
		int32_t L_73 = V_5;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_74 = ___header1;
		NullCheck(L_74);
		int32_t L_75 = L_74->___VertexCount_1;
		if ((((int32_t)L_73) < ((int32_t)L_75)))
		{
			goto IL_004a;
		}
	}
	{
		// return vertices;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_76 = V_0;
		return L_76;
	}
}
// System.Collections.Generic.List`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHandler::GetTriangles(System.Byte[],ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* PlyHandler_GetTriangles_m3510BE440C53A0DC0F10A288AEB2AD95A1CF900E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF303B94B2267619D4F5BE7700056FF63B3E98E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_8 = NULL;
	int32_t V_9 = 0;
	{
		// var toSkip = header.VertexCount * GetByteCountPerVertex(header);
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_0 = ___header1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___VertexCount_1;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_2 = ___header1;
		int32_t L_3;
		L_3 = PlyHandler_GetByteCountPerVertex_m913CE57468C8818BD6EF5845E29955D69788B556(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, L_3));
		// var triangles = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_4, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_1 = L_4;
		// int facesRead = 0;
		V_2 = 0;
		// int bytesRead = 0;
		V_3 = 0;
		// int bytesPerTriangleIndex = 4;
		V_4 = 4;
		goto IL_00ce;
	}

IL_0020:
	{
		// var faceIndex = toSkip + bytesRead;
		int32_t L_5 = V_0;
		int32_t L_6 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		// var indexCount = bytes[faceIndex];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bytes0;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_6 = L_10;
		// if (indexCount == 3)
		uint8_t L_11 = V_6;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_006b;
		}
	}
	{
		// for (int i = 0; i < indexCount; i++)
		V_7 = 0;
		goto IL_0059;
	}

IL_0035:
	{
		// triangles.Add(System.BitConverter.ToInt32(bytes.SubArray(faceIndex + 1 + i * bytesPerTriangleIndex, bytesPerTriangleIndex), 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___bytes0;
		int32_t L_14 = V_5;
		int32_t L_15 = V_7;
		int32_t L_16 = V_4;
		int32_t L_17 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B(L_13, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, 1)), ((int32_t)il2cpp_codegen_multiply(L_15, L_16)))), L_17, ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_18, 0, NULL);
		NullCheck(L_12);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_12, L_19, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 0; i < indexCount; i++)
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < indexCount; i++)
		int32_t L_21 = V_7;
		uint8_t L_22 = V_6;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0035;
		}
	}
	{
		// bytesRead += 1 + indexCount * bytesPerTriangleIndex;
		int32_t L_23 = V_3;
		uint8_t L_24 = V_6;
		int32_t L_25 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, L_25))))));
		goto IL_00ca;
	}

IL_006b:
	{
		// else if (indexCount == 4)
		uint8_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)4))))
		{
			goto IL_00c0;
		}
	}
	{
		// var tmp = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_27, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_8 = L_27;
		// for (int i = 0; i < indexCount; i++)
		V_9 = 0;
		goto IL_00a1;
	}

IL_007c:
	{
		// tmp.Add(System.BitConverter.ToInt32(bytes.SubArray(faceIndex + 1 + i * bytesPerTriangleIndex, bytesPerTriangleIndex), 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_28 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___bytes0;
		int32_t L_30 = V_5;
		int32_t L_31 = V_9;
		int32_t L_32 = V_4;
		int32_t L_33 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B(L_29, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, 1)), ((int32_t)il2cpp_codegen_multiply(L_31, L_32)))), L_33, ArrayExtensions_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF68C356EAE97A570C66FE4D06CF8A32442E1617B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_34, 0, NULL);
		NullCheck(L_28);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_28, L_35, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 0; i < indexCount; i++)
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00a1:
	{
		// for (int i = 0; i < indexCount; i++)
		int32_t L_37 = V_9;
		uint8_t L_38 = V_6;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_007c;
		}
	}
	{
		// triangles.AddRange(QuadToTriangles(tmp));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_39 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_40 = V_8;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_41;
		L_41 = PlyHandler_QuadToTriangles_mC5AFB4D8FF10B3446EC68C607359791968ADC10E(L_40, NULL);
		NullCheck(L_39);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_39, L_41, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// bytesRead += 1 + indexCount * bytesPerTriangleIndex;
		int32_t L_42 = V_3;
		uint8_t L_43 = V_6;
		int32_t L_44 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply((int32_t)L_43, L_44))))));
		goto IL_00ca;
	}

IL_00c0:
	{
		// Debug.LogWarning("Warning: Found a face with more than 4 vertices, skipping...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralAAF303B94B2267619D4F5BE7700056FF63B3E98E, NULL);
	}

IL_00ca:
	{
		// facesRead++;
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00ce:
	{
		// while (facesRead < header.FaceCount)
		int32_t L_46 = V_2;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_47 = ___header1;
		NullCheck(L_47);
		int32_t L_48 = L_47->___FaceCount_2;
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_0020;
		}
	}
	{
		// return triangles;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_49 = V_1;
		return L_49;
	}
}
// System.Int32 ThreeDeeBear.Models.Ply.PlyHandler::GetByteCountPerVertex(ThreeDeeBear.Models.Ply.PlyHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyHandler_GetByteCountPerVertex_m913CE57468C8818BD6EF5845E29955D69788B556 (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* ___header0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// int bpvc = 4; // bytes per vertex component
		V_0 = 4;
		// int bpcc = 1; // bytes per color component
		V_1 = 1;
		// int r = header.RedIndex.HasValue ? bpcc : 0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_0 = ___header0;
		NullCheck(L_0);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_1 = (&L_0->___RedIndex_6);
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_1, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0015;
	}

IL_0014:
	{
		int32_t L_3 = V_1;
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_2 = G_B3_0;
		// int g = header.GreenIndex.HasValue ? bpcc : 0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_4 = ___header0;
		NullCheck(L_4);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5 = (&L_4->___GreenIndex_7);
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_5, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0027;
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		G_B6_0 = L_7;
	}

IL_0027:
	{
		V_3 = G_B6_0;
		// int b = header.BlueIndex.HasValue ? bpcc : 0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_8 = ___header0;
		NullCheck(L_8);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_9 = (&L_8->___BlueIndex_8);
		bool L_10;
		L_10 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_9, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0038;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_0039;
	}

IL_0038:
	{
		int32_t L_11 = V_1;
		G_B9_0 = L_11;
	}

IL_0039:
	{
		V_4 = G_B9_0;
		// int a = header.AlphaIndex.HasValue ? bpcc : 0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_12 = ___header0;
		NullCheck(L_12);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_13 = (&L_12->___AlphaIndex_9);
		bool L_14;
		L_14 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_13, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_004b;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_004c;
	}

IL_004b:
	{
		int32_t L_15 = V_1;
		G_B12_0 = L_15;
	}

IL_004c:
	{
		V_5 = G_B12_0;
		// return (3 * bpvc + r + g + b + a);
		int32_t L_16 = V_0;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_16)), L_17)), L_18)), L_19)), L_20));
	}
}
// System.Collections.Generic.List`1<System.Int32> ThreeDeeBear.Models.Ply.PlyHandler::QuadToTriangles(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* PlyHandler_QuadToTriangles_mC5AFB4D8FF10B3446EC68C607359791968ADC10E (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___quad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<int>() { quad[0], quad[1], quad[2], quad[2], quad[3], quad[0] };
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = L_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___quad0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_2, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = L_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = ___quad0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, 1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_4, L_6, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = L_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = ___quad0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_8, 2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_7, L_9, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = L_7;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = ___quad0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_11, 2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_10, L_12, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = L_10;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = ___quad0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_14, 3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_13, L_15, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = L_13;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = ___quad0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_17, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_16);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_16, L_18, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		return L_16;
	}
}
// ThreeDeeBear.Models.Ply.PlyResult ThreeDeeBear.Models.Ply.PlyHandler::GetVerticesAndTriangles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* PlyHandler_GetVerticesAndTriangles_m6AE00CF0E82E999D41CA47CEFC7C356CBBE837E6 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_TakeUntilIncluding_TisString_t_mE986F3C8E9D1204B785C99AA3FBDDEC50ED7C70E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetVerticesAndTrianglesU3Eb__9_0_m6295C6B878A6B758F5255EB6EBBF9AD37F5B432D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* V_0 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// List<string> header = File.ReadLines(path).TakeUntilIncluding(x => x == "end_header").ToList();
		String_t* L_0 = ___path0;
		RuntimeObject* L_1;
		L_1 = File_ReadLines_mD8EF6C087859E5268943F4F6A408EC0C0328680D(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = ((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_4;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* L_4 = ((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetVerticesAndTrianglesU3Eb__9_0_m6295C6B878A6B758F5255EB6EBBF9AD37F5B432D_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_6 = L_5;
		((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_4), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = EnumerableExtensions_TakeUntilIncluding_TisString_t_mE986F3C8E9D1204B785C99AA3FBDDEC50ED7C70E(G_B2_1, G_B2_0, EnumerableExtensions_TakeUntilIncluding_TisString_t_mE986F3C8E9D1204B785C99AA3FBDDEC50ED7C70E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_7, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		// var headerParsed = new PlyHeader(header);
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_9 = (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD*)il2cpp_codegen_object_new(PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PlyHeader__ctor_mB6D220C724F94C0C3909FC091B70C9E23A17564B(L_9, L_8, NULL);
		V_0 = L_9;
		// if (headerParsed.Format == PlyFormat.Ascii)
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Format_0;
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		// return ParseAscii(File.ReadAllLines(path).ToList(), headerParsed);
		String_t* L_12 = ___path0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = File_ReadAllLines_mB084BF4726ECCB1B083E5B53DEE519C821F97BD5(L_12, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_13, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_15 = V_0;
		PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* L_16;
		L_16 = PlyHandler_ParseAscii_m4F0E6E357249044AA8089642289C254916A77956(L_14, L_15, NULL);
		return L_16;
	}

IL_004f:
	{
		// else if (headerParsed.Format == PlyFormat.BinaryLittleEndian)
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___Format_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_0060;
		}
	}
	{
		// return ParseBinaryLittleEndian(path, headerParsed);
		String_t* L_19 = ___path0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_20 = V_0;
		PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8* L_21;
		L_21 = PlyHandler_ParseBinaryLittleEndian_mC6A000F729F34F4D661E42842F55302CDF48FA8A(L_19, L_20, NULL);
		return L_21;
	}

IL_0060:
	{
		// return null;
		return (PlyResult_t0FB0EABB9D626347DF3B9B18499E398E868505E8*)NULL;
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
// System.Void ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mD70BC1EDB325B689C82B50EAE8400ACFABAB0866 (U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0::<ParseAscii>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CParseAsciiU3Eb__0_mB82DEA448301AFA059C23AB814028B4337A82A3F (U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* __this, String_t* ___vertex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// var xyzrgb = vertex.Split(' ');
		String_t* L_0 = ___vertex0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)32), 0, NULL);
		V_0 = L_1;
		// vertices.Add(ParseVertex(xyzrgb, header));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = __this->___vertices_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_4 = __this->___header_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = PlyHandler_ParseVertex_mE01BEAF72F7EA168519128206F72F0A5310D3B1F(L_3, L_4, NULL);
		NullCheck(L_2);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_2, L_5, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// colors.Add(ParseColor(xyzrgb, header));
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_6 = __this->___colors_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_8 = __this->___header_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = PlyHandler_ParseColor_m8A28B5C98198AF60EBC1001C87F87CD70A3F44BA(L_7, L_8, NULL);
		NullCheck(L_6);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_6, L_9, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void ThreeDeeBear.Models.Ply.PlyHandler/<>c__DisplayClass0_0::<ParseAscii>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CParseAsciiU3Eb__1_m3E1C036A9CD1537CF1134789F723347CE6CE74C0 (U3CU3Ec__DisplayClass0_0_tD285595E0CDF8B2A7BCCFD96AB18F25FE12399E7* __this, String_t* ___face0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// triangles.AddRange(GetTriangles(face, header));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___triangles_3;
		String_t* L_1 = ___face0;
		PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* L_2 = __this->___header_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3;
		L_3 = PlyHandler_GetTriangles_m0D42131C4C87F1ADA2C802001B9C9F12FD194F97(L_1, L_2, NULL);
		NullCheck(L_0);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_0, L_3, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// });
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
// System.Void ThreeDeeBear.Models.Ply.PlyHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m65464DE8BCAFF28E7520A263DF0AFB36706D8FBA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* L_0 = (U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D*)il2cpp_codegen_object_new(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m2F5E2F16515DF141C2913A8ADD5B060C4D34981D(L_0, NULL);
		((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ThreeDeeBear.Models.Ply.PlyHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2F5E2F16515DF141C2913A8ADD5B060C4D34981D (U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 ThreeDeeBear.Models.Ply.PlyHandler/<>c::<GetTriangles>b__3_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTrianglesU3Eb__3_0_mE052514A4DBAAE214739547091EDF1F9847AA4A1 (U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return split.ToList().GetRange(1, 3).Select(x => Convert.ToInt32(x)).ToList();
		String_t* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_0, NULL);
		return L_1;
	}
}
// System.Int32 ThreeDeeBear.Models.Ply.PlyHandler/<>c::<GetTriangles>b__3_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTrianglesU3Eb__3_1_m6C66EA29FE61CC9760462A23B0E71F9FB88CDE72 (U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var indices = split.ToList().GetRange(1, 4).Select(x => Convert.ToInt32(x)).ToList();
		String_t* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_0, NULL);
		return L_1;
	}
}
// System.String ThreeDeeBear.Models.Ply.PlyHandler/<>c::<ParseBinaryLittleEndian>b__4_0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CParseBinaryLittleEndianU3Eb__4_0_m497BD021507D0071058C849F51BD246F3ED68C53 (U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* __this, String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var headerAsText = header.RawHeader.Aggregate((a, b) => $"{a}\n{b}") + "\n";
		String_t* L_0 = ___a0;
		String_t* L_1 = ___b1;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_1, NULL);
		return L_2;
	}
}
// System.Boolean ThreeDeeBear.Models.Ply.PlyHandler/<>c::<GetVerticesAndTriangles>b__9_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetVerticesAndTrianglesU3Eb__9_0_m6295C6B878A6B758F5255EB6EBBF9AD37F5B432D (U3CU3Ec_t968AB018A6E0F1D0AD30AEB42B57DBD365BFAF1D* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5439D1933F6D88BD17050AD99CF8188D584B175F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<string> header = File.ReadLines(path).TakeUntilIncluding(x => x == "end_header").ToList();
		String_t* L_0 = ___x0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral5439D1933F6D88BD17050AD99CF8188D584B175F, NULL);
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
// System.Void ThreeDeeBear.Models.Ply.PlyHeader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyHeader__ctor_m1C1D3B8E207A299310FB2143FD2516E7E9D2C78A (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, const RuntimeMethod* method) 
{
	{
		// public PlyHeader()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void ThreeDeeBear.Models.Ply.PlyHeader::.ctor(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyHeader__ctor_mB6D220C724F94C0C3909FC091B70C9E23A17564B (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___headerUnparsed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__13_0_m0C980259B0C98092E9388CD8F8399AEC9AA9A513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__13_1_mEC0521066F21E20BFA33030A7943C0E6F5F88BAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__13_2_m6D526B22A5F17DDCFF986A92A4452315FEA9E424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B2_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B2_1 = NULL;
	PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* G_B2_2 = NULL;
	PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* G_B2_3 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B1_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B1_1 = NULL;
	PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* G_B1_2 = NULL;
	PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* G_B1_3 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B4_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B4_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B4_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B3_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B6_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B6_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B6_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B5_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B5_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B5_2 = NULL;
	{
		// public PlyHeader(List<string> headerUnparsed)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Format = GetFormat(headerUnparsed.FirstOrDefault(x => x.Contains("format")).Split(' ')[1]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___headerUnparsed0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_1 = ((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		G_B1_3 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			G_B2_3 = __this;
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* L_3 = ((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_4 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__13_0_m0C980259B0C98092E9388CD8F8399AEC9AA9A513_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = L_4;
		((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0028:
	{
		String_t* L_6;
		L_6 = Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74(G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74_RuntimeMethod_var);
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_6, ((int32_t)32), 0, NULL);
		NullCheck(L_7);
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(G_B2_2);
		int32_t L_10;
		L_10 = PlyHeader_GetFormat_m3FE30AD3418FA01527211E1CD66CE4A112B88097(G_B2_2, L_9, NULL);
		NullCheck(G_B2_3);
		G_B2_3->___Format_0 = L_10;
		// var elementVertexIndex = headerUnparsed.IndexOf(headerUnparsed.FirstOrDefault(x => x.Contains("element vertex")));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = ___headerUnparsed0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = ___headerUnparsed0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_13 = ((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_14 = L_13;
		G_B3_0 = L_14;
		G_B3_1 = L_12;
		G_B3_2 = L_11;
		if (L_14)
		{
			G_B4_0 = L_14;
			G_B4_1 = L_12;
			G_B4_2 = L_11;
			goto IL_0062;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* L_15 = ((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_16 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__13_1_mEC0521066F21E20BFA33030A7943C0E6F5F88BAD_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_17 = L_16;
		((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2), (void*)L_17);
		G_B4_0 = L_17;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0062:
	{
		String_t* L_18;
		L_18 = Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74(G_B4_1, G_B4_0, Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74_RuntimeMethod_var);
		NullCheck(G_B4_2);
		int32_t L_19;
		L_19 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(G_B4_2, L_18, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_19;
		// VertexCount = Convert.ToInt32(headerUnparsed[elementVertexIndex].Split(' ')[2]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = ___headerUnparsed0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22;
		L_22 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_20, L_21, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23;
		L_23 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_22, ((int32_t)32), 0, NULL);
		NullCheck(L_23);
		int32_t L_24 = 2;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_25, NULL);
		__this->___VertexCount_1 = L_26;
		// var elementFaceIndex = headerUnparsed.IndexOf(headerUnparsed.FirstOrDefault(x => x.Contains("element face")));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = ___headerUnparsed0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = ___headerUnparsed0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_29 = ((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_2_3;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_30 = L_29;
		G_B5_0 = L_30;
		G_B5_1 = L_28;
		G_B5_2 = L_27;
		if (L_30)
		{
			G_B6_0 = L_30;
			G_B6_1 = L_28;
			G_B6_2 = L_27;
			goto IL_00aa;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* L_31 = ((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_32 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_32, L_31, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__13_2_m6D526B22A5F17DDCFF986A92A4452315FEA9E424_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_33 = L_32;
		((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_2_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9__13_2_3), (void*)L_33);
		G_B6_0 = L_33;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_00aa:
	{
		String_t* L_34;
		L_34 = Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74(G_B6_1, G_B6_0, Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74_RuntimeMethod_var);
		NullCheck(G_B6_2);
		int32_t L_35;
		L_35 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(G_B6_2, L_34, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_1 = L_35;
		// FaceCount = Convert.ToInt32(headerUnparsed[elementFaceIndex].Split(' ')[2]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = ___headerUnparsed0;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		String_t* L_38;
		L_38 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_36, L_37, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_38, ((int32_t)32), 0, NULL);
		NullCheck(L_39);
		int32_t L_40 = 2;
		String_t* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_41, NULL);
		__this->___FaceCount_2 = L_42;
		// SetVertexProperties(GetProperties(headerUnparsed, elementVertexIndex));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_43 = ___headerUnparsed0;
		int32_t L_44 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_45;
		L_45 = PlyHeader_GetProperties_mFE6D195EE9F248F3891D4C7F5874E17CB4A67D5C(__this, L_43, L_44, NULL);
		PlyHeader_SetVertexProperties_m824B17C863A727FBF2227BB661E8E72A40171475(__this, L_45, NULL);
		// SetFaceProperties(GetProperties(headerUnparsed, elementFaceIndex));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_46 = ___headerUnparsed0;
		int32_t L_47 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48;
		L_48 = PlyHeader_GetProperties_mFE6D195EE9F248F3891D4C7F5874E17CB4A67D5C(__this, L_46, L_47, NULL);
		PlyHeader_SetFaceProperties_m749DDD702238DD8EBDE218355CF47C43CE234848(__this, L_48, NULL);
		// RawHeader = headerUnparsed;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49 = ___headerUnparsed0;
		__this->___RawHeader_11 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RawHeader_11), (void*)L_49);
		// }
		return;
	}
}
// ThreeDeeBear.Models.Ply.PlyFormat ThreeDeeBear.Models.Ply.PlyHeader::GetFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlyHeader_GetFormat_m3FE30AD3418FA01527211E1CD66CE4A112B88097 (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, String_t* ___formatLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C8FD42DE739569767886AA8F0E3D5D9932C0260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94946EAC70E5CEA4EFC559DFC67DF8BF306303EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7EA7848C284AD4F488019F03D67CC19F31B8FDF);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___formatLine0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral8C8FD42DE739569767886AA8F0E3D5D9932C0260, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = ___formatLine0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralC7EA7848C284AD4F488019F03D67CC19F31B8FDF, NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = ___formatLine0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral94946EAC70E5CEA4EFC559DFC67DF8BF306303EC, NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_002f;
	}

IL_0029:
	{
		// return PlyFormat.BinaryLittleEndian;
		return (int32_t)(2);
	}

IL_002b:
	{
		// return PlyFormat.BinaryBigEndian;
		return (int32_t)(1);
	}

IL_002d:
	{
		// return PlyFormat.Ascii;
		return (int32_t)(0);
	}

IL_002f:
	{
		// return PlyFormat.Unknown;
		return (int32_t)(3);
	}
}
// System.Void ThreeDeeBear.Models.Ply.PlyHeader::SetVertexProperties(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyHeader_SetVertexProperties_m824B17C863A727FBF2227BB661E8E72A40171475 (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0003B14F695AB7215B136EA26D31E90AFF0EB15A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// for (int i = 0; i < properties.Count; i++)
		V_0 = 0;
		goto IL_0147;
	}

IL_0007:
	{
		// var split = properties[i].Split(' ');
		RuntimeObject* L_0 = ___properties0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)32), 0, NULL);
		// var propertyType = split.Last();
		String_t* L_4;
		L_4 = Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D((RuntimeObject*)L_3, Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5 = V_1;
		uint32_t L_6;
		L_6 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_5, NULL);
		V_2 = L_6;
		uint32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)1569418667)))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)18738364))))
		{
			goto IL_00c5;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1089765596))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1569418667))))
		{
			goto IL_00e3;
		}
	}
	{
		goto IL_0143;
	}

IL_004e:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-2097416755))))
		{
			goto IL_00d4;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0143;
	}

IL_006b:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_0143;
	}

IL_0080:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0143;
	}

IL_0092:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_19)
		{
			goto IL_00fb;
		}
	}
	{
		goto IL_0143;
	}

IL_00a4:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_21)
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0143;
	}

IL_00b6:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		if (L_23)
		{
			goto IL_010d;
		}
	}
	{
		goto IL_0143;
	}

IL_00c5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, NULL);
		if (L_25)
		{
			goto IL_011b;
		}
	}
	{
		goto IL_0143;
	}

IL_00d4:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, NULL);
		if (L_27)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_0143;
	}

IL_00e3:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0003B14F695AB7215B136EA26D31E90AFF0EB15A, NULL);
		if (L_29)
		{
			goto IL_0137;
		}
	}
	{
		goto IL_0143;
	}

IL_00f2:
	{
		// XIndex = i;
		int32_t L_30 = V_0;
		__this->___XIndex_3 = L_30;
		// break;
		goto IL_0143;
	}

IL_00fb:
	{
		// YIndex = i;
		int32_t L_31 = V_0;
		__this->___YIndex_4 = L_31;
		// break;
		goto IL_0143;
	}

IL_0104:
	{
		// ZIndex = i;
		int32_t L_32 = V_0;
		__this->___ZIndex_5 = L_32;
		// break;
		goto IL_0143;
	}

IL_010d:
	{
		// RedIndex = i;
		int32_t L_33 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_34), L_33, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		__this->___RedIndex_6 = L_34;
		// break;
		goto IL_0143;
	}

IL_011b:
	{
		// GreenIndex = i;
		int32_t L_35 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_36), L_35, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		__this->___GreenIndex_7 = L_36;
		// break;
		goto IL_0143;
	}

IL_0129:
	{
		// BlueIndex = i;
		int32_t L_37 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_38), L_37, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		__this->___BlueIndex_8 = L_38;
		// break;
		goto IL_0143;
	}

IL_0137:
	{
		// AlphaIndex = i;
		int32_t L_39 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_40), L_39, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		__this->___AlphaIndex_9 = L_40;
	}

IL_0143:
	{
		// for (int i = 0; i < properties.Count; i++)
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0147:
	{
		// for (int i = 0; i < properties.Count; i++)
		int32_t L_42 = V_0;
		RuntimeObject* L_43 = ___properties0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_43);
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ThreeDeeBear.Models.Ply.PlyHeader::SetFaceProperties(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlyHeader_SetFaceProperties_m749DDD702238DD8EBDE218355CF47C43CE234848 (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E41C1E0B851E27D5F5E27BAC1B2FB099FE87796);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6B0EB3E1E4AE4BCDAD5B0AAECF5C5C0B3FDD907);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// foreach (var property in properties)
		RuntimeObject* L_0 = ___properties0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0009_1:
			{
				// foreach (var property in properties)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_4);
				bool L_6;
				L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralD6B0EB3E1E4AE4BCDAD5B0AAECF5C5C0B3FDD907, NULL);
				if (!L_6)
				{
					goto IL_0024_1;
				}
			}
			{
				// FaceParseMode = PlyFaceParseMode.VertexCountVertexIndex;
				__this->___FaceParseMode_10 = 0;
				// break;
				goto IL_002e_1;
			}

IL_0024_1:
			{
				// Debug.LogWarning("Ply: Unknown face property, will not know how to read faces from the mesh");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral9E41C1E0B851E27D5F5E27BAC1B2FB099FE87796, NULL);
			}

IL_002e_1:
			{
				// foreach (var property in properties)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> ThreeDeeBear.Models.Ply.PlyHeader::GetProperties(System.Collections.Generic.IList`1<System.String>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* PlyHeader_GetProperties_mFE6D195EE9F248F3891D4C7F5874E17CB4A67D5C (PlyHeader_tC8F0331F04A939317F3F4D9E18AEA5FEC4C6D6BD* __this, RuntimeObject* ___header0, int32_t ___elementIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF09A6BC0279473D57B36A82CF658E854D58181E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// var properties = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = elementIndex + 1; i < header.Count; i++)
		int32_t L_1 = ___elementIndex1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		goto IL_002c;
	}

IL_000c:
	{
		// var property = header[i];
		RuntimeObject* L_2 = ___header0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_2, L_3);
		V_2 = L_4;
		// if (property.Contains("property"))
		String_t* L_5 = V_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_5, _stringLiteralAF09A6BC0279473D57B36A82CF658E854D58181E, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// properties.Add(property);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_0;
		String_t* L_8 = V_2;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, L_8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = elementIndex + 1; i < header.Count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// for (int i = elementIndex + 1; i < header.Count; i++)
		int32_t L_10 = V_1;
		RuntimeObject* L_11 = ___header0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000c;
		}
	}

IL_0035:
	{
		// return properties;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = V_0;
		return L_13;
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
// System.Void ThreeDeeBear.Models.Ply.PlyHeader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m708C401DAFE02750AFA8EE23F73661AC76B692B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* L_0 = (U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562*)il2cpp_codegen_object_new(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mCD989E3814B982222919A6C3BC3D2454BFA989B5(L_0, NULL);
		((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ThreeDeeBear.Models.Ply.PlyHeader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD989E3814B982222919A6C3BC3D2454BFA989B5 (U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ThreeDeeBear.Models.Ply.PlyHeader/<>c::<.ctor>b__13_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__13_0_m0C980259B0C98092E9388CD8F8399AEC9AA9A513 (U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Format = GetFormat(headerUnparsed.FirstOrDefault(x => x.Contains("format")).Split(' ')[1]);
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, NULL);
		return L_1;
	}
}
// System.Boolean ThreeDeeBear.Models.Ply.PlyHeader/<>c::<.ctor>b__13_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__13_1_mEC0521066F21E20BFA33030A7943C0E6F5F88BAD (U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97AA9171171979A8D7A7B49134745A7C1E8B51E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var elementVertexIndex = headerUnparsed.IndexOf(headerUnparsed.FirstOrDefault(x => x.Contains("element vertex")));
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral97AA9171171979A8D7A7B49134745A7C1E8B51E4, NULL);
		return L_1;
	}
}
// System.Boolean ThreeDeeBear.Models.Ply.PlyHeader/<>c::<.ctor>b__13_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__13_2_m6D526B22A5F17DDCFF986A92A4452315FEA9E424 (U3CU3Ec_tD4A7F48C16BF2708B53A1803E54CE2FE73E39562* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68C4151801AC3371F7F067E10133602F7204B6D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var elementFaceIndex = headerUnparsed.IndexOf(headerUnparsed.FirstOrDefault(x => x.Contains("element face")));
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral68C4151801AC3371F7F067E10133602F7204B6D2, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SelectAction_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetGrip_m3696EA53C1FCF4B36ACCBA9D647167FA4813B8F1_inline (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// gripTarget = v;
		float L_0 = ___v0;
		__this->___gripTarget_8 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetTrigger_m4C9AE4BA5A37823DA8E5259F03C56627AF30250D_inline (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// triggerTarget = v;
		float L_0 = ___v0;
		__this->___triggerTarget_9 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Swimmer_set__leftHandOnGround_m5D0BE79A1231F9D3EFA76F3D1F76DF3BF01D5598_inline (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { leftHandOnGround = value; }
		bool L_0 = ___value0;
		__this->___leftHandOnGround_18 = L_0;
		// set { leftHandOnGround = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Swimmer_set__rightHandOnGround_mADBB77FFF253067E0105EA923960EB16C09F2F02_inline (Swimmer_t2FEE916089BFA96DB067991A514771BAFF2178DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { rightHandOnGround = value; }
		bool L_0 = ___value0;
		__this->___rightHandOnGround_19 = L_0;
		// set { rightHandOnGround = value; }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___vector0;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___maxLength1;
		float L_18 = V_4;
		float L_19 = ___maxLength1;
		float L_20 = V_5;
		float L_21 = ___maxLength1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___vector0;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_gshared_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item0, const RuntimeMethod* method) 
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = V_0;
		int32_t L_7 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_8);
		return;
	}

IL_0034:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___item0;
		((  void (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}

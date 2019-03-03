#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// LipingShare.LCLib.Asn1Processor.Asn1Node
struct Asn1Node_t84807007;
// LipingShare.LCLib.Asn1Processor.Asn1Parser
struct Asn1Parser_t1261554413;
// LipingShare.LCLib.Asn1Processor.Oid
struct Oid_t864847193;
// LipingShare.LCLib.Asn1Processor.RelativeOid
struct RelativeOid_t4118021937;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t2094547461;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1757093819;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t2447176574;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t3055037934;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t286439485;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct List_1_t1022022409;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>
struct List_1_t2451613916;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>
struct List_1_t324891242;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t120437468;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t2683512874;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.UTF8Encoding
struct UTF8Encoding_t3956466879;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.Void
struct Void_t1185182177;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_t3844914963;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_t180321090;
// UnityEngine.Purchasing.Security.AppleReceipt
struct AppleReceipt_t1677859958;
// UnityEngine.Purchasing.Security.AppleReceiptParser
struct AppleReceiptParser_t1990668756;
// UnityEngine.Purchasing.Security.DistinguishedName
struct DistinguishedName_t1591151536;
// UnityEngine.Purchasing.Security.IAPSecurityException
struct IAPSecurityException_t1844591500;
// UnityEngine.Purchasing.Security.InvalidPKCS7Data
struct InvalidPKCS7Data_t466532846;
// UnityEngine.Purchasing.Security.InvalidRSAData
struct InvalidRSAData_t2177780709;
// UnityEngine.Purchasing.Security.InvalidTimeFormat
struct InvalidTimeFormat_t1714182330;
// UnityEngine.Purchasing.Security.InvalidX509Data
struct InvalidX509Data_t1483908844;
// UnityEngine.Purchasing.Security.PKCS7
struct PKCS7_t350312378;
// UnityEngine.Purchasing.Security.RSAKey
struct RSAKey_t3751505760;
// UnityEngine.Purchasing.Security.SignerInfo
struct SignerInfo_t979539174;
// UnityEngine.Purchasing.Security.SignerInfo[]
struct SignerInfoU5BU5D_t3844795587;
// UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion
struct UnsupportedSignerInfoVersion_t1875534306;
// UnityEngine.Purchasing.Security.X509Cert
struct X509Cert_t3147783796;
// UnityEngine.Purchasing.Security.X509Cert[]
struct X509CertU5BU5D_t1214461245;

extern RuntimeClass* AppleInAppPurchaseReceipt_t3844914963_il2cpp_TypeInfo_var;
extern RuntimeClass* AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var;
extern RuntimeClass* AppleReceipt_t1677859958_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* Asn1Node_t84807007_il2cpp_TypeInfo_var;
extern RuntimeClass* Asn1Parser_t1261554413_il2cpp_TypeInfo_var;
extern RuntimeClass* Asn1Util_t417944685_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern RuntimeClass* DistinguishedName_t1591151536_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidRSAData_t2177780709_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidTimeFormat_t1714182330_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidX509Data_t1483908844_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1022022409_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2451613916_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t324891242_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Oid_t864847193_il2cpp_TypeInfo_var;
extern RuntimeClass* PKCS7_t350312378_il2cpp_TypeInfo_var;
extern RuntimeClass* RSACryptoServiceProvider_t2683512874_il2cpp_TypeInfo_var;
extern RuntimeClass* RSAKey_t3751505760_il2cpp_TypeInfo_var;
extern RuntimeClass* RelativeOid_t4118021937_il2cpp_TypeInfo_var;
extern RuntimeClass* SignerInfo_t979539174_il2cpp_TypeInfo_var;
extern RuntimeClass* StringDictionary_t120437468_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* UTF8Encoding_t3956466879_il2cpp_TypeInfo_var;
extern RuntimeClass* UnsupportedSignerInfoVersion_t1875534306_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Cert_t3147783796_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var;
extern String_t* _stringLiteral103687978;
extern String_t* _stringLiteral1063373797;
extern String_t* _stringLiteral1097139669;
extern String_t* _stringLiteral1130393555;
extern String_t* _stringLiteral1158275292;
extern String_t* _stringLiteral1167411829;
extern String_t* _stringLiteral1245225052;
extern String_t* _stringLiteral129382517;
extern String_t* _stringLiteral1385012172;
extern String_t* _stringLiteral1405532623;
extern String_t* _stringLiteral1452586790;
extern String_t* _stringLiteral1593892663;
extern String_t* _stringLiteral1602229408;
extern String_t* _stringLiteral1634660956;
extern String_t* _stringLiteral1669064005;
extern String_t* _stringLiteral1678670602;
extern String_t* _stringLiteral1683986553;
extern String_t* _stringLiteral183614935;
extern String_t* _stringLiteral1849104631;
extern String_t* _stringLiteral1851976586;
extern String_t* _stringLiteral1855871317;
extern String_t* _stringLiteral1941989764;
extern String_t* _stringLiteral1945119072;
extern String_t* _stringLiteral1965184254;
extern String_t* _stringLiteral2032194934;
extern String_t* _stringLiteral205920387;
extern String_t* _stringLiteral2064161749;
extern String_t* _stringLiteral2182712497;
extern String_t* _stringLiteral2360695731;
extern String_t* _stringLiteral237776671;
extern String_t* _stringLiteral2480762010;
extern String_t* _stringLiteral2742154383;
extern String_t* _stringLiteral289787376;
extern String_t* _stringLiteral2921149420;
extern String_t* _stringLiteral2933284458;
extern String_t* _stringLiteral2935935666;
extern String_t* _stringLiteral299018631;
extern String_t* _stringLiteral3066821586;
extern String_t* _stringLiteral3113638736;
extern String_t* _stringLiteral3138049181;
extern String_t* _stringLiteral3169997249;
extern String_t* _stringLiteral3201540188;
extern String_t* _stringLiteral3252624657;
extern String_t* _stringLiteral3361566829;
extern String_t* _stringLiteral3452614521;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614535;
extern String_t* _stringLiteral3453007779;
extern String_t* _stringLiteral3470491874;
extern String_t* _stringLiteral3723533260;
extern String_t* _stringLiteral3748652936;
extern String_t* _stringLiteral3757087297;
extern String_t* _stringLiteral3786055882;
extern String_t* _stringLiteral3789638493;
extern String_t* _stringLiteral3910513488;
extern String_t* _stringLiteral3913004426;
extern String_t* _stringLiteral407416507;
extern String_t* _stringLiteral4079033400;
extern String_t* _stringLiteral456868491;
extern String_t* _stringLiteral508155150;
extern String_t* _stringLiteral526389043;
extern String_t* _stringLiteral67591034;
extern String_t* _stringLiteral681157191;
extern String_t* _stringLiteral731526909;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral77588727;
extern String_t* _stringLiteral785355122;
extern const RuntimeMethod* AppleReceiptParser_ArrayEquals_TisByte_t1134296376_m591762719_RuntimeMethod_var;
extern const RuntimeMethod* AppleReceiptParser_ParseReceipt_m4064749857_RuntimeMethod_var;
extern const RuntimeMethod* Asn1Node_GeneralDecode_m1328456718_RuntimeMethod_var;
extern const RuntimeMethod* Asn1Node_ListDecode_m3748820269_RuntimeMethod_var;
extern const RuntimeMethod* Asn1Node_get_Data_m379120612_RuntimeMethod_var;
extern const RuntimeMethod* Asn1Parser_LoadData_m188276828_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m702451950_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m15304876_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1539906286_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3155846050_RuntimeMethod_var;
extern const RuntimeMethod* DistinguishedName__ctor_m3389155537_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2609638385_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2762383152_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4129203260_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m1411323235_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m127865374_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2993307493_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3202037354_RuntimeMethod_var;
extern const RuntimeMethod* Oid_Decode_m52904117_RuntimeMethod_var;
extern const RuntimeMethod* PKCS7_CheckStructure_m393412232_RuntimeMethod_var;
extern const RuntimeMethod* RSAKey_ParseNode_m749236704_RuntimeMethod_var;
extern const RuntimeMethod* RelativeOid_Decode_m3372241489_RuntimeMethod_var;
extern const RuntimeMethod* SignerInfo__ctor_m1735772653_RuntimeMethod_var;
extern const RuntimeMethod* X509Cert_ParseNode_m2562761880_RuntimeMethod_var;
extern const RuntimeMethod* X509Cert_ParseTime_m610086179_RuntimeMethod_var;
extern const uint32_t AppleReceiptParser_ParseInAppReceipt_m561782448_MetadataUsageId;
extern const uint32_t AppleReceiptParser_ParseReceipt_m4064749857_MetadataUsageId;
extern const uint32_t AppleReceiptParser_Parse_m511601021_MetadataUsageId;
extern const uint32_t AppleReceiptParser_TryParseDateTimeNode_m978455633_MetadataUsageId;
extern const uint32_t AppleReceiptParser__cctor_m2920489847_MetadataUsageId;
extern const uint32_t Asn1Node_ClearAll_m1073576200_MetadataUsageId;
extern const uint32_t Asn1Node_FormatLineHexString_m1832453272_MetadataUsageId;
extern const uint32_t Asn1Node_FormatLineString_m2134694141_MetadataUsageId;
extern const uint32_t Asn1Node_GeneralDecode_m1328456718_MetadataUsageId;
extern const uint32_t Asn1Node_GetChildNode_m2817937035_MetadataUsageId;
extern const uint32_t Asn1Node_GetDataStr_m489816169_MetadataUsageId;
extern const uint32_t Asn1Node_GetHexPrintingStr_m1213007647_MetadataUsageId;
extern const uint32_t Asn1Node_GetIndentStr_m3141977177_MetadataUsageId;
extern const uint32_t Asn1Node_GetListStr_m4125925599_MetadataUsageId;
extern const uint32_t Asn1Node_GetText_m1739552395_MetadataUsageId;
extern const uint32_t Asn1Node_Init_m1440211407_MetadataUsageId;
extern const uint32_t Asn1Node_ListDecode_m3748820269_MetadataUsageId;
extern const uint32_t Asn1Node_ResetChildNodePar_m3866897616_MetadataUsageId;
extern const uint32_t Asn1Node_ResetDataLengthFieldWidth_m570134001_MetadataUsageId;
extern const uint32_t Asn1Node_SaveData_m221214808_MetadataUsageId;
extern const uint32_t Asn1Node__ctor_m1162391460_MetadataUsageId;
extern const uint32_t Asn1Node__ctor_m2018391427_MetadataUsageId;
extern const uint32_t Asn1Node_get_Data_m379120612_MetadataUsageId;
extern const uint32_t Asn1Node_get_TagName_m2386341703_MetadataUsageId;
extern const uint32_t Asn1Parser_GetNodeTextHeader_m1953996318_MetadataUsageId;
extern const uint32_t Asn1Parser_LoadData_m188276828_MetadataUsageId;
extern const uint32_t Asn1Parser__ctor_m67072856_MetadataUsageId;
extern const uint32_t Asn1Util_BytesToString_m2331954563_MetadataUsageId;
extern const uint32_t Asn1Util_DERLengthEncode_m3699318424_MetadataUsageId;
extern const uint32_t Asn1Util_FormatString_m3734247287_MetadataUsageId;
extern const uint32_t Asn1Util_GenStr_m1521306602_MetadataUsageId;
extern const uint32_t Asn1Util_GetTagName_m1475833851_MetadataUsageId;
extern const uint32_t Asn1Util_ToHexString_m1008071469_MetadataUsageId;
extern const uint32_t Asn1Util__cctor_m3701085705_MetadataUsageId;
extern const uint32_t DistinguishedName_ToString_m699442985_MetadataUsageId;
extern const uint32_t DistinguishedName__ctor_m3389155537_MetadataUsageId;
extern const uint32_t IAPSecurityException__ctor_m2533083764_MetadataUsageId;
extern const uint32_t Oid_Decode_m1229707463_MetadataUsageId;
extern const uint32_t Oid_Decode_m52904117_MetadataUsageId;
extern const uint32_t Oid_GetOidName_m3765086347_MetadataUsageId;
extern const uint32_t Oid__cctor_m2371476853_MetadataUsageId;
extern const uint32_t PKCS7_CheckStructure_m393412232_MetadataUsageId;
extern const uint32_t RSAKey_ParseNode_m749236704_MetadataUsageId;
extern const uint32_t RSAKey_ToXML_m3021572651_MetadataUsageId;
extern const uint32_t RelativeOid_Decode_m3372241489_MetadataUsageId;
extern const uint32_t RelativeOid__ctor_m2367190897_MetadataUsageId;
extern const uint32_t SignerInfo__ctor_m1735772653_MetadataUsageId;
extern const uint32_t X509Cert_ParseNode_m2562761880_MetadataUsageId;
extern const uint32_t X509Cert_ParseTime_m610086179_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct AppleInAppPurchaseReceiptU5BU5D_t180321090;


#ifndef U3CMODULEU3E_T692745558_H
#define U3CMODULEU3E_T692745558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745558 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745558_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ASN1NODE_T84807007_H
#define ASN1NODE_T84807007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LipingShare.LCLib.Asn1Processor.Asn1Node
struct  Asn1Node_t84807007  : public RuntimeObject
{
public:
	// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::tag
	uint8_t ___tag_0;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::dataOffset
	int64_t ___dataOffset_1;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::dataLength
	int64_t ___dataLength_2;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::lengthFieldBytes
	int64_t ___lengthFieldBytes_3;
	// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::data
	ByteU5BU5D_t4116647657* ___data_4;
	// System.Collections.ArrayList LipingShare.LCLib.Asn1Processor.Asn1Node::childNodeList
	ArrayList_t2718874744 * ___childNodeList_5;
	// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::unusedBits
	uint8_t ___unusedBits_6;
	// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::deepness
	int64_t ___deepness_7;
	// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::path
	String_t* ___path_8;
	// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::parentNode
	Asn1Node_t84807007 * ___parentNode_9;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::requireRecalculatePar
	bool ___requireRecalculatePar_10;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::isIndefiniteLength
	bool ___isIndefiniteLength_11;
	// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::parseEncapsulatedData
	bool ___parseEncapsulatedData_12;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___tag_0)); }
	inline uint8_t get_tag_0() const { return ___tag_0; }
	inline uint8_t* get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(uint8_t value)
	{
		___tag_0 = value;
	}

	inline static int32_t get_offset_of_dataOffset_1() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___dataOffset_1)); }
	inline int64_t get_dataOffset_1() const { return ___dataOffset_1; }
	inline int64_t* get_address_of_dataOffset_1() { return &___dataOffset_1; }
	inline void set_dataOffset_1(int64_t value)
	{
		___dataOffset_1 = value;
	}

	inline static int32_t get_offset_of_dataLength_2() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___dataLength_2)); }
	inline int64_t get_dataLength_2() const { return ___dataLength_2; }
	inline int64_t* get_address_of_dataLength_2() { return &___dataLength_2; }
	inline void set_dataLength_2(int64_t value)
	{
		___dataLength_2 = value;
	}

	inline static int32_t get_offset_of_lengthFieldBytes_3() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___lengthFieldBytes_3)); }
	inline int64_t get_lengthFieldBytes_3() const { return ___lengthFieldBytes_3; }
	inline int64_t* get_address_of_lengthFieldBytes_3() { return &___lengthFieldBytes_3; }
	inline void set_lengthFieldBytes_3(int64_t value)
	{
		___lengthFieldBytes_3 = value;
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___data_4)); }
	inline ByteU5BU5D_t4116647657* get_data_4() const { return ___data_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(ByteU5BU5D_t4116647657* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((&___data_4), value);
	}

	inline static int32_t get_offset_of_childNodeList_5() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___childNodeList_5)); }
	inline ArrayList_t2718874744 * get_childNodeList_5() const { return ___childNodeList_5; }
	inline ArrayList_t2718874744 ** get_address_of_childNodeList_5() { return &___childNodeList_5; }
	inline void set_childNodeList_5(ArrayList_t2718874744 * value)
	{
		___childNodeList_5 = value;
		Il2CppCodeGenWriteBarrier((&___childNodeList_5), value);
	}

	inline static int32_t get_offset_of_unusedBits_6() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___unusedBits_6)); }
	inline uint8_t get_unusedBits_6() const { return ___unusedBits_6; }
	inline uint8_t* get_address_of_unusedBits_6() { return &___unusedBits_6; }
	inline void set_unusedBits_6(uint8_t value)
	{
		___unusedBits_6 = value;
	}

	inline static int32_t get_offset_of_deepness_7() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___deepness_7)); }
	inline int64_t get_deepness_7() const { return ___deepness_7; }
	inline int64_t* get_address_of_deepness_7() { return &___deepness_7; }
	inline void set_deepness_7(int64_t value)
	{
		___deepness_7 = value;
	}

	inline static int32_t get_offset_of_path_8() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___path_8)); }
	inline String_t* get_path_8() const { return ___path_8; }
	inline String_t** get_address_of_path_8() { return &___path_8; }
	inline void set_path_8(String_t* value)
	{
		___path_8 = value;
		Il2CppCodeGenWriteBarrier((&___path_8), value);
	}

	inline static int32_t get_offset_of_parentNode_9() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___parentNode_9)); }
	inline Asn1Node_t84807007 * get_parentNode_9() const { return ___parentNode_9; }
	inline Asn1Node_t84807007 ** get_address_of_parentNode_9() { return &___parentNode_9; }
	inline void set_parentNode_9(Asn1Node_t84807007 * value)
	{
		___parentNode_9 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_9), value);
	}

	inline static int32_t get_offset_of_requireRecalculatePar_10() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___requireRecalculatePar_10)); }
	inline bool get_requireRecalculatePar_10() const { return ___requireRecalculatePar_10; }
	inline bool* get_address_of_requireRecalculatePar_10() { return &___requireRecalculatePar_10; }
	inline void set_requireRecalculatePar_10(bool value)
	{
		___requireRecalculatePar_10 = value;
	}

	inline static int32_t get_offset_of_isIndefiniteLength_11() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___isIndefiniteLength_11)); }
	inline bool get_isIndefiniteLength_11() const { return ___isIndefiniteLength_11; }
	inline bool* get_address_of_isIndefiniteLength_11() { return &___isIndefiniteLength_11; }
	inline void set_isIndefiniteLength_11(bool value)
	{
		___isIndefiniteLength_11 = value;
	}

	inline static int32_t get_offset_of_parseEncapsulatedData_12() { return static_cast<int32_t>(offsetof(Asn1Node_t84807007, ___parseEncapsulatedData_12)); }
	inline bool get_parseEncapsulatedData_12() const { return ___parseEncapsulatedData_12; }
	inline bool* get_address_of_parseEncapsulatedData_12() { return &___parseEncapsulatedData_12; }
	inline void set_parseEncapsulatedData_12(bool value)
	{
		___parseEncapsulatedData_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1NODE_T84807007_H
#ifndef ASN1PARSER_T1261554413_H
#define ASN1PARSER_T1261554413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LipingShare.LCLib.Asn1Processor.Asn1Parser
struct  Asn1Parser_t1261554413  : public RuntimeObject
{
public:
	// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Parser::rawData
	ByteU5BU5D_t4116647657* ___rawData_0;
	// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::rootNode
	Asn1Node_t84807007 * ___rootNode_1;

public:
	inline static int32_t get_offset_of_rawData_0() { return static_cast<int32_t>(offsetof(Asn1Parser_t1261554413, ___rawData_0)); }
	inline ByteU5BU5D_t4116647657* get_rawData_0() const { return ___rawData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_rawData_0() { return &___rawData_0; }
	inline void set_rawData_0(ByteU5BU5D_t4116647657* value)
	{
		___rawData_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawData_0), value);
	}

	inline static int32_t get_offset_of_rootNode_1() { return static_cast<int32_t>(offsetof(Asn1Parser_t1261554413, ___rootNode_1)); }
	inline Asn1Node_t84807007 * get_rootNode_1() const { return ___rootNode_1; }
	inline Asn1Node_t84807007 ** get_address_of_rootNode_1() { return &___rootNode_1; }
	inline void set_rootNode_1(Asn1Node_t84807007 * value)
	{
		___rootNode_1 = value;
		Il2CppCodeGenWriteBarrier((&___rootNode_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1PARSER_T1261554413_H
#ifndef ASN1UTIL_T417944685_H
#define ASN1UTIL_T417944685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LipingShare.LCLib.Asn1Processor.Asn1Util
struct  Asn1Util_t417944685  : public RuntimeObject
{
public:

public:
};

struct Asn1Util_t417944685_StaticFields
{
public:
	// System.Char[] LipingShare.LCLib.Asn1Processor.Asn1Util::hexDigits
	CharU5BU5D_t3528271667* ___hexDigits_0;

public:
	inline static int32_t get_offset_of_hexDigits_0() { return static_cast<int32_t>(offsetof(Asn1Util_t417944685_StaticFields, ___hexDigits_0)); }
	inline CharU5BU5D_t3528271667* get_hexDigits_0() const { return ___hexDigits_0; }
	inline CharU5BU5D_t3528271667** get_address_of_hexDigits_0() { return &___hexDigits_0; }
	inline void set_hexDigits_0(CharU5BU5D_t3528271667* value)
	{
		___hexDigits_0 = value;
		Il2CppCodeGenWriteBarrier((&___hexDigits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1UTIL_T417944685_H
#ifndef OID_T864847193_H
#define OID_T864847193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LipingShare.LCLib.Asn1Processor.Oid
struct  Oid_t864847193  : public RuntimeObject
{
public:

public:
};

struct Oid_t864847193_StaticFields
{
public:
	// System.Collections.Specialized.StringDictionary LipingShare.LCLib.Asn1Processor.Oid::oidDictionary
	StringDictionary_t120437468 * ___oidDictionary_0;

public:
	inline static int32_t get_offset_of_oidDictionary_0() { return static_cast<int32_t>(offsetof(Oid_t864847193_StaticFields, ___oidDictionary_0)); }
	inline StringDictionary_t120437468 * get_oidDictionary_0() const { return ___oidDictionary_0; }
	inline StringDictionary_t120437468 ** get_address_of_oidDictionary_0() { return &___oidDictionary_0; }
	inline void set_oidDictionary_0(StringDictionary_t120437468 * value)
	{
		___oidDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___oidDictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T864847193_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_0)); }
	inline ObjectU5BU5D_t2843939325* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t2843939325* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t2843939325* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_t2843939325* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_t2843939325** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_t2843939325* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2447176574* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3055037934 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t286439485 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___entries_1)); }
	inline EntryU5BU5D_t2447176574* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2447176574** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2447176574* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keys_7)); }
	inline KeyCollection_t3055037934 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3055037934 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3055037934 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___values_8)); }
	inline ValueCollection_t286439485 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t286439485 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t286439485 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef LIST_1_T1022022409_H
#define LIST_1_T1022022409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>
struct  List_1_t1022022409  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AppleInAppPurchaseReceiptU5BU5D_t180321090* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1022022409, ____items_1)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t180321090* get__items_1() const { return ____items_1; }
	inline AppleInAppPurchaseReceiptU5BU5D_t180321090** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AppleInAppPurchaseReceiptU5BU5D_t180321090* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1022022409, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1022022409, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1022022409, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1022022409_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AppleInAppPurchaseReceiptU5BU5D_t180321090* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1022022409_StaticFields, ____emptyArray_5)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t180321090* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AppleInAppPurchaseReceiptU5BU5D_t180321090** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AppleInAppPurchaseReceiptU5BU5D_t180321090* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1022022409_H
#ifndef LIST_1_T2451613916_H
#define LIST_1_T2451613916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>
struct  List_1_t2451613916  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SignerInfoU5BU5D_t3844795587* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2451613916, ____items_1)); }
	inline SignerInfoU5BU5D_t3844795587* get__items_1() const { return ____items_1; }
	inline SignerInfoU5BU5D_t3844795587** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SignerInfoU5BU5D_t3844795587* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2451613916, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2451613916, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2451613916, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2451613916_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SignerInfoU5BU5D_t3844795587* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2451613916_StaticFields, ____emptyArray_5)); }
	inline SignerInfoU5BU5D_t3844795587* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SignerInfoU5BU5D_t3844795587** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SignerInfoU5BU5D_t3844795587* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2451613916_H
#ifndef LIST_1_T324891242_H
#define LIST_1_T324891242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>
struct  List_1_t324891242  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	X509CertU5BU5D_t1214461245* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t324891242, ____items_1)); }
	inline X509CertU5BU5D_t1214461245* get__items_1() const { return ____items_1; }
	inline X509CertU5BU5D_t1214461245** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(X509CertU5BU5D_t1214461245* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t324891242, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t324891242, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t324891242, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t324891242_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	X509CertU5BU5D_t1214461245* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t324891242_StaticFields, ____emptyArray_5)); }
	inline X509CertU5BU5D_t1214461245* get__emptyArray_5() const { return ____emptyArray_5; }
	inline X509CertU5BU5D_t1214461245** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(X509CertU5BU5D_t1214461245* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T324891242_H
#ifndef STRINGDICTIONARY_T120437468_H
#define STRINGDICTIONARY_T120437468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t120437468  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1853889766 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t120437468, ___contents_0)); }
	inline Hashtable_t1853889766 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1853889766 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1853889766 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T120437468_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef ASYMMETRICALGORITHM_T932037087_H
#define ASYMMETRICALGORITHM_T932037087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t932037087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T932037087_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_56)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_56), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_59)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_59), value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_60)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_60), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_61), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef APPLERECEIPTPARSER_T1990668756_H
#define APPLERECEIPTPARSER_T1990668756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.AppleReceiptParser
struct  AppleReceiptParser_t1990668756  : public RuntimeObject
{
public:

public:
};

struct AppleReceiptParser_t1990668756_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.Security.AppleReceiptParser::_mostRecentReceiptData
	Dictionary_2_t2865362463 * ____mostRecentReceiptData_0;

public:
	inline static int32_t get_offset_of__mostRecentReceiptData_0() { return static_cast<int32_t>(offsetof(AppleReceiptParser_t1990668756_StaticFields, ____mostRecentReceiptData_0)); }
	inline Dictionary_2_t2865362463 * get__mostRecentReceiptData_0() const { return ____mostRecentReceiptData_0; }
	inline Dictionary_2_t2865362463 ** get_address_of__mostRecentReceiptData_0() { return &____mostRecentReceiptData_0; }
	inline void set__mostRecentReceiptData_0(Dictionary_2_t2865362463 * value)
	{
		____mostRecentReceiptData_0 = value;
		Il2CppCodeGenWriteBarrier((&____mostRecentReceiptData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLERECEIPTPARSER_T1990668756_H
#ifndef DISTINGUISHEDNAME_T1591151536_H
#define DISTINGUISHEDNAME_T1591151536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.DistinguishedName
struct  DistinguishedName_t1591151536  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Country>k__BackingField
	String_t* ___U3CCountryU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Organization>k__BackingField
	String_t* ___U3COrganizationU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<OrganizationalUnit>k__BackingField
	String_t* ___U3COrganizationalUnitU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<Dnq>k__BackingField
	String_t* ___U3CDnqU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<State>k__BackingField
	String_t* ___U3CStateU3Ek__BackingField_4;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<CommonName>k__BackingField
	String_t* ___U3CCommonNameU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Security.DistinguishedName::<SerialNumber>k__BackingField
	String_t* ___U3CSerialNumberU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CCountryU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DistinguishedName_t1591151536, ___U3CCountryU3Ek__BackingField_0)); }
	inline String_t* get_U3CCountryU3Ek__BackingField_0() const { return ___U3CCountryU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCountryU3Ek__BackingField_0() { return &___U3CCountryU3Ek__BackingField_0; }
	inline void set_U3CCountryU3Ek__BackingField_0(String_t* value)
	{
		___U3CCountryU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCountryU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3COrganizationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DistinguishedName_t1591151536, ___U3COrganizationU3Ek__BackingField_1)); }
	inline String_t* get_U3COrganizationU3Ek__BackingField_1() const { return ___U3COrganizationU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3COrganizationU3Ek__BackingField_1() { return &___U3COrganizationU3Ek__BackingField_1; }
	inline void set_U3COrganizationU3Ek__BackingField_1(String_t* value)
	{
		___U3COrganizationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3COrganizationU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3COrganizationalUnitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DistinguishedName_t1591151536, ___U3COrganizationalUnitU3Ek__BackingField_2)); }
	inline String_t* get_U3COrganizationalUnitU3Ek__BackingField_2() const { return ___U3COrganizationalUnitU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3COrganizationalUnitU3Ek__BackingField_2() { return &___U3COrganizationalUnitU3Ek__BackingField_2; }
	inline void set_U3COrganizationalUnitU3Ek__BackingField_2(String_t* value)
	{
		___U3COrganizationalUnitU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3COrganizationalUnitU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CDnqU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DistinguishedName_t1591151536, ___U3CDnqU3Ek__BackingField_3)); }
	inline String_t* get_U3CDnqU3Ek__BackingField_3() const { return ___U3CDnqU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDnqU3Ek__BackingField_3() { return &___U3CDnqU3Ek__BackingField_3; }
	inline void set_U3CDnqU3Ek__BackingField_3(String_t* value)
	{
		___U3CDnqU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDnqU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DistinguishedName_t1591151536, ___U3CStateU3Ek__BackingField_4)); }
	inline String_t* get_U3CStateU3Ek__BackingField_4() const { return ___U3CStateU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CStateU3Ek__BackingField_4() { return &___U3CStateU3Ek__BackingField_4; }
	inline void set_U3CStateU3Ek__BackingField_4(String_t* value)
	{
		___U3CStateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStateU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CCommonNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DistinguishedName_t1591151536, ___U3CCommonNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CCommonNameU3Ek__BackingField_5() const { return ___U3CCommonNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CCommonNameU3Ek__BackingField_5() { return &___U3CCommonNameU3Ek__BackingField_5; }
	inline void set_U3CCommonNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CCommonNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCommonNameU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CSerialNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DistinguishedName_t1591151536, ___U3CSerialNumberU3Ek__BackingField_6)); }
	inline String_t* get_U3CSerialNumberU3Ek__BackingField_6() const { return ___U3CSerialNumberU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CSerialNumberU3Ek__BackingField_6() { return &___U3CSerialNumberU3Ek__BackingField_6; }
	inline void set_U3CSerialNumberU3Ek__BackingField_6(String_t* value)
	{
		___U3CSerialNumberU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSerialNumberU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISTINGUISHEDNAME_T1591151536_H
#ifndef PKCS7_T350312378_H
#define PKCS7_T350312378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.PKCS7
struct  PKCS7_t350312378  : public RuntimeObject
{
public:
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::root
	Asn1Node_t84807007 * ___root_0;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::<data>k__BackingField
	Asn1Node_t84807007 * ___U3CdataU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::<sinfos>k__BackingField
	List_1_t2451613916 * ___U3CsinfosU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::<certChain>k__BackingField
	List_1_t324891242 * ___U3CcertChainU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Purchasing.Security.PKCS7::validStructure
	bool ___validStructure_4;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(PKCS7_t350312378, ___root_0)); }
	inline Asn1Node_t84807007 * get_root_0() const { return ___root_0; }
	inline Asn1Node_t84807007 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(Asn1Node_t84807007 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((&___root_0), value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PKCS7_t350312378, ___U3CdataU3Ek__BackingField_1)); }
	inline Asn1Node_t84807007 * get_U3CdataU3Ek__BackingField_1() const { return ___U3CdataU3Ek__BackingField_1; }
	inline Asn1Node_t84807007 ** get_address_of_U3CdataU3Ek__BackingField_1() { return &___U3CdataU3Ek__BackingField_1; }
	inline void set_U3CdataU3Ek__BackingField_1(Asn1Node_t84807007 * value)
	{
		___U3CdataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdataU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CsinfosU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PKCS7_t350312378, ___U3CsinfosU3Ek__BackingField_2)); }
	inline List_1_t2451613916 * get_U3CsinfosU3Ek__BackingField_2() const { return ___U3CsinfosU3Ek__BackingField_2; }
	inline List_1_t2451613916 ** get_address_of_U3CsinfosU3Ek__BackingField_2() { return &___U3CsinfosU3Ek__BackingField_2; }
	inline void set_U3CsinfosU3Ek__BackingField_2(List_1_t2451613916 * value)
	{
		___U3CsinfosU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsinfosU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CcertChainU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PKCS7_t350312378, ___U3CcertChainU3Ek__BackingField_3)); }
	inline List_1_t324891242 * get_U3CcertChainU3Ek__BackingField_3() const { return ___U3CcertChainU3Ek__BackingField_3; }
	inline List_1_t324891242 ** get_address_of_U3CcertChainU3Ek__BackingField_3() { return &___U3CcertChainU3Ek__BackingField_3; }
	inline void set_U3CcertChainU3Ek__BackingField_3(List_1_t324891242 * value)
	{
		___U3CcertChainU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcertChainU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_validStructure_4() { return static_cast<int32_t>(offsetof(PKCS7_t350312378, ___validStructure_4)); }
	inline bool get_validStructure_4() const { return ___validStructure_4; }
	inline bool* get_address_of_validStructure_4() { return &___validStructure_4; }
	inline void set_validStructure_4(bool value)
	{
		___validStructure_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T350312378_H
#ifndef RSAKEY_T3751505760_H
#define RSAKEY_T3751505760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.RSAKey
struct  RSAKey_t3751505760  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::<rsa>k__BackingField
	RSACryptoServiceProvider_t2683512874 * ___U3CrsaU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CrsaU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RSAKey_t3751505760, ___U3CrsaU3Ek__BackingField_0)); }
	inline RSACryptoServiceProvider_t2683512874 * get_U3CrsaU3Ek__BackingField_0() const { return ___U3CrsaU3Ek__BackingField_0; }
	inline RSACryptoServiceProvider_t2683512874 ** get_address_of_U3CrsaU3Ek__BackingField_0() { return &___U3CrsaU3Ek__BackingField_0; }
	inline void set_U3CrsaU3Ek__BackingField_0(RSACryptoServiceProvider_t2683512874 * value)
	{
		___U3CrsaU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrsaU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAKEY_T3751505760_H
#ifndef SIGNERINFO_T979539174_H
#define SIGNERINFO_T979539174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.SignerInfo
struct  SignerInfo_t979539174  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.SignerInfo::<IssuerSerialNumber>k__BackingField
	String_t* ___U3CIssuerSerialNumberU3Ek__BackingField_1;
	// System.Byte[] UnityEngine.Purchasing.Security.SignerInfo::<EncryptedDigest>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CEncryptedDigestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SignerInfo_t979539174, ___U3CVersionU3Ek__BackingField_0)); }
	inline int32_t get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(int32_t value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIssuerSerialNumberU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SignerInfo_t979539174, ___U3CIssuerSerialNumberU3Ek__BackingField_1)); }
	inline String_t* get_U3CIssuerSerialNumberU3Ek__BackingField_1() const { return ___U3CIssuerSerialNumberU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CIssuerSerialNumberU3Ek__BackingField_1() { return &___U3CIssuerSerialNumberU3Ek__BackingField_1; }
	inline void set_U3CIssuerSerialNumberU3Ek__BackingField_1(String_t* value)
	{
		___U3CIssuerSerialNumberU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIssuerSerialNumberU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CEncryptedDigestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SignerInfo_t979539174, ___U3CEncryptedDigestU3Ek__BackingField_2)); }
	inline ByteU5BU5D_t4116647657* get_U3CEncryptedDigestU3Ek__BackingField_2() const { return ___U3CEncryptedDigestU3Ek__BackingField_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CEncryptedDigestU3Ek__BackingField_2() { return &___U3CEncryptedDigestU3Ek__BackingField_2; }
	inline void set_U3CEncryptedDigestU3Ek__BackingField_2(ByteU5BU5D_t4116647657* value)
	{
		___U3CEncryptedDigestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncryptedDigestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNERINFO_T979539174_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125393_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125393 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125393__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125393_H
#ifndef RELATIVEOID_T4118021937_H
#define RELATIVEOID_T4118021937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LipingShare.LCLib.Asn1Processor.RelativeOid
struct  RelativeOid_t4118021937  : public Oid_t864847193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIVEOID_T4118021937_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef RSA_T2385438082_H
#define RSA_T2385438082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t2385438082  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T2385438082_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_62;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_63;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_62() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitUTF8Identifier_62)); }
	inline bool get_emitUTF8Identifier_62() const { return ___emitUTF8Identifier_62; }
	inline bool* get_address_of_emitUTF8Identifier_62() { return &___emitUTF8Identifier_62; }
	inline void set_emitUTF8Identifier_62(bool value)
	{
		___emitUTF8Identifier_62 = value;
	}

	inline static int32_t get_offset_of_isThrowException_63() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___isThrowException_63)); }
	inline bool get_isThrowException_63() const { return ___isThrowException_63; }
	inline bool* get_address_of_isThrowException_63() { return &___isThrowException_63; }
	inline void set_isThrowException_63(bool value)
	{
		___isThrowException_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef IAPSECURITYEXCEPTION_T1844591500_H
#define IAPSECURITYEXCEPTION_T1844591500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.IAPSecurityException
struct  IAPSecurityException_t1844591500  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPSECURITYEXCEPTION_T1844591500_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255368  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t2711125393  ___59F5BD34B6C013DEACC784F69C67E95150033A84_0;

public:
	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125393  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125393 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_0(__StaticArrayInitTypeSizeU3D32_t2711125393  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t61518632 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____lastReadTask_13)); }
	inline Task_1_t61518632 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t61518632 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t61518632 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef CSPPROVIDERFLAGS_T4094439141_H
#define CSPPROVIDERFLAGS_T4094439141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t4094439141 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t4094439141, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPROVIDERFLAGS_T4094439141_H
#ifndef APPLEINAPPPURCHASERECEIPT_T3844914963_H
#define APPLEINAPPPURCHASERECEIPT_T3844914963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct  AppleInAppPurchaseReceipt_t3844914963  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<quantity>k__BackingField
	int32_t ___U3CquantityU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productID>k__BackingField
	String_t* ___U3CproductIDU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalTransactionIdentifier>k__BackingField
	String_t* ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<purchaseDate>k__BackingField
	DateTime_t3738529785  ___U3CpurchaseDateU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalPurchaseDate>k__BackingField
	DateTime_t3738529785  ___U3CoriginalPurchaseDateU3Ek__BackingField_5;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<subscriptionExpirationDate>k__BackingField
	DateTime_t3738529785  ___U3CsubscriptionExpirationDateU3Ek__BackingField_6;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<cancellationDate>k__BackingField
	DateTime_t3738529785  ___U3CcancellationDateU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isFreeTrial>k__BackingField
	int32_t ___U3CisFreeTrialU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productType>k__BackingField
	int32_t ___U3CproductTypeU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isIntroductoryPricePeriod>k__BackingField
	int32_t ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CquantityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CquantityU3Ek__BackingField_0)); }
	inline int32_t get_U3CquantityU3Ek__BackingField_0() const { return ___U3CquantityU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CquantityU3Ek__BackingField_0() { return &___U3CquantityU3Ek__BackingField_0; }
	inline void set_U3CquantityU3Ek__BackingField_0(int32_t value)
	{
		___U3CquantityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproductIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CproductIDU3Ek__BackingField_1)); }
	inline String_t* get_U3CproductIDU3Ek__BackingField_1() const { return ___U3CproductIDU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CproductIDU3Ek__BackingField_1() { return &___U3CproductIDU3Ek__BackingField_1; }
	inline void set_U3CproductIDU3Ek__BackingField_1(String_t* value)
	{
		___U3CproductIDU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CproductIDU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CtransactionIDU3Ek__BackingField_2)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_2() const { return ___U3CtransactionIDU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_2() { return &___U3CtransactionIDU3Ek__BackingField_2; }
	inline void set_U3CtransactionIDU3Ek__BackingField_2(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransactionIDU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3)); }
	inline String_t* get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() const { return ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return &___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline void set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(String_t* value)
	{
		___U3CoriginalTransactionIdentifierU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CoriginalTransactionIdentifierU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CpurchaseDateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CpurchaseDateU3Ek__BackingField_4)); }
	inline DateTime_t3738529785  get_U3CpurchaseDateU3Ek__BackingField_4() const { return ___U3CpurchaseDateU3Ek__BackingField_4; }
	inline DateTime_t3738529785 * get_address_of_U3CpurchaseDateU3Ek__BackingField_4() { return &___U3CpurchaseDateU3Ek__BackingField_4; }
	inline void set_U3CpurchaseDateU3Ek__BackingField_4(DateTime_t3738529785  value)
	{
		___U3CpurchaseDateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CoriginalPurchaseDateU3Ek__BackingField_5)); }
	inline DateTime_t3738529785  get_U3CoriginalPurchaseDateU3Ek__BackingField_5() const { return ___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline DateTime_t3738529785 * get_address_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return &___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline void set_U3CoriginalPurchaseDateU3Ek__BackingField_5(DateTime_t3738529785  value)
	{
		___U3CoriginalPurchaseDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CsubscriptionExpirationDateU3Ek__BackingField_6)); }
	inline DateTime_t3738529785  get_U3CsubscriptionExpirationDateU3Ek__BackingField_6() const { return ___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline DateTime_t3738529785 * get_address_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return &___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline void set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(DateTime_t3738529785  value)
	{
		___U3CsubscriptionExpirationDateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CcancellationDateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CcancellationDateU3Ek__BackingField_7)); }
	inline DateTime_t3738529785  get_U3CcancellationDateU3Ek__BackingField_7() const { return ___U3CcancellationDateU3Ek__BackingField_7; }
	inline DateTime_t3738529785 * get_address_of_U3CcancellationDateU3Ek__BackingField_7() { return &___U3CcancellationDateU3Ek__BackingField_7; }
	inline void set_U3CcancellationDateU3Ek__BackingField_7(DateTime_t3738529785  value)
	{
		___U3CcancellationDateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CisFreeTrialU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CisFreeTrialU3Ek__BackingField_8)); }
	inline int32_t get_U3CisFreeTrialU3Ek__BackingField_8() const { return ___U3CisFreeTrialU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CisFreeTrialU3Ek__BackingField_8() { return &___U3CisFreeTrialU3Ek__BackingField_8; }
	inline void set_U3CisFreeTrialU3Ek__BackingField_8(int32_t value)
	{
		___U3CisFreeTrialU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CproductTypeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CproductTypeU3Ek__BackingField_9)); }
	inline int32_t get_U3CproductTypeU3Ek__BackingField_9() const { return ___U3CproductTypeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CproductTypeU3Ek__BackingField_9() { return &___U3CproductTypeU3Ek__BackingField_9; }
	inline void set_U3CproductTypeU3Ek__BackingField_9(int32_t value)
	{
		___U3CproductTypeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t3844914963, ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10)); }
	inline int32_t get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() const { return ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return &___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline void set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(int32_t value)
	{
		___U3CisIntroductoryPricePeriodU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLEINAPPPURCHASERECEIPT_T3844914963_H
#ifndef APPLERECEIPT_T1677859958_H
#define APPLERECEIPT_T1677859958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.AppleReceipt
struct  AppleReceipt_t1677859958  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<bundleID>k__BackingField
	String_t* ___U3CbundleIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<appVersion>k__BackingField
	String_t* ___U3CappVersionU3Ek__BackingField_1;
	// System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::<opaque>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CopaqueU3Ek__BackingField_2;
	// System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::<hash>k__BackingField
	ByteU5BU5D_t4116647657* ___U3ChashU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Security.AppleReceipt::<originalApplicationVersion>k__BackingField
	String_t* ___U3CoriginalApplicationVersionU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleReceipt::<receiptCreationDate>k__BackingField
	DateTime_t3738529785  ___U3CreceiptCreationDateU3Ek__BackingField_5;
	// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[] UnityEngine.Purchasing.Security.AppleReceipt::inAppPurchaseReceipts
	AppleInAppPurchaseReceiptU5BU5D_t180321090* ___inAppPurchaseReceipts_6;

public:
	inline static int32_t get_offset_of_U3CbundleIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleReceipt_t1677859958, ___U3CbundleIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CbundleIDU3Ek__BackingField_0() const { return ___U3CbundleIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CbundleIDU3Ek__BackingField_0() { return &___U3CbundleIDU3Ek__BackingField_0; }
	inline void set_U3CbundleIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CbundleIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbundleIDU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CappVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleReceipt_t1677859958, ___U3CappVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CappVersionU3Ek__BackingField_1() const { return ___U3CappVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CappVersionU3Ek__BackingField_1() { return &___U3CappVersionU3Ek__BackingField_1; }
	inline void set_U3CappVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CappVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CappVersionU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CopaqueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleReceipt_t1677859958, ___U3CopaqueU3Ek__BackingField_2)); }
	inline ByteU5BU5D_t4116647657* get_U3CopaqueU3Ek__BackingField_2() const { return ___U3CopaqueU3Ek__BackingField_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CopaqueU3Ek__BackingField_2() { return &___U3CopaqueU3Ek__BackingField_2; }
	inline void set_U3CopaqueU3Ek__BackingField_2(ByteU5BU5D_t4116647657* value)
	{
		___U3CopaqueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CopaqueU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3ChashU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleReceipt_t1677859958, ___U3ChashU3Ek__BackingField_3)); }
	inline ByteU5BU5D_t4116647657* get_U3ChashU3Ek__BackingField_3() const { return ___U3ChashU3Ek__BackingField_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3ChashU3Ek__BackingField_3() { return &___U3ChashU3Ek__BackingField_3; }
	inline void set_U3ChashU3Ek__BackingField_3(ByteU5BU5D_t4116647657* value)
	{
		___U3ChashU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3ChashU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CoriginalApplicationVersionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleReceipt_t1677859958, ___U3CoriginalApplicationVersionU3Ek__BackingField_4)); }
	inline String_t* get_U3CoriginalApplicationVersionU3Ek__BackingField_4() const { return ___U3CoriginalApplicationVersionU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CoriginalApplicationVersionU3Ek__BackingField_4() { return &___U3CoriginalApplicationVersionU3Ek__BackingField_4; }
	inline void set_U3CoriginalApplicationVersionU3Ek__BackingField_4(String_t* value)
	{
		___U3CoriginalApplicationVersionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CoriginalApplicationVersionU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CreceiptCreationDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleReceipt_t1677859958, ___U3CreceiptCreationDateU3Ek__BackingField_5)); }
	inline DateTime_t3738529785  get_U3CreceiptCreationDateU3Ek__BackingField_5() const { return ___U3CreceiptCreationDateU3Ek__BackingField_5; }
	inline DateTime_t3738529785 * get_address_of_U3CreceiptCreationDateU3Ek__BackingField_5() { return &___U3CreceiptCreationDateU3Ek__BackingField_5; }
	inline void set_U3CreceiptCreationDateU3Ek__BackingField_5(DateTime_t3738529785  value)
	{
		___U3CreceiptCreationDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_inAppPurchaseReceipts_6() { return static_cast<int32_t>(offsetof(AppleReceipt_t1677859958, ___inAppPurchaseReceipts_6)); }
	inline AppleInAppPurchaseReceiptU5BU5D_t180321090* get_inAppPurchaseReceipts_6() const { return ___inAppPurchaseReceipts_6; }
	inline AppleInAppPurchaseReceiptU5BU5D_t180321090** get_address_of_inAppPurchaseReceipts_6() { return &___inAppPurchaseReceipts_6; }
	inline void set_inAppPurchaseReceipts_6(AppleInAppPurchaseReceiptU5BU5D_t180321090* value)
	{
		___inAppPurchaseReceipts_6 = value;
		Il2CppCodeGenWriteBarrier((&___inAppPurchaseReceipts_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLERECEIPT_T1677859958_H
#ifndef INVALIDPKCS7DATA_T466532846_H
#define INVALIDPKCS7DATA_T466532846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.InvalidPKCS7Data
struct  InvalidPKCS7Data_t466532846  : public IAPSecurityException_t1844591500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPKCS7DATA_T466532846_H
#ifndef INVALIDRSADATA_T2177780709_H
#define INVALIDRSADATA_T2177780709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.InvalidRSAData
struct  InvalidRSAData_t2177780709  : public IAPSecurityException_t1844591500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDRSADATA_T2177780709_H
#ifndef INVALIDTIMEFORMAT_T1714182330_H
#define INVALIDTIMEFORMAT_T1714182330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.InvalidTimeFormat
struct  InvalidTimeFormat_t1714182330  : public IAPSecurityException_t1844591500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEFORMAT_T1714182330_H
#ifndef INVALIDX509DATA_T1483908844_H
#define INVALIDX509DATA_T1483908844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.InvalidX509Data
struct  InvalidX509Data_t1483908844  : public IAPSecurityException_t1844591500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDX509DATA_T1483908844_H
#ifndef UNSUPPORTEDSIGNERINFOVERSION_T1875534306_H
#define UNSUPPORTEDSIGNERINFOVERSION_T1875534306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion
struct  UnsupportedSignerInfoVersion_t1875534306  : public IAPSecurityException_t1844591500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSUPPORTEDSIGNERINFOVERSION_T1875534306_H
#ifndef X509CERT_T3147783796_H
#define X509CERT_T3147783796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.X509Cert
struct  X509Cert_t3147783796  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Security.X509Cert::<SerialNumber>k__BackingField
	String_t* ___U3CSerialNumberU3Ek__BackingField_0;
	// System.DateTime UnityEngine.Purchasing.Security.X509Cert::<ValidAfter>k__BackingField
	DateTime_t3738529785  ___U3CValidAfterU3Ek__BackingField_1;
	// System.DateTime UnityEngine.Purchasing.Security.X509Cert::<ValidBefore>k__BackingField
	DateTime_t3738529785  ___U3CValidBeforeU3Ek__BackingField_2;
	// UnityEngine.Purchasing.Security.RSAKey UnityEngine.Purchasing.Security.X509Cert::<PubKey>k__BackingField
	RSAKey_t3751505760 * ___U3CPubKeyU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Purchasing.Security.X509Cert::<SelfSigned>k__BackingField
	bool ___U3CSelfSignedU3Ek__BackingField_4;
	// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::<Subject>k__BackingField
	DistinguishedName_t1591151536 * ___U3CSubjectU3Ek__BackingField_5;
	// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::<Issuer>k__BackingField
	DistinguishedName_t1591151536 * ___U3CIssuerU3Ek__BackingField_6;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.X509Cert::TbsCertificate
	Asn1Node_t84807007 * ___TbsCertificate_7;
	// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.X509Cert::<Signature>k__BackingField
	Asn1Node_t84807007 * ___U3CSignatureU3Ek__BackingField_8;
	// System.Byte[] UnityEngine.Purchasing.Security.X509Cert::rawTBSCertificate
	ByteU5BU5D_t4116647657* ___rawTBSCertificate_9;

public:
	inline static int32_t get_offset_of_U3CSerialNumberU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___U3CSerialNumberU3Ek__BackingField_0)); }
	inline String_t* get_U3CSerialNumberU3Ek__BackingField_0() const { return ___U3CSerialNumberU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSerialNumberU3Ek__BackingField_0() { return &___U3CSerialNumberU3Ek__BackingField_0; }
	inline void set_U3CSerialNumberU3Ek__BackingField_0(String_t* value)
	{
		___U3CSerialNumberU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSerialNumberU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CValidAfterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___U3CValidAfterU3Ek__BackingField_1)); }
	inline DateTime_t3738529785  get_U3CValidAfterU3Ek__BackingField_1() const { return ___U3CValidAfterU3Ek__BackingField_1; }
	inline DateTime_t3738529785 * get_address_of_U3CValidAfterU3Ek__BackingField_1() { return &___U3CValidAfterU3Ek__BackingField_1; }
	inline void set_U3CValidAfterU3Ek__BackingField_1(DateTime_t3738529785  value)
	{
		___U3CValidAfterU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CValidBeforeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___U3CValidBeforeU3Ek__BackingField_2)); }
	inline DateTime_t3738529785  get_U3CValidBeforeU3Ek__BackingField_2() const { return ___U3CValidBeforeU3Ek__BackingField_2; }
	inline DateTime_t3738529785 * get_address_of_U3CValidBeforeU3Ek__BackingField_2() { return &___U3CValidBeforeU3Ek__BackingField_2; }
	inline void set_U3CValidBeforeU3Ek__BackingField_2(DateTime_t3738529785  value)
	{
		___U3CValidBeforeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPubKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___U3CPubKeyU3Ek__BackingField_3)); }
	inline RSAKey_t3751505760 * get_U3CPubKeyU3Ek__BackingField_3() const { return ___U3CPubKeyU3Ek__BackingField_3; }
	inline RSAKey_t3751505760 ** get_address_of_U3CPubKeyU3Ek__BackingField_3() { return &___U3CPubKeyU3Ek__BackingField_3; }
	inline void set_U3CPubKeyU3Ek__BackingField_3(RSAKey_t3751505760 * value)
	{
		___U3CPubKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPubKeyU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSelfSignedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___U3CSelfSignedU3Ek__BackingField_4)); }
	inline bool get_U3CSelfSignedU3Ek__BackingField_4() const { return ___U3CSelfSignedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CSelfSignedU3Ek__BackingField_4() { return &___U3CSelfSignedU3Ek__BackingField_4; }
	inline void set_U3CSelfSignedU3Ek__BackingField_4(bool value)
	{
		___U3CSelfSignedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSubjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___U3CSubjectU3Ek__BackingField_5)); }
	inline DistinguishedName_t1591151536 * get_U3CSubjectU3Ek__BackingField_5() const { return ___U3CSubjectU3Ek__BackingField_5; }
	inline DistinguishedName_t1591151536 ** get_address_of_U3CSubjectU3Ek__BackingField_5() { return &___U3CSubjectU3Ek__BackingField_5; }
	inline void set_U3CSubjectU3Ek__BackingField_5(DistinguishedName_t1591151536 * value)
	{
		___U3CSubjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSubjectU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CIssuerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___U3CIssuerU3Ek__BackingField_6)); }
	inline DistinguishedName_t1591151536 * get_U3CIssuerU3Ek__BackingField_6() const { return ___U3CIssuerU3Ek__BackingField_6; }
	inline DistinguishedName_t1591151536 ** get_address_of_U3CIssuerU3Ek__BackingField_6() { return &___U3CIssuerU3Ek__BackingField_6; }
	inline void set_U3CIssuerU3Ek__BackingField_6(DistinguishedName_t1591151536 * value)
	{
		___U3CIssuerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIssuerU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_TbsCertificate_7() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___TbsCertificate_7)); }
	inline Asn1Node_t84807007 * get_TbsCertificate_7() const { return ___TbsCertificate_7; }
	inline Asn1Node_t84807007 ** get_address_of_TbsCertificate_7() { return &___TbsCertificate_7; }
	inline void set_TbsCertificate_7(Asn1Node_t84807007 * value)
	{
		___TbsCertificate_7 = value;
		Il2CppCodeGenWriteBarrier((&___TbsCertificate_7), value);
	}

	inline static int32_t get_offset_of_U3CSignatureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___U3CSignatureU3Ek__BackingField_8)); }
	inline Asn1Node_t84807007 * get_U3CSignatureU3Ek__BackingField_8() const { return ___U3CSignatureU3Ek__BackingField_8; }
	inline Asn1Node_t84807007 ** get_address_of_U3CSignatureU3Ek__BackingField_8() { return &___U3CSignatureU3Ek__BackingField_8; }
	inline void set_U3CSignatureU3Ek__BackingField_8(Asn1Node_t84807007 * value)
	{
		___U3CSignatureU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSignatureU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_rawTBSCertificate_9() { return static_cast<int32_t>(offsetof(X509Cert_t3147783796, ___rawTBSCertificate_9)); }
	inline ByteU5BU5D_t4116647657* get_rawTBSCertificate_9() const { return ___rawTBSCertificate_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_rawTBSCertificate_9() { return &___rawTBSCertificate_9; }
	inline void set_rawTBSCertificate_9(ByteU5BU5D_t4116647657* value)
	{
		___rawTBSCertificate_9 = value;
		Il2CppCodeGenWriteBarrier((&___rawTBSCertificate_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERT_T3147783796_H
#ifndef RSACRYPTOSERVICEPROVIDER_T2683512874_H
#define RSACRYPTOSERVICEPROVIDER_T2683512874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t2683512874  : public RSA_t2385438082
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t2094547461 * ___store_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_7;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_8;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_9;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_10;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t1757093819 * ___rsa_11;

public:
	inline static int32_t get_offset_of_store_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___store_6)); }
	inline KeyPairPersistence_t2094547461 * get_store_6() const { return ___store_6; }
	inline KeyPairPersistence_t2094547461 ** get_address_of_store_6() { return &___store_6; }
	inline void set_store_6(KeyPairPersistence_t2094547461 * value)
	{
		___store_6 = value;
		Il2CppCodeGenWriteBarrier((&___store_6), value);
	}

	inline static int32_t get_offset_of_persistKey_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___persistKey_7)); }
	inline bool get_persistKey_7() const { return ___persistKey_7; }
	inline bool* get_address_of_persistKey_7() { return &___persistKey_7; }
	inline void set_persistKey_7(bool value)
	{
		___persistKey_7 = value;
	}

	inline static int32_t get_offset_of_persisted_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___persisted_8)); }
	inline bool get_persisted_8() const { return ___persisted_8; }
	inline bool* get_address_of_persisted_8() { return &___persisted_8; }
	inline void set_persisted_8(bool value)
	{
		___persisted_8 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___privateKeyExportable_9)); }
	inline bool get_privateKeyExportable_9() const { return ___privateKeyExportable_9; }
	inline bool* get_address_of_privateKeyExportable_9() { return &___privateKeyExportable_9; }
	inline void set_privateKeyExportable_9(bool value)
	{
		___privateKeyExportable_9 = value;
	}

	inline static int32_t get_offset_of_m_disposed_10() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___m_disposed_10)); }
	inline bool get_m_disposed_10() const { return ___m_disposed_10; }
	inline bool* get_address_of_m_disposed_10() { return &___m_disposed_10; }
	inline void set_m_disposed_10(bool value)
	{
		___m_disposed_10 = value;
	}

	inline static int32_t get_offset_of_rsa_11() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874, ___rsa_11)); }
	inline RSAManaged_t1757093819 * get_rsa_11() const { return ___rsa_11; }
	inline RSAManaged_t1757093819 ** get_address_of_rsa_11() { return &___rsa_11; }
	inline void set_rsa_11(RSAManaged_t1757093819 * value)
	{
		___rsa_11 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_11), value);
	}
};

struct RSACryptoServiceProvider_t2683512874_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2683512874_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T2683512874_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt[]
struct AppleInAppPurchaseReceiptU5BU5D_t180321090  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AppleInAppPurchaseReceipt_t3844914963 * m_Items[1];

public:
	inline AppleInAppPurchaseReceipt_t3844914963 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AppleInAppPurchaseReceipt_t3844914963 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AppleInAppPurchaseReceipt_t3844914963 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AppleInAppPurchaseReceipt_t3844914963 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AppleInAppPurchaseReceipt_t3844914963 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AppleInAppPurchaseReceipt_t3844914963 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3993293265_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m4278578609_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Security.AppleReceiptParser::ArrayEquals<System.Byte>(T[],T[])
extern "C" IL2CPP_METHOD_ATTR bool AppleReceiptParser_ArrayEquals_TisByte_t1134296376_m591762719_gshared (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___a0, ByteU5BU5D_t4116647657* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m258553009_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::Init()
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_Init_m1440211407 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_Deepness()
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Node_get_Deepness_m1134302127 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetIndentStr(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetIndentStr_m3141977177 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___startNode0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::ToHexString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_ToHexString_m1008071469 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineHexString(System.String,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineHexString_m1832453272 (Asn1Node_t84807007 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GenStr(System.Int32,System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_GenStr_m1521306602 (RuntimeObject * __this /* static, unused */, int32_t ___len0, Il2CppChar ___xch1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::set_RequireRecalculatePar(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_set_RequireRecalculatePar_m3064862800 (Asn1Node_t84807007 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::InternalLoadData(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_InternalLoadData_m1559745040 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::RecalculateTreePar()
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_RecalculateTreePar_m2781751213 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_ChildNodeCount()
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Node_get_ChildNodeCount_m2235806103 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::DERLengthEncode(System.IO.Stream,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Asn1Util_DERLengthEncode_m3699318424 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___xdata0, uint64_t ___length1, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::GetChildNode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Asn1Node_t84807007 * Asn1Node_GetChildNode_m2817937035 (Asn1Node_t84807007 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::SaveData(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_SaveData_m221214808 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ClearAll()
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_ClearAll_m1073576200 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GetTagName(System.Byte)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_GetTagName_m1475833851 (RuntimeObject * __this /* static, unused */, uint8_t ___tag0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::get_TagName()
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_get_TagName_m2386341703 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Oid__ctor_m4234155318 (Oid_t864847193 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m4100805873 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Oid::GetOidName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Oid_GetOidName_m3765086347 (Oid_t864847193 * __this, String_t* ___inOidStr0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.RelativeOid::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RelativeOid__ctor_m2367190897 (RelativeOid_t4118021937 * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m1224805231 (UTF8Encoding_t3956466879 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_BytesToString_m2331954563 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineString(System.String,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineString_m2134694141 (Asn1Node_t84807007 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToLong(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Util_BytesToLong_m127415879 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method);
// System.String System.Int64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int64_ToString_m2986581816 (int64_t* __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetHexPrintingStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetHexPrintingStr_m1213007647 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___startNode0, String_t* ___baseLine1, String_t* ___lStr2, int32_t ___lineLen3, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetListStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetListStr_m4125925599 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::FormatString(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_FormatString_m3734247287 (RuntimeObject * __this /* static, unused */, String_t* ___inStr0, int32_t ___lineLen1, int32_t ___groupLen2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR Asn1Node_t84807007 * Asn1Node_get_ParentNode_m1851040428 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::ResetBranchDataLength(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Node_ResetBranchDataLength_m671820342 (RuntimeObject * __this /* static, unused */, Asn1Node_t84807007 * ___node0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetChildNodePar(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_ResetChildNodePar_m3866897616 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___xNode0, int64_t ___subOffset1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetDataLengthFieldWidth(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_ResetDataLengthFieldWidth_m570134001 (RuntimeObject * __this /* static, unused */, Asn1Node_t84807007 * ___node0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetText_m1739552395 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::DerLengthDecode(System.IO.Stream,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Util_DerLengthDecode_m3873201477 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___bt0, bool* ___isIndefiniteLength1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2128850779 (MemoryStream_t94973147 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node__ctor_m2018391427 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___parentNode0, int64_t ___dataOffset1, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::AddChild(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_AddChild_m1366340013 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___xdata0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::ListDecode(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_ListDecode_m3748820269 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::GeneralDecode(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_GeneralDecode_m1328456718 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Asn1Node__ctor_m1162391460 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::LoadData(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_LoadData_m1000939984 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeText_m4294696735 (RuntimeObject * __this /* static, unused */, Asn1Node_t84807007 * ___node0, int32_t ___lineLen1, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeTextHeader(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeTextHeader_m1953996318 (RuntimeObject * __this /* static, unused */, int32_t ___lineLen0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m3824727301 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::BytePrecision(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Asn1Util_BytePrecision_m877676457 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void System.Collections.Specialized.StringDictionary::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringDictionary__ctor_m4172756934 (StringDictionary_t120437468 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m3064051180 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int32 LipingShare.LCLib.Asn1Processor.Oid::DecodeValue(System.IO.Stream,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR int32_t Oid_DecodeValue_m1702316871 (Oid_t864847193 * __this, Stream_t1273022909 * ___bt0, uint64_t* ___v1, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[],UnityEngine.Purchasing.Security.PKCS7&)
extern "C" IL2CPP_METHOD_ATTR AppleReceipt_t1677859958 * AppleReceiptParser_Parse_m511601021 (AppleReceiptParser_t1990668756 * __this, ByteU5BU5D_t4116647657* ___receiptData0, PKCS7_t350312378 ** ___receipt1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m702451950 (Dictionary_2_t2865362463 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m3993293265_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m1539906286 (Dictionary_2_t2865362463 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4278578609_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Purchasing.Security.AppleReceiptParser::ArrayEquals<System.Byte>(T[],T[])
inline bool AppleReceiptParser_ArrayEquals_TisByte_t1134296376_m591762719 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___a0, ByteU5BU5D_t4116647657* ___b1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, const RuntimeMethod*))AppleReceiptParser_ArrayEquals_TisByte_t1134296376_m591762719_gshared)(__this /* static, unused */, ___a0, ___b1, method);
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Asn1Parser__ctor_m67072856 (Asn1Parser_t1261554413 * __this, const RuntimeMethod* method);
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::LoadData(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void Asn1Parser_LoadData_m188276828 (Asn1Parser_t1261554413 * __this, Stream_t1273022909 * ___stream0, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::get_RootNode()
extern "C" IL2CPP_METHOD_ATTR Asn1Node_t84807007 * Asn1Parser_get_RootNode_m1090940623 (Asn1Parser_t1261554413 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void PKCS7__ctor_m2141173023 (PKCS7_t350312378 * __this, Asn1Node_t84807007 * ___node0, const RuntimeMethod* method);
// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::get_data()
extern "C" IL2CPP_METHOD_ATTR Asn1Node_t84807007 * PKCS7_get_data_m1538194679 (PKCS7_t350312378 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR AppleReceipt_t1677859958 * AppleReceiptParser_ParseReceipt_m4064749857 (AppleReceiptParser_t1990668756 * __this, Asn1Node_t84807007 * ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3155846050 (Dictionary_2_t2865362463 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m258553009_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Purchasing.Security.InvalidPKCS7Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidPKCS7Data__ctor_m3927480152 (InvalidPKCS7Data_t466532846 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt__ctor_m430809794 (AppleReceipt_t1677859958 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::.ctor()
inline void List_1__ctor_m127865374 (List_1_t1022022409 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1022022409 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::get_Data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Asn1Node_get_Data_m379120612 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m1478564596 (AppleReceipt_t1677859958 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m409296250 (AppleReceipt_t1677859958 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m569662551 (AppleReceipt_t1677859958 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_m1808658247 (AppleReceipt_t1677859958 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_Parse_m2550724587 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m3107181451 (AppleReceipt_t1677859958 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseInAppReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR AppleInAppPurchaseReceipt_t3844914963 * AppleReceiptParser_ParseInAppReceipt_m561782448 (AppleReceiptParser_t1990668756 * __this, Asn1Node_t84807007 * ___inApp0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::Add(!0)
inline void List_1_Add_m4129203260 (List_1_t1022022409 * __this, AppleInAppPurchaseReceipt_t3844914963 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1022022409 *, AppleInAppPurchaseReceipt_t3844914963 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m1628679311 (AppleReceipt_t1677859958 * __this, String_t* ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt>::ToArray()
inline AppleInAppPurchaseReceiptU5BU5D_t180321090* List_1_ToArray_m1411323235 (List_1_t1022022409 * __this, const RuntimeMethod* method)
{
	return ((  AppleInAppPurchaseReceiptU5BU5D_t180321090* (*) (List_1_t1022022409 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_m581017134 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_m2123225361 (AppleInAppPurchaseReceipt_t3844914963 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m904954032 (AppleInAppPurchaseReceipt_t3844914963 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m721682744 (AppleInAppPurchaseReceipt_t3844914963 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_m3758916209 (AppleInAppPurchaseReceipt_t3844914963 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleReceiptParser::TryParseDateTimeNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AppleReceiptParser_TryParseDateTimeNode_m978455633 (RuntimeObject * __this /* static, unused */, Asn1Node_t84807007 * ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m2124509722 (AppleInAppPurchaseReceipt_t3844914963 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_m3497489931 (AppleInAppPurchaseReceipt_t3844914963 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m414817625 (AppleInAppPurchaseReceipt_t3844914963 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m3716811454 (AppleInAppPurchaseReceipt_t3844914963 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_m1472513991 (AppleInAppPurchaseReceipt_t3844914963 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m1355330003 (AppleInAppPurchaseReceipt_t3844914963 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m887429687 (AppleInAppPurchaseReceipt_t3844914963 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_m15304876 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_MaskedTag()
extern "C" IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_MaskedTag_m2217668890 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidX509Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidX509Data__ctor_m1073916391 (InvalidX509Data_t1483908844 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Oid_Decode_m1229707463 (Oid_t864847193 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3765061679 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Country(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_m413445905 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Organization(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_m2458796170 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_OrganizationalUnit(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_m2898658143 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_CommonName(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_m3459905508 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_SerialNumber(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m1056484362 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Dnq(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_m944920782 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_State(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m465966550 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Organization()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_m480828671 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_OrganizationalUnit()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_m2659483362 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Dnq()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m3313230136 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Country()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_m4052486281 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_State()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m4116847713 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_CommonName()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m745151467 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_m2533083764 (IAPSecurityException_t1844591500 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::CheckStructure()
extern "C" IL2CPP_METHOD_ATTR void PKCS7_CheckStructure_m393412232 (PKCS7_t350312378 * __this, const RuntimeMethod* method);
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_Tag()
extern "C" IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_Tag_m2916517943 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetDataStr(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetDataStr_m489816169 (Asn1Node_t84807007 * __this, bool ___pureHexMode0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_data(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void PKCS7_set_data_m1452019354 (PKCS7_t350312378 * __this, Asn1Node_t84807007 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>::.ctor()
inline void List_1__ctor_m3202037354 (List_1_t324891242 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t324891242 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_certChain(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>)
extern "C" IL2CPP_METHOD_ATTR void PKCS7_set_certChain_m1149756788 (PKCS7_t350312378 * __this, List_1_t324891242 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::get_certChain()
extern "C" IL2CPP_METHOD_ATTR List_1_t324891242 * PKCS7_get_certChain_m195995169 (PKCS7_t350312378 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void X509Cert__ctor_m3767931021 (X509Cert_t3147783796 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>::Add(!0)
inline void List_1_Add_m2762383152 (List_1_t324891242 * __this, X509Cert_t3147783796 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t324891242 *, X509Cert_t3147783796 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>::.ctor()
inline void List_1__ctor_m2993307493 (List_1_t2451613916 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2451613916 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_sinfos(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>)
extern "C" IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_m336014254 (PKCS7_t350312378 * __this, List_1_t2451613916 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::get_sinfos()
extern "C" IL2CPP_METHOD_ATTR List_1_t2451613916 * PKCS7_get_sinfos_m2556115637 (PKCS7_t350312378 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void SignerInfo__ctor_m1735772653 (SignerInfo_t979539174 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>::Add(!0)
inline void List_1_Add_m2609638385 (List_1_t2451613916 * __this, SignerInfo_t979539174 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2451613916 *, SignerInfo_t979539174 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t2683512874 * RSAKey_ParseNode_m749236704 (RSAKey_t3751505760 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.RSAKey::set_rsa(System.Security.Cryptography.RSACryptoServiceProvider)
extern "C" IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m3484185451 (RSAKey_t3751505760 * __this, RSACryptoServiceProvider_t2683512874 * ___value0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_m3839334935 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m2288290917 (RSACryptoServiceProvider_t2683512874 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.RSAKey::ToXML(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* RSAKey_ToXML_m3021572651 (RSAKey_t3751505760 * __this, String_t* ___modulus0, String_t* ___exponent1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidRSAData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidRSAData__ctor_m1501301171 (InvalidRSAData_t2177780709 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_Version(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m1089259223 (SignerInfo_t979539174 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::get_Version()
extern "C" IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_m2134507792 (SignerInfo_t979539174 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnsupportedSignerInfoVersion__ctor_m364290712 (UnsupportedSignerInfoVersion_t1875534306 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_IssuerSerialNumber(System.String)
extern "C" IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_m140504585 (SignerInfo_t979539174 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_EncryptedDigest(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_m857545940 (SignerInfo_t979539174 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_ParseNode_m2562761880 (X509Cert_t3147783796 * __this, Asn1Node_t84807007 * ___root0, const RuntimeMethod* method);
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_DataLength()
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Node_get_DataLength_m3134292057 (Asn1Node_t84807007 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SerialNumber(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m3675593130 (X509Cert_t3147783796 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName__ctor_m3389155537 (DistinguishedName_t1591151536 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Issuer(UnityEngine.Purchasing.Security.DistinguishedName)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_m1948206227 (X509Cert_t3147783796 * __this, DistinguishedName_t1591151536 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Subject(UnityEngine.Purchasing.Security.DistinguishedName)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_Subject_m4129258486 (X509Cert_t3147783796 * __this, DistinguishedName_t1591151536 * ___value0, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.X509Cert::ParseTime(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509Cert_ParseTime_m610086179 (X509Cert_t3147783796 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidAfter(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_m2430448418 (X509Cert_t3147783796 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidBefore(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_m3704579774 (X509Cert_t3147783796 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Subject()
extern "C" IL2CPP_METHOD_ATTR DistinguishedName_t1591151536 * X509Cert_get_Subject_m2251849245 (X509Cert_t3147783796 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Issuer()
extern "C" IL2CPP_METHOD_ATTR DistinguishedName_t1591151536 * X509Cert_get_Issuer_m1683113328 (X509Cert_t3147783796 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.Security.DistinguishedName::Equals(UnityEngine.Purchasing.Security.DistinguishedName)
extern "C" IL2CPP_METHOD_ATTR bool DistinguishedName_Equals_m4062778009 (DistinguishedName_t1591151536 * __this, DistinguishedName_t1591151536 * ___n20, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SelfSigned(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_m1136370348 (X509Cert_t3147783796 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.RSAKey::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void RSAKey__ctor_m2529138841 (RSAKey_t3751505760 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_PubKey(UnityEngine.Purchasing.Security.RSAKey)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_m1644810381 (X509Cert_t3147783796 * __this, RSAKey_t3751505760 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Signature(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_Signature_m1924431059 (X509Cert_t3147783796 * __this, Asn1Node_t84807007 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Security.InvalidTimeFormat::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidTimeFormat__ctor_m1894908491 (InvalidTimeFormat_t1714182330 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m2956360140 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3765061679 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
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
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node__ctor_m2018391427 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___parentNode0, int64_t ___dataOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node__ctor_m2018391427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_8(_stringLiteral757602046);
		__this->set_requireRecalculatePar_10((bool)1);
		__this->set_isIndefiniteLength_11((bool)0);
		__this->set_parseEncapsulatedData_12((bool)1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Asn1Node_Init_m1440211407(__this, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_0 = ___parentNode0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_Deepness_m1134302127(L_0, /*hidden argument*/NULL);
		__this->set_deepness_7(((int64_t)il2cpp_codegen_add((int64_t)L_1, (int64_t)(((int64_t)((int64_t)1))))));
		Asn1Node_t84807007 * L_2 = ___parentNode0;
		__this->set_parentNode_9(L_2);
		int64_t L_3 = ___dataOffset1;
		__this->set_dataOffset_1(L_3);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::Init()
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_Init_m1440211407 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_Init_m1440211407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_childNodeList_5(L_0);
		__this->set_data_4((ByteU5BU5D_t4116647657*)NULL);
		__this->set_dataLength_2((((int64_t)((int64_t)0))));
		__this->set_lengthFieldBytes_3((((int64_t)((int64_t)0))));
		__this->set_unusedBits_6((uint8_t)0);
		__this->set_tag_0((uint8_t)((int32_t)48));
		ArrayList_t2718874744 * L_1 = __this->get_childNodeList_5();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_1);
		__this->set_deepness_7((((int64_t)((int64_t)0))));
		__this->set_parentNode_9((Asn1Node_t84807007 *)NULL);
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetHexPrintingStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetHexPrintingStr_m1213007647 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___startNode0, String_t* ___baseLine1, String_t* ___lStr2, int32_t ___lineLen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetHexPrintingStr_m1213007647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteral757602046;
		Asn1Node_t84807007 * L_0 = ___startNode0;
		String_t* L_1 = Asn1Node_GetIndentStr_m3141977177(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		ByteU5BU5D_t4116647657* L_2 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_3 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		String_t* L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_7 = ___baseLine1;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m3847582255(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___lineLen3;
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		StringU5BU5D_t1281789340* L_13 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_t1281789340* L_16 = L_14;
		String_t* L_17 = ___baseLine1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
		StringU5BU5D_t1281789340* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3452614521);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614521);
		StringU5BU5D_t1281789340* L_19 = L_18;
		String_t* L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
		StringU5BU5D_t1281789340* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral3452614521);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614521);
		String_t* L_22 = String_Concat_m1809518182(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0086;
	}

IL_006c:
	{
		String_t* L_23 = V_0;
		String_t* L_24 = ___baseLine1;
		String_t* L_25 = ___lStr2;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m3847582255(L_26, /*hidden argument*/NULL);
		int32_t L_28 = ___lineLen3;
		String_t* L_29 = V_2;
		String_t* L_30 = Asn1Node_FormatLineHexString_m1832453272(__this, L_25, L_27, L_28, L_29, /*hidden argument*/NULL);
		String_t* L_31 = String_Concat_m3755062657(NULL /*static, unused*/, L_23, L_24, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
	}

IL_0086:
	{
		goto IL_0093;
	}

IL_0089:
	{
		String_t* L_32 = V_0;
		String_t* L_33 = ___baseLine1;
		String_t* L_34 = String_Concat_m3937257545(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
	}

IL_0093:
	{
		String_t* L_35 = V_0;
		String_t* L_36 = String_Concat_m3937257545(NULL /*static, unused*/, L_35, _stringLiteral3453007779, /*hidden argument*/NULL);
		V_5 = L_36;
		goto IL_00a2;
	}

IL_00a2:
	{
		String_t* L_37 = V_5;
		return L_37;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineString(System.String,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineString_m2134694141 (Asn1Node_t84807007 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_FormatLineString_m2134694141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		V_0 = _stringLiteral757602046;
		int32_t L_0 = ___indent1;
		___indent1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = ___lineLen2;
		int32_t L_2 = ___indent1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___indent1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_00c5;
	}

IL_0019:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		String_t* L_6 = ___msg3;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t1281789340* L_9 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t1281789340* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_t1281789340* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3453007779);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3453007779);
		StringU5BU5D_t1281789340* L_13 = L_12;
		String_t* L_14 = ___lStr0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_t1281789340* L_15 = L_13;
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_17 = Asn1Util_GenStr_m1521306602(NULL /*static, unused*/, L_16, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t1281789340* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3452614521);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614521);
		StringU5BU5D_t1281789340* L_19 = L_18;
		String_t* L_20 = ___msg3;
		int32_t L_21 = V_3;
		String_t* L_22 = ___msg3;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		NullCheck(L_20);
		String_t* L_25 = String_Substring_m1610150815(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_25);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_25);
		StringU5BU5D_t1281789340* L_26 = L_19;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral3452614521);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614521);
		String_t* L_27 = String_Concat_m1809518182(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00c0;
	}

IL_007b:
	{
		StringU5BU5D_t1281789340* L_28 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t1281789340* L_29 = L_28;
		String_t* L_30 = V_0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_30);
		StringU5BU5D_t1281789340* L_31 = L_29;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral3453007779);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3453007779);
		StringU5BU5D_t1281789340* L_32 = L_31;
		String_t* L_33 = ___lStr0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_t1281789340* L_34 = L_32;
		int32_t L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_36 = Asn1Util_GenStr_m1521306602(NULL /*static, unused*/, L_35, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_36);
		StringU5BU5D_t1281789340* L_37 = L_34;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral3452614521);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614521);
		StringU5BU5D_t1281789340* L_38 = L_37;
		String_t* L_39 = ___msg3;
		int32_t L_40 = V_3;
		int32_t L_41 = V_1;
		NullCheck(L_39);
		String_t* L_42 = String_Substring_m1610150815(L_39, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_42);
		StringU5BU5D_t1281789340* L_43 = L_38;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral3452614521);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614521);
		String_t* L_44 = String_Concat_m1809518182(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		V_0 = L_44;
	}

IL_00c0:
	{
		int32_t L_45 = V_3;
		int32_t L_46 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46));
	}

IL_00c5:
	{
		int32_t L_47 = V_3;
		String_t* L_48 = ___msg3;
		NullCheck(L_48);
		int32_t L_49 = String_get_Length_m3847582255(L_48, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
		bool L_50 = V_5;
		if (L_50)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_51 = V_0;
		V_6 = L_51;
		goto IL_00dd;
	}

IL_00dd:
	{
		String_t* L_52 = V_6;
		return L_52;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::FormatLineHexString(System.String,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_FormatLineHexString_m1832453272 (Asn1Node_t84807007 * __this, String_t* ___lStr0, int32_t ___indent1, int32_t ___lineLen2, String_t* ___msg3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_FormatLineHexString_m1832453272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	{
		V_0 = _stringLiteral757602046;
		int32_t L_0 = ___indent1;
		___indent1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = ___lineLen2;
		int32_t L_2 = ___indent1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___indent1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_00a5;
	}

IL_0019:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		String_t* L_6 = ___msg3;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_t1281789340* L_9 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_t1281789340* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3453007779);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3453007779);
		StringU5BU5D_t1281789340* L_13 = L_12;
		String_t* L_14 = ___lStr0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_t1281789340* L_15 = L_13;
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_17 = Asn1Util_GenStr_m1521306602(NULL /*static, unused*/, L_16, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t1281789340* L_18 = L_15;
		String_t* L_19 = ___msg3;
		int32_t L_20 = V_3;
		String_t* L_21 = ___msg3;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m3847582255(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		NullCheck(L_19);
		String_t* L_24 = String_Substring_m1610150815(L_19, L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_24);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_24);
		String_t* L_25 = String_Concat_m1809518182(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00a0;
	}

IL_006b:
	{
		StringU5BU5D_t1281789340* L_26 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_27 = L_26;
		String_t* L_28 = V_0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_28);
		StringU5BU5D_t1281789340* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral3453007779);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3453007779);
		StringU5BU5D_t1281789340* L_30 = L_29;
		String_t* L_31 = ___lStr0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_31);
		StringU5BU5D_t1281789340* L_32 = L_30;
		int32_t L_33 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_34 = Asn1Util_GenStr_m1521306602(NULL /*static, unused*/, L_33, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_t1281789340* L_35 = L_32;
		String_t* L_36 = ___msg3;
		int32_t L_37 = V_3;
		int32_t L_38 = V_1;
		NullCheck(L_36);
		String_t* L_39 = String_Substring_m1610150815(L_36, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		String_t* L_40 = String_Concat_m1809518182(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		V_0 = L_40;
	}

IL_00a0:
	{
		int32_t L_41 = V_3;
		int32_t L_42 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42));
	}

IL_00a5:
	{
		int32_t L_43 = V_3;
		String_t* L_44 = ___msg3;
		NullCheck(L_44);
		int32_t L_45 = String_get_Length_m3847582255(L_44, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_5;
		if (L_46)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_47 = V_0;
		V_6 = L_47;
		goto IL_00bd;
	}

IL_00bd:
	{
		String_t* L_48 = V_6;
		return L_48;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Asn1Node__ctor_m1162391460 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node__ctor_m1162391460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_8(_stringLiteral757602046);
		__this->set_requireRecalculatePar_10((bool)1);
		__this->set_isIndefiniteLength_11((bool)0);
		__this->set_parseEncapsulatedData_12((bool)1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Asn1Node_Init_m1440211407(__this, /*hidden argument*/NULL);
		__this->set_dataOffset_1((((int64_t)((int64_t)0))));
		return;
	}
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_Tag()
extern "C" IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_Tag_m2916517943 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_tag_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte LipingShare.LCLib.Asn1Processor.Asn1Node::get_MaskedTag()
extern "C" IL2CPP_METHOD_ATTR uint8_t Asn1Node_get_MaskedTag_m2217668890 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_tag_0();
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31))))));
		goto IL_000e;
	}

IL_000e:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::LoadData(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_LoadData_m1000939984 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		Asn1Node_set_RequireRecalculatePar_m3064862800(__this, (bool)0, /*hidden argument*/NULL);
		Stream_t1273022909 * L_0 = ___xdata0;
		bool L_1 = Asn1Node_InternalLoadData_m1559745040(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		V_1 = L_2;
		IL2CPP_LEAVE(0x2A, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		Asn1Node_set_RequireRecalculatePar_m3064862800(__this, (bool)1, /*hidden argument*/NULL);
		Asn1Node_RecalculateTreePar_m2781751213(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::SaveData(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_SaveData_m221214808 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_SaveData_m221214808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Asn1Node_t84807007 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	{
		V_0 = (bool)1;
		int64_t L_0 = Asn1Node_get_ChildNodeCount_m2235806103(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		Stream_t1273022909 * L_1 = ___xdata0;
		uint8_t L_2 = __this->get_tag_0();
		NullCheck(L_1);
		VirtActionInvoker1< uint8_t >::Invoke(30 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_1, L_2);
		Stream_t1273022909 * L_3 = ___xdata0;
		int64_t L_4 = __this->get_dataLength_2();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		Asn1Util_DERLengthEncode_m3699318424(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		uint8_t L_5 = __this->get_tag_0();
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		Stream_t1273022909 * L_7 = ___xdata0;
		uint8_t L_8 = __this->get_unusedBits_6();
		NullCheck(L_7);
		VirtActionInvoker1< uint8_t >::Invoke(30 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_7, L_8);
	}

IL_0040:
	{
		int64_t L_9 = V_1;
		V_3 = (bool)((((int64_t)L_9) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = __this->get_data_4();
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		Stream_t1273022909 * L_13 = ___xdata0;
		ByteU5BU5D_t4116647657* L_14 = __this->get_data_4();
		ByteU5BU5D_t4116647657* L_15 = __this->get_data_4();
		NullCheck(L_15);
		NullCheck(L_13);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))));
	}

IL_0071:
	{
		goto IL_00a2;
	}

IL_0074:
	{
		V_6 = 0;
		goto IL_0095;
	}

IL_007a:
	{
		int32_t L_16 = V_6;
		Asn1Node_t84807007 * L_17 = Asn1Node_GetChildNode_m2817937035(__this, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		Asn1Node_t84807007 * L_18 = V_5;
		Stream_t1273022909 * L_19 = ___xdata0;
		NullCheck(L_18);
		bool L_20 = Asn1Node_SaveData_m221214808(L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0095:
	{
		int32_t L_22 = V_6;
		int64_t L_23 = V_1;
		V_7 = (bool)((((int64_t)(((int64_t)((int64_t)L_22)))) < ((int64_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_007a;
		}
	}
	{
	}

IL_00a2:
	{
		bool L_25 = V_0;
		V_8 = L_25;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_26 = V_8;
		return L_26;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ClearAll()
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_ClearAll_m1073576200 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ClearAll_m1073576200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t84807007 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		__this->set_data_4((ByteU5BU5D_t4116647657*)NULL);
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		ArrayList_t2718874744 * L_0 = __this->get_childNodeList_5();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_0 = ((Asn1Node_t84807007 *)CastclassClass((RuntimeObject*)L_2, Asn1Node_t84807007_il2cpp_TypeInfo_var));
		Asn1Node_t84807007 * L_3 = V_0;
		NullCheck(L_3);
		Asn1Node_ClearAll_m1073576200(L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_5 = V_1;
		ArrayList_t2718874744 * L_6 = __this->get_childNodeList_5();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		ArrayList_t2718874744 * L_9 = __this->get_childNodeList_5();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_9);
		Asn1Node_RecalculateTreePar_m2781751213(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::AddChild(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_AddChild_m1366340013 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___xdata0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_childNodeList_5();
		Asn1Node_t84807007 * L_1 = ___xdata0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		Asn1Node_RecalculateTreePar_m2781751213(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_ChildNodeCount()
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Node_get_ChildNodeCount_m2235806103 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		ArrayList_t2718874744 * L_0 = __this->get_childNodeList_5();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = (((int64_t)((int64_t)L_1)));
		goto IL_0010;
	}

IL_0010:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::GetChildNode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Asn1Node_t84807007 * Asn1Node_GetChildNode_m2817937035 (Asn1Node_t84807007 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetChildNode_m2817937035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t84807007 * V_0 = NULL;
	bool V_1 = false;
	Asn1Node_t84807007 * V_2 = NULL;
	{
		V_0 = (Asn1Node_t84807007 *)NULL;
		int32_t L_0 = ___index0;
		int64_t L_1 = Asn1Node_get_ChildNodeCount_m2235806103(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int64_t)(((int64_t)((int64_t)L_0)))) < ((int64_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t2718874744 * L_3 = __this->get_childNodeList_5();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_0 = ((Asn1Node_t84807007 *)CastclassClass((RuntimeObject*)L_5, Asn1Node_t84807007_il2cpp_TypeInfo_var));
	}

IL_0025:
	{
		Asn1Node_t84807007 * L_6 = V_0;
		V_2 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		Asn1Node_t84807007 * L_7 = V_2;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::get_TagName()
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_get_TagName_m2386341703 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_get_TagName_m2386341703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint8_t L_0 = __this->get_tag_0();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_1 = Asn1Util_GetTagName_m1475833851(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Node::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR Asn1Node_t84807007 * Asn1Node_get_ParentNode_m1851040428 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	Asn1Node_t84807007 * V_0 = NULL;
	{
		Asn1Node_t84807007 * L_0 = __this->get_parentNode_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Asn1Node_t84807007 * L_1 = V_0;
		return L_1;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetText_m1739552395 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetText_m1739552395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	uint8_t V_5 = 0x0;
	Oid_t864847193 * V_6 = NULL;
	RelativeOid_t4118021937 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	UTF8Encoding_t3956466879 * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	String_t* V_18 = NULL;
	int32_t G_B23_0 = 0;
	{
		V_0 = _stringLiteral757602046;
		V_1 = _stringLiteral757602046;
		V_2 = _stringLiteral757602046;
		uint8_t L_0 = __this->get_tag_0();
		V_5 = L_0;
		uint8_t L_1 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0390;
			}
			case 1:
			{
				goto IL_0095;
			}
			case 2:
			{
				goto IL_0484;
			}
			case 3:
			{
				goto IL_0484;
			}
			case 4:
			{
				goto IL_0193;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_003a:
	{
		uint8_t L_2 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_029c;
			}
			case 1:
			{
				goto IL_0219;
			}
			case 2:
			{
				goto IL_0484;
			}
			case 3:
			{
				goto IL_0484;
			}
			case 4:
			{
				goto IL_0484;
			}
			case 5:
			{
				goto IL_0484;
			}
			case 6:
			{
				goto IL_029c;
			}
			case 7:
			{
				goto IL_029c;
			}
			case 8:
			{
				goto IL_0484;
			}
			case 9:
			{
				goto IL_0484;
			}
			case 10:
			{
				goto IL_029c;
			}
			case 11:
			{
				goto IL_029c;
			}
			case 12:
			{
				goto IL_029c;
			}
			case 13:
			{
				goto IL_0484;
			}
			case 14:
			{
				goto IL_029c;
			}
			case 15:
			{
				goto IL_029c;
			}
			case 16:
			{
				goto IL_029c;
			}
			case 17:
			{
				goto IL_0484;
			}
			case 18:
			{
				goto IL_029c;
			}
		}
	}
	{
		goto IL_0484;
	}

IL_0095:
	{
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		int64_t L_5 = __this->get_dataOffset_1();
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		int64_t L_9 = __this->get_dataLength_2();
		int64_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		int64_t L_13 = __this->get_lengthFieldBytes_3();
		int64_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		Asn1Node_t84807007 * L_17 = ___startNode0;
		String_t* L_18 = Asn1Node_GetIndentStr_m3141977177(__this, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		ObjectU5BU5D_t2843939325* L_19 = L_16;
		String_t* L_20 = Asn1Node_get_TagName_m2386341703(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_19;
		uint8_t L_22 = __this->get_unusedBits_6();
		uint8_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		String_t* L_25 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral299018631, L_21, /*hidden argument*/NULL);
		V_1 = L_25;
		ByteU5BU5D_t4116647657* L_26 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_27 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		String_t* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m3847582255(L_28, /*hidden argument*/NULL);
		String_t* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = String_get_Length_m3847582255(L_30, /*hidden argument*/NULL);
		int32_t L_32 = ___lineLen1;
		V_8 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_31))) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_0161;
		}
	}
	{
		String_t* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m3847582255(L_34, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_35) < ((int32_t)1))? 1 : 0);
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_0134;
		}
	}
	{
		String_t* L_37 = V_0;
		String_t* L_38 = V_1;
		String_t* L_39 = String_Concat_m3755062657(NULL /*static, unused*/, L_37, L_38, _stringLiteral3453007779, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_015e;
	}

IL_0134:
	{
		StringU5BU5D_t1281789340* L_40 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_41 = L_40;
		String_t* L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_42);
		StringU5BU5D_t1281789340* L_43 = L_41;
		String_t* L_44 = V_1;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_44);
		StringU5BU5D_t1281789340* L_45 = L_43;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral3452614521);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614521);
		StringU5BU5D_t1281789340* L_46 = L_45;
		String_t* L_47 = V_2;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_47);
		StringU5BU5D_t1281789340* L_48 = L_46;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral3169997249);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3169997249);
		String_t* L_49 = String_Concat_m1809518182(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		V_0 = L_49;
	}

IL_015e:
	{
		goto IL_018e;
	}

IL_0161:
	{
		String_t* L_50 = V_0;
		String_t* L_51 = V_1;
		Asn1Node_t84807007 * L_52 = ___startNode0;
		String_t* L_53 = Asn1Node_GetIndentStr_m3141977177(__this, L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		int32_t L_54 = String_get_Length_m3847582255(L_53, /*hidden argument*/NULL);
		int32_t L_55 = ___lineLen1;
		String_t* L_56 = V_2;
		String_t* L_57 = String_Concat_m3937257545(NULL /*static, unused*/, L_56, _stringLiteral3453007779, /*hidden argument*/NULL);
		String_t* L_58 = Asn1Node_FormatLineHexString_m1832453272(__this, _stringLiteral205920387, L_54, L_55, L_57, /*hidden argument*/NULL);
		String_t* L_59 = String_Concat_m3755062657(NULL /*static, unused*/, L_50, L_51, L_58, /*hidden argument*/NULL);
		V_0 = L_59;
	}

IL_018e:
	{
		goto IL_05c8;
	}

IL_0193:
	{
		Oid_t864847193 * L_60 = (Oid_t864847193 *)il2cpp_codegen_object_new(Oid_t864847193_il2cpp_TypeInfo_var);
		Oid__ctor_m4234155318(L_60, /*hidden argument*/NULL);
		V_6 = L_60;
		Oid_t864847193 * L_61 = V_6;
		ByteU5BU5D_t4116647657* L_62 = __this->get_data_4();
		MemoryStream_t94973147 * L_63 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_63, L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_64 = VirtFuncInvoker1< String_t*, Stream_t1273022909 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_61, L_63);
		V_3 = L_64;
		Oid_t864847193 * L_65 = V_6;
		String_t* L_66 = V_3;
		NullCheck(L_65);
		String_t* L_67 = Oid_GetOidName_m3765086347(L_65, L_66, /*hidden argument*/NULL);
		V_4 = L_67;
		String_t* L_68 = V_0;
		ObjectU5BU5D_t2843939325* L_69 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_70 = L_69;
		int64_t L_71 = __this->get_dataOffset_1();
		int64_t L_72 = L_71;
		RuntimeObject * L_73 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_73);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_73);
		ObjectU5BU5D_t2843939325* L_74 = L_70;
		int64_t L_75 = __this->get_dataLength_2();
		int64_t L_76 = L_75;
		RuntimeObject * L_77 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_76);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_77);
		ObjectU5BU5D_t2843939325* L_78 = L_74;
		int64_t L_79 = __this->get_lengthFieldBytes_3();
		int64_t L_80 = L_79;
		RuntimeObject * L_81 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_81);
		ObjectU5BU5D_t2843939325* L_82 = L_78;
		Asn1Node_t84807007 * L_83 = ___startNode0;
		String_t* L_84 = Asn1Node_GetIndentStr_m3141977177(__this, L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_84);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_84);
		ObjectU5BU5D_t2843939325* L_85 = L_82;
		String_t* L_86 = Asn1Node_get_TagName_m2386341703(__this, /*hidden argument*/NULL);
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_86);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_86);
		ObjectU5BU5D_t2843939325* L_87 = L_85;
		String_t* L_88 = V_4;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_88);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_88);
		ObjectU5BU5D_t2843939325* L_89 = L_87;
		String_t* L_90 = V_3;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_90);
		String_t* L_91 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1669064005, L_89, /*hidden argument*/NULL);
		String_t* L_92 = String_Concat_m3937257545(NULL /*static, unused*/, L_68, L_91, /*hidden argument*/NULL);
		V_0 = L_92;
		goto IL_05c8;
	}

IL_0219:
	{
		RelativeOid_t4118021937 * L_93 = (RelativeOid_t4118021937 *)il2cpp_codegen_object_new(RelativeOid_t4118021937_il2cpp_TypeInfo_var);
		RelativeOid__ctor_m2367190897(L_93, /*hidden argument*/NULL);
		V_7 = L_93;
		RelativeOid_t4118021937 * L_94 = V_7;
		ByteU5BU5D_t4116647657* L_95 = __this->get_data_4();
		MemoryStream_t94973147 * L_96 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_96, L_95, /*hidden argument*/NULL);
		NullCheck(L_94);
		String_t* L_97 = VirtFuncInvoker1< String_t*, Stream_t1273022909 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_94, L_96);
		V_3 = L_97;
		V_4 = _stringLiteral757602046;
		String_t* L_98 = V_0;
		ObjectU5BU5D_t2843939325* L_99 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_100 = L_99;
		int64_t L_101 = __this->get_dataOffset_1();
		int64_t L_102 = L_101;
		RuntimeObject * L_103 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_102);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_103);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_103);
		ObjectU5BU5D_t2843939325* L_104 = L_100;
		int64_t L_105 = __this->get_dataLength_2();
		int64_t L_106 = L_105;
		RuntimeObject * L_107 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_106);
		NullCheck(L_104);
		ArrayElementTypeCheck (L_104, L_107);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_107);
		ObjectU5BU5D_t2843939325* L_108 = L_104;
		int64_t L_109 = __this->get_lengthFieldBytes_3();
		int64_t L_110 = L_109;
		RuntimeObject * L_111 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_110);
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_111);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_111);
		ObjectU5BU5D_t2843939325* L_112 = L_108;
		Asn1Node_t84807007 * L_113 = ___startNode0;
		String_t* L_114 = Asn1Node_GetIndentStr_m3141977177(__this, L_113, /*hidden argument*/NULL);
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_114);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_114);
		ObjectU5BU5D_t2843939325* L_115 = L_112;
		String_t* L_116 = Asn1Node_get_TagName_m2386341703(__this, /*hidden argument*/NULL);
		NullCheck(L_115);
		ArrayElementTypeCheck (L_115, L_116);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_116);
		ObjectU5BU5D_t2843939325* L_117 = L_115;
		String_t* L_118 = V_4;
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, L_118);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_118);
		ObjectU5BU5D_t2843939325* L_119 = L_117;
		String_t* L_120 = V_3;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_120);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_120);
		String_t* L_121 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1669064005, L_119, /*hidden argument*/NULL);
		String_t* L_122 = String_Concat_m3937257545(NULL /*static, unused*/, L_98, L_121, /*hidden argument*/NULL);
		V_0 = L_122;
		goto IL_05c8;
	}

IL_029c:
	{
		ObjectU5BU5D_t2843939325* L_123 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_124 = L_123;
		int64_t L_125 = __this->get_dataOffset_1();
		int64_t L_126 = L_125;
		RuntimeObject * L_127 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_126);
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_127);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_127);
		ObjectU5BU5D_t2843939325* L_128 = L_124;
		int64_t L_129 = __this->get_dataLength_2();
		int64_t L_130 = L_129;
		RuntimeObject * L_131 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_130);
		NullCheck(L_128);
		ArrayElementTypeCheck (L_128, L_131);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_131);
		ObjectU5BU5D_t2843939325* L_132 = L_128;
		int64_t L_133 = __this->get_lengthFieldBytes_3();
		int64_t L_134 = L_133;
		RuntimeObject * L_135 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_134);
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, L_135);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_135);
		ObjectU5BU5D_t2843939325* L_136 = L_132;
		Asn1Node_t84807007 * L_137 = ___startNode0;
		String_t* L_138 = Asn1Node_GetIndentStr_m3141977177(__this, L_137, /*hidden argument*/NULL);
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, L_138);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_138);
		ObjectU5BU5D_t2843939325* L_139 = L_136;
		String_t* L_140 = Asn1Node_get_TagName_m2386341703(__this, /*hidden argument*/NULL);
		NullCheck(L_139);
		ArrayElementTypeCheck (L_139, L_140);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_140);
		String_t* L_141 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral2480762010, L_139, /*hidden argument*/NULL);
		V_1 = L_141;
		uint8_t L_142 = __this->get_tag_0();
		V_10 = (bool)((((int32_t)L_142) == ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_143 = V_10;
		if (!L_143)
		{
			goto IL_0313;
		}
	}
	{
		UTF8Encoding_t3956466879 * L_144 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1224805231(L_144, /*hidden argument*/NULL);
		V_11 = L_144;
		UTF8Encoding_t3956466879 * L_145 = V_11;
		ByteU5BU5D_t4116647657* L_146 = __this->get_data_4();
		NullCheck(L_145);
		String_t* L_147 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_145, L_146);
		V_2 = L_147;
		goto IL_0321;
	}

IL_0313:
	{
		ByteU5BU5D_t4116647657* L_148 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_149 = Asn1Util_BytesToString_m2331954563(NULL /*static, unused*/, L_148, /*hidden argument*/NULL);
		V_2 = L_149;
	}

IL_0321:
	{
		String_t* L_150 = V_1;
		NullCheck(L_150);
		int32_t L_151 = String_get_Length_m3847582255(L_150, /*hidden argument*/NULL);
		String_t* L_152 = V_2;
		NullCheck(L_152);
		int32_t L_153 = String_get_Length_m3847582255(L_152, /*hidden argument*/NULL);
		int32_t L_154 = ___lineLen1;
		V_12 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)L_153))) < ((int32_t)L_154))? 1 : 0);
		bool L_155 = V_12;
		if (!L_155)
		{
			goto IL_0363;
		}
	}
	{
		StringU5BU5D_t1281789340* L_156 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_157 = L_156;
		String_t* L_158 = V_0;
		NullCheck(L_157);
		ArrayElementTypeCheck (L_157, L_158);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_158);
		StringU5BU5D_t1281789340* L_159 = L_157;
		String_t* L_160 = V_1;
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, L_160);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_160);
		StringU5BU5D_t1281789340* L_161 = L_159;
		NullCheck(L_161);
		ArrayElementTypeCheck (L_161, _stringLiteral3452614521);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614521);
		StringU5BU5D_t1281789340* L_162 = L_161;
		String_t* L_163 = V_2;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, L_163);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_163);
		StringU5BU5D_t1281789340* L_164 = L_162;
		NullCheck(L_164);
		ArrayElementTypeCheck (L_164, _stringLiteral3169997249);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3169997249);
		String_t* L_165 = String_Concat_m1809518182(NULL /*static, unused*/, L_164, /*hidden argument*/NULL);
		V_0 = L_165;
		goto IL_038b;
	}

IL_0363:
	{
		String_t* L_166 = V_0;
		String_t* L_167 = V_1;
		Asn1Node_t84807007 * L_168 = ___startNode0;
		String_t* L_169 = Asn1Node_GetIndentStr_m3141977177(__this, L_168, /*hidden argument*/NULL);
		NullCheck(L_169);
		int32_t L_170 = String_get_Length_m3847582255(L_169, /*hidden argument*/NULL);
		int32_t L_171 = ___lineLen1;
		String_t* L_172 = V_2;
		String_t* L_173 = Asn1Node_FormatLineString_m2134694141(__this, _stringLiteral205920387, L_170, L_171, L_172, /*hidden argument*/NULL);
		String_t* L_174 = String_Concat_m2163913788(NULL /*static, unused*/, L_166, L_167, L_173, _stringLiteral3453007779, /*hidden argument*/NULL);
		V_0 = L_174;
	}

IL_038b:
	{
		goto IL_05c8;
	}

IL_0390:
	{
		ByteU5BU5D_t4116647657* L_175 = __this->get_data_4();
		if (!L_175)
		{
			goto IL_03a4;
		}
	}
	{
		int64_t L_176 = __this->get_dataLength_2();
		G_B23_0 = ((((int64_t)L_176) < ((int64_t)(((int64_t)((int64_t)8)))))? 1 : 0);
		goto IL_03a5;
	}

IL_03a4:
	{
		G_B23_0 = 0;
	}

IL_03a5:
	{
		V_13 = (bool)G_B23_0;
		bool L_177 = V_13;
		if (!L_177)
		{
			goto IL_041a;
		}
	}
	{
		String_t* L_178 = V_0;
		ObjectU5BU5D_t2843939325* L_179 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t2843939325* L_180 = L_179;
		int64_t L_181 = __this->get_dataOffset_1();
		int64_t L_182 = L_181;
		RuntimeObject * L_183 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_182);
		NullCheck(L_180);
		ArrayElementTypeCheck (L_180, L_183);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_183);
		ObjectU5BU5D_t2843939325* L_184 = L_180;
		int64_t L_185 = __this->get_dataLength_2();
		int64_t L_186 = L_185;
		RuntimeObject * L_187 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_186);
		NullCheck(L_184);
		ArrayElementTypeCheck (L_184, L_187);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_187);
		ObjectU5BU5D_t2843939325* L_188 = L_184;
		int64_t L_189 = __this->get_lengthFieldBytes_3();
		int64_t L_190 = L_189;
		RuntimeObject * L_191 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_190);
		NullCheck(L_188);
		ArrayElementTypeCheck (L_188, L_191);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_191);
		ObjectU5BU5D_t2843939325* L_192 = L_188;
		Asn1Node_t84807007 * L_193 = ___startNode0;
		String_t* L_194 = Asn1Node_GetIndentStr_m3141977177(__this, L_193, /*hidden argument*/NULL);
		NullCheck(L_192);
		ArrayElementTypeCheck (L_192, L_194);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_194);
		ObjectU5BU5D_t2843939325* L_195 = L_192;
		String_t* L_196 = Asn1Node_get_TagName_m2386341703(__this, /*hidden argument*/NULL);
		NullCheck(L_195);
		ArrayElementTypeCheck (L_195, L_196);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_196);
		ObjectU5BU5D_t2843939325* L_197 = L_195;
		ByteU5BU5D_t4116647657* L_198 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int64_t L_199 = Asn1Util_BytesToLong_m127415879(NULL /*static, unused*/, L_198, /*hidden argument*/NULL);
		V_14 = L_199;
		String_t* L_200 = Int64_ToString_m2986581816((int64_t*)(&V_14), /*hidden argument*/NULL);
		NullCheck(L_197);
		ArrayElementTypeCheck (L_197, L_200);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_200);
		String_t* L_201 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral129382517, L_197, /*hidden argument*/NULL);
		String_t* L_202 = String_Concat_m3937257545(NULL /*static, unused*/, L_178, L_201, /*hidden argument*/NULL);
		V_0 = L_202;
		goto IL_047f;
	}

IL_041a:
	{
		ObjectU5BU5D_t2843939325* L_203 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_204 = L_203;
		int64_t L_205 = __this->get_dataOffset_1();
		int64_t L_206 = L_205;
		RuntimeObject * L_207 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_206);
		NullCheck(L_204);
		ArrayElementTypeCheck (L_204, L_207);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_207);
		ObjectU5BU5D_t2843939325* L_208 = L_204;
		int64_t L_209 = __this->get_dataLength_2();
		int64_t L_210 = L_209;
		RuntimeObject * L_211 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_210);
		NullCheck(L_208);
		ArrayElementTypeCheck (L_208, L_211);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_211);
		ObjectU5BU5D_t2843939325* L_212 = L_208;
		int64_t L_213 = __this->get_lengthFieldBytes_3();
		int64_t L_214 = L_213;
		RuntimeObject * L_215 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_214);
		NullCheck(L_212);
		ArrayElementTypeCheck (L_212, L_215);
		(L_212)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_215);
		ObjectU5BU5D_t2843939325* L_216 = L_212;
		Asn1Node_t84807007 * L_217 = ___startNode0;
		String_t* L_218 = Asn1Node_GetIndentStr_m3141977177(__this, L_217, /*hidden argument*/NULL);
		NullCheck(L_216);
		ArrayElementTypeCheck (L_216, L_218);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_218);
		ObjectU5BU5D_t2843939325* L_219 = L_216;
		String_t* L_220 = Asn1Node_get_TagName_m2386341703(__this, /*hidden argument*/NULL);
		NullCheck(L_219);
		ArrayElementTypeCheck (L_219, L_220);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_220);
		String_t* L_221 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral2480762010, L_219, /*hidden argument*/NULL);
		V_1 = L_221;
		String_t* L_222 = V_0;
		Asn1Node_t84807007 * L_223 = ___startNode0;
		String_t* L_224 = V_1;
		int32_t L_225 = ___lineLen1;
		String_t* L_226 = Asn1Node_GetHexPrintingStr_m1213007647(__this, L_223, L_224, _stringLiteral205920387, L_225, /*hidden argument*/NULL);
		String_t* L_227 = String_Concat_m3937257545(NULL /*static, unused*/, L_222, L_226, /*hidden argument*/NULL);
		V_0 = L_227;
	}

IL_047f:
	{
		goto IL_05c8;
	}

IL_0484:
	{
		uint8_t L_228 = __this->get_tag_0();
		V_15 = (bool)((((int32_t)((int32_t)((int32_t)L_228&(int32_t)((int32_t)31)))) == ((int32_t)6))? 1 : 0);
		bool L_229 = V_15;
		if (!L_229)
		{
			goto IL_0561;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_230 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_231 = L_230;
		int64_t L_232 = __this->get_dataOffset_1();
		int64_t L_233 = L_232;
		RuntimeObject * L_234 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_233);
		NullCheck(L_231);
		ArrayElementTypeCheck (L_231, L_234);
		(L_231)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_234);
		ObjectU5BU5D_t2843939325* L_235 = L_231;
		int64_t L_236 = __this->get_dataLength_2();
		int64_t L_237 = L_236;
		RuntimeObject * L_238 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_237);
		NullCheck(L_235);
		ArrayElementTypeCheck (L_235, L_238);
		(L_235)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_238);
		ObjectU5BU5D_t2843939325* L_239 = L_235;
		int64_t L_240 = __this->get_lengthFieldBytes_3();
		int64_t L_241 = L_240;
		RuntimeObject * L_242 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_241);
		NullCheck(L_239);
		ArrayElementTypeCheck (L_239, L_242);
		(L_239)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_242);
		ObjectU5BU5D_t2843939325* L_243 = L_239;
		Asn1Node_t84807007 * L_244 = ___startNode0;
		String_t* L_245 = Asn1Node_GetIndentStr_m3141977177(__this, L_244, /*hidden argument*/NULL);
		NullCheck(L_243);
		ArrayElementTypeCheck (L_243, L_245);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_245);
		ObjectU5BU5D_t2843939325* L_246 = L_243;
		String_t* L_247 = Asn1Node_get_TagName_m2386341703(__this, /*hidden argument*/NULL);
		NullCheck(L_246);
		ArrayElementTypeCheck (L_246, L_247);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_247);
		String_t* L_248 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral2480762010, L_246, /*hidden argument*/NULL);
		V_1 = L_248;
		ByteU5BU5D_t4116647657* L_249 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_250 = Asn1Util_BytesToString_m2331954563(NULL /*static, unused*/, L_249, /*hidden argument*/NULL);
		V_2 = L_250;
		String_t* L_251 = V_1;
		NullCheck(L_251);
		int32_t L_252 = String_get_Length_m3847582255(L_251, /*hidden argument*/NULL);
		String_t* L_253 = V_2;
		NullCheck(L_253);
		int32_t L_254 = String_get_Length_m3847582255(L_253, /*hidden argument*/NULL);
		int32_t L_255 = ___lineLen1;
		V_16 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_252, (int32_t)L_254))) < ((int32_t)L_255))? 1 : 0);
		bool L_256 = V_16;
		if (!L_256)
		{
			goto IL_0536;
		}
	}
	{
		StringU5BU5D_t1281789340* L_257 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_258 = L_257;
		String_t* L_259 = V_0;
		NullCheck(L_258);
		ArrayElementTypeCheck (L_258, L_259);
		(L_258)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_259);
		StringU5BU5D_t1281789340* L_260 = L_258;
		String_t* L_261 = V_1;
		NullCheck(L_260);
		ArrayElementTypeCheck (L_260, L_261);
		(L_260)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_261);
		StringU5BU5D_t1281789340* L_262 = L_260;
		NullCheck(L_262);
		ArrayElementTypeCheck (L_262, _stringLiteral3452614521);
		(L_262)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614521);
		StringU5BU5D_t1281789340* L_263 = L_262;
		String_t* L_264 = V_2;
		NullCheck(L_263);
		ArrayElementTypeCheck (L_263, L_264);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_264);
		StringU5BU5D_t1281789340* L_265 = L_263;
		NullCheck(L_265);
		ArrayElementTypeCheck (L_265, _stringLiteral3169997249);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3169997249);
		String_t* L_266 = String_Concat_m1809518182(NULL /*static, unused*/, L_265, /*hidden argument*/NULL);
		V_0 = L_266;
		goto IL_055e;
	}

IL_0536:
	{
		String_t* L_267 = V_0;
		String_t* L_268 = V_1;
		Asn1Node_t84807007 * L_269 = ___startNode0;
		String_t* L_270 = Asn1Node_GetIndentStr_m3141977177(__this, L_269, /*hidden argument*/NULL);
		NullCheck(L_270);
		int32_t L_271 = String_get_Length_m3847582255(L_270, /*hidden argument*/NULL);
		int32_t L_272 = ___lineLen1;
		String_t* L_273 = V_2;
		String_t* L_274 = Asn1Node_FormatLineString_m2134694141(__this, _stringLiteral205920387, L_271, L_272, L_273, /*hidden argument*/NULL);
		String_t* L_275 = String_Concat_m2163913788(NULL /*static, unused*/, L_267, L_268, L_274, _stringLiteral3453007779, /*hidden argument*/NULL);
		V_0 = L_275;
	}

IL_055e:
	{
		goto IL_05c6;
	}

IL_0561:
	{
		ObjectU5BU5D_t2843939325* L_276 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_277 = L_276;
		int64_t L_278 = __this->get_dataOffset_1();
		int64_t L_279 = L_278;
		RuntimeObject * L_280 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_279);
		NullCheck(L_277);
		ArrayElementTypeCheck (L_277, L_280);
		(L_277)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_280);
		ObjectU5BU5D_t2843939325* L_281 = L_277;
		int64_t L_282 = __this->get_dataLength_2();
		int64_t L_283 = L_282;
		RuntimeObject * L_284 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_283);
		NullCheck(L_281);
		ArrayElementTypeCheck (L_281, L_284);
		(L_281)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_284);
		ObjectU5BU5D_t2843939325* L_285 = L_281;
		int64_t L_286 = __this->get_lengthFieldBytes_3();
		int64_t L_287 = L_286;
		RuntimeObject * L_288 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_287);
		NullCheck(L_285);
		ArrayElementTypeCheck (L_285, L_288);
		(L_285)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_288);
		ObjectU5BU5D_t2843939325* L_289 = L_285;
		Asn1Node_t84807007 * L_290 = ___startNode0;
		String_t* L_291 = Asn1Node_GetIndentStr_m3141977177(__this, L_290, /*hidden argument*/NULL);
		NullCheck(L_289);
		ArrayElementTypeCheck (L_289, L_291);
		(L_289)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_291);
		ObjectU5BU5D_t2843939325* L_292 = L_289;
		String_t* L_293 = Asn1Node_get_TagName_m2386341703(__this, /*hidden argument*/NULL);
		NullCheck(L_292);
		ArrayElementTypeCheck (L_292, L_293);
		(L_292)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_293);
		String_t* L_294 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral2480762010, L_292, /*hidden argument*/NULL);
		V_1 = L_294;
		String_t* L_295 = V_0;
		Asn1Node_t84807007 * L_296 = ___startNode0;
		String_t* L_297 = V_1;
		int32_t L_298 = ___lineLen1;
		String_t* L_299 = Asn1Node_GetHexPrintingStr_m1213007647(__this, L_296, L_297, _stringLiteral205920387, L_298, /*hidden argument*/NULL);
		String_t* L_300 = String_Concat_m3937257545(NULL /*static, unused*/, L_295, L_299, /*hidden argument*/NULL);
		V_0 = L_300;
	}

IL_05c6:
	{
		goto IL_05c8;
	}

IL_05c8:
	{
		ArrayList_t2718874744 * L_301 = __this->get_childNodeList_5();
		NullCheck(L_301);
		int32_t L_302 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_301);
		V_17 = (bool)((((int32_t)((((int32_t)L_302) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_303 = V_17;
		if (!L_303)
		{
			goto IL_05f1;
		}
	}
	{
		String_t* L_304 = V_0;
		Asn1Node_t84807007 * L_305 = ___startNode0;
		int32_t L_306 = ___lineLen1;
		String_t* L_307 = Asn1Node_GetListStr_m4125925599(__this, L_305, L_306, /*hidden argument*/NULL);
		String_t* L_308 = String_Concat_m3937257545(NULL /*static, unused*/, L_304, L_307, /*hidden argument*/NULL);
		V_0 = L_308;
	}

IL_05f1:
	{
		String_t* L_309 = V_0;
		V_18 = L_309;
		goto IL_05f6;
	}

IL_05f6:
	{
		String_t* L_310 = V_18;
		return L_310;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetDataStr(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetDataStr_m489816169 (Asn1Node_t84807007 * __this, bool ___pureHexMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetDataStr_m489816169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	Oid_t864847193 * V_3 = NULL;
	RelativeOid_t4118021937 * V_4 = NULL;
	UTF8Encoding_t3956466879 * V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	{
		V_0 = _stringLiteral757602046;
		bool L_0 = ___pureHexMode0;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_3 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_4 = Asn1Util_FormatString_m3734247287(NULL /*static, unused*/, L_3, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0170;
	}

IL_0027:
	{
		uint8_t L_5 = __this->get_tag_0();
		V_2 = L_5;
		uint8_t L_6 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_011e;
			}
			case 1:
			{
				goto IL_00a7;
			}
			case 2:
			{
				goto IL_0134;
			}
			case 3:
			{
				goto IL_0134;
			}
			case 4:
			{
				goto IL_00c0;
			}
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		uint8_t L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_0107;
			}
			case 1:
			{
				goto IL_00dd;
			}
			case 2:
			{
				goto IL_0134;
			}
			case 3:
			{
				goto IL_0134;
			}
			case 4:
			{
				goto IL_0134;
			}
			case 5:
			{
				goto IL_0134;
			}
			case 6:
			{
				goto IL_00f9;
			}
			case 7:
			{
				goto IL_00f9;
			}
			case 8:
			{
				goto IL_0134;
			}
			case 9:
			{
				goto IL_0134;
			}
			case 10:
			{
				goto IL_00f9;
			}
			case 11:
			{
				goto IL_00f9;
			}
			case 12:
			{
				goto IL_00f9;
			}
			case 13:
			{
				goto IL_0134;
			}
			case 14:
			{
				goto IL_00f9;
			}
			case 15:
			{
				goto IL_00f9;
			}
			case 16:
			{
				goto IL_00f9;
			}
			case 17:
			{
				goto IL_0134;
			}
			case 18:
			{
				goto IL_00f9;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_00a7:
	{
		ByteU5BU5D_t4116647657* L_8 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_9 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		String_t* L_10 = Asn1Util_FormatString_m3734247287(NULL /*static, unused*/, L_9, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_016e;
	}

IL_00c0:
	{
		Oid_t864847193 * L_11 = (Oid_t864847193 *)il2cpp_codegen_object_new(Oid_t864847193_il2cpp_TypeInfo_var);
		Oid__ctor_m4234155318(L_11, /*hidden argument*/NULL);
		V_3 = L_11;
		Oid_t864847193 * L_12 = V_3;
		ByteU5BU5D_t4116647657* L_13 = __this->get_data_4();
		MemoryStream_t94973147 * L_14 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_14, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_15 = VirtFuncInvoker1< String_t*, Stream_t1273022909 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_12, L_14);
		V_0 = L_15;
		goto IL_016e;
	}

IL_00dd:
	{
		RelativeOid_t4118021937 * L_16 = (RelativeOid_t4118021937 *)il2cpp_codegen_object_new(RelativeOid_t4118021937_il2cpp_TypeInfo_var);
		RelativeOid__ctor_m2367190897(L_16, /*hidden argument*/NULL);
		V_4 = L_16;
		RelativeOid_t4118021937 * L_17 = V_4;
		ByteU5BU5D_t4116647657* L_18 = __this->get_data_4();
		MemoryStream_t94973147 * L_19 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_19, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20 = VirtFuncInvoker1< String_t*, Stream_t1273022909 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, L_17, L_19);
		V_0 = L_20;
		goto IL_016e;
	}

IL_00f9:
	{
		ByteU5BU5D_t4116647657* L_21 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_22 = Asn1Util_BytesToString_m2331954563(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_016e;
	}

IL_0107:
	{
		UTF8Encoding_t3956466879 * L_23 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1224805231(L_23, /*hidden argument*/NULL);
		V_5 = L_23;
		UTF8Encoding_t3956466879 * L_24 = V_5;
		ByteU5BU5D_t4116647657* L_25 = __this->get_data_4();
		NullCheck(L_24);
		String_t* L_26 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_24, L_25);
		V_0 = L_26;
		goto IL_016e;
	}

IL_011e:
	{
		ByteU5BU5D_t4116647657* L_27 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_28 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		String_t* L_29 = Asn1Util_FormatString_m3734247287(NULL /*static, unused*/, L_28, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_29;
		goto IL_016e;
	}

IL_0134:
	{
		uint8_t L_30 = __this->get_tag_0();
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)))) == ((int32_t)6))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_0156;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_32 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_33 = Asn1Util_BytesToString_m2331954563(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_016c;
	}

IL_0156:
	{
		ByteU5BU5D_t4116647657* L_34 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_35 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		String_t* L_36 = Asn1Util_FormatString_m3734247287(NULL /*static, unused*/, L_35, ((int32_t)32), 2, /*hidden argument*/NULL);
		V_0 = L_36;
	}

IL_016c:
	{
		goto IL_016e;
	}

IL_016e:
	{
	}

IL_0170:
	{
		String_t* L_37 = V_0;
		V_7 = L_37;
		goto IL_0175;
	}

IL_0175:
	{
		String_t* L_38 = V_7;
		return L_38;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_DataLength()
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Node_get_DataLength_m3134292057 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_dataLength_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] LipingShare.LCLib.Asn1Processor.Asn1Node::get_Data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Asn1Node_get_Data_m379120612 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_get_Data_m379120612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	int64_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Asn1Node_t84807007 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	ByteU5BU5D_t4116647657* V_8 = NULL;
	{
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1 = Asn1Node_get_ChildNodeCount_m2235806103(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int64_t L_2 = V_1;
		V_3 = (bool)((((int64_t)L_2) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = __this->get_data_4();
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		MemoryStream_t94973147 * L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = __this->get_data_4();
		ByteU5BU5D_t4116647657* L_8 = __this->get_data_4();
		NullCheck(L_8);
		NullCheck(L_6);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))));
	}

IL_003f:
	{
		goto IL_0070;
	}

IL_0042:
	{
		V_6 = 0;
		goto IL_0063;
	}

IL_0048:
	{
		int32_t L_9 = V_6;
		Asn1Node_t84807007 * L_10 = Asn1Node_GetChildNode_m2817937035(__this, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Asn1Node_t84807007 * L_11 = V_5;
		MemoryStream_t94973147 * L_12 = V_0;
		NullCheck(L_11);
		Asn1Node_SaveData_m221214808(L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_14 = V_6;
		int64_t L_15 = V_1;
		V_7 = (bool)((((int64_t)(((int64_t)((int64_t)L_14)))) < ((int64_t)L_15))? 1 : 0);
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_0048;
		}
	}
	{
	}

IL_0070:
	{
		MemoryStream_t94973147 * L_17 = V_0;
		NullCheck(L_17);
		int64_t L_18 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_17);
		if ((int64_t)(L_18) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Asn1Node_get_Data_m379120612_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_19 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_18)));
		V_2 = L_19;
		MemoryStream_t94973147 * L_20 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_20, (((int64_t)((int64_t)0))));
		MemoryStream_t94973147 * L_21 = V_0;
		ByteU5BU5D_t4116647657* L_22 = V_2;
		MemoryStream_t94973147 * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_23);
		NullCheck(L_21);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, (((int32_t)((int32_t)L_24))));
		MemoryStream_t94973147 * L_25 = V_0;
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_25);
		ByteU5BU5D_t4116647657* L_26 = V_2;
		V_8 = L_26;
		goto IL_00a2;
	}

IL_00a2:
	{
		ByteU5BU5D_t4116647657* L_27 = V_8;
		return L_27;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::get_Deepness()
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Node_get_Deepness_m1134302127 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_deepness_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::set_RequireRecalculatePar(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_set_RequireRecalculatePar_m3064862800 (Asn1Node_t84807007 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_requireRecalculatePar_10(L_0);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::RecalculateTreePar()
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_RecalculateTreePar_m2781751213 (Asn1Node_t84807007 * __this, const RuntimeMethod* method)
{
	Asn1Node_t84807007 * V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = __this->get_requireRecalculatePar_10();
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_005b;
	}

IL_0010:
	{
		V_0 = __this;
		goto IL_001d;
	}

IL_0014:
	{
		Asn1Node_t84807007 * L_2 = V_0;
		NullCheck(L_2);
		Asn1Node_t84807007 * L_3 = Asn1Node_get_ParentNode_m1851040428(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		Asn1Node_t84807007 * L_4 = V_0;
		NullCheck(L_4);
		Asn1Node_t84807007 * L_5 = Asn1Node_get_ParentNode_m1851040428(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((!(((RuntimeObject*)(Asn1Node_t84807007 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0014;
		}
	}
	{
		Asn1Node_t84807007 * L_7 = V_0;
		Asn1Node_ResetBranchDataLength_m671820342(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_8 = V_0;
		NullCheck(L_8);
		L_8->set_dataOffset_1((((int64_t)((int64_t)0))));
		Asn1Node_t84807007 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_deepness_7((((int64_t)((int64_t)0))));
		Asn1Node_t84807007 * L_10 = V_0;
		NullCheck(L_10);
		int64_t L_11 = L_10->get_dataOffset_1();
		Asn1Node_t84807007 * L_12 = V_0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_lengthFieldBytes_3();
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_11, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_13));
		Asn1Node_t84807007 * L_14 = V_0;
		int64_t L_15 = V_1;
		Asn1Node_ResetChildNodePar_m3866897616(__this, L_14, L_15, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Node::ResetBranchDataLength(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Node_ResetBranchDataLength_m671820342 (RuntimeObject * __this /* static, unused */, Asn1Node_t84807007 * ___node0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int64_t V_7 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = (((int64_t)((int64_t)0)));
		Asn1Node_t84807007 * L_0 = ___node0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_ChildNodeCount_m2235806103(L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_1) < ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Asn1Node_t84807007 * L_3 = ___node0;
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = L_3->get_data_4();
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		int64_t L_6 = V_1;
		Asn1Node_t84807007 * L_7 = ___node0;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = L_7->get_data_4();
		NullCheck(L_8);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))));
	}

IL_002f:
	{
		goto IL_0062;
	}

IL_0032:
	{
		V_4 = 0;
		goto IL_0050;
	}

IL_0038:
	{
		int64_t L_9 = V_1;
		Asn1Node_t84807007 * L_10 = ___node0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		Asn1Node_t84807007 * L_12 = Asn1Node_GetChildNode_m2817937035(L_10, L_11, /*hidden argument*/NULL);
		int64_t L_13 = Asn1Node_ResetBranchDataLength_m671820342(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)L_13));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_15 = V_4;
		Asn1Node_t84807007 * L_16 = ___node0;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_m2235806103(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int64_t)(((int64_t)((int64_t)L_15)))) < ((int64_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0038;
		}
	}
	{
	}

IL_0062:
	{
		Asn1Node_t84807007 * L_19 = ___node0;
		int64_t L_20 = V_1;
		NullCheck(L_19);
		L_19->set_dataLength_2(L_20);
		Asn1Node_t84807007 * L_21 = ___node0;
		NullCheck(L_21);
		uint8_t L_22 = L_21->get_tag_0();
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)3))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		Asn1Node_t84807007 * L_24 = ___node0;
		Asn1Node_t84807007 * L_25 = L_24;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_dataLength_2();
		NullCheck(L_25);
		L_25->set_dataLength_2(((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)(((int64_t)((int64_t)1))))));
	}

IL_0087:
	{
		Asn1Node_t84807007 * L_27 = ___node0;
		Asn1Node_ResetDataLengthFieldWidth_m570134001(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_28 = ___node0;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_dataLength_2();
		Asn1Node_t84807007 * L_30 = ___node0;
		NullCheck(L_30);
		int64_t L_31 = L_30->get_lengthFieldBytes_3();
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_31));
		int64_t L_32 = V_0;
		V_7 = L_32;
		goto IL_00a4;
	}

IL_00a4:
	{
		int64_t L_33 = V_7;
		return L_33;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetDataLengthFieldWidth(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_ResetDataLengthFieldWidth_m570134001 (RuntimeObject * __this /* static, unused */, Asn1Node_t84807007 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ResetDataLengthFieldWidth_m570134001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	{
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MemoryStream_t94973147 * L_1 = V_0;
		Asn1Node_t84807007 * L_2 = ___node0;
		NullCheck(L_2);
		int64_t L_3 = L_2->get_dataLength_2();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		Asn1Util_DERLengthEncode_m3699318424(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_4 = ___node0;
		MemoryStream_t94973147 * L_5 = V_0;
		NullCheck(L_5);
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_5);
		NullCheck(L_4);
		L_4->set_lengthFieldBytes_3(L_6);
		MemoryStream_t94973147 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_7);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Node::ResetChildNodePar(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Asn1Node_ResetChildNodePar_m3866897616 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___xNode0, int64_t ___subOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ResetChildNodePar_m3866897616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Asn1Node_t84807007 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Asn1Node_t84807007 * L_0 = ___xNode0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_tag_0();
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int64_t L_3 = ___subOffset1;
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0016:
	{
		V_0 = 0;
		goto IL_0082;
	}

IL_001a:
	{
		Asn1Node_t84807007 * L_4 = ___xNode0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Asn1Node_t84807007 * L_6 = Asn1Node_GetChildNode_m2817937035(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Asn1Node_t84807007 * L_7 = V_1;
		Asn1Node_t84807007 * L_8 = ___xNode0;
		NullCheck(L_7);
		L_7->set_parentNode_9(L_8);
		Asn1Node_t84807007 * L_9 = V_1;
		int64_t L_10 = ___subOffset1;
		NullCheck(L_9);
		L_9->set_dataOffset_1(L_10);
		Asn1Node_t84807007 * L_11 = V_1;
		Asn1Node_t84807007 * L_12 = ___xNode0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_deepness_7();
		NullCheck(L_11);
		L_11->set_deepness_7(((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)1))))));
		Asn1Node_t84807007 * L_14 = V_1;
		Asn1Node_t84807007 * L_15 = ___xNode0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_path_8();
		String_t* L_17 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_18 = String_Concat_m3755062657(NULL /*static, unused*/, L_16, _stringLiteral3452614529, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_path_8(L_18);
		int64_t L_19 = ___subOffset1;
		Asn1Node_t84807007 * L_20 = V_1;
		NullCheck(L_20);
		int64_t L_21 = L_20->get_lengthFieldBytes_3();
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)1))), (int64_t)L_21))));
		Asn1Node_t84807007 * L_22 = V_1;
		int64_t L_23 = ___subOffset1;
		Asn1Node_ResetChildNodePar_m3866897616(__this, L_22, L_23, /*hidden argument*/NULL);
		int64_t L_24 = ___subOffset1;
		Asn1Node_t84807007 * L_25 = V_1;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_dataLength_2();
		___subOffset1 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)L_26));
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_28 = V_0;
		Asn1Node_t84807007 * L_29 = ___xNode0;
		NullCheck(L_29);
		int64_t L_30 = Asn1Node_get_ChildNodeCount_m2235806103(L_29, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)(((int64_t)((int64_t)L_28)))) < ((int64_t)L_30))? 1 : 0);
		bool L_31 = V_3;
		if (L_31)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetListStr(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetListStr_m4125925599 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___startNode0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetListStr_m4125925599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Asn1Node_t84807007 * V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		V_0 = _stringLiteral757602046;
		V_1 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		ArrayList_t2718874744 * L_0 = __this->get_childNodeList_5();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_2 = ((Asn1Node_t84807007 *)CastclassClass((RuntimeObject*)L_2, Asn1Node_t84807007_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		Asn1Node_t84807007 * L_4 = V_2;
		Asn1Node_t84807007 * L_5 = ___startNode0;
		int32_t L_6 = ___lineLen1;
		NullCheck(L_4);
		String_t* L_7 = Asn1Node_GetText_m1739552395(L_4, L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_10 = V_1;
		ArrayList_t2718874744 * L_11 = __this->get_childNodeList_5();
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_14 = V_0;
		V_4 = L_14;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_15 = V_4;
		return L_15;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Node::GetIndentStr(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Node_GetIndentStr_m3141977177 (Asn1Node_t84807007 * __this, Asn1Node_t84807007 * ___startNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GetIndentStr_m3141977177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteral757602046;
		V_1 = (((int64_t)((int64_t)0)));
		Asn1Node_t84807007 * L_0 = ___startNode0;
		V_2 = (bool)((!(((RuntimeObject*)(Asn1Node_t84807007 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Asn1Node_t84807007 * L_2 = ___startNode0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_Deepness_m1134302127(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_001b:
	{
		V_3 = (((int64_t)((int64_t)0)));
		goto IL_0033;
	}

IL_0020:
	{
		String_t* L_4 = V_0;
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_4, _stringLiteral3786055882, /*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0033:
	{
		int64_t L_7 = V_3;
		int64_t L_8 = __this->get_deepness_7();
		int64_t L_9 = V_1;
		V_4 = (bool)((((int64_t)L_7) < ((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_8, (int64_t)L_9))))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_11 = V_0;
		V_5 = L_11;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_12 = V_5;
		return L_12;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::GeneralDecode(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_GeneralDecode_m1328456718 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_GeneralDecode_m1328456718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		V_0 = (bool)0;
		Stream_t1273022909 * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		Stream_t1273022909 * L_2 = ___xdata0;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)L_3));
		Stream_t1273022909 * L_4 = ___xdata0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		__this->set_tag_0((uint8_t)(((int32_t)((uint8_t)L_5))));
		Stream_t1273022909 * L_6 = ___xdata0;
		NullCheck(L_6);
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_6);
		V_2 = L_7;
		Stream_t1273022909 * L_8 = ___xdata0;
		bool* L_9 = __this->get_address_of_isIndefiniteLength_11();
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int64_t L_10 = Asn1Util_DerLengthDecode_m3873201477(NULL /*static, unused*/, L_8, (bool*)L_9, /*hidden argument*/NULL);
		__this->set_dataLength_2(L_10);
		int64_t L_11 = __this->get_dataLength_2();
		V_4 = (bool)((((int64_t)L_11) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		bool L_13 = V_0;
		V_5 = L_13;
		goto IL_0161;
	}

IL_004f:
	{
		Stream_t1273022909 * L_14 = ___xdata0;
		NullCheck(L_14);
		int64_t L_15 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_14);
		V_3 = L_15;
		int64_t L_16 = V_3;
		int64_t L_17 = V_2;
		__this->set_lengthFieldBytes_3(((int64_t)il2cpp_codegen_subtract((int64_t)L_16, (int64_t)L_17)));
		int64_t L_18 = V_1;
		int64_t L_19 = __this->get_dataLength_2();
		int64_t L_20 = __this->get_lengthFieldBytes_3();
		V_6 = (bool)((((int64_t)L_18) < ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_20))))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_0081;
		}
	}
	{
		bool L_22 = V_0;
		V_5 = L_22;
		goto IL_0161;
	}

IL_0081:
	{
		Asn1Node_t84807007 * L_23 = Asn1Node_get_ParentNode_m1851040428(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_009c;
		}
	}
	{
		Asn1Node_t84807007 * L_24 = Asn1Node_get_ParentNode_m1851040428(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		uint8_t L_25 = L_24->get_tag_0();
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B7_0 = 1;
	}

IL_009d:
	{
		V_7 = (bool)G_B7_0;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		uint8_t L_27 = __this->get_tag_0();
		if ((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)))) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		uint8_t L_28 = __this->get_tag_0();
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)31)))) > ((int32_t)((int32_t)30)))? 1 : 0);
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B11_0 = 1;
	}

IL_00c0:
	{
		V_8 = (bool)G_B11_0;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_30 = V_0;
		V_5 = L_30;
		goto IL_0161;
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		uint8_t L_31 = __this->get_tag_0();
		V_9 = (bool)((((int32_t)L_31) == ((int32_t)3))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_0131;
		}
	}
	{
		int64_t L_33 = __this->get_dataLength_2();
		V_10 = (bool)((((int64_t)L_33) < ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_35 = V_0;
		V_5 = L_35;
		goto IL_0161;
	}

IL_00f4:
	{
		Stream_t1273022909 * L_36 = ___xdata0;
		NullCheck(L_36);
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_36);
		__this->set_unusedBits_6((uint8_t)(((int32_t)((uint8_t)L_37))));
		int64_t L_38 = __this->get_dataLength_2();
		if ((int64_t)(((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)(((int64_t)((int64_t)1)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Asn1Node_GeneralDecode_m1328456718_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_39 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)(((int64_t)((int64_t)1))))))));
		__this->set_data_4(L_39);
		Stream_t1273022909 * L_40 = ___xdata0;
		ByteU5BU5D_t4116647657* L_41 = __this->get_data_4();
		int64_t L_42 = __this->get_dataLength_2();
		NullCheck(L_40);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_42, (int64_t)(((int64_t)((int64_t)1)))))))));
		goto IL_015a;
	}

IL_0131:
	{
		int64_t L_43 = __this->get_dataLength_2();
		if ((int64_t)(L_43) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Asn1Node_GeneralDecode_m1328456718_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_44 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_43)));
		__this->set_data_4(L_44);
		Stream_t1273022909 * L_45 = ___xdata0;
		ByteU5BU5D_t4116647657* L_46 = __this->get_data_4();
		int64_t L_47 = __this->get_dataLength_2();
		NullCheck(L_45);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_45, L_46, 0, (((int32_t)((int32_t)L_47))));
	}

IL_015a:
	{
		V_0 = (bool)1;
		bool L_48 = V_0;
		V_5 = L_48;
		goto IL_0161;
	}

IL_0161:
	{
		bool L_49 = V_5;
		return L_49;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::ListDecode(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_ListDecode_m3748820269 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Node_ListDecode_m3748820269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	Stream_t1273022909 * V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Asn1Node_t84807007 * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B4_0 = 0;
	{
		V_0 = (bool)0;
		Stream_t1273022909 * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_1 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Stream_t1273022909 * L_2 = ___xdata0;
			NullCheck(L_2);
			int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
			Stream_t1273022909 * L_4 = ___xdata0;
			NullCheck(L_4);
			int64_t L_5 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_4);
			V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5));
			Stream_t1273022909 * L_6 = ___xdata0;
			NullCheck(L_6);
			int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_6);
			__this->set_tag_0((uint8_t)(((int32_t)((uint8_t)L_7))));
			Stream_t1273022909 * L_8 = ___xdata0;
			NullCheck(L_8);
			int64_t L_9 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
			V_3 = L_9;
			Stream_t1273022909 * L_10 = ___xdata0;
			bool* L_11 = __this->get_address_of_isIndefiniteLength_11();
			IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
			int64_t L_12 = Asn1Util_DerLengthDecode_m3873201477(NULL /*static, unused*/, L_10, (bool*)L_11, /*hidden argument*/NULL);
			__this->set_dataLength_2(L_12);
			int64_t L_13 = __this->get_dataLength_2();
			if ((((int64_t)L_13) < ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_0054;
			}
		}

IL_0049:
		{
			int64_t L_14 = V_2;
			int64_t L_15 = __this->get_dataLength_2();
			G_B4_0 = ((((int64_t)L_14) < ((int64_t)L_15))? 1 : 0);
			goto IL_0055;
		}

IL_0054:
		{
			G_B4_0 = 1;
		}

IL_0055:
		{
			V_8 = (bool)G_B4_0;
			bool L_16 = V_8;
			if (!L_16)
			{
				goto IL_0064;
			}
		}

IL_005b:
		{
			bool L_17 = V_0;
			V_9 = L_17;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_0064:
		{
			Stream_t1273022909 * L_18 = ___xdata0;
			NullCheck(L_18);
			int64_t L_19 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
			V_4 = L_19;
			int64_t L_20 = V_4;
			int64_t L_21 = V_3;
			__this->set_lengthFieldBytes_3(((int64_t)il2cpp_codegen_subtract((int64_t)L_20, (int64_t)L_21)));
			int64_t L_22 = __this->get_dataOffset_1();
			int64_t L_23 = __this->get_lengthFieldBytes_3();
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)(((int64_t)((int64_t)1))))), (int64_t)L_23));
			uint8_t L_24 = __this->get_tag_0();
			V_10 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
			bool L_25 = V_10;
			if (!L_25)
			{
				goto IL_00bc;
			}
		}

IL_0097:
		{
			Stream_t1273022909 * L_26 = ___xdata0;
			NullCheck(L_26);
			int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_26);
			__this->set_unusedBits_6((uint8_t)(((int32_t)((uint8_t)L_27))));
			int64_t L_28 = __this->get_dataLength_2();
			__this->set_dataLength_2(((int64_t)il2cpp_codegen_subtract((int64_t)L_28, (int64_t)(((int64_t)((int64_t)1))))));
			int64_t L_29 = V_5;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)(((int64_t)((int64_t)1)))));
		}

IL_00bc:
		{
			int64_t L_30 = __this->get_dataLength_2();
			V_11 = (bool)((((int32_t)((((int64_t)L_30) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_31 = V_11;
			if (!L_31)
			{
				goto IL_00d7;
			}
		}

IL_00cf:
		{
			bool L_32 = V_0;
			V_9 = L_32;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_00d7:
		{
			int64_t L_33 = __this->get_dataLength_2();
			MemoryStream_t94973147 * L_34 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
			MemoryStream__ctor_m2128850779(L_34, (((int32_t)((int32_t)L_33))), /*hidden argument*/NULL);
			V_6 = L_34;
			int64_t L_35 = __this->get_dataLength_2();
			if ((int64_t)(L_35) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Asn1Node_ListDecode_m3748820269_RuntimeMethod_var);
			ByteU5BU5D_t4116647657* L_36 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_35)));
			V_7 = L_36;
			Stream_t1273022909 * L_37 = ___xdata0;
			ByteU5BU5D_t4116647657* L_38 = V_7;
			int64_t L_39 = __this->get_dataLength_2();
			NullCheck(L_37);
			VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)((int32_t)L_39))));
			uint8_t L_40 = __this->get_tag_0();
			V_12 = (bool)((((int32_t)L_40) == ((int32_t)3))? 1 : 0);
			bool L_41 = V_12;
			if (!L_41)
			{
				goto IL_0122;
			}
		}

IL_0113:
		{
			int64_t L_42 = __this->get_dataLength_2();
			__this->set_dataLength_2(((int64_t)il2cpp_codegen_add((int64_t)L_42, (int64_t)(((int64_t)((int64_t)1))))));
		}

IL_0122:
		{
			Stream_t1273022909 * L_43 = V_6;
			ByteU5BU5D_t4116647657* L_44 = V_7;
			ByteU5BU5D_t4116647657* L_45 = V_7;
			NullCheck(L_45);
			NullCheck(L_43);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_43, L_44, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))));
			Stream_t1273022909 * L_46 = V_6;
			NullCheck(L_46);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_46, (((int64_t)((int64_t)0))));
			goto IL_0190;
		}

IL_013d:
		{
			int64_t L_47 = V_5;
			Asn1Node_t84807007 * L_48 = (Asn1Node_t84807007 *)il2cpp_codegen_object_new(Asn1Node_t84807007_il2cpp_TypeInfo_var);
			Asn1Node__ctor_m2018391427(L_48, __this, L_47, /*hidden argument*/NULL);
			V_13 = L_48;
			Asn1Node_t84807007 * L_49 = V_13;
			bool L_50 = __this->get_parseEncapsulatedData_12();
			NullCheck(L_49);
			L_49->set_parseEncapsulatedData_12(L_50);
			Stream_t1273022909 * L_51 = V_6;
			NullCheck(L_51);
			int64_t L_52 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_51);
			V_3 = L_52;
			Asn1Node_t84807007 * L_53 = V_13;
			Stream_t1273022909 * L_54 = V_6;
			NullCheck(L_53);
			bool L_55 = Asn1Node_InternalLoadData_m1559745040(L_53, L_54, /*hidden argument*/NULL);
			V_14 = (bool)((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
			bool L_56 = V_14;
			if (!L_56)
			{
				goto IL_0174;
			}
		}

IL_016f:
		{
			bool L_57 = V_0;
			V_9 = L_57;
			IL2CPP_LEAVE(0x1CE, FINALLY_01ab);
		}

IL_0174:
		{
			Asn1Node_t84807007 * L_58 = V_13;
			Asn1Node_AddChild_m1366340013(__this, L_58, /*hidden argument*/NULL);
			Stream_t1273022909 * L_59 = V_6;
			NullCheck(L_59);
			int64_t L_60 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_59);
			V_4 = L_60;
			int64_t L_61 = V_5;
			int64_t L_62 = V_4;
			int64_t L_63 = V_3;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_62, (int64_t)L_63))));
		}

IL_0190:
		{
			Stream_t1273022909 * L_64 = V_6;
			NullCheck(L_64);
			int64_t L_65 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_64);
			Stream_t1273022909 * L_66 = V_6;
			NullCheck(L_66);
			int64_t L_67 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_66);
			V_15 = (bool)((((int64_t)L_65) < ((int64_t)L_67))? 1 : 0);
			bool L_68 = V_15;
			if (L_68)
			{
				goto IL_013d;
			}
		}

IL_01a6:
		{
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x1C9, FINALLY_01ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ab;
	}

FINALLY_01ab:
	{ // begin finally (depth: 1)
		{
			bool L_69 = V_0;
			V_16 = (bool)((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
			bool L_70 = V_16;
			if (!L_70)
			{
				goto IL_01c7;
			}
		}

IL_01b6:
		{
			Stream_t1273022909 * L_71 = ___xdata0;
			int64_t L_72 = V_1;
			NullCheck(L_71);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_71, L_72);
			Asn1Node_ClearAll_m1073576200(__this, /*hidden argument*/NULL);
		}

IL_01c7:
		{
			IL2CPP_END_FINALLY(427)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(427)
	{
		IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01c9:
	{
		bool L_73 = V_0;
		V_9 = L_73;
		goto IL_01ce;
	}

IL_01ce:
	{
		bool L_74 = V_9;
		return L_74;
	}
}
// System.Boolean LipingShare.LCLib.Asn1Processor.Asn1Node::InternalLoadData(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR bool Asn1Node_InternalLoadData_m1559745040 (Asn1Node_t84807007 * __this, Stream_t1273022909 * ___xdata0, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	{
		V_0 = (bool)1;
		Asn1Node_ClearAll_m1073576200(__this, /*hidden argument*/NULL);
		Stream_t1273022909 * L_0 = ___xdata0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_2 = L_1;
		Stream_t1273022909 * L_2 = ___xdata0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_3)));
		Stream_t1273022909 * L_4 = ___xdata0;
		int64_t L_5 = V_2;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, L_5);
		uint8_t L_6 = V_1;
		V_3 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)));
		uint8_t L_7 = V_1;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)32))))
		{
			goto IL_0084;
		}
	}
	{
		bool L_8 = __this->get_parseEncapsulatedData_12();
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)27))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)24))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)25))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)22))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)19))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)16))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)17))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)20))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)28))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)12))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)21))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B18_0 = ((((int32_t)L_23) == ((int32_t)((int32_t)26)))? 1 : 0);
		goto IL_007f;
	}

IL_007e:
	{
		G_B18_0 = 1;
	}

IL_007f:
	{
		G_B20_0 = G_B18_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B20_0 = 0;
	}

IL_0082:
	{
		G_B22_0 = G_B20_0;
		goto IL_0085;
	}

IL_0084:
	{
		G_B22_0 = 1;
	}

IL_0085:
	{
		V_4 = (bool)G_B22_0;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		Stream_t1273022909 * L_25 = ___xdata0;
		bool L_26 = Asn1Node_ListDecode_m3748820269(__this, L_25, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Stream_t1273022909 * L_28 = ___xdata0;
		bool L_29 = Asn1Node_GeneralDecode_m1328456718(__this, L_28, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_00b1;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		goto IL_00c9;
	}

IL_00b5:
	{
		Stream_t1273022909 * L_31 = ___xdata0;
		bool L_32 = Asn1Node_GeneralDecode_m1328456718(__this, L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00c8;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00c8:
	{
	}

IL_00c9:
	{
		bool L_34 = V_0;
		V_8 = L_34;
		goto IL_00ce;
	}

IL_00ce:
	{
		bool L_35 = V_8;
		return L_35;
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
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Asn1Parser__ctor_m67072856 (Asn1Parser_t1261554413 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser__ctor_m67072856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Asn1Node_t84807007 * L_0 = (Asn1Node_t84807007 *)il2cpp_codegen_object_new(Asn1Node_t84807007_il2cpp_TypeInfo_var);
		Asn1Node__ctor_m1162391460(L_0, /*hidden argument*/NULL);
		__this->set_rootNode_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Parser::LoadData(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void Asn1Parser_LoadData_m188276828 (Asn1Parser_t1261554413 * __this, Stream_t1273022909 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser_LoadData_m188276828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Stream_t1273022909 * L_0 = ___stream0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, (((int64_t)((int64_t)0))));
		Asn1Node_t84807007 * L_1 = __this->get_rootNode_1();
		Stream_t1273022909 * L_2 = ___stream0;
		NullCheck(L_1);
		bool L_3 = Asn1Node_LoadData_m1000939984(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, _stringLiteral3913004426, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Asn1Parser_LoadData_m188276828_RuntimeMethod_var);
	}

IL_0029:
	{
		Stream_t1273022909 * L_6 = ___stream0;
		NullCheck(L_6);
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		if ((int64_t)(L_7) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Asn1Parser_LoadData_m188276828_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_8 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_7)));
		__this->set_rawData_0(L_8);
		Stream_t1273022909 * L_9 = ___stream0;
		NullCheck(L_9);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, (((int64_t)((int64_t)0))));
		Stream_t1273022909 * L_10 = ___stream0;
		ByteU5BU5D_t4116647657* L_11 = __this->get_rawData_0();
		ByteU5BU5D_t4116647657* L_12 = __this->get_rawData_0();
		NullCheck(L_12);
		NullCheck(L_10);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))));
		return;
	}
}
// LipingShare.LCLib.Asn1Processor.Asn1Node LipingShare.LCLib.Asn1Processor.Asn1Parser::get_RootNode()
extern "C" IL2CPP_METHOD_ATTR Asn1Node_t84807007 * Asn1Parser_get_RootNode_m1090940623 (Asn1Parser_t1261554413 * __this, const RuntimeMethod* method)
{
	Asn1Node_t84807007 * V_0 = NULL;
	{
		Asn1Node_t84807007 * L_0 = __this->get_rootNode_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Asn1Node_t84807007 * L_1 = V_0;
		return L_1;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeTextHeader(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeTextHeader_m1953996318 (RuntimeObject * __this /* static, unused */, int32_t ___lineLen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Parser_GetNodeTextHeader_m1953996318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		String_t* L_1 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1167411829, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3 = ___lineLen0;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_4 = Asn1Util_GenStr_m1521306602(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)10))), ((int32_t)61), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m2163913788(NULL /*static, unused*/, L_2, _stringLiteral2933284458, L_4, _stringLiteral3453007779, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		V_1 = L_6;
		goto IL_0032;
	}

IL_0032:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Parser_ToString_m3237828346 (Asn1Parser_t1261554413 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Asn1Node_t84807007 * L_0 = __this->get_rootNode_1();
		String_t* L_1 = Asn1Parser_GetNodeText_m4294696735(NULL /*static, unused*/, L_0, ((int32_t)100), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Parser::GetNodeText(LipingShare.LCLib.Asn1Processor.Asn1Node,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Parser_GetNodeText_m4294696735 (RuntimeObject * __this /* static, unused */, Asn1Node_t84807007 * ___node0, int32_t ___lineLen1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___lineLen1;
		String_t* L_1 = Asn1Parser_GetNodeTextHeader_m1953996318(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Asn1Node_t84807007 * L_3 = ___node0;
		Asn1Node_t84807007 * L_4 = ___node0;
		int32_t L_5 = ___lineLen1;
		NullCheck(L_3);
		String_t* L_6 = Asn1Node_GetText_m1739552395(L_3, L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		V_1 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_9 = V_1;
		return L_9;
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
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::FormatString(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_FormatString_m3734247287 (RuntimeObject * __this /* static, unused */, String_t* ___inStr0, int32_t ___lineLen1, int32_t ___groupLen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_FormatString_m3734247287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___inStr0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_2 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)));
		V_0 = L_2;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_1 = 0;
		goto IL_007b;
	}

IL_001a:
	{
		CharU5BU5D_t3528271667* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		String_t* L_6 = ___inStr0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)L_8);
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		int32_t L_12 = ___groupLen2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_13 = ___groupLen2;
		G_B4_0 = ((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = 0;
	}

IL_003f:
	{
		V_6 = (bool)G_B4_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		CharU5BU5D_t3528271667* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)32));
		V_4 = 0;
	}

IL_0053:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = ___lineLen1;
		V_7 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0076;
		}
	}
	{
		CharU5BU5D_t3528271667* L_21 = V_0;
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)((int32_t)13));
		CharU5BU5D_t3528271667* L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)((int32_t)10));
		V_3 = 0;
	}

IL_0076:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_28 = V_1;
		String_t* L_29 = ___inStr0;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m3847582255(L_29, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_8;
		if (L_31)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_32 = V_0;
		String_t* L_33 = String_CreateString_m2818852475(NULL, L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		String_t* L_34 = V_5;
		CharU5BU5D_t3528271667* L_35 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_34);
		String_t* L_36 = String_TrimEnd_m3824727301(L_34, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		String_t* L_37 = V_5;
		CharU5BU5D_t3528271667* L_38 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_39 = L_38;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_37);
		String_t* L_40 = String_TrimEnd_m3824727301(L_37, L_39, /*hidden argument*/NULL);
		V_5 = L_40;
		String_t* L_41 = V_5;
		CharU5BU5D_t3528271667* L_42 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_43 = L_42;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)13));
		NullCheck(L_41);
		String_t* L_44 = String_TrimEnd_m3824727301(L_41, L_43, /*hidden argument*/NULL);
		V_5 = L_44;
		String_t* L_45 = V_5;
		V_9 = L_45;
		goto IL_00cf;
	}

IL_00cf:
	{
		String_t* L_46 = V_9;
		return L_46;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GenStr(System.Int32,System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_GenStr_m1521306602 (RuntimeObject * __this /* static, unused */, int32_t ___len0, Il2CppChar ___xch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_GenStr_m1521306602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = ___len0;
		CharU5BU5D_t3528271667* L_1 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0016;
	}

IL_000c:
	{
		CharU5BU5D_t3528271667* L_2 = V_0;
		int32_t L_3 = V_1;
		Il2CppChar L_4 = ___xch1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)L_4);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___len0;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_9 = V_0;
		String_t* L_10 = String_CreateString_m2818852475(NULL, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_11 = V_3;
		return L_11;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToLong(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Util_BytesToLong_m127415879 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = 0;
		goto IL_0017;
	}

IL_0008:
	{
		int64_t L_0 = V_0;
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_0<<(int32_t)8))|(int64_t)(((int64_t)((uint64_t)L_4)))));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_t4116647657* L_7 = ___bytes0;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0008;
		}
	}
	{
		int64_t L_9 = V_0;
		V_3 = L_9;
		goto IL_0025;
	}

IL_0025:
	{
		int64_t L_10 = V_3;
		return L_10;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::BytesToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_BytesToString_m2331954563 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_BytesToString_m2331954563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CharU5BU5D_t3528271667* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		V_0 = _stringLiteral757602046;
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) < ((int32_t)1))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = V_0;
		V_3 = L_3;
		goto IL_0075;
	}

IL_001b:
	{
		ByteU5BU5D_t4116647657* L_4 = ___bytes0;
		NullCheck(L_4);
		CharU5BU5D_t3528271667* L_5 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))));
		V_1 = L_5;
		V_4 = 0;
		V_5 = 0;
		goto IL_0050;
	}

IL_002c:
	{
		ByteU5BU5D_t4116647657* L_6 = ___bytes0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		CharU5BU5D_t3528271667* L_11 = V_1;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		ByteU5BU5D_t4116647657* L_14 = ___bytes0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_17);
	}

IL_0049:
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_19 = V_4;
		ByteU5BU5D_t4116647657* L_20 = ___bytes0;
		NullCheck(L_20);
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length))))))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_002c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_22 = V_1;
		String_t* L_23 = String_CreateString_m2818852475(NULL, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		String_t* L_24 = V_0;
		CharU5BU5D_t3528271667* L_25 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_24);
		String_t* L_26 = String_TrimEnd_m3824727301(L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		String_t* L_27 = V_0;
		V_3 = L_27;
		goto IL_0075;
	}

IL_0075:
	{
		String_t* L_28 = V_3;
		return L_28;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::ToHexString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_ToHexString_m1008071469 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_ToHexString_m1008071469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		V_3 = (bool)((((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_4 = _stringLiteral757602046;
		goto IL_0060;
	}

IL_0012:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		NullCheck(L_2);
		CharU5BU5D_t3528271667* L_3 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), (int32_t)2)));
		V_0 = L_3;
		V_2 = 0;
		goto IL_004a;
	}

IL_0021:
	{
		ByteU5BU5D_t4116647657* L_4 = ___bytes0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		CharU5BU5D_t3528271667* L_8 = V_0;
		int32_t L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_10 = ((Asn1Util_t417944685_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t417944685_il2cpp_TypeInfo_var))->get_hexDigits_0();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((int32_t)L_11>>(int32_t)4));
		uint16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2))), (Il2CppChar)L_13);
		CharU5BU5D_t3528271667* L_14 = V_0;
		int32_t L_15 = V_2;
		CharU5BU5D_t3528271667* L_16 = ((Asn1Util_t417944685_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t417944685_il2cpp_TypeInfo_var))->get_hexDigits_0();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int32_t)L_17&(int32_t)((int32_t)15)));
		uint16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)), (int32_t)1))), (Il2CppChar)L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_21 = V_2;
		ByteU5BU5D_t4116647657* L_22 = ___bytes0;
		NullCheck(L_22);
		V_5 = (bool)((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length))))))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0021;
		}
	}
	{
		CharU5BU5D_t3528271667* L_24 = V_0;
		String_t* L_25 = String_CreateString_m2818852475(NULL, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		goto IL_0060;
	}

IL_0060:
	{
		String_t* L_26 = V_4;
		return L_26;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::BytePrecision(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Asn1Util_BytePrecision_m877676457 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 4;
		goto IL_001d;
	}

IL_0005:
	{
		uint64_t L_0 = ___value0;
		int32_t L_1 = V_0;
		V_1 = (bool)((!(((uint64_t)((int64_t)((uint64_t)L_0>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), (int32_t)8))&(int32_t)((int32_t)63)))))) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0025;
	}

IL_0019:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0005;
		}
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		V_3 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_7 = V_3;
		return L_7;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Asn1Util::DERLengthEncode(System.IO.Stream,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Asn1Util_DERLengthEncode_m3699318424 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___xdata0, uint64_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_DERLengthEncode_m3699318424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		uint64_t L_0 = ___length1;
		V_1 = (bool)((((int32_t)((!(((uint64_t)L_0) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)127)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Stream_t1273022909 * L_2 = ___xdata0;
		uint64_t L_3 = ___length1;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(30 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (uint8_t)(((int32_t)((uint8_t)L_3))));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0068;
	}

IL_0021:
	{
		Stream_t1273022909 * L_5 = ___xdata0;
		uint64_t L_6 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int32_t L_7 = Asn1Util_BytePrecision_m877676457(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< uint8_t >::Invoke(30 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_5, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)128)))))));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		uint64_t L_9 = ___length1;
		int32_t L_10 = Asn1Util_BytePrecision_m877676457(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_005f;
	}

IL_0043:
	{
		Stream_t1273022909 * L_11 = ___xdata0;
		uint64_t L_12 = ___length1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		VirtActionInvoker1< uint8_t >::Invoke(30 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_11, (uint8_t)(((int32_t)((uint8_t)((int64_t)((uint64_t)L_12>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), (int32_t)8))&(int32_t)((int32_t)63)))))))));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		V_3 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0043;
		}
	}
	{
	}

IL_0068:
	{
		int32_t L_18 = V_0;
		V_4 = L_18;
		goto IL_006d;
	}

IL_006d:
	{
		int32_t L_19 = V_4;
		return L_19;
	}
}
// System.Int64 LipingShare.LCLib.Asn1Processor.Asn1Util::DerLengthDecode(System.IO.Stream,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR int64_t Asn1Util_DerLengthDecode_m3873201477 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___bt0, bool* ___isIndefiniteLength1, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	int64_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		bool* L_0 = ___isIndefiniteLength1;
		*((int8_t*)(L_0)) = (int8_t)0;
		V_0 = (((int64_t)((int64_t)0)));
		Stream_t1273022909 * L_1 = ___bt0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_2)));
		uint8_t L_3 = V_1;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_5 = V_1;
		V_0 = (((int64_t)((uint64_t)L_5)));
		goto IL_007d;
	}

IL_0024:
	{
		uint8_t L_6 = V_1;
		V_3 = (((int64_t)((int64_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)127))))));
		int64_t L_7 = V_3;
		V_4 = (bool)((((int64_t)L_7) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		bool* L_9 = ___isIndefiniteLength1;
		*((int8_t*)(L_9)) = (int8_t)1;
		V_5 = (((int64_t)((int64_t)((int32_t)-2))));
		goto IL_0082;
	}

IL_0041:
	{
		V_0 = (((int64_t)((int64_t)0)));
		goto IL_006c;
	}

IL_0046:
	{
		int64_t L_10 = V_0;
		V_6 = (bool)((((int64_t)((int64_t)((int64_t)L_10>>(int32_t)((int32_t)24)))) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		V_5 = (((int64_t)((int64_t)(-1))));
		goto IL_0082;
	}

IL_005c:
	{
		Stream_t1273022909 * L_12 = ___bt0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_12);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_13)));
		int64_t L_14 = V_0;
		uint8_t L_15 = V_1;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_14<<(int32_t)8))|(int64_t)(((int64_t)((uint64_t)L_15)))));
	}

IL_006c:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_17, (int64_t)(((int64_t)((int64_t)1)))));
		V_7 = (bool)((((int64_t)L_17) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_18 = V_7;
		if (L_18)
		{
			goto IL_0046;
		}
	}
	{
	}

IL_007d:
	{
		int64_t L_19 = V_0;
		V_5 = L_19;
		goto IL_0082;
	}

IL_0082:
	{
		int64_t L_20 = V_5;
		return L_20;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Asn1Util::GetTagName(System.Byte)
extern "C" IL2CPP_METHOD_ATTR String_t* Asn1Util_GetTagName_m1475833851 (RuntimeObject * __this /* static, unused */, uint8_t ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util_GetTagName_m1475833851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		V_0 = _stringLiteral757602046;
		uint8_t L_0 = ___tag0;
		V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)192)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_00fa;
		}
	}
	{
		uint8_t L_2 = ___tag0;
		V_2 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)192)));
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)32))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00f4;
	}

IL_003b:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)64))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)128))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_004c;
	}

IL_004c:
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)192))))
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00f4;
	}

IL_0059:
	{
		String_t* L_9 = V_0;
		uint8_t L_10 = ___tag0;
		V_3 = ((int32_t)((int32_t)L_10&(int32_t)((int32_t)31)));
		String_t* L_11 = Int32_ToString_m141394615((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_m2163913788(NULL /*static, unused*/, L_9, _stringLiteral2182712497, L_11, _stringLiteral3452614535, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_00f4;
	}

IL_0078:
	{
		String_t* L_13 = V_0;
		uint8_t L_14 = ___tag0;
		V_3 = ((int32_t)((int32_t)L_14&(int32_t)((int32_t)31)));
		String_t* L_15 = Int32_ToString_m141394615((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_16 = String_Concat_m2163913788(NULL /*static, unused*/, L_13, _stringLiteral681157191, L_15, _stringLiteral3452614535, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_00f4;
	}

IL_0097:
	{
		String_t* L_17 = V_0;
		uint8_t L_18 = ___tag0;
		V_3 = ((int32_t)((int32_t)L_18&(int32_t)((int32_t)31)));
		String_t* L_19 = Int32_ToString_m141394615((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_m2163913788(NULL /*static, unused*/, L_17, _stringLiteral77588727, L_19, _stringLiteral3452614535, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_00f4;
	}

IL_00b6:
	{
		String_t* L_21 = V_0;
		uint8_t L_22 = ___tag0;
		V_3 = ((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)));
		String_t* L_23 = Int32_ToString_m141394615((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_24 = String_Concat_m2163913788(NULL /*static, unused*/, L_21, _stringLiteral1097139669, L_23, _stringLiteral3452614535, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_00f4;
	}

IL_00d5:
	{
		String_t* L_25 = V_0;
		uint8_t L_26 = ___tag0;
		V_3 = ((int32_t)((int32_t)L_26&(int32_t)((int32_t)31)));
		String_t* L_27 = Int32_ToString_m141394615((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_28 = String_Concat_m2163913788(NULL /*static, unused*/, L_25, _stringLiteral4079033400, L_27, _stringLiteral3452614535, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_00f4;
	}

IL_00f4:
	{
		goto IL_0336;
	}

IL_00fa:
	{
		uint8_t L_29 = ___tag0;
		V_4 = ((int32_t)((int32_t)L_29&(int32_t)((int32_t)31)));
		int32_t L_30 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0187;
			}
			case 1:
			{
				goto IL_0198;
			}
			case 2:
			{
				goto IL_01a9;
			}
			case 3:
			{
				goto IL_01ba;
			}
			case 4:
			{
				goto IL_01cb;
			}
			case 5:
			{
				goto IL_01dc;
			}
			case 6:
			{
				goto IL_01ed;
			}
			case 7:
			{
				goto IL_020f;
			}
			case 8:
			{
				goto IL_0220;
			}
			case 9:
			{
				goto IL_0231;
			}
			case 10:
			{
				goto IL_0326;
			}
			case 11:
			{
				goto IL_0242;
			}
			case 12:
			{
				goto IL_01fe;
			}
			case 13:
			{
				goto IL_0326;
			}
			case 14:
			{
				goto IL_0326;
			}
			case 15:
			{
				goto IL_0253;
			}
			case 16:
			{
				goto IL_0264;
			}
			case 17:
			{
				goto IL_0275;
			}
			case 18:
			{
				goto IL_0286;
			}
			case 19:
			{
				goto IL_0297;
			}
			case 20:
			{
				goto IL_02a8;
			}
			case 21:
			{
				goto IL_02b6;
			}
			case 22:
			{
				goto IL_02c4;
			}
			case 23:
			{
				goto IL_02d2;
			}
			case 24:
			{
				goto IL_02e0;
			}
			case 25:
			{
				goto IL_02ee;
			}
			case 26:
			{
				goto IL_02fc;
			}
			case 27:
			{
				goto IL_030a;
			}
			case 28:
			{
				goto IL_0326;
			}
			case 29:
			{
				goto IL_0318;
			}
		}
	}
	{
		goto IL_0326;
	}

IL_0187:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = String_Concat_m3937257545(NULL /*static, unused*/, L_31, _stringLiteral508155150, /*hidden argument*/NULL);
		V_0 = L_32;
		goto IL_0334;
	}

IL_0198:
	{
		String_t* L_33 = V_0;
		String_t* L_34 = String_Concat_m3937257545(NULL /*static, unused*/, L_33, _stringLiteral1851976586, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_0334;
	}

IL_01a9:
	{
		String_t* L_35 = V_0;
		String_t* L_36 = String_Concat_m3937257545(NULL /*static, unused*/, L_35, _stringLiteral237776671, /*hidden argument*/NULL);
		V_0 = L_36;
		goto IL_0334;
	}

IL_01ba:
	{
		String_t* L_37 = V_0;
		String_t* L_38 = String_Concat_m3937257545(NULL /*static, unused*/, L_37, _stringLiteral3748652936, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_0334;
	}

IL_01cb:
	{
		String_t* L_39 = V_0;
		String_t* L_40 = String_Concat_m3937257545(NULL /*static, unused*/, L_39, _stringLiteral1602229408, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0334;
	}

IL_01dc:
	{
		String_t* L_41 = V_0;
		String_t* L_42 = String_Concat_m3937257545(NULL /*static, unused*/, L_41, _stringLiteral3113638736, /*hidden argument*/NULL);
		V_0 = L_42;
		goto IL_0334;
	}

IL_01ed:
	{
		String_t* L_43 = V_0;
		String_t* L_44 = String_Concat_m3937257545(NULL /*static, unused*/, L_43, _stringLiteral3138049181, /*hidden argument*/NULL);
		V_0 = L_44;
		goto IL_0334;
	}

IL_01fe:
	{
		String_t* L_45 = V_0;
		String_t* L_46 = String_Concat_m3937257545(NULL /*static, unused*/, L_45, _stringLiteral1158275292, /*hidden argument*/NULL);
		V_0 = L_46;
		goto IL_0334;
	}

IL_020f:
	{
		String_t* L_47 = V_0;
		String_t* L_48 = String_Concat_m3937257545(NULL /*static, unused*/, L_47, _stringLiteral785355122, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_0334;
	}

IL_0220:
	{
		String_t* L_49 = V_0;
		String_t* L_50 = String_Concat_m3937257545(NULL /*static, unused*/, L_49, _stringLiteral2360695731, /*hidden argument*/NULL);
		V_0 = L_50;
		goto IL_0334;
	}

IL_0231:
	{
		String_t* L_51 = V_0;
		String_t* L_52 = String_Concat_m3937257545(NULL /*static, unused*/, L_51, _stringLiteral407416507, /*hidden argument*/NULL);
		V_0 = L_52;
		goto IL_0334;
	}

IL_0242:
	{
		String_t* L_53 = V_0;
		String_t* L_54 = String_Concat_m3937257545(NULL /*static, unused*/, L_53, _stringLiteral2935935666, /*hidden argument*/NULL);
		V_0 = L_54;
		goto IL_0334;
	}

IL_0253:
	{
		String_t* L_55 = V_0;
		String_t* L_56 = String_Concat_m3937257545(NULL /*static, unused*/, L_55, _stringLiteral67591034, /*hidden argument*/NULL);
		V_0 = L_56;
		goto IL_0334;
	}

IL_0264:
	{
		String_t* L_57 = V_0;
		String_t* L_58 = String_Concat_m3937257545(NULL /*static, unused*/, L_57, _stringLiteral1130393555, /*hidden argument*/NULL);
		V_0 = L_58;
		goto IL_0334;
	}

IL_0275:
	{
		String_t* L_59 = V_0;
		String_t* L_60 = String_Concat_m3937257545(NULL /*static, unused*/, L_59, _stringLiteral1849104631, /*hidden argument*/NULL);
		V_0 = L_60;
		goto IL_0334;
	}

IL_0286:
	{
		String_t* L_61 = V_0;
		String_t* L_62 = String_Concat_m3937257545(NULL /*static, unused*/, L_61, _stringLiteral1593892663, /*hidden argument*/NULL);
		V_0 = L_62;
		goto IL_0334;
	}

IL_0297:
	{
		String_t* L_63 = V_0;
		String_t* L_64 = String_Concat_m3937257545(NULL /*static, unused*/, L_63, _stringLiteral1965184254, /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_0334;
	}

IL_02a8:
	{
		String_t* L_65 = V_0;
		String_t* L_66 = String_Concat_m3937257545(NULL /*static, unused*/, L_65, _stringLiteral3470491874, /*hidden argument*/NULL);
		V_0 = L_66;
		goto IL_0334;
	}

IL_02b6:
	{
		String_t* L_67 = V_0;
		String_t* L_68 = String_Concat_m3937257545(NULL /*static, unused*/, L_67, _stringLiteral3361566829, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_0334;
	}

IL_02c4:
	{
		String_t* L_69 = V_0;
		String_t* L_70 = String_Concat_m3937257545(NULL /*static, unused*/, L_69, _stringLiteral2742154383, /*hidden argument*/NULL);
		V_0 = L_70;
		goto IL_0334;
	}

IL_02d2:
	{
		String_t* L_71 = V_0;
		String_t* L_72 = String_Concat_m3937257545(NULL /*static, unused*/, L_71, _stringLiteral1941989764, /*hidden argument*/NULL);
		V_0 = L_72;
		goto IL_0334;
	}

IL_02e0:
	{
		String_t* L_73 = V_0;
		String_t* L_74 = String_Concat_m3937257545(NULL /*static, unused*/, L_73, _stringLiteral103687978, /*hidden argument*/NULL);
		V_0 = L_74;
		goto IL_0334;
	}

IL_02ee:
	{
		String_t* L_75 = V_0;
		String_t* L_76 = String_Concat_m3937257545(NULL /*static, unused*/, L_75, _stringLiteral731526909, /*hidden argument*/NULL);
		V_0 = L_76;
		goto IL_0334;
	}

IL_02fc:
	{
		String_t* L_77 = V_0;
		String_t* L_78 = String_Concat_m3937257545(NULL /*static, unused*/, L_77, _stringLiteral2032194934, /*hidden argument*/NULL);
		V_0 = L_78;
		goto IL_0334;
	}

IL_030a:
	{
		String_t* L_79 = V_0;
		String_t* L_80 = String_Concat_m3937257545(NULL /*static, unused*/, L_79, _stringLiteral1683986553, /*hidden argument*/NULL);
		V_0 = L_80;
		goto IL_0334;
	}

IL_0318:
	{
		String_t* L_81 = V_0;
		String_t* L_82 = String_Concat_m3937257545(NULL /*static, unused*/, L_81, _stringLiteral526389043, /*hidden argument*/NULL);
		V_0 = L_82;
		goto IL_0334;
	}

IL_0326:
	{
		String_t* L_83 = V_0;
		String_t* L_84 = String_Concat_m3937257545(NULL /*static, unused*/, L_83, _stringLiteral3066821586, /*hidden argument*/NULL);
		V_0 = L_84;
		goto IL_0334;
	}

IL_0334:
	{
	}

IL_0336:
	{
		String_t* L_85 = V_0;
		V_5 = L_85;
		goto IL_033b;
	}

IL_033b:
	{
		String_t* L_86 = V_5;
		return L_86;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Asn1Util::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Asn1Util__cctor_m3701085705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Asn1Util__cctor_m3701085705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t3528271667* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Asn1Util_t417944685_StaticFields*)il2cpp_codegen_static_fields_for(Asn1Util_t417944685_il2cpp_TypeInfo_var))->set_hexDigits_0(L_1);
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
// System.String LipingShare.LCLib.Asn1Processor.Oid::GetOidName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Oid_GetOidName_m3765086347 (Oid_t864847193 * __this, String_t* ___inOidStr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_GetOidName_m3765086347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t864847193_il2cpp_TypeInfo_var);
		StringDictionary_t120437468 * L_0 = ((Oid_t864847193_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t864847193_il2cpp_TypeInfo_var))->get_oidDictionary_0();
		V_0 = (bool)((((RuntimeObject*)(StringDictionary_t120437468 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		StringDictionary_t120437468 * L_2 = (StringDictionary_t120437468 *)il2cpp_codegen_object_new(StringDictionary_t120437468_il2cpp_TypeInfo_var);
		StringDictionary__ctor_m4172756934(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t864847193_il2cpp_TypeInfo_var);
		((Oid_t864847193_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t864847193_il2cpp_TypeInfo_var))->set_oidDictionary_0(L_2);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t864847193_il2cpp_TypeInfo_var);
		StringDictionary_t120437468 * L_3 = ((Oid_t864847193_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t864847193_il2cpp_TypeInfo_var))->get_oidDictionary_0();
		String_t* L_4 = ___inOidStr0;
		NullCheck(L_3);
		String_t* L_5 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Collections.Specialized.StringDictionary::get_Item(System.String) */, L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Oid_Decode_m1229707463 (Oid_t864847193 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_Decode_m1229707463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		MemoryStream_t94973147 * L_1 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_t94973147 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_2, (((int64_t)((int64_t)0))));
		MemoryStream_t94973147 * L_3 = V_0;
		String_t* L_4 = VirtFuncInvoker1< String_t*, Stream_t1273022909 * >::Invoke(4 /* System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream) */, __this, L_3);
		V_1 = L_4;
		MemoryStream_t94973147 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_5);
		String_t* L_6 = V_1;
		V_2 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.Oid::Decode(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR String_t* Oid_Decode_m52904117 (Oid_t864847193 * __this, Stream_t1273022909 * ___bt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid_Decode_m52904117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint64_t V_2 = 0;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral757602046;
		V_2 = (((int64_t)((int64_t)0)));
		Stream_t1273022909 * L_0 = ___bt0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_1 = (uint8_t)(((int32_t)((uint8_t)L_1)));
		String_t* L_2 = V_0;
		uint8_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_4 = Convert_ToString_m3064051180(NULL /*static, unused*/, ((int32_t)((int32_t)L_3/(int32_t)((int32_t)40))), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		uint8_t L_7 = V_1;
		String_t* L_8 = Convert_ToString_m3064051180(NULL /*static, unused*/, ((int32_t)((int32_t)L_7%(int32_t)((int32_t)40))), /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_m3755062657(NULL /*static, unused*/, L_6, _stringLiteral3452614530, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0074;
	}

IL_0039:
	{
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		Stream_t1273022909 * L_10 = ___bt0;
		Oid_DecodeValue_m1702316871(__this, L_10, (uint64_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_11 = V_0;
		String_t* L_12 = UInt64_ToString_m1529093114((uint64_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_m3755062657(NULL /*static, unused*/, L_11, _stringLiteral3452614530, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0073;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005b;
		throw e;
	}

CATCH_005b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		Exception_t * L_14 = V_3;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1678670602, L_15, /*hidden argument*/NULL);
		Exception_t * L_17 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Oid_Decode_m52904117_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0073:
	{
	}

IL_0074:
	{
		Stream_t1273022909 * L_18 = ___bt0;
		NullCheck(L_18);
		int64_t L_19 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
		Stream_t1273022909 * L_20 = ___bt0;
		NullCheck(L_20);
		int64_t L_21 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
		V_4 = (bool)((((int64_t)L_19) < ((int64_t)L_21))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_23 = V_0;
		V_5 = L_23;
		goto IL_008d;
	}

IL_008d:
	{
		String_t* L_24 = V_5;
		return L_24;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Oid__ctor_m4234155318 (Oid_t864847193 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LipingShare.LCLib.Asn1Processor.Oid::DecodeValue(System.IO.Stream,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR int32_t Oid_DecodeValue_m1702316871 (Oid_t864847193 * __this, Stream_t1273022909 * ___bt0, uint64_t* ___v1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_1 = 0;
		uint64_t* L_0 = ___v1;
		*((int64_t*)(L_0)) = (int64_t)(((int64_t)((int64_t)0)));
		goto IL_0039;
	}

IL_0009:
	{
		Stream_t1273022909 * L_1 = ___bt0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_0 = (uint8_t)(((int32_t)((uint8_t)L_2)));
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		uint64_t* L_4 = ___v1;
		uint64_t* L_5 = ___v1;
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)(L_4)) = (int64_t)((int64_t)((int64_t)L_6<<(int32_t)7));
		uint64_t* L_7 = ___v1;
		uint64_t* L_8 = ___v1;
		int64_t L_9 = *((int64_t*)L_8);
		uint8_t L_10 = V_0;
		*((int64_t*)(L_7)) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)127))))))));
		uint8_t L_11 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_1;
		V_3 = L_13;
		goto IL_003e;
	}

IL_0038:
	{
	}

IL_0039:
	{
		V_4 = (bool)1;
		goto IL_0009;
	}

IL_003e:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Void LipingShare.LCLib.Asn1Processor.Oid::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Oid__cctor_m2371476853 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Oid__cctor_m2371476853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Oid_t864847193_StaticFields*)il2cpp_codegen_static_fields_for(Oid_t864847193_il2cpp_TypeInfo_var))->set_oidDictionary_0((StringDictionary_t120437468 *)NULL);
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
// System.Void LipingShare.LCLib.Asn1Processor.RelativeOid::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RelativeOid__ctor_m2367190897 (RelativeOid_t4118021937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RelativeOid__ctor_m2367190897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Oid_t864847193_il2cpp_TypeInfo_var);
		Oid__ctor_m4234155318(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String LipingShare.LCLib.Asn1Processor.RelativeOid::Decode(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR String_t* RelativeOid_Decode_m3372241489 (RelativeOid_t4118021937 * __this, Stream_t1273022909 * ___bt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RelativeOid_Decode_m3372241489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral757602046;
		V_1 = (((int64_t)((int64_t)0)));
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_000e:
	{
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Stream_t1273022909 * L_0 = ___bt0;
			Oid_DecodeValue_m1702316871(__this, L_0, (uint64_t*)(&V_1), /*hidden argument*/NULL);
			bool L_1 = V_2;
			V_3 = L_1;
			bool L_2 = V_3;
			if (!L_2)
			{
				goto IL_002d;
			}
		}

IL_001f:
		{
			String_t* L_3 = UInt64_ToString_m1529093114((uint64_t*)(&V_1), /*hidden argument*/NULL);
			V_0 = L_3;
			V_2 = (bool)0;
			goto IL_0042;
		}

IL_002d:
		{
			String_t* L_4 = V_0;
			String_t* L_5 = UInt64_ToString_m1529093114((uint64_t*)(&V_1), /*hidden argument*/NULL);
			String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, L_4, _stringLiteral3452614530, L_5, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0042:
		{
			goto IL_005f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0045;
		throw e;
	}

CATCH_0045:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		Exception_t * L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1678670602, L_8, /*hidden argument*/NULL);
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, RelativeOid_Decode_m3372241489_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_005f:
	{
	}

IL_0060:
	{
		Stream_t1273022909 * L_11 = ___bt0;
		NullCheck(L_11);
		int64_t L_12 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_11);
		Stream_t1273022909 * L_13 = ___bt0;
		NullCheck(L_13);
		int64_t L_14 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_13);
		V_5 = (bool)((((int64_t)L_12) < ((int64_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_16 = V_0;
		V_6 = L_16;
		goto IL_0079;
	}

IL_0079:
	{
		String_t* L_17 = V_6;
		return L_17;
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
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_m2123225361 (AppleInAppPurchaseReceipt_t3844914963 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CquantityU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID()
extern "C" IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m3830692640 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CproductIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m904954032 (AppleInAppPurchaseReceipt_t3844914963 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIDU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_transactionID()
extern "C" IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_transactionID_m2457541587 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CtransactionIDU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m721682744 (AppleInAppPurchaseReceipt_t3844914963 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalTransactionIdentifier()
extern "C" IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_originalTransactionIdentifier_m1852730113 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_m3758916209 (AppleInAppPurchaseReceipt_t3844914963 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AppleInAppPurchaseReceipt_get_purchaseDate_m3413682538 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_U3CpurchaseDateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m2124509722 (AppleInAppPurchaseReceipt_t3844914963 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CpurchaseDateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalPurchaseDate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AppleInAppPurchaseReceipt_get_originalPurchaseDate_m2048800708 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_U3CoriginalPurchaseDateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_m3497489931 (AppleInAppPurchaseReceipt_t3844914963 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CoriginalPurchaseDateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m4256132132 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_U3CsubscriptionExpirationDateU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m414817625 (AppleInAppPurchaseReceipt_t3844914963 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AppleInAppPurchaseReceipt_get_cancellationDate_m2022132085 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_U3CcancellationDateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m3716811454 (AppleInAppPurchaseReceipt_t3844914963 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CcancellationDateU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial()
extern "C" IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_m592510615 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisFreeTrialU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m1355330003 (AppleInAppPurchaseReceipt_t3844914963 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisFreeTrialU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType()
extern "C" IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_m1115056757 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CproductTypeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_m1472513991 (AppleInAppPurchaseReceipt_t3844914963 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CproductTypeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod()
extern "C" IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m333073518 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m887429687 (AppleInAppPurchaseReceipt_t3844914963 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_m581017134 (AppleInAppPurchaseReceipt_t3844914963 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m1478564596 (AppleReceipt_t1677859958 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CbundleIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m409296250 (AppleReceipt_t1677859958 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CappVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_m569662551 (AppleReceipt_t1677859958 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_U3CopaqueU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_m1808658247 (AppleReceipt_t1677859958 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_U3ChashU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String)
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m1628679311 (AppleReceipt_t1677859958 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CoriginalApplicationVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m3107181451 (AppleReceipt_t1677859958 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CreceiptCreationDateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AppleReceipt__ctor_m430809794 (AppleReceipt_t1677859958 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR AppleReceipt_t1677859958 * AppleReceiptParser_Parse_m2087174921 (AppleReceiptParser_t1990668756 * __this, ByteU5BU5D_t4116647657* ___receiptData0, const RuntimeMethod* method)
{
	PKCS7_t350312378 * V_0 = NULL;
	AppleReceipt_t1677859958 * V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___receiptData0;
		AppleReceipt_t1677859958 * L_1 = AppleReceiptParser_Parse_m511601021(__this, L_0, (PKCS7_t350312378 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		AppleReceipt_t1677859958 * L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::Parse(System.Byte[],UnityEngine.Purchasing.Security.PKCS7&)
extern "C" IL2CPP_METHOD_ATTR AppleReceipt_t1677859958 * AppleReceiptParser_Parse_m511601021 (AppleReceiptParser_t1990668756 * __this, ByteU5BU5D_t4116647657* ___receiptData0, PKCS7_t350312378 ** ___receipt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_Parse_m511601021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AppleReceipt_t1677859958 * V_1 = NULL;
	MemoryStream_t94973147 * V_2 = NULL;
	Asn1Parser_t1261554413 * V_3 = NULL;
	AppleReceipt_t1677859958 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_0 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_0);
		bool L_1 = Dictionary_2_ContainsKey_m702451950(L_0, _stringLiteral183614935, /*hidden argument*/Dictionary_2_ContainsKey_m702451950_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_2 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_2);
		bool L_3 = Dictionary_2_ContainsKey_m702451950(L_2, _stringLiteral2921149420, /*hidden argument*/Dictionary_2_ContainsKey_m702451950_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_4 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_4);
		bool L_5 = Dictionary_2_ContainsKey_m702451950(L_4, _stringLiteral3757087297, /*hidden argument*/Dictionary_2_ContainsKey_m702451950_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = ___receiptData0;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_7 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_m1539906286(L_7, _stringLiteral3757087297, /*hidden argument*/Dictionary_2_get_Item_m1539906286_RuntimeMethod_var);
		bool L_9 = AppleReceiptParser_ArrayEquals_TisByte_t1134296376_m591762719(NULL /*static, unused*/, L_6, ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_8, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)), /*hidden argument*/AppleReceiptParser_ArrayEquals_TisByte_t1134296376_m591762719_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_0 = (bool)G_B5_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		PKCS7_t350312378 ** L_11 = ___receipt1;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_12 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_12);
		RuntimeObject * L_13 = Dictionary_2_get_Item_m1539906286(L_12, _stringLiteral2921149420, /*hidden argument*/Dictionary_2_get_Item_m1539906286_RuntimeMethod_var);
		*((RuntimeObject **)(L_11)) = (RuntimeObject *)((PKCS7_t350312378 *)CastclassClass((RuntimeObject*)L_13, PKCS7_t350312378_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_11), (RuntimeObject *)((PKCS7_t350312378 *)CastclassClass((RuntimeObject*)L_13, PKCS7_t350312378_il2cpp_TypeInfo_var)));
		Dictionary_2_t2865362463 * L_14 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		NullCheck(L_14);
		RuntimeObject * L_15 = Dictionary_2_get_Item_m1539906286(L_14, _stringLiteral183614935, /*hidden argument*/Dictionary_2_get_Item_m1539906286_RuntimeMethod_var);
		V_1 = ((AppleReceipt_t1677859958 *)CastclassClass((RuntimeObject*)L_15, AppleReceipt_t1677859958_il2cpp_TypeInfo_var));
		goto IL_00fa;
	}

IL_0083:
	{
		ByteU5BU5D_t4116647657* L_16 = ___receiptData0;
		MemoryStream_t94973147 * L_17 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_17, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		Asn1Parser_t1261554413 * L_18 = (Asn1Parser_t1261554413 *)il2cpp_codegen_object_new(Asn1Parser_t1261554413_il2cpp_TypeInfo_var);
		Asn1Parser__ctor_m67072856(L_18, /*hidden argument*/NULL);
		V_3 = L_18;
		Asn1Parser_t1261554413 * L_19 = V_3;
		MemoryStream_t94973147 * L_20 = V_2;
		NullCheck(L_19);
		Asn1Parser_LoadData_m188276828(L_19, L_20, /*hidden argument*/NULL);
		PKCS7_t350312378 ** L_21 = ___receipt1;
		Asn1Parser_t1261554413 * L_22 = V_3;
		NullCheck(L_22);
		Asn1Node_t84807007 * L_23 = Asn1Parser_get_RootNode_m1090940623(L_22, /*hidden argument*/NULL);
		PKCS7_t350312378 * L_24 = (PKCS7_t350312378 *)il2cpp_codegen_object_new(PKCS7_t350312378_il2cpp_TypeInfo_var);
		PKCS7__ctor_m2141173023(L_24, L_23, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_21)) = (RuntimeObject *)L_24;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_21), (RuntimeObject *)L_24);
		PKCS7_t350312378 ** L_25 = ___receipt1;
		PKCS7_t350312378 * L_26 = *((PKCS7_t350312378 **)L_25);
		NullCheck(L_26);
		Asn1Node_t84807007 * L_27 = PKCS7_get_data_m1538194679(L_26, /*hidden argument*/NULL);
		AppleReceipt_t1677859958 * L_28 = AppleReceiptParser_ParseReceipt_m4064749857(__this, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_29 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		AppleReceipt_t1677859958 * L_30 = V_4;
		NullCheck(L_29);
		Dictionary_2_set_Item_m3155846050(L_29, _stringLiteral183614935, L_30, /*hidden argument*/Dictionary_2_set_Item_m3155846050_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_31 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		PKCS7_t350312378 ** L_32 = ___receipt1;
		PKCS7_t350312378 * L_33 = *((PKCS7_t350312378 **)L_32);
		NullCheck(L_31);
		Dictionary_2_set_Item_m3155846050(L_31, _stringLiteral2921149420, L_33, /*hidden argument*/Dictionary_2_set_Item_m3155846050_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_34 = ((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->get__mostRecentReceiptData_0();
		ByteU5BU5D_t4116647657* L_35 = ___receiptData0;
		NullCheck(L_34);
		Dictionary_2_set_Item_m3155846050(L_34, _stringLiteral3757087297, (RuntimeObject *)(RuntimeObject *)L_35, /*hidden argument*/Dictionary_2_set_Item_m3155846050_RuntimeMethod_var);
		AppleReceipt_t1677859958 * L_36 = V_4;
		V_1 = L_36;
		IL2CPP_LEAVE(0xFA, FINALLY_00ef);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ef;
	}

FINALLY_00ef:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_37 = V_2;
			if (!L_37)
			{
				goto IL_00f9;
			}
		}

IL_00f2:
		{
			MemoryStream_t94973147 * L_38 = V_2;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_38);
		}

IL_00f9:
		{
			IL2CPP_END_FINALLY(239)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(239)
	{
		IL2CPP_JUMP_TBL(0xFA, IL_00fa)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fa:
	{
		AppleReceipt_t1677859958 * L_39 = V_1;
		return L_39;
	}
}
// UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR AppleReceipt_t1677859958 * AppleReceiptParser_ParseReceipt_m4064749857 (AppleReceiptParser_t1990668756 * __this, Asn1Node_t84807007 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_ParseReceipt_m4064749857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t84807007 * V_0 = NULL;
	AppleReceipt_t1677859958 * V_1 = NULL;
	List_1_t1022022409 * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Asn1Node_t84807007 * V_5 = NULL;
	bool V_6 = false;
	int64_t V_7 = 0;
	Asn1Node_t84807007 * V_8 = NULL;
	int64_t V_9 = 0;
	String_t* V_10 = NULL;
	DateTime_t3738529785  V_11;
	memset(&V_11, 0, sizeof(V_11));
	bool V_12 = false;
	AppleReceipt_t1677859958 * V_13 = NULL;
	int32_t G_B3_0 = 0;
	int64_t G_B10_0 = 0;
	int64_t G_B9_0 = 0;
	{
		Asn1Node_t84807007 * L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Asn1Node_t84807007 * L_1 = ___data0;
		NullCheck(L_1);
		int64_t L_2 = Asn1Node_get_ChildNodeCount_m2235806103(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int64_t)L_2) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_4 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, AppleReceiptParser_ParseReceipt_m4064749857_RuntimeMethod_var);
	}

IL_001f:
	{
		Asn1Node_t84807007 * L_5 = ___data0;
		NullCheck(L_5);
		Asn1Node_t84807007 * L_6 = Asn1Node_GetChildNode_m2817937035(L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		AppleReceipt_t1677859958 * L_7 = (AppleReceipt_t1677859958 *)il2cpp_codegen_object_new(AppleReceipt_t1677859958_il2cpp_TypeInfo_var);
		AppleReceipt__ctor_m430809794(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		List_1_t1022022409 * L_8 = (List_1_t1022022409 *)il2cpp_codegen_object_new(List_1_t1022022409_il2cpp_TypeInfo_var);
		List_1__ctor_m127865374(L_8, /*hidden argument*/List_1__ctor_m127865374_RuntimeMethod_var);
		V_2 = L_8;
		V_4 = 0;
		goto IL_01aa;
	}

IL_003b:
	{
		Asn1Node_t84807007 * L_9 = V_0;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		Asn1Node_t84807007 * L_11 = Asn1Node_GetChildNode_m2817937035(L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Asn1Node_t84807007 * L_12 = V_5;
		NullCheck(L_12);
		int64_t L_13 = Asn1Node_get_ChildNodeCount_m2235806103(L_12, /*hidden argument*/NULL);
		V_6 = (bool)((((int64_t)L_13) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_01a3;
		}
	}
	{
		Asn1Node_t84807007 * L_15 = V_5;
		NullCheck(L_15);
		Asn1Node_t84807007 * L_16 = Asn1Node_GetChildNode_m2817937035(L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_t4116647657* L_17 = Asn1Node_get_Data_m379120612(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int64_t L_18 = Asn1Util_BytesToLong_m127415879(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		Asn1Node_t84807007 * L_19 = V_5;
		NullCheck(L_19);
		Asn1Node_t84807007 * L_20 = Asn1Node_GetChildNode_m2817937035(L_19, 2, /*hidden argument*/NULL);
		V_8 = L_20;
		int64_t L_21 = V_7;
		V_9 = L_21;
		int64_t L_22 = V_9;
		if ((((int64_t)L_22) > ((int64_t)(((int64_t)((int64_t)((int32_t)12)))))))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_23 = V_9;
		int64_t L_24 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_23, (int64_t)(((int64_t)((int64_t)2)))));
		G_B9_0 = L_24;
		if ((!(((uint64_t)L_24) > ((uint64_t)(((int64_t)((int64_t)3)))))))
		{
			G_B10_0 = L_24;
			goto IL_0091;
		}
	}
	{
		goto IL_00a9;
	}

IL_0091:
	{
		switch ((((int32_t)((uint32_t)G_B10_0))))
		{
			case 0:
			{
				goto IL_00d3;
			}
			case 1:
			{
				goto IL_00f6;
			}
			case 2:
			{
				goto IL_0119;
			}
			case 3:
			{
				goto IL_0129;
			}
		}
	}
	{
		goto IL_00a9;
	}

IL_00a9:
	{
		int64_t L_25 = V_9;
		if ((((int64_t)L_25) == ((int64_t)(((int64_t)((int64_t)((int32_t)12)))))))
		{
			goto IL_0139;
		}
	}
	{
		goto IL_01a2;
	}

IL_00b8:
	{
		int64_t L_26 = V_9;
		if ((((int64_t)L_26) == ((int64_t)(((int64_t)((int64_t)((int32_t)17)))))))
		{
			goto IL_016b;
		}
	}
	{
		goto IL_00c4;
	}

IL_00c4:
	{
		int64_t L_27 = V_9;
		if ((((int64_t)L_27) == ((int64_t)(((int64_t)((int64_t)((int32_t)19)))))))
		{
			goto IL_0182;
		}
	}
	{
		goto IL_01a2;
	}

IL_00d3:
	{
		AppleReceipt_t1677859958 * L_28 = V_1;
		Encoding_t1523322056 * L_29 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_30 = V_8;
		NullCheck(L_30);
		Asn1Node_t84807007 * L_31 = Asn1Node_GetChildNode_m2817937035(L_30, 0, /*hidden argument*/NULL);
		NullCheck(L_31);
		ByteU5BU5D_t4116647657* L_32 = Asn1Node_get_Data_m379120612(L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_33 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_29, L_32);
		NullCheck(L_28);
		AppleReceipt_set_bundleID_m1478564596(L_28, L_33, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_00f6:
	{
		AppleReceipt_t1677859958 * L_34 = V_1;
		Encoding_t1523322056 * L_35 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_36 = V_8;
		NullCheck(L_36);
		Asn1Node_t84807007 * L_37 = Asn1Node_GetChildNode_m2817937035(L_36, 0, /*hidden argument*/NULL);
		NullCheck(L_37);
		ByteU5BU5D_t4116647657* L_38 = Asn1Node_get_Data_m379120612(L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_39 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_35, L_38);
		NullCheck(L_34);
		AppleReceipt_set_appVersion_m409296250(L_34, L_39, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_0119:
	{
		AppleReceipt_t1677859958 * L_40 = V_1;
		Asn1Node_t84807007 * L_41 = V_8;
		NullCheck(L_41);
		ByteU5BU5D_t4116647657* L_42 = Asn1Node_get_Data_m379120612(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		AppleReceipt_set_opaque_m569662551(L_40, L_42, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_0129:
	{
		AppleReceipt_t1677859958 * L_43 = V_1;
		Asn1Node_t84807007 * L_44 = V_8;
		NullCheck(L_44);
		ByteU5BU5D_t4116647657* L_45 = Asn1Node_get_Data_m379120612(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		AppleReceipt_set_hash_m1808658247(L_43, L_45, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_0139:
	{
		Encoding_t1523322056 * L_46 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_47 = V_8;
		NullCheck(L_47);
		Asn1Node_t84807007 * L_48 = Asn1Node_GetChildNode_m2817937035(L_47, 0, /*hidden argument*/NULL);
		NullCheck(L_48);
		ByteU5BU5D_t4116647657* L_49 = Asn1Node_get_Data_m379120612(L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		String_t* L_50 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_46, L_49);
		V_10 = L_50;
		AppleReceipt_t1677859958 * L_51 = V_1;
		String_t* L_52 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_53 = DateTime_Parse_m2550724587(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		V_11 = L_53;
		DateTime_t3738529785  L_54 = DateTime_ToUniversalTime_m1945318289((DateTime_t3738529785 *)(&V_11), /*hidden argument*/NULL);
		NullCheck(L_51);
		AppleReceipt_set_receiptCreationDate_m3107181451(L_51, L_54, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_016b:
	{
		List_1_t1022022409 * L_55 = V_2;
		Asn1Node_t84807007 * L_56 = V_8;
		NullCheck(L_56);
		Asn1Node_t84807007 * L_57 = Asn1Node_GetChildNode_m2817937035(L_56, 0, /*hidden argument*/NULL);
		AppleInAppPurchaseReceipt_t3844914963 * L_58 = AppleReceiptParser_ParseInAppReceipt_m561782448(__this, L_57, /*hidden argument*/NULL);
		NullCheck(L_55);
		List_1_Add_m4129203260(L_55, L_58, /*hidden argument*/List_1_Add_m4129203260_RuntimeMethod_var);
		goto IL_01a2;
	}

IL_0182:
	{
		AppleReceipt_t1677859958 * L_59 = V_1;
		Encoding_t1523322056 * L_60 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_61 = V_8;
		NullCheck(L_61);
		Asn1Node_t84807007 * L_62 = Asn1Node_GetChildNode_m2817937035(L_61, 0, /*hidden argument*/NULL);
		NullCheck(L_62);
		ByteU5BU5D_t4116647657* L_63 = Asn1Node_get_Data_m379120612(L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		String_t* L_64 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_60, L_63);
		NullCheck(L_59);
		AppleReceipt_set_originalApplicationVersion_m1628679311(L_59, L_64, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_01a2:
	{
	}

IL_01a3:
	{
		int32_t L_65 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_01aa:
	{
		int32_t L_66 = V_4;
		Asn1Node_t84807007 * L_67 = V_0;
		NullCheck(L_67);
		int64_t L_68 = Asn1Node_get_ChildNodeCount_m2235806103(L_67, /*hidden argument*/NULL);
		V_12 = (bool)((((int64_t)(((int64_t)((int64_t)L_66)))) < ((int64_t)L_68))? 1 : 0);
		bool L_69 = V_12;
		if (L_69)
		{
			goto IL_003b;
		}
	}
	{
		AppleReceipt_t1677859958 * L_70 = V_1;
		List_1_t1022022409 * L_71 = V_2;
		NullCheck(L_71);
		AppleInAppPurchaseReceiptU5BU5D_t180321090* L_72 = List_1_ToArray_m1411323235(L_71, /*hidden argument*/List_1_ToArray_m1411323235_RuntimeMethod_var);
		NullCheck(L_70);
		L_70->set_inAppPurchaseReceipts_6(L_72);
		AppleReceipt_t1677859958 * L_73 = V_1;
		V_13 = L_73;
		goto IL_01cf;
	}

IL_01cf:
	{
		AppleReceipt_t1677859958 * L_74 = V_13;
		return L_74;
	}
}
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt UnityEngine.Purchasing.Security.AppleReceiptParser::ParseInAppReceipt(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR AppleInAppPurchaseReceipt_t3844914963 * AppleReceiptParser_ParseInAppReceipt_m561782448 (AppleReceiptParser_t1990668756 * __this, Asn1Node_t84807007 * ___inApp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_ParseInAppReceipt_m561782448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppleInAppPurchaseReceipt_t3844914963 * V_0 = NULL;
	int32_t V_1 = 0;
	Asn1Node_t84807007 * V_2 = NULL;
	bool V_3 = false;
	int64_t V_4 = 0;
	Asn1Node_t84807007 * V_5 = NULL;
	int64_t V_6 = 0;
	bool V_7 = false;
	AppleInAppPurchaseReceipt_t3844914963 * V_8 = NULL;
	int64_t G_B4_0 = 0;
	int64_t G_B3_0 = 0;
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_0 = (AppleInAppPurchaseReceipt_t3844914963 *)il2cpp_codegen_object_new(AppleInAppPurchaseReceipt_t3844914963_il2cpp_TypeInfo_var);
		AppleInAppPurchaseReceipt__ctor_m581017134(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01dc;
	}

IL_000e:
	{
		Asn1Node_t84807007 * L_1 = ___inApp0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Asn1Node_t84807007 * L_3 = Asn1Node_GetChildNode_m2817937035(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Asn1Node_t84807007 * L_4 = V_2;
		NullCheck(L_4);
		int64_t L_5 = Asn1Node_get_ChildNodeCount_m2235806103(L_4, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_5) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_01d7;
		}
	}
	{
		Asn1Node_t84807007 * L_7 = V_2;
		NullCheck(L_7);
		Asn1Node_t84807007 * L_8 = Asn1Node_GetChildNode_m2817937035(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = Asn1Node_get_Data_m379120612(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int64_t L_10 = Asn1Util_BytesToLong_m127415879(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Asn1Node_t84807007 * L_11 = V_2;
		NullCheck(L_11);
		Asn1Node_t84807007 * L_12 = Asn1Node_GetChildNode_m2817937035(L_11, 2, /*hidden argument*/NULL);
		V_5 = L_12;
		int64_t L_13 = V_4;
		V_6 = L_13;
		int64_t L_14 = V_6;
		int64_t L_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_14, (int64_t)(((int64_t)((int64_t)((int32_t)1701))))));
		G_B3_0 = L_15;
		if ((!(((uint64_t)L_15) > ((uint64_t)(((int64_t)((int64_t)((int32_t)18))))))))
		{
			G_B4_0 = L_15;
			goto IL_005e;
		}
	}
	{
		goto IL_01d4;
	}

IL_005e:
	{
		switch ((((int32_t)((uint32_t)G_B4_0))))
		{
			case 0:
			{
				goto IL_00b5;
			}
			case 1:
			{
				goto IL_00d4;
			}
			case 2:
			{
				goto IL_00f7;
			}
			case 3:
			{
				goto IL_013d;
			}
			case 4:
			{
				goto IL_011a;
			}
			case 5:
			{
				goto IL_0150;
			}
			case 6:
			{
				goto IL_0180;
			}
			case 7:
			{
				goto IL_0160;
			}
			case 8:
			{
				goto IL_01d4;
			}
			case 9:
			{
				goto IL_01d4;
			}
			case 10:
			{
				goto IL_01d4;
			}
			case 11:
			{
				goto IL_0170;
			}
			case 12:
			{
				goto IL_019c;
			}
			case 13:
			{
				goto IL_01d4;
			}
			case 14:
			{
				goto IL_01d4;
			}
			case 15:
			{
				goto IL_01d4;
			}
			case 16:
			{
				goto IL_01d4;
			}
			case 17:
			{
				goto IL_01d4;
			}
			case 18:
			{
				goto IL_01b8;
			}
		}
	}
	{
		goto IL_01d4;
	}

IL_00b5:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_16 = V_0;
		Asn1Node_t84807007 * L_17 = V_5;
		NullCheck(L_17);
		Asn1Node_t84807007 * L_18 = Asn1Node_GetChildNode_m2817937035(L_17, 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_t4116647657* L_19 = Asn1Node_get_Data_m379120612(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int64_t L_20 = Asn1Util_BytesToLong_m127415879(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		AppleInAppPurchaseReceipt_set_quantity_m2123225361(L_16, (((int32_t)((int32_t)L_20))), /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_00d4:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_21 = V_0;
		Encoding_t1523322056 * L_22 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_23 = V_5;
		NullCheck(L_23);
		Asn1Node_t84807007 * L_24 = Asn1Node_GetChildNode_m2817937035(L_23, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		ByteU5BU5D_t4116647657* L_25 = Asn1Node_get_Data_m379120612(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_26 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_22, L_25);
		NullCheck(L_21);
		AppleInAppPurchaseReceipt_set_productID_m904954032(L_21, L_26, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_00f7:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_27 = V_0;
		Encoding_t1523322056 * L_28 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_29 = V_5;
		NullCheck(L_29);
		Asn1Node_t84807007 * L_30 = Asn1Node_GetChildNode_m2817937035(L_29, 0, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_t4116647657* L_31 = Asn1Node_get_Data_m379120612(L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_32 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_28, L_31);
		NullCheck(L_27);
		AppleInAppPurchaseReceipt_set_transactionID_m721682744(L_27, L_32, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_011a:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_33 = V_0;
		Encoding_t1523322056 * L_34 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_35 = V_5;
		NullCheck(L_35);
		Asn1Node_t84807007 * L_36 = Asn1Node_GetChildNode_m2817937035(L_35, 0, /*hidden argument*/NULL);
		NullCheck(L_36);
		ByteU5BU5D_t4116647657* L_37 = Asn1Node_get_Data_m379120612(L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_38 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_34, L_37);
		NullCheck(L_33);
		AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_m3758916209(L_33, L_38, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_013d:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_39 = V_0;
		Asn1Node_t84807007 * L_40 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_41 = AppleReceiptParser_TryParseDateTimeNode_m978455633(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		AppleInAppPurchaseReceipt_set_purchaseDate_m2124509722(L_39, L_41, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_0150:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_42 = V_0;
		Asn1Node_t84807007 * L_43 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_44 = AppleReceiptParser_TryParseDateTimeNode_m978455633(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		AppleInAppPurchaseReceipt_set_originalPurchaseDate_m3497489931(L_42, L_44, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_0160:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_45 = V_0;
		Asn1Node_t84807007 * L_46 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_47 = AppleReceiptParser_TryParseDateTimeNode_m978455633(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_m414817625(L_45, L_47, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_0170:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_48 = V_0;
		Asn1Node_t84807007 * L_49 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_50 = AppleReceiptParser_TryParseDateTimeNode_m978455633(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		NullCheck(L_48);
		AppleInAppPurchaseReceipt_set_cancellationDate_m3716811454(L_48, L_50, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_0180:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_51 = V_0;
		Asn1Node_t84807007 * L_52 = V_5;
		NullCheck(L_52);
		Asn1Node_t84807007 * L_53 = Asn1Node_GetChildNode_m2817937035(L_52, 0, /*hidden argument*/NULL);
		NullCheck(L_53);
		ByteU5BU5D_t4116647657* L_54 = Asn1Node_get_Data_m379120612(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int64_t L_55 = Asn1Util_BytesToLong_m127415879(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		NullCheck(L_51);
		AppleInAppPurchaseReceipt_set_productType_m1472513991(L_51, (((int32_t)((int32_t)L_55))), /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_019c:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_56 = V_0;
		Asn1Node_t84807007 * L_57 = V_5;
		NullCheck(L_57);
		Asn1Node_t84807007 * L_58 = Asn1Node_GetChildNode_m2817937035(L_57, 0, /*hidden argument*/NULL);
		NullCheck(L_58);
		ByteU5BU5D_t4116647657* L_59 = Asn1Node_get_Data_m379120612(L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int64_t L_60 = Asn1Util_BytesToLong_m127415879(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		NullCheck(L_56);
		AppleInAppPurchaseReceipt_set_isFreeTrial_m1355330003(L_56, (((int32_t)((int32_t)L_60))), /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_01b8:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_61 = V_0;
		Asn1Node_t84807007 * L_62 = V_5;
		NullCheck(L_62);
		Asn1Node_t84807007 * L_63 = Asn1Node_GetChildNode_m2817937035(L_62, 0, /*hidden argument*/NULL);
		NullCheck(L_63);
		ByteU5BU5D_t4116647657* L_64 = Asn1Node_get_Data_m379120612(L_63, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		int64_t L_65 = Asn1Util_BytesToLong_m127415879(NULL /*static, unused*/, L_64, /*hidden argument*/NULL);
		NullCheck(L_61);
		AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_m887429687(L_61, (((int32_t)((int32_t)L_65))), /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_01d4:
	{
		goto IL_01d6;
	}

IL_01d6:
	{
	}

IL_01d7:
	{
		int32_t L_66 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_01dc:
	{
		int32_t L_67 = V_1;
		Asn1Node_t84807007 * L_68 = ___inApp0;
		NullCheck(L_68);
		int64_t L_69 = Asn1Node_get_ChildNodeCount_m2235806103(L_68, /*hidden argument*/NULL);
		V_7 = (bool)((((int64_t)(((int64_t)((int64_t)L_67)))) < ((int64_t)L_69))? 1 : 0);
		bool L_70 = V_7;
		if (L_70)
		{
			goto IL_000e;
		}
	}
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_71 = V_0;
		V_8 = L_71;
		goto IL_01f4;
	}

IL_01f4:
	{
		AppleInAppPurchaseReceipt_t3844914963 * L_72 = V_8;
		return L_72;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.AppleReceiptParser::TryParseDateTimeNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AppleReceiptParser_TryParseDateTimeNode_m978455633 (RuntimeObject * __this /* static, unused */, Asn1Node_t84807007 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser_TryParseDateTimeNode_m978455633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_1 = ___node0;
		NullCheck(L_1);
		Asn1Node_t84807007 * L_2 = Asn1Node_GetChildNode_m2817937035(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = Asn1Node_get_Data_m379120612(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_3);
		V_0 = L_4;
		String_t* L_5 = V_0;
		bool L_6 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_9 = DateTime_Parse_m2550724587(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		DateTime_t3738529785  L_10 = DateTime_ToUniversalTime_m1945318289((DateTime_t3738529785 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_003f;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_11 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_31();
		V_3 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		DateTime_t3738529785  L_12 = V_3;
		return L_12;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AppleReceiptParser__ctor_m2997361505 (AppleReceiptParser_t1990668756 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.AppleReceiptParser::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AppleReceiptParser__cctor_m2920489847 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppleReceiptParser__cctor_m2920489847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m15304876(L_0, /*hidden argument*/Dictionary_2__ctor_m15304876_RuntimeMethod_var);
		((AppleReceiptParser_t1990668756_StaticFields*)il2cpp_codegen_static_fields_for(AppleReceiptParser_t1990668756_il2cpp_TypeInfo_var))->set__mostRecentReceiptData_0(L_0);
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
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Country()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Country_m4052486281 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCountryU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Country(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_Country_m413445905 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCountryU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Organization()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Organization_m480828671 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Organization(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_Organization_m2458796170 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_OrganizationalUnit()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_OrganizationalUnit_m2659483362 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COrganizationalUnitU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_OrganizationalUnit(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_OrganizationalUnit_m2898658143 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COrganizationalUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_Dnq()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_Dnq_m3313230136 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDnqU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_Dnq(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_Dnq_m944920782 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDnqU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_State()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_State_m4116847713 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_State(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_State_m465966550 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::get_CommonName()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_get_CommonName_m745151467 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommonNameU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_CommonName(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_CommonName_m3459905508 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommonNameU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::set_SerialNumber(System.String)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName_set_SerialNumber_m1056484362 (DistinguishedName_t1591151536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.DistinguishedName::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void DistinguishedName__ctor_m3389155537 (DistinguishedName_t1591151536 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistinguishedName__ctor_m3389155537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Asn1Node_t84807007 * V_2 = NULL;
	Asn1Node_t84807007 * V_3 = NULL;
	Asn1Node_t84807007 * V_4 = NULL;
	Oid_t864847193 * V_5 = NULL;
	String_t* V_6 = NULL;
	UTF8Encoding_t3956466879 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	String_t* V_11 = NULL;
	uint32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_0 = ___n0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_MaskedTag_m2217668890(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_02b7;
		}
	}
	{
		V_1 = 0;
		goto IL_02a3;
	}

IL_0021:
	{
		Asn1Node_t84807007 * L_3 = ___n0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Asn1Node_t84807007 * L_5 = Asn1Node_GetChildNode_m2817937035(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Asn1Node_t84807007 * L_6 = V_2;
		NullCheck(L_6);
		uint8_t L_7 = Asn1Node_get_MaskedTag_m2217668890(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0043;
		}
	}
	{
		Asn1Node_t84807007 * L_8 = V_2;
		NullCheck(L_8);
		int64_t L_9 = Asn1Node_get_ChildNodeCount_m2235806103(L_8, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((int64_t)L_9) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_8 = (bool)G_B5_0;
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		InvalidX509Data_t1483908844 * L_11 = (InvalidX509Data_t1483908844 *)il2cpp_codegen_object_new(InvalidX509Data_t1483908844_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m1073916391(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, DistinguishedName__ctor_m3389155537_RuntimeMethod_var);
	}

IL_0050:
	{
		Asn1Node_t84807007 * L_12 = V_2;
		NullCheck(L_12);
		Asn1Node_t84807007 * L_13 = Asn1Node_GetChildNode_m2817937035(L_12, 0, /*hidden argument*/NULL);
		V_2 = L_13;
		Asn1Node_t84807007 * L_14 = V_2;
		NullCheck(L_14);
		uint8_t L_15 = Asn1Node_get_MaskedTag_m2217668890(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0071;
		}
	}
	{
		Asn1Node_t84807007 * L_16 = V_2;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_m2235806103(L_16, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0072;
	}

IL_0071:
	{
		G_B10_0 = 1;
	}

IL_0072:
	{
		V_9 = (bool)G_B10_0;
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		InvalidX509Data_t1483908844 * L_19 = (InvalidX509Data_t1483908844 *)il2cpp_codegen_object_new(InvalidX509Data_t1483908844_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m1073916391(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, DistinguishedName__ctor_m3389155537_RuntimeMethod_var);
	}

IL_007e:
	{
		Asn1Node_t84807007 * L_20 = V_2;
		NullCheck(L_20);
		Asn1Node_t84807007 * L_21 = Asn1Node_GetChildNode_m2817937035(L_20, 0, /*hidden argument*/NULL);
		V_3 = L_21;
		Asn1Node_t84807007 * L_22 = V_2;
		NullCheck(L_22);
		Asn1Node_t84807007 * L_23 = Asn1Node_GetChildNode_m2817937035(L_22, 1, /*hidden argument*/NULL);
		V_4 = L_23;
		Asn1Node_t84807007 * L_24 = V_3;
		NullCheck(L_24);
		uint8_t L_25 = Asn1Node_get_MaskedTag_m2217668890(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)6))))
		{
			goto IL_00b6;
		}
	}
	{
		Asn1Node_t84807007 * L_26 = V_4;
		NullCheck(L_26);
		uint8_t L_27 = Asn1Node_get_MaskedTag_m2217668890(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)19))))
		{
			goto IL_00b3;
		}
	}
	{
		Asn1Node_t84807007 * L_28 = V_4;
		NullCheck(L_28);
		uint8_t L_29 = Asn1Node_get_MaskedTag_m2217668890(L_28, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)((((int32_t)L_29) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B16_0 = 0;
	}

IL_00b4:
	{
		G_B18_0 = G_B16_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B18_0 = 1;
	}

IL_00b7:
	{
		V_10 = (bool)G_B18_0;
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00c4;
		}
	}
	{
		InvalidX509Data_t1483908844 * L_31 = (InvalidX509Data_t1483908844 *)il2cpp_codegen_object_new(InvalidX509Data_t1483908844_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m1073916391(L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, DistinguishedName__ctor_m3389155537_RuntimeMethod_var);
	}

IL_00c4:
	{
		Oid_t864847193 * L_32 = (Oid_t864847193 *)il2cpp_codegen_object_new(Oid_t864847193_il2cpp_TypeInfo_var);
		Oid__ctor_m4234155318(L_32, /*hidden argument*/NULL);
		V_5 = L_32;
		Oid_t864847193 * L_33 = V_5;
		Asn1Node_t84807007 * L_34 = V_3;
		NullCheck(L_34);
		ByteU5BU5D_t4116647657* L_35 = Asn1Node_get_Data_m379120612(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_36 = Oid_Decode_m1229707463(L_33, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		UTF8Encoding_t3956466879 * L_37 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1224805231(L_37, /*hidden argument*/NULL);
		V_7 = L_37;
		String_t* L_38 = V_6;
		V_11 = L_38;
		String_t* L_39 = V_11;
		uint32_t L_40 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3765061679(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		V_12 = L_40;
		uint32_t L_41 = V_12;
		if ((!(((uint32_t)L_41) <= ((uint32_t)((int32_t)184344010)))))
		{
			goto IL_0121;
		}
	}
	{
		uint32_t L_42 = V_12;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)134011153))))
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_0105;
	}

IL_0105:
	{
		uint32_t L_43 = V_12;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)167566391))))
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_0113;
	}

IL_0113:
	{
		uint32_t L_44 = V_12;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)184344010))))
		{
			goto IL_0162;
		}
	}
	{
		goto IL_029e;
	}

IL_0121:
	{
		uint32_t L_45 = V_12;
		if ((!(((uint32_t)L_45) <= ((uint32_t)((int32_t)1208264641)))))
		{
			goto IL_0143;
		}
	}
	{
		uint32_t L_46 = V_12;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)1191487022))))
		{
			goto IL_018e;
		}
	}
	{
		goto IL_0135;
	}

IL_0135:
	{
		uint32_t L_47 = V_12;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)1208264641))))
		{
			goto IL_0178;
		}
	}
	{
		goto IL_029e;
	}

IL_0143:
	{
		uint32_t L_48 = V_12;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-1207168042))))
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_0151;
	}

IL_0151:
	{
		uint32_t L_49 = V_12;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)-50542656))))
		{
			goto IL_01e6;
		}
	}
	{
		goto IL_029e;
	}

IL_0162:
	{
		String_t* L_50 = V_11;
		bool L_51 = String_op_Equality_m920492651(NULL /*static, unused*/, L_50, _stringLiteral1855871317, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_01fc;
		}
	}
	{
		goto IL_029e;
	}

IL_0178:
	{
		String_t* L_52 = V_11;
		bool L_53 = String_op_Equality_m920492651(NULL /*static, unused*/, L_52, _stringLiteral3201540188, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0216;
		}
	}
	{
		goto IL_029e;
	}

IL_018e:
	{
		String_t* L_54 = V_11;
		bool L_55 = String_op_Equality_m920492651(NULL /*static, unused*/, L_54, _stringLiteral1245225052, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_022d;
		}
	}
	{
		goto IL_029e;
	}

IL_01a4:
	{
		String_t* L_56 = V_11;
		bool L_57 = String_op_Equality_m920492651(NULL /*static, unused*/, L_56, _stringLiteral1452586790, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_029e;
	}

IL_01ba:
	{
		String_t* L_58 = V_11;
		bool L_59 = String_op_Equality_m920492651(NULL /*static, unused*/, L_58, _stringLiteral289787376, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_025b;
		}
	}
	{
		goto IL_029e;
	}

IL_01d0:
	{
		String_t* L_60 = V_11;
		bool L_61 = String_op_Equality_m920492651(NULL /*static, unused*/, L_60, _stringLiteral456868491, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_029e;
	}

IL_01e6:
	{
		String_t* L_62 = V_11;
		bool L_63 = String_op_Equality_m920492651(NULL /*static, unused*/, L_62, _stringLiteral1405532623, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0287;
		}
	}
	{
		goto IL_029e;
	}

IL_01fc:
	{
		UTF8Encoding_t3956466879 * L_64 = V_7;
		Asn1Node_t84807007 * L_65 = V_4;
		NullCheck(L_65);
		ByteU5BU5D_t4116647657* L_66 = Asn1Node_get_Data_m379120612(L_65, /*hidden argument*/NULL);
		NullCheck(L_64);
		String_t* L_67 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_64, L_66);
		DistinguishedName_set_Country_m413445905(__this, L_67, /*hidden argument*/NULL);
		goto IL_029e;
	}

IL_0216:
	{
		UTF8Encoding_t3956466879 * L_68 = V_7;
		Asn1Node_t84807007 * L_69 = V_4;
		NullCheck(L_69);
		ByteU5BU5D_t4116647657* L_70 = Asn1Node_get_Data_m379120612(L_69, /*hidden argument*/NULL);
		NullCheck(L_68);
		String_t* L_71 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_68, L_70);
		DistinguishedName_set_Organization_m2458796170(__this, L_71, /*hidden argument*/NULL);
		goto IL_029e;
	}

IL_022d:
	{
		UTF8Encoding_t3956466879 * L_72 = V_7;
		Asn1Node_t84807007 * L_73 = V_4;
		NullCheck(L_73);
		ByteU5BU5D_t4116647657* L_74 = Asn1Node_get_Data_m379120612(L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		String_t* L_75 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_72, L_74);
		DistinguishedName_set_OrganizationalUnit_m2898658143(__this, L_75, /*hidden argument*/NULL);
		goto IL_029e;
	}

IL_0244:
	{
		UTF8Encoding_t3956466879 * L_76 = V_7;
		Asn1Node_t84807007 * L_77 = V_4;
		NullCheck(L_77);
		ByteU5BU5D_t4116647657* L_78 = Asn1Node_get_Data_m379120612(L_77, /*hidden argument*/NULL);
		NullCheck(L_76);
		String_t* L_79 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_76, L_78);
		DistinguishedName_set_CommonName_m3459905508(__this, L_79, /*hidden argument*/NULL);
		goto IL_029e;
	}

IL_025b:
	{
		Asn1Node_t84807007 * L_80 = V_4;
		NullCheck(L_80);
		ByteU5BU5D_t4116647657* L_81 = Asn1Node_get_Data_m379120612(L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_82 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		DistinguishedName_set_SerialNumber_m1056484362(__this, L_82, /*hidden argument*/NULL);
		goto IL_029e;
	}

IL_0270:
	{
		UTF8Encoding_t3956466879 * L_83 = V_7;
		Asn1Node_t84807007 * L_84 = V_4;
		NullCheck(L_84);
		ByteU5BU5D_t4116647657* L_85 = Asn1Node_get_Data_m379120612(L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		String_t* L_86 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_83, L_85);
		DistinguishedName_set_Dnq_m944920782(__this, L_86, /*hidden argument*/NULL);
		goto IL_029e;
	}

IL_0287:
	{
		UTF8Encoding_t3956466879 * L_87 = V_7;
		Asn1Node_t84807007 * L_88 = V_4;
		NullCheck(L_88);
		ByteU5BU5D_t4116647657* L_89 = Asn1Node_get_Data_m379120612(L_88, /*hidden argument*/NULL);
		NullCheck(L_87);
		String_t* L_90 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_87, L_89);
		DistinguishedName_set_State_m465966550(__this, L_90, /*hidden argument*/NULL);
		goto IL_029e;
	}

IL_029e:
	{
		int32_t L_91 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_02a3:
	{
		int32_t L_92 = V_1;
		Asn1Node_t84807007 * L_93 = ___n0;
		NullCheck(L_93);
		int64_t L_94 = Asn1Node_get_ChildNodeCount_m2235806103(L_93, /*hidden argument*/NULL);
		V_13 = (bool)((((int64_t)(((int64_t)((int64_t)L_92)))) < ((int64_t)L_94))? 1 : 0);
		bool L_95 = V_13;
		if (L_95)
		{
			goto IL_0021;
		}
	}
	{
	}

IL_02b7:
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Security.DistinguishedName::Equals(UnityEngine.Purchasing.Security.DistinguishedName)
extern "C" IL2CPP_METHOD_ATTR bool DistinguishedName_Equals_m4062778009 (DistinguishedName_t1591151536 * __this, DistinguishedName_t1591151536 * ___n20, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		String_t* L_0 = DistinguishedName_get_Organization_m480828671(__this, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_1 = ___n20;
		NullCheck(L_1);
		String_t* L_2 = DistinguishedName_get_Organization_m480828671(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_4 = DistinguishedName_get_OrganizationalUnit_m2659483362(__this, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_5 = ___n20;
		NullCheck(L_5);
		String_t* L_6 = DistinguishedName_get_OrganizationalUnit_m2659483362(L_5, /*hidden argument*/NULL);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_8 = DistinguishedName_get_Dnq_m3313230136(__this, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_9 = ___n20;
		NullCheck(L_9);
		String_t* L_10 = DistinguishedName_get_Dnq_m3313230136(L_9, /*hidden argument*/NULL);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_12 = DistinguishedName_get_Country_m4052486281(__this, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_13 = ___n20;
		NullCheck(L_13);
		String_t* L_14 = DistinguishedName_get_Country_m4052486281(L_13, /*hidden argument*/NULL);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_16 = DistinguishedName_get_State_m4116847713(__this, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_17 = ___n20;
		NullCheck(L_17);
		String_t* L_18 = DistinguishedName_get_State_m4116847713(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m920492651(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_20 = DistinguishedName_get_CommonName_m745151467(__this, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_21 = ___n20;
		NullCheck(L_21);
		String_t* L_22 = DistinguishedName_get_CommonName_m745151467(L_21, /*hidden argument*/NULL);
		bool L_23 = String_op_Equality_m920492651(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_0074;
	}

IL_0073:
	{
		G_B7_0 = 0;
	}

IL_0074:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0077;
	}

IL_0077:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.String UnityEngine.Purchasing.Security.DistinguishedName::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* DistinguishedName_ToString_m699442985 (DistinguishedName_t1591151536 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DistinguishedName_ToString_m699442985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t1281789340* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2064161749);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2064161749);
		StringU5BU5D_t1281789340* L_2 = L_1;
		String_t* L_3 = DistinguishedName_get_CommonName_m745151467(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3910513488);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3910513488);
		StringU5BU5D_t1281789340* L_5 = L_4;
		String_t* L_6 = DistinguishedName_get_Organization_m480828671(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t1281789340* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1634660956);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1634660956);
		StringU5BU5D_t1281789340* L_8 = L_7;
		String_t* L_9 = DistinguishedName_get_OrganizationalUnit_m2659483362(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		StringU5BU5D_t1281789340* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3789638493);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3789638493);
		StringU5BU5D_t1281789340* L_11 = L_10;
		String_t* L_12 = DistinguishedName_get_Country_m4052486281(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_12);
		String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
		return L_14;
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
// System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_m2533083764 (IAPSecurityException_t1844591500 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPSecurityException__ctor_m2533083764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidPKCS7Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidPKCS7Data__ctor_m3927480152 (InvalidPKCS7Data_t466532846 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m2533083764(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidRSAData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidRSAData__ctor_m1501301171 (InvalidRSAData_t2177780709 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m2533083764(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidTimeFormat::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidTimeFormat__ctor_m1894908491 (InvalidTimeFormat_t1714182330 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m2533083764(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.InvalidX509Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidX509Data__ctor_m1073916391 (InvalidX509Data_t1483908844 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m2533083764(__this, /*hidden argument*/NULL);
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
// LipingShare.LCLib.Asn1Processor.Asn1Node UnityEngine.Purchasing.Security.PKCS7::get_data()
extern "C" IL2CPP_METHOD_ATTR Asn1Node_t84807007 * PKCS7_get_data_m1538194679 (PKCS7_t350312378 * __this, const RuntimeMethod* method)
{
	{
		Asn1Node_t84807007 * L_0 = __this->get_U3CdataU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_data(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void PKCS7_set_data_m1452019354 (PKCS7_t350312378 * __this, Asn1Node_t84807007 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t84807007 * L_0 = ___value0;
		__this->set_U3CdataU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo> UnityEngine.Purchasing.Security.PKCS7::get_sinfos()
extern "C" IL2CPP_METHOD_ATTR List_1_t2451613916 * PKCS7_get_sinfos_m2556115637 (PKCS7_t350312378 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2451613916 * L_0 = __this->get_U3CsinfosU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_sinfos(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.SignerInfo>)
extern "C" IL2CPP_METHOD_ATTR void PKCS7_set_sinfos_m336014254 (PKCS7_t350312378 * __this, List_1_t2451613916 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t2451613916 * L_0 = ___value0;
		__this->set_U3CsinfosU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert> UnityEngine.Purchasing.Security.PKCS7::get_certChain()
extern "C" IL2CPP_METHOD_ATTR List_1_t324891242 * PKCS7_get_certChain_m195995169 (PKCS7_t350312378 * __this, const RuntimeMethod* method)
{
	{
		List_1_t324891242 * L_0 = __this->get_U3CcertChainU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::set_certChain(System.Collections.Generic.List`1<UnityEngine.Purchasing.Security.X509Cert>)
extern "C" IL2CPP_METHOD_ATTR void PKCS7_set_certChain_m1149756788 (PKCS7_t350312378 * __this, List_1_t324891242 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t324891242 * L_0 = ___value0;
		__this->set_U3CcertChainU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void PKCS7__ctor_m2141173023 (PKCS7_t350312378 * __this, Asn1Node_t84807007 * ___node0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_0 = ___node0;
		__this->set_root_0(L_0);
		PKCS7_CheckStructure_m393412232(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.PKCS7::CheckStructure()
extern "C" IL2CPP_METHOD_ATTR void PKCS7_CheckStructure_m393412232 (PKCS7_t350312378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PKCS7_CheckStructure_m393412232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Asn1Node_t84807007 * V_1 = NULL;
	int32_t V_2 = 0;
	Asn1Node_t84807007 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B35_0 = 0;
	{
		__this->set_validStructure_4((bool)0);
		Asn1Node_t84807007 * L_0 = __this->get_root_0();
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_m2916517943(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_002b;
		}
	}
	{
		Asn1Node_t84807007 * L_2 = __this->get_root_0();
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_m2235806103(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0253;
		}
	}
	{
		Asn1Node_t84807007 * L_5 = __this->get_root_0();
		NullCheck(L_5);
		Asn1Node_t84807007 * L_6 = Asn1Node_GetChildNode_m2817937035(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		Asn1Node_t84807007 * L_7 = V_1;
		NullCheck(L_7);
		uint8_t L_8 = Asn1Node_get_Tag_m2916517943(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))) == ((uint32_t)6))))
		{
			goto IL_0060;
		}
	}
	{
		Asn1Node_t84807007 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = Asn1Node_GetDataStr_m489816169(L_9, (bool)0, /*hidden argument*/NULL);
		bool L_11 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_10, _stringLiteral1385012172, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B7_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_13 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PKCS7_CheckStructure_m393412232_RuntimeMethod_var);
	}

IL_006e:
	{
		Asn1Node_t84807007 * L_14 = __this->get_root_0();
		NullCheck(L_14);
		Asn1Node_t84807007 * L_15 = Asn1Node_GetChildNode_m2817937035(L_14, 1, /*hidden argument*/NULL);
		V_1 = L_15;
		Asn1Node_t84807007 * L_16 = V_1;
		NullCheck(L_16);
		int64_t L_17 = Asn1Node_get_ChildNodeCount_m2235806103(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int64_t)L_17) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0094;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_19 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, PKCS7_CheckStructure_m393412232_RuntimeMethod_var);
	}

IL_0094:
	{
		V_2 = 0;
		Asn1Node_t84807007 * L_20 = V_1;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		Asn1Node_t84807007 * L_23 = Asn1Node_GetChildNode_m2817937035(L_20, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		Asn1Node_t84807007 * L_24 = V_1;
		NullCheck(L_24);
		int64_t L_25 = Asn1Node_get_ChildNodeCount_m2235806103(L_24, /*hidden argument*/NULL);
		if ((((int64_t)L_25) < ((int64_t)(((int64_t)((int64_t)4))))))
		{
			goto IL_00be;
		}
	}
	{
		Asn1Node_t84807007 * L_26 = V_1;
		NullCheck(L_26);
		uint8_t L_27 = Asn1Node_get_Tag_m2916517943(L_26, /*hidden argument*/NULL);
		G_B14_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bf;
	}

IL_00be:
	{
		G_B14_0 = 1;
	}

IL_00bf:
	{
		V_6 = (bool)G_B14_0;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00cb;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_29 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, NULL, PKCS7_CheckStructure_m393412232_RuntimeMethod_var);
	}

IL_00cb:
	{
		Asn1Node_t84807007 * L_30 = V_1;
		NullCheck(L_30);
		Asn1Node_t84807007 * L_31 = Asn1Node_GetChildNode_m2817937035(L_30, 0, /*hidden argument*/NULL);
		V_3 = L_31;
		Asn1Node_t84807007 * L_32 = V_3;
		NullCheck(L_32);
		uint8_t L_33 = Asn1Node_get_Tag_m2916517943(L_32, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_00ee;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_35 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, NULL, PKCS7_CheckStructure_m393412232_RuntimeMethod_var);
	}

IL_00ee:
	{
		Asn1Node_t84807007 * L_36 = V_1;
		int32_t L_37 = V_2;
		int32_t L_38 = L_37;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		NullCheck(L_36);
		Asn1Node_t84807007 * L_39 = Asn1Node_GetChildNode_m2817937035(L_36, L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		Asn1Node_t84807007 * L_40 = V_3;
		NullCheck(L_40);
		uint8_t L_41 = Asn1Node_get_Tag_m2916517943(L_40, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_41&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_8;
		if (!L_42)
		{
			goto IL_0116;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_43 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, NULL, PKCS7_CheckStructure_m393412232_RuntimeMethod_var);
	}

IL_0116:
	{
		Asn1Node_t84807007 * L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46 = L_45;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		Asn1Node_t84807007 * L_47 = Asn1Node_GetChildNode_m2817937035(L_44, L_46, /*hidden argument*/NULL);
		V_3 = L_47;
		Asn1Node_t84807007 * L_48 = V_3;
		NullCheck(L_48);
		uint8_t L_49 = Asn1Node_get_Tag_m2916517943(L_48, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)31)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_013e;
		}
	}
	{
		Asn1Node_t84807007 * L_50 = V_3;
		NullCheck(L_50);
		int64_t L_51 = Asn1Node_get_ChildNodeCount_m2235806103(L_50, /*hidden argument*/NULL);
		G_B23_0 = ((((int32_t)((((int64_t)L_51) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B23_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B23_0;
		bool L_52 = V_9;
		if (!L_52)
		{
			goto IL_014b;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_53 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, NULL, PKCS7_CheckStructure_m393412232_RuntimeMethod_var);
	}

IL_014b:
	{
		Asn1Node_t84807007 * L_54 = V_3;
		NullCheck(L_54);
		Asn1Node_t84807007 * L_55 = Asn1Node_GetChildNode_m2817937035(L_54, 1, /*hidden argument*/NULL);
		NullCheck(L_55);
		Asn1Node_t84807007 * L_56 = Asn1Node_GetChildNode_m2817937035(L_55, 0, /*hidden argument*/NULL);
		PKCS7_set_data_m1452019354(__this, L_56, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_57 = V_1;
		NullCheck(L_57);
		int64_t L_58 = Asn1Node_get_ChildNodeCount_m2235806103(L_57, /*hidden argument*/NULL);
		V_10 = (bool)((((int64_t)L_58) == ((int64_t)(((int64_t)((int64_t)5)))))? 1 : 0);
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_01d6;
		}
	}
	{
		List_1_t324891242 * L_60 = (List_1_t324891242 *)il2cpp_codegen_object_new(List_1_t324891242_il2cpp_TypeInfo_var);
		List_1__ctor_m3202037354(L_60, /*hidden argument*/List_1__ctor_m3202037354_RuntimeMethod_var);
		PKCS7_set_certChain_m1149756788(__this, L_60, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_61 = V_1;
		int32_t L_62 = V_2;
		int32_t L_63 = L_62;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		NullCheck(L_61);
		Asn1Node_t84807007 * L_64 = Asn1Node_GetChildNode_m2817937035(L_61, L_63, /*hidden argument*/NULL);
		V_3 = L_64;
		Asn1Node_t84807007 * L_65 = V_3;
		NullCheck(L_65);
		int64_t L_66 = Asn1Node_get_ChildNodeCount_m2235806103(L_65, /*hidden argument*/NULL);
		V_11 = (bool)((((int64_t)L_66) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_67 = V_11;
		if (!L_67)
		{
			goto IL_019e;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_68 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, NULL, PKCS7_CheckStructure_m393412232_RuntimeMethod_var);
	}

IL_019e:
	{
		V_12 = 0;
		goto IL_01c4;
	}

IL_01a3:
	{
		List_1_t324891242 * L_69 = PKCS7_get_certChain_m195995169(__this, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_70 = V_3;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		Asn1Node_t84807007 * L_72 = Asn1Node_GetChildNode_m2817937035(L_70, L_71, /*hidden argument*/NULL);
		X509Cert_t3147783796 * L_73 = (X509Cert_t3147783796 *)il2cpp_codegen_object_new(X509Cert_t3147783796_il2cpp_TypeInfo_var);
		X509Cert__ctor_m3767931021(L_73, L_72, /*hidden argument*/NULL);
		NullCheck(L_69);
		List_1_Add_m2762383152(L_69, L_73, /*hidden argument*/List_1_Add_m2762383152_RuntimeMethod_var);
		int32_t L_74 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01c4:
	{
		int32_t L_75 = V_12;
		Asn1Node_t84807007 * L_76 = V_3;
		NullCheck(L_76);
		int64_t L_77 = Asn1Node_get_ChildNodeCount_m2235806103(L_76, /*hidden argument*/NULL);
		V_13 = (bool)((((int64_t)(((int64_t)((int64_t)L_75)))) < ((int64_t)L_77))? 1 : 0);
		bool L_78 = V_13;
		if (L_78)
		{
			goto IL_01a3;
		}
	}
	{
	}

IL_01d6:
	{
		Asn1Node_t84807007 * L_79 = V_1;
		int32_t L_80 = V_2;
		int32_t L_81 = L_80;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		NullCheck(L_79);
		Asn1Node_t84807007 * L_82 = Asn1Node_GetChildNode_m2817937035(L_79, L_81, /*hidden argument*/NULL);
		V_3 = L_82;
		Asn1Node_t84807007 * L_83 = V_3;
		NullCheck(L_83);
		uint8_t L_84 = Asn1Node_get_Tag_m2916517943(L_83, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_84&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_01fb;
		}
	}
	{
		Asn1Node_t84807007 * L_85 = V_3;
		NullCheck(L_85);
		int64_t L_86 = Asn1Node_get_ChildNodeCount_m2235806103(L_85, /*hidden argument*/NULL);
		G_B35_0 = ((((int64_t)L_86) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		goto IL_01fc;
	}

IL_01fb:
	{
		G_B35_0 = 1;
	}

IL_01fc:
	{
		V_14 = (bool)G_B35_0;
		bool L_87 = V_14;
		if (!L_87)
		{
			goto IL_0208;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_88 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_88, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, NULL, PKCS7_CheckStructure_m393412232_RuntimeMethod_var);
	}

IL_0208:
	{
		List_1_t2451613916 * L_89 = (List_1_t2451613916 *)il2cpp_codegen_object_new(List_1_t2451613916_il2cpp_TypeInfo_var);
		List_1__ctor_m2993307493(L_89, /*hidden argument*/List_1__ctor_m2993307493_RuntimeMethod_var);
		PKCS7_set_sinfos_m336014254(__this, L_89, /*hidden argument*/NULL);
		V_15 = 0;
		goto IL_023a;
	}

IL_0219:
	{
		List_1_t2451613916 * L_90 = PKCS7_get_sinfos_m2556115637(__this, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_91 = V_3;
		int32_t L_92 = V_15;
		NullCheck(L_91);
		Asn1Node_t84807007 * L_93 = Asn1Node_GetChildNode_m2817937035(L_91, L_92, /*hidden argument*/NULL);
		SignerInfo_t979539174 * L_94 = (SignerInfo_t979539174 *)il2cpp_codegen_object_new(SignerInfo_t979539174_il2cpp_TypeInfo_var);
		SignerInfo__ctor_m1735772653(L_94, L_93, /*hidden argument*/NULL);
		NullCheck(L_90);
		List_1_Add_m2609638385(L_90, L_94, /*hidden argument*/List_1_Add_m2609638385_RuntimeMethod_var);
		int32_t L_95 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_023a:
	{
		int32_t L_96 = V_15;
		Asn1Node_t84807007 * L_97 = V_3;
		NullCheck(L_97);
		int64_t L_98 = Asn1Node_get_ChildNodeCount_m2235806103(L_97, /*hidden argument*/NULL);
		V_16 = (bool)((((int64_t)(((int64_t)((int64_t)L_96)))) < ((int64_t)L_98))? 1 : 0);
		bool L_99 = V_16;
		if (L_99)
		{
			goto IL_0219;
		}
	}
	{
		__this->set_validStructure_4((bool)1);
	}

IL_0253:
	{
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
// System.Void UnityEngine.Purchasing.Security.RSAKey::set_rsa(System.Security.Cryptography.RSACryptoServiceProvider)
extern "C" IL2CPP_METHOD_ATTR void RSAKey_set_rsa_m3484185451 (RSAKey_t3751505760 * __this, RSACryptoServiceProvider_t2683512874 * ___value0, const RuntimeMethod* method)
{
	{
		RSACryptoServiceProvider_t2683512874 * L_0 = ___value0;
		__this->set_U3CrsaU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.RSAKey::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void RSAKey__ctor_m2529138841 (RSAKey_t3751505760 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_0 = ___n0;
		RSACryptoServiceProvider_t2683512874 * L_1 = RSAKey_ParseNode_m749236704(__this, L_0, /*hidden argument*/NULL);
		RSAKey_set_rsa_m3484185451(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.RSACryptoServiceProvider UnityEngine.Purchasing.Security.RSAKey::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t2683512874 * RSAKey_ParseNode_m749236704 (RSAKey_t3751505760 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RSAKey_ParseNode_m749236704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Asn1Node_t84807007 * V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	RSACryptoServiceProvider_t2683512874 * V_7 = NULL;
	RSACryptoServiceProvider_t2683512874 * V_8 = NULL;
	int32_t G_B7_0 = 0;
	{
		Asn1Node_t84807007 * L_0 = ___n0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_m2916517943(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t84807007 * L_2 = ___n0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_m2235806103(L_2, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_3) == ((uint64_t)(((int64_t)((int64_t)2)))))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t84807007 * L_4 = ___n0;
		NullCheck(L_4);
		Asn1Node_t84807007 * L_5 = Asn1Node_GetChildNode_m2817937035(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6 = Asn1Node_get_Tag_m2916517943(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t84807007 * L_7 = ___n0;
		NullCheck(L_7);
		Asn1Node_t84807007 * L_8 = Asn1Node_GetChildNode_m2817937035(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		Asn1Node_t84807007 * L_9 = Asn1Node_GetChildNode_m2817937035(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint8_t L_10 = Asn1Node_get_Tag_m2916517943(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)31)))) == ((uint32_t)6))))
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t84807007 * L_11 = ___n0;
		NullCheck(L_11);
		Asn1Node_t84807007 * L_12 = Asn1Node_GetChildNode_m2817937035(L_11, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		Asn1Node_t84807007 * L_13 = Asn1Node_GetChildNode_m2817937035(L_12, 0, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = Asn1Node_GetDataStr_m489816169(L_13, (bool)0, /*hidden argument*/NULL);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, _stringLiteral3723533260, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		Asn1Node_t84807007 * L_16 = ___n0;
		NullCheck(L_16);
		Asn1Node_t84807007 * L_17 = Asn1Node_GetChildNode_m2817937035(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint8_t L_18 = Asn1Node_get_Tag_m2916517943(L_17, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31)))) == ((int32_t)3))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B7_0 = 0;
	}

IL_0077:
	{
		V_0 = (bool)G_B7_0;
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_0101;
		}
	}
	{
		Asn1Node_t84807007 * L_20 = ___n0;
		NullCheck(L_20);
		Asn1Node_t84807007 * L_21 = Asn1Node_GetChildNode_m2817937035(L_20, 1, /*hidden argument*/NULL);
		NullCheck(L_21);
		Asn1Node_t84807007 * L_22 = Asn1Node_GetChildNode_m2817937035(L_21, 0, /*hidden argument*/NULL);
		V_1 = L_22;
		Asn1Node_t84807007 * L_23 = V_1;
		NullCheck(L_23);
		int64_t L_24 = Asn1Node_get_ChildNodeCount_m2235806103(L_23, /*hidden argument*/NULL);
		V_2 = (bool)((((int64_t)L_24) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0);
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0100;
		}
	}
	{
		Asn1Node_t84807007 * L_26 = V_1;
		NullCheck(L_26);
		Asn1Node_t84807007 * L_27 = Asn1Node_GetChildNode_m2817937035(L_26, 0, /*hidden argument*/NULL);
		NullCheck(L_27);
		ByteU5BU5D_t4116647657* L_28 = Asn1Node_get_Data_m379120612(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		ByteU5BU5D_t4116647657* L_29 = V_3;
		NullCheck(L_29);
		ByteU5BU5D_t4116647657* L_30 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))), (int32_t)1)));
		V_4 = L_30;
		ByteU5BU5D_t4116647657* L_31 = V_3;
		ByteU5BU5D_t4116647657* L_32 = V_4;
		ByteU5BU5D_t4116647657* L_33 = V_3;
		NullCheck(L_33);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_31, 1, (RuntimeArray *)(RuntimeArray *)L_32, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_35 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		Asn1Node_t84807007 * L_36 = V_1;
		NullCheck(L_36);
		Asn1Node_t84807007 * L_37 = Asn1Node_GetChildNode_m2817937035(L_36, 1, /*hidden argument*/NULL);
		NullCheck(L_37);
		ByteU5BU5D_t4116647657* L_38 = Asn1Node_get_Data_m379120612(L_37, /*hidden argument*/NULL);
		String_t* L_39 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		RSACryptoServiceProvider_t2683512874 * L_40 = (RSACryptoServiceProvider_t2683512874 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_t2683512874_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m2288290917(L_40, /*hidden argument*/NULL);
		V_7 = L_40;
		RSACryptoServiceProvider_t2683512874 * L_41 = V_7;
		String_t* L_42 = V_5;
		String_t* L_43 = V_6;
		String_t* L_44 = RSAKey_ToXML_m3021572651(__this, L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Security.Cryptography.AsymmetricAlgorithm::FromXmlString(System.String) */, L_41, L_44);
		RSACryptoServiceProvider_t2683512874 * L_45 = V_7;
		V_8 = L_45;
		goto IL_0107;
	}

IL_0100:
	{
	}

IL_0101:
	{
		InvalidRSAData_t2177780709 * L_46 = (InvalidRSAData_t2177780709 *)il2cpp_codegen_object_new(InvalidRSAData_t2177780709_il2cpp_TypeInfo_var);
		InvalidRSAData__ctor_m1501301171(L_46, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, NULL, RSAKey_ParseNode_m749236704_RuntimeMethod_var);
	}

IL_0107:
	{
		RSACryptoServiceProvider_t2683512874 * L_47 = V_8;
		return L_47;
	}
}
// System.String UnityEngine.Purchasing.Security.RSAKey::ToXML(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* RSAKey_ToXML_m3021572651 (RSAKey_t3751505760 * __this, String_t* ___modulus0, String_t* ___exponent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RSAKey_ToXML_m3021572651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1063373797);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1063373797);
		StringU5BU5D_t1281789340* L_2 = L_1;
		String_t* L_3 = ___modulus0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1945119072);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1945119072);
		StringU5BU5D_t1281789340* L_5 = L_4;
		String_t* L_6 = ___exponent1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t1281789340* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3252624657);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3252624657);
		String_t* L_8 = String_Concat_m1809518182(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_9 = V_0;
		return L_9;
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
// System.Int32 UnityEngine.Purchasing.Security.SignerInfo::get_Version()
extern "C" IL2CPP_METHOD_ATTR int32_t SignerInfo_get_Version_m2134507792 (SignerInfo_t979539174 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_Version(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SignerInfo_set_Version_m1089259223 (SignerInfo_t979539174 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_IssuerSerialNumber(System.String)
extern "C" IL2CPP_METHOD_ATTR void SignerInfo_set_IssuerSerialNumber_m140504585 (SignerInfo_t979539174 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIssuerSerialNumberU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::set_EncryptedDigest(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SignerInfo_set_EncryptedDigest_m857545940 (SignerInfo_t979539174 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_U3CEncryptedDigestU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.SignerInfo::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void SignerInfo__ctor_m1735772653 (SignerInfo_t979539174 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SignerInfo__ctor_m1735772653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t84807007 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_0 = ___n0;
		NullCheck(L_0);
		int64_t L_1 = Asn1Node_get_ChildNodeCount_m2235806103(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int64_t)L_1) == ((int64_t)(((int64_t)((int64_t)5)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_3 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, SignerInfo__ctor_m1735772653_RuntimeMethod_var);
	}

IL_001f:
	{
		Asn1Node_t84807007 * L_4 = ___n0;
		NullCheck(L_4);
		Asn1Node_t84807007 * L_5 = Asn1Node_GetChildNode_m2817937035(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		Asn1Node_t84807007 * L_6 = V_0;
		NullCheck(L_6);
		uint8_t L_7 = Asn1Node_get_Tag_m2916517943(L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_9 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, SignerInfo__ctor_m1735772653_RuntimeMethod_var);
	}

IL_0040:
	{
		Asn1Node_t84807007 * L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_11 = Asn1Node_get_Data_m379120612(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SignerInfo_set_Version_m1089259223(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = SignerInfo_get_Version_m2134507792(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		Asn1Node_t84807007 * L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_16 = Asn1Node_get_Data_m379120612(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		G_B7_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B7_0 = 1;
	}

IL_0069:
	{
		V_3 = (bool)G_B7_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		UnsupportedSignerInfoVersion_t1875534306 * L_18 = (UnsupportedSignerInfoVersion_t1875534306 *)il2cpp_codegen_object_new(UnsupportedSignerInfoVersion_t1875534306_il2cpp_TypeInfo_var);
		UnsupportedSignerInfoVersion__ctor_m364290712(L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, SignerInfo__ctor_m1735772653_RuntimeMethod_var);
	}

IL_0073:
	{
		Asn1Node_t84807007 * L_19 = ___n0;
		NullCheck(L_19);
		Asn1Node_t84807007 * L_20 = Asn1Node_GetChildNode_m2817937035(L_19, 1, /*hidden argument*/NULL);
		V_0 = L_20;
		Asn1Node_t84807007 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22 = Asn1Node_get_Tag_m2916517943(L_21, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0097;
		}
	}
	{
		Asn1Node_t84807007 * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = Asn1Node_get_ChildNodeCount_m2235806103(L_23, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int64_t)L_24) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0098;
	}

IL_0097:
	{
		G_B12_0 = 1;
	}

IL_0098:
	{
		V_4 = (bool)G_B12_0;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_26 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, SignerInfo__ctor_m1735772653_RuntimeMethod_var);
	}

IL_00a4:
	{
		Asn1Node_t84807007 * L_27 = V_0;
		NullCheck(L_27);
		Asn1Node_t84807007 * L_28 = Asn1Node_GetChildNode_m2817937035(L_27, 1, /*hidden argument*/NULL);
		V_0 = L_28;
		Asn1Node_t84807007 * L_29 = V_0;
		NullCheck(L_29);
		uint8_t L_30 = Asn1Node_get_Tag_m2916517943(L_29, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_32 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, NULL, SignerInfo__ctor_m1735772653_RuntimeMethod_var);
	}

IL_00c7:
	{
		Asn1Node_t84807007 * L_33 = V_0;
		NullCheck(L_33);
		ByteU5BU5D_t4116647657* L_34 = Asn1Node_get_Data_m379120612(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_35 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		SignerInfo_set_IssuerSerialNumber_m140504585(__this, L_35, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_36 = ___n0;
		NullCheck(L_36);
		Asn1Node_t84807007 * L_37 = Asn1Node_GetChildNode_m2817937035(L_36, 4, /*hidden argument*/NULL);
		V_0 = L_37;
		Asn1Node_t84807007 * L_38 = V_0;
		NullCheck(L_38);
		uint8_t L_39 = Asn1Node_get_Tag_m2916517943(L_38, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)31)))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_00fc;
		}
	}
	{
		InvalidPKCS7Data_t466532846 * L_41 = (InvalidPKCS7Data_t466532846 *)il2cpp_codegen_object_new(InvalidPKCS7Data_t466532846_il2cpp_TypeInfo_var);
		InvalidPKCS7Data__ctor_m3927480152(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, NULL, SignerInfo__ctor_m1735772653_RuntimeMethod_var);
	}

IL_00fc:
	{
		Asn1Node_t84807007 * L_42 = V_0;
		NullCheck(L_42);
		ByteU5BU5D_t4116647657* L_43 = Asn1Node_get_Data_m379120612(L_42, /*hidden argument*/NULL);
		SignerInfo_set_EncryptedDigest_m857545940(__this, L_43, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.UnsupportedSignerInfoVersion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnsupportedSignerInfoVersion__ctor_m364290712 (UnsupportedSignerInfoVersion_t1875534306 * __this, const RuntimeMethod* method)
{
	{
		IAPSecurityException__ctor_m2533083764(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SerialNumber(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_SerialNumber_m3675593130 (X509Cert_t3147783796 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSerialNumberU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidAfter(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_ValidAfter_m2430448418 (X509Cert_t3147783796 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CValidAfterU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_ValidBefore(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_ValidBefore_m3704579774 (X509Cert_t3147783796 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CValidBeforeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_PubKey(UnityEngine.Purchasing.Security.RSAKey)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_PubKey_m1644810381 (X509Cert_t3147783796 * __this, RSAKey_t3751505760 * ___value0, const RuntimeMethod* method)
{
	{
		RSAKey_t3751505760 * L_0 = ___value0;
		__this->set_U3CPubKeyU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_SelfSigned(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_SelfSigned_m1136370348 (X509Cert_t3147783796 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSelfSignedU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Subject()
extern "C" IL2CPP_METHOD_ATTR DistinguishedName_t1591151536 * X509Cert_get_Subject_m2251849245 (X509Cert_t3147783796 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1591151536 * L_0 = __this->get_U3CSubjectU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Subject(UnityEngine.Purchasing.Security.DistinguishedName)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_Subject_m4129258486 (X509Cert_t3147783796 * __this, DistinguishedName_t1591151536 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1591151536 * L_0 = ___value0;
		__this->set_U3CSubjectU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Security.DistinguishedName UnityEngine.Purchasing.Security.X509Cert::get_Issuer()
extern "C" IL2CPP_METHOD_ATTR DistinguishedName_t1591151536 * X509Cert_get_Issuer_m1683113328 (X509Cert_t3147783796 * __this, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1591151536 * L_0 = __this->get_U3CIssuerU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Issuer(UnityEngine.Purchasing.Security.DistinguishedName)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_Issuer_m1948206227 (X509Cert_t3147783796 * __this, DistinguishedName_t1591151536 * ___value0, const RuntimeMethod* method)
{
	{
		DistinguishedName_t1591151536 * L_0 = ___value0;
		__this->set_U3CIssuerU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::set_Signature(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_set_Signature_m1924431059 (X509Cert_t3147783796 * __this, Asn1Node_t84807007 * ___value0, const RuntimeMethod* method)
{
	{
		Asn1Node_t84807007 * L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::.ctor(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void X509Cert__ctor_m3767931021 (X509Cert_t3147783796 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_0 = ___n0;
		X509Cert_ParseNode_m2562761880(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Security.X509Cert::ParseNode(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR void X509Cert_ParseNode_m2562761880 (X509Cert_t3147783796 * __this, Asn1Node_t84807007 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Cert_ParseNode_m2562761880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Asn1Node_t84807007 * V_0 = NULL;
	Asn1Node_t84807007 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Asn1Node_t84807007 * L_0 = ___root0;
		NullCheck(L_0);
		uint8_t L_1 = Asn1Node_get_Tag_m2916517943(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001d;
		}
	}
	{
		Asn1Node_t84807007 * L_2 = ___root0;
		NullCheck(L_2);
		int64_t L_3 = Asn1Node_get_ChildNodeCount_m2235806103(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int64_t)L_3) == ((int64_t)(((int64_t)((int64_t)3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		InvalidX509Data_t1483908844 * L_5 = (InvalidX509Data_t1483908844 *)il2cpp_codegen_object_new(InvalidX509Data_t1483908844_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m1073916391(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, X509Cert_ParseNode_m2562761880_RuntimeMethod_var);
	}

IL_0028:
	{
		Asn1Node_t84807007 * L_6 = ___root0;
		NullCheck(L_6);
		Asn1Node_t84807007 * L_7 = Asn1Node_GetChildNode_m2817937035(L_6, 0, /*hidden argument*/NULL);
		__this->set_TbsCertificate_7(L_7);
		Asn1Node_t84807007 * L_8 = __this->get_TbsCertificate_7();
		NullCheck(L_8);
		int64_t L_9 = Asn1Node_get_ChildNodeCount_m2235806103(L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_9) < ((int64_t)(((int64_t)((int64_t)7)))))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvalidX509Data_t1483908844 * L_11 = (InvalidX509Data_t1483908844 *)il2cpp_codegen_object_new(InvalidX509Data_t1483908844_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m1073916391(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, X509Cert_ParseNode_m2562761880_RuntimeMethod_var);
	}

IL_004e:
	{
		Asn1Node_t84807007 * L_12 = __this->get_TbsCertificate_7();
		NullCheck(L_12);
		int64_t L_13 = Asn1Node_get_DataLength_m3134292057(L_12, /*hidden argument*/NULL);
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)4)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, X509Cert_ParseNode_m2562761880_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_14 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)4))))))));
		__this->set_rawTBSCertificate_9(L_14);
		Asn1Node_t84807007 * L_15 = ___root0;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_16 = Asn1Node_get_Data_m379120612(L_15, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_17 = __this->get_rawTBSCertificate_9();
		ByteU5BU5D_t4116647657* L_18 = __this->get_rawTBSCertificate_9();
		NullCheck(L_18);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))), /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_19 = __this->get_TbsCertificate_7();
		NullCheck(L_19);
		Asn1Node_t84807007 * L_20 = Asn1Node_GetChildNode_m2817937035(L_19, 1, /*hidden argument*/NULL);
		V_0 = L_20;
		Asn1Node_t84807007 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22 = Asn1Node_get_Tag_m2916517943(L_21, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00ac;
		}
	}
	{
		InvalidX509Data_t1483908844 * L_24 = (InvalidX509Data_t1483908844 *)il2cpp_codegen_object_new(InvalidX509Data_t1483908844_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m1073916391(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, X509Cert_ParseNode_m2562761880_RuntimeMethod_var);
	}

IL_00ac:
	{
		Asn1Node_t84807007 * L_25 = V_0;
		NullCheck(L_25);
		ByteU5BU5D_t4116647657* L_26 = Asn1Node_get_Data_m379120612(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Asn1Util_t417944685_il2cpp_TypeInfo_var);
		String_t* L_27 = Asn1Util_ToHexString_m1008071469(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		X509Cert_set_SerialNumber_m3675593130(__this, L_27, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_28 = __this->get_TbsCertificate_7();
		NullCheck(L_28);
		Asn1Node_t84807007 * L_29 = Asn1Node_GetChildNode_m2817937035(L_28, 3, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_30 = (DistinguishedName_t1591151536 *)il2cpp_codegen_object_new(DistinguishedName_t1591151536_il2cpp_TypeInfo_var);
		DistinguishedName__ctor_m3389155537(L_30, L_29, /*hidden argument*/NULL);
		X509Cert_set_Issuer_m1948206227(__this, L_30, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_31 = __this->get_TbsCertificate_7();
		NullCheck(L_31);
		Asn1Node_t84807007 * L_32 = Asn1Node_GetChildNode_m2817937035(L_31, 5, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_33 = (DistinguishedName_t1591151536 *)il2cpp_codegen_object_new(DistinguishedName_t1591151536_il2cpp_TypeInfo_var);
		DistinguishedName__ctor_m3389155537(L_33, L_32, /*hidden argument*/NULL);
		X509Cert_set_Subject_m4129258486(__this, L_33, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_34 = __this->get_TbsCertificate_7();
		NullCheck(L_34);
		Asn1Node_t84807007 * L_35 = Asn1Node_GetChildNode_m2817937035(L_34, 4, /*hidden argument*/NULL);
		V_1 = L_35;
		Asn1Node_t84807007 * L_36 = V_1;
		NullCheck(L_36);
		uint8_t L_37 = Asn1Node_get_Tag_m2916517943(L_36, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)31)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0117;
		}
	}
	{
		Asn1Node_t84807007 * L_38 = V_1;
		NullCheck(L_38);
		int64_t L_39 = Asn1Node_get_ChildNodeCount_m2235806103(L_38, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int64_t)L_39) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0118;
	}

IL_0117:
	{
		G_B12_0 = 1;
	}

IL_0118:
	{
		V_5 = (bool)G_B12_0;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_0124;
		}
	}
	{
		InvalidX509Data_t1483908844 * L_41 = (InvalidX509Data_t1483908844 *)il2cpp_codegen_object_new(InvalidX509Data_t1483908844_il2cpp_TypeInfo_var);
		InvalidX509Data__ctor_m1073916391(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, NULL, X509Cert_ParseNode_m2562761880_RuntimeMethod_var);
	}

IL_0124:
	{
		Asn1Node_t84807007 * L_42 = V_1;
		NullCheck(L_42);
		Asn1Node_t84807007 * L_43 = Asn1Node_GetChildNode_m2817937035(L_42, 0, /*hidden argument*/NULL);
		DateTime_t3738529785  L_44 = X509Cert_ParseTime_m610086179(__this, L_43, /*hidden argument*/NULL);
		X509Cert_set_ValidAfter_m2430448418(__this, L_44, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_45 = V_1;
		NullCheck(L_45);
		Asn1Node_t84807007 * L_46 = Asn1Node_GetChildNode_m2817937035(L_45, 1, /*hidden argument*/NULL);
		DateTime_t3738529785  L_47 = X509Cert_ParseTime_m610086179(__this, L_46, /*hidden argument*/NULL);
		X509Cert_set_ValidBefore_m3704579774(__this, L_47, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_48 = X509Cert_get_Subject_m2251849245(__this, /*hidden argument*/NULL);
		DistinguishedName_t1591151536 * L_49 = X509Cert_get_Issuer_m1683113328(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		bool L_50 = DistinguishedName_Equals_m4062778009(L_48, L_49, /*hidden argument*/NULL);
		X509Cert_set_SelfSigned_m1136370348(__this, L_50, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_51 = __this->get_TbsCertificate_7();
		NullCheck(L_51);
		Asn1Node_t84807007 * L_52 = Asn1Node_GetChildNode_m2817937035(L_51, 6, /*hidden argument*/NULL);
		RSAKey_t3751505760 * L_53 = (RSAKey_t3751505760 *)il2cpp_codegen_object_new(RSAKey_t3751505760_il2cpp_TypeInfo_var);
		RSAKey__ctor_m2529138841(L_53, L_52, /*hidden argument*/NULL);
		X509Cert_set_PubKey_m1644810381(__this, L_53, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_54 = ___root0;
		NullCheck(L_54);
		Asn1Node_t84807007 * L_55 = Asn1Node_GetChildNode_m2817937035(L_54, 2, /*hidden argument*/NULL);
		X509Cert_set_Signature_m1924431059(__this, L_55, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime UnityEngine.Purchasing.Security.X509Cert::ParseTime(LipingShare.LCLib.Asn1Processor.Asn1Node)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  X509Cert_ParseTime_m610086179 (X509Cert_t3147783796 * __this, Asn1Node_t84807007 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Cert_ParseTime_m610086179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	DateTime_t3738529785  V_13;
	memset(&V_13, 0, sizeof(V_13));
	int32_t G_B3_0 = 0;
	{
		UTF8Encoding_t3956466879 * L_0 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1224805231(L_0, /*hidden argument*/NULL);
		Asn1Node_t84807007 * L_1 = ___n0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = Asn1Node_get_Data_m379120612(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_7) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_8 = (bool)G_B3_0;
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		InvalidTimeFormat_t1714182330 * L_9 = (InvalidTimeFormat_t1714182330 *)il2cpp_codegen_object_new(InvalidTimeFormat_t1714182330_il2cpp_TypeInfo_var);
		InvalidTimeFormat__ctor_m1894908491(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, X509Cert_ParseTime_m610086179_RuntimeMethod_var);
	}

IL_0038:
	{
		String_t* L_10 = V_0;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Il2CppChar L_13 = String_get_Chars_m2986988803(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)((int32_t)90)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		InvalidTimeFormat_t1714182330 * L_15 = (InvalidTimeFormat_t1714182330 *)il2cpp_codegen_object_new(InvalidTimeFormat_t1714182330_il2cpp_TypeInfo_var);
		InvalidTimeFormat__ctor_m1894908491(L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, X509Cert_ParseTime_m610086179_RuntimeMethod_var);
	}

IL_0059:
	{
		V_1 = 0;
		V_2 = 0;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m3847582255(L_16, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_17) == ((int32_t)((int32_t)13)))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20 = String_Substring_m1610150815(L_19, 0, 2, /*hidden argument*/NULL);
		int32_t L_21 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		int32_t L_22 = V_2;
		V_11 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)((int32_t)50)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)1900)));
		goto IL_00a7;
	}

IL_0094:
	{
		int32_t L_25 = V_2;
		V_12 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)50)))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)2000)));
	}

IL_00a7:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2));
		goto IL_00c2;
	}

IL_00ae:
	{
		String_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30 = String_Substring_m1610150815(L_29, 0, 4, /*hidden argument*/NULL);
		int32_t L_31 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)4));
	}

IL_00c2:
	{
		String_t* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		String_t* L_35 = String_Substring_m1610150815(L_33, L_34, 2, /*hidden argument*/NULL);
		int32_t L_36 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)2));
		String_t* L_38 = V_0;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		String_t* L_40 = String_Substring_m1610150815(L_38, L_39, 2, /*hidden argument*/NULL);
		int32_t L_41 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2));
		String_t* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		String_t* L_45 = String_Substring_m1610150815(L_43, L_44, 2, /*hidden argument*/NULL);
		int32_t L_46 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		String_t* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		String_t* L_50 = String_Substring_m1610150815(L_48, L_49, 2, /*hidden argument*/NULL);
		int32_t L_51 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		V_6 = L_51;
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2));
		String_t* L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		String_t* L_55 = String_Substring_m1610150815(L_53, L_54, 2, /*hidden argument*/NULL);
		int32_t L_56 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)2));
		int32_t L_58 = V_2;
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		int32_t L_63 = V_7;
		DateTime_t3738529785  L_64;
		memset(&L_64, 0, sizeof(L_64));
		DateTime__ctor_m2956360140((&L_64), L_58, L_59, L_60, L_61, L_62, L_63, 1, /*hidden argument*/NULL);
		V_13 = L_64;
		goto IL_0134;
	}

IL_0134:
	{
		DateTime_t3738529785  L_65 = V_13;
		return L_65;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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


// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t2800260182;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t2094547461;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1757093819;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t2269201059;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t96558379;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t733052450;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Func`1<System.Security.Cryptography.HashAlgorithm>
struct Func_1_t862063866;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.AccessControl.CryptoKeySecurity
struct CryptoKeySecurity_t1177725497;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t2702504504;
// System.Security.Cryptography.CspParameters
struct CspParameters_t239852639;
// System.Security.Cryptography.DSA
struct DSA_t2386879874;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t1952596188;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t3397414743;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Security.Cryptography.TailStream
struct TailStream_t1447577651;
// System.Security.Cryptography.TripleDES
struct TripleDES_t92303514;
// System.Security.SecureString
struct SecureString_t3041467854;
// System.String
struct String_t;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t540272775;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t4022128754;
// System.Type
struct Type_t;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Void
struct Void_t1185182177;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



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
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t3370779160  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t937192061  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t2681190756  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
#define ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t3486936014  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
#ifndef CONSTANTS_T3997854879_H
#define CONSTANTS_T3997854879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Constants
struct  Constants_t3997854879  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTS_T3997854879_H
#ifndef CRYPTOAPITRANSFORM_T1695680317_H
#define CRYPTOAPITRANSFORM_T1695680317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoAPITransform
struct  CryptoAPITransform_t1695680317  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.CryptoAPITransform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(CryptoAPITransform_t1695680317, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOAPITRANSFORM_T1695680317_H
#ifndef CRYPTOCONFIG_T4201145714_H
#define CRYPTOCONFIG_T4201145714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t4201145714  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t4201145714_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> System.Security.Cryptography.CryptoConfig::algorithms
	Dictionary_2_t2269201059 * ___algorithms_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig::unresolved_algorithms
	Dictionary_2_t1632706988 * ___unresolved_algorithms_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig::oids
	Dictionary_2_t1632706988 * ___oids_3;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA1
	Type_t * ___defaultSHA1_5;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultMD5
	Type_t * ___defaultMD5_6;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA256
	Type_t * ___defaultSHA256_7;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA384
	Type_t * ___defaultSHA384_8;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA512
	Type_t * ___defaultSHA512_9;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSA
	Type_t * ___defaultRSA_10;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDSA
	Type_t * ___defaultDSA_11;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDES
	Type_t * ___defaultDES_12;
	// System.Type System.Security.Cryptography.CryptoConfig::default3DES
	Type_t * ___default3DES_13;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRC2
	Type_t * ___defaultRC2_14;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultAES
	Type_t * ___defaultAES_15;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRNG
	Type_t * ___defaultRNG_16;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMAC
	Type_t * ___defaultHMAC_17;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultMAC3DES
	Type_t * ___defaultMAC3DES_18;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDSASigDesc
	Type_t * ___defaultDSASigDesc_19;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA1SigDesc
	Type_t * ___defaultRSAPKCS1SHA1SigDesc_20;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA256SigDesc
	Type_t * ___defaultRSAPKCS1SHA256SigDesc_21;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA384SigDesc
	Type_t * ___defaultRSAPKCS1SHA384SigDesc_22;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA512SigDesc
	Type_t * ___defaultRSAPKCS1SHA512SigDesc_23;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRIPEMD160
	Type_t * ___defaultRIPEMD160_24;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACMD5
	Type_t * ___defaultHMACMD5_25;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACRIPEMD160
	Type_t * ___defaultHMACRIPEMD160_26;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA256
	Type_t * ___defaultHMACSHA256_27;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA384
	Type_t * ___defaultHMACSHA384_28;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA512
	Type_t * ___defaultHMACSHA512_29;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___algorithms_1)); }
	inline Dictionary_2_t2269201059 * get_algorithms_1() const { return ___algorithms_1; }
	inline Dictionary_2_t2269201059 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Dictionary_2_t2269201059 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_unresolved_algorithms_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___unresolved_algorithms_2)); }
	inline Dictionary_2_t1632706988 * get_unresolved_algorithms_2() const { return ___unresolved_algorithms_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_unresolved_algorithms_2() { return &___unresolved_algorithms_2; }
	inline void set_unresolved_algorithms_2(Dictionary_2_t1632706988 * value)
	{
		___unresolved_algorithms_2 = value;
		Il2CppCodeGenWriteBarrier((&___unresolved_algorithms_2), value);
	}

	inline static int32_t get_offset_of_oids_3() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___oids_3)); }
	inline Dictionary_2_t1632706988 * get_oids_3() const { return ___oids_3; }
	inline Dictionary_2_t1632706988 ** get_address_of_oids_3() { return &___oids_3; }
	inline void set_oids_3(Dictionary_2_t1632706988 * value)
	{
		___oids_3 = value;
		Il2CppCodeGenWriteBarrier((&___oids_3), value);
	}

	inline static int32_t get_offset_of_defaultSHA1_5() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultSHA1_5)); }
	inline Type_t * get_defaultSHA1_5() const { return ___defaultSHA1_5; }
	inline Type_t ** get_address_of_defaultSHA1_5() { return &___defaultSHA1_5; }
	inline void set_defaultSHA1_5(Type_t * value)
	{
		___defaultSHA1_5 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA1_5), value);
	}

	inline static int32_t get_offset_of_defaultMD5_6() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultMD5_6)); }
	inline Type_t * get_defaultMD5_6() const { return ___defaultMD5_6; }
	inline Type_t ** get_address_of_defaultMD5_6() { return &___defaultMD5_6; }
	inline void set_defaultMD5_6(Type_t * value)
	{
		___defaultMD5_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMD5_6), value);
	}

	inline static int32_t get_offset_of_defaultSHA256_7() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultSHA256_7)); }
	inline Type_t * get_defaultSHA256_7() const { return ___defaultSHA256_7; }
	inline Type_t ** get_address_of_defaultSHA256_7() { return &___defaultSHA256_7; }
	inline void set_defaultSHA256_7(Type_t * value)
	{
		___defaultSHA256_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA256_7), value);
	}

	inline static int32_t get_offset_of_defaultSHA384_8() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultSHA384_8)); }
	inline Type_t * get_defaultSHA384_8() const { return ___defaultSHA384_8; }
	inline Type_t ** get_address_of_defaultSHA384_8() { return &___defaultSHA384_8; }
	inline void set_defaultSHA384_8(Type_t * value)
	{
		___defaultSHA384_8 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA384_8), value);
	}

	inline static int32_t get_offset_of_defaultSHA512_9() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultSHA512_9)); }
	inline Type_t * get_defaultSHA512_9() const { return ___defaultSHA512_9; }
	inline Type_t ** get_address_of_defaultSHA512_9() { return &___defaultSHA512_9; }
	inline void set_defaultSHA512_9(Type_t * value)
	{
		___defaultSHA512_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA512_9), value);
	}

	inline static int32_t get_offset_of_defaultRSA_10() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultRSA_10)); }
	inline Type_t * get_defaultRSA_10() const { return ___defaultRSA_10; }
	inline Type_t ** get_address_of_defaultRSA_10() { return &___defaultRSA_10; }
	inline void set_defaultRSA_10(Type_t * value)
	{
		___defaultRSA_10 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSA_10), value);
	}

	inline static int32_t get_offset_of_defaultDSA_11() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultDSA_11)); }
	inline Type_t * get_defaultDSA_11() const { return ___defaultDSA_11; }
	inline Type_t ** get_address_of_defaultDSA_11() { return &___defaultDSA_11; }
	inline void set_defaultDSA_11(Type_t * value)
	{
		___defaultDSA_11 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDSA_11), value);
	}

	inline static int32_t get_offset_of_defaultDES_12() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultDES_12)); }
	inline Type_t * get_defaultDES_12() const { return ___defaultDES_12; }
	inline Type_t ** get_address_of_defaultDES_12() { return &___defaultDES_12; }
	inline void set_defaultDES_12(Type_t * value)
	{
		___defaultDES_12 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDES_12), value);
	}

	inline static int32_t get_offset_of_default3DES_13() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___default3DES_13)); }
	inline Type_t * get_default3DES_13() const { return ___default3DES_13; }
	inline Type_t ** get_address_of_default3DES_13() { return &___default3DES_13; }
	inline void set_default3DES_13(Type_t * value)
	{
		___default3DES_13 = value;
		Il2CppCodeGenWriteBarrier((&___default3DES_13), value);
	}

	inline static int32_t get_offset_of_defaultRC2_14() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultRC2_14)); }
	inline Type_t * get_defaultRC2_14() const { return ___defaultRC2_14; }
	inline Type_t ** get_address_of_defaultRC2_14() { return &___defaultRC2_14; }
	inline void set_defaultRC2_14(Type_t * value)
	{
		___defaultRC2_14 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRC2_14), value);
	}

	inline static int32_t get_offset_of_defaultAES_15() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultAES_15)); }
	inline Type_t * get_defaultAES_15() const { return ___defaultAES_15; }
	inline Type_t ** get_address_of_defaultAES_15() { return &___defaultAES_15; }
	inline void set_defaultAES_15(Type_t * value)
	{
		___defaultAES_15 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAES_15), value);
	}

	inline static int32_t get_offset_of_defaultRNG_16() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultRNG_16)); }
	inline Type_t * get_defaultRNG_16() const { return ___defaultRNG_16; }
	inline Type_t ** get_address_of_defaultRNG_16() { return &___defaultRNG_16; }
	inline void set_defaultRNG_16(Type_t * value)
	{
		___defaultRNG_16 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRNG_16), value);
	}

	inline static int32_t get_offset_of_defaultHMAC_17() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultHMAC_17)); }
	inline Type_t * get_defaultHMAC_17() const { return ___defaultHMAC_17; }
	inline Type_t ** get_address_of_defaultHMAC_17() { return &___defaultHMAC_17; }
	inline void set_defaultHMAC_17(Type_t * value)
	{
		___defaultHMAC_17 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMAC_17), value);
	}

	inline static int32_t get_offset_of_defaultMAC3DES_18() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultMAC3DES_18)); }
	inline Type_t * get_defaultMAC3DES_18() const { return ___defaultMAC3DES_18; }
	inline Type_t ** get_address_of_defaultMAC3DES_18() { return &___defaultMAC3DES_18; }
	inline void set_defaultMAC3DES_18(Type_t * value)
	{
		___defaultMAC3DES_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMAC3DES_18), value);
	}

	inline static int32_t get_offset_of_defaultDSASigDesc_19() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultDSASigDesc_19)); }
	inline Type_t * get_defaultDSASigDesc_19() const { return ___defaultDSASigDesc_19; }
	inline Type_t ** get_address_of_defaultDSASigDesc_19() { return &___defaultDSASigDesc_19; }
	inline void set_defaultDSASigDesc_19(Type_t * value)
	{
		___defaultDSASigDesc_19 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDSASigDesc_19), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA1SigDesc_20() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultRSAPKCS1SHA1SigDesc_20)); }
	inline Type_t * get_defaultRSAPKCS1SHA1SigDesc_20() const { return ___defaultRSAPKCS1SHA1SigDesc_20; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA1SigDesc_20() { return &___defaultRSAPKCS1SHA1SigDesc_20; }
	inline void set_defaultRSAPKCS1SHA1SigDesc_20(Type_t * value)
	{
		___defaultRSAPKCS1SHA1SigDesc_20 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA1SigDesc_20), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA256SigDesc_21() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultRSAPKCS1SHA256SigDesc_21)); }
	inline Type_t * get_defaultRSAPKCS1SHA256SigDesc_21() const { return ___defaultRSAPKCS1SHA256SigDesc_21; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA256SigDesc_21() { return &___defaultRSAPKCS1SHA256SigDesc_21; }
	inline void set_defaultRSAPKCS1SHA256SigDesc_21(Type_t * value)
	{
		___defaultRSAPKCS1SHA256SigDesc_21 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA256SigDesc_21), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA384SigDesc_22() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultRSAPKCS1SHA384SigDesc_22)); }
	inline Type_t * get_defaultRSAPKCS1SHA384SigDesc_22() const { return ___defaultRSAPKCS1SHA384SigDesc_22; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA384SigDesc_22() { return &___defaultRSAPKCS1SHA384SigDesc_22; }
	inline void set_defaultRSAPKCS1SHA384SigDesc_22(Type_t * value)
	{
		___defaultRSAPKCS1SHA384SigDesc_22 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA384SigDesc_22), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA512SigDesc_23() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultRSAPKCS1SHA512SigDesc_23)); }
	inline Type_t * get_defaultRSAPKCS1SHA512SigDesc_23() const { return ___defaultRSAPKCS1SHA512SigDesc_23; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA512SigDesc_23() { return &___defaultRSAPKCS1SHA512SigDesc_23; }
	inline void set_defaultRSAPKCS1SHA512SigDesc_23(Type_t * value)
	{
		___defaultRSAPKCS1SHA512SigDesc_23 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA512SigDesc_23), value);
	}

	inline static int32_t get_offset_of_defaultRIPEMD160_24() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultRIPEMD160_24)); }
	inline Type_t * get_defaultRIPEMD160_24() const { return ___defaultRIPEMD160_24; }
	inline Type_t ** get_address_of_defaultRIPEMD160_24() { return &___defaultRIPEMD160_24; }
	inline void set_defaultRIPEMD160_24(Type_t * value)
	{
		___defaultRIPEMD160_24 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRIPEMD160_24), value);
	}

	inline static int32_t get_offset_of_defaultHMACMD5_25() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultHMACMD5_25)); }
	inline Type_t * get_defaultHMACMD5_25() const { return ___defaultHMACMD5_25; }
	inline Type_t ** get_address_of_defaultHMACMD5_25() { return &___defaultHMACMD5_25; }
	inline void set_defaultHMACMD5_25(Type_t * value)
	{
		___defaultHMACMD5_25 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACMD5_25), value);
	}

	inline static int32_t get_offset_of_defaultHMACRIPEMD160_26() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultHMACRIPEMD160_26)); }
	inline Type_t * get_defaultHMACRIPEMD160_26() const { return ___defaultHMACRIPEMD160_26; }
	inline Type_t ** get_address_of_defaultHMACRIPEMD160_26() { return &___defaultHMACRIPEMD160_26; }
	inline void set_defaultHMACRIPEMD160_26(Type_t * value)
	{
		___defaultHMACRIPEMD160_26 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACRIPEMD160_26), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA256_27() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultHMACSHA256_27)); }
	inline Type_t * get_defaultHMACSHA256_27() const { return ___defaultHMACSHA256_27; }
	inline Type_t ** get_address_of_defaultHMACSHA256_27() { return &___defaultHMACSHA256_27; }
	inline void set_defaultHMACSHA256_27(Type_t * value)
	{
		___defaultHMACSHA256_27 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA256_27), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA384_28() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultHMACSHA384_28)); }
	inline Type_t * get_defaultHMACSHA384_28() const { return ___defaultHMACSHA384_28; }
	inline Type_t ** get_address_of_defaultHMACSHA384_28() { return &___defaultHMACSHA384_28; }
	inline void set_defaultHMACSHA384_28(Type_t * value)
	{
		___defaultHMACSHA384_28 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA384_28), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA512_29() { return static_cast<int32_t>(offsetof(CryptoConfig_t4201145714_StaticFields, ___defaultHMACSHA512_29)); }
	inline Type_t * get_defaultHMACSHA512_29() const { return ___defaultHMACSHA512_29; }
	inline Type_t ** get_address_of_defaultHMACSHA512_29() { return &___defaultHMACSHA512_29; }
	inline void set_defaultHMACSHA512_29(Type_t * value)
	{
		___defaultHMACSHA512_29 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA512_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T4201145714_H
#ifndef CRYPTOHANDLER_T2779508855_H
#define CRYPTOHANDLER_T2779508855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct  CryptoHandler_t2779508855  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Type> System.Security.Cryptography.CryptoConfig/CryptoHandler::algorithms
	RuntimeObject* ___algorithms_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::oid
	RuntimeObject* ___oid_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::names
	Dictionary_2_t1632706988 * ___names_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::classnames
	Dictionary_2_t1632706988 * ___classnames_3;
	// System.Int32 System.Security.Cryptography.CryptoConfig/CryptoHandler::level
	int32_t ___level_4;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___algorithms_0)); }
	inline RuntimeObject* get_algorithms_0() const { return ___algorithms_0; }
	inline RuntimeObject** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(RuntimeObject* value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}

	inline static int32_t get_offset_of_oid_1() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___oid_1)); }
	inline RuntimeObject* get_oid_1() const { return ___oid_1; }
	inline RuntimeObject** get_address_of_oid_1() { return &___oid_1; }
	inline void set_oid_1(RuntimeObject* value)
	{
		___oid_1 = value;
		Il2CppCodeGenWriteBarrier((&___oid_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___names_2)); }
	inline Dictionary_2_t1632706988 * get_names_2() const { return ___names_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(Dictionary_2_t1632706988 * value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_classnames_3() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___classnames_3)); }
	inline Dictionary_2_t1632706988 * get_classnames_3() const { return ___classnames_3; }
	inline Dictionary_2_t1632706988 ** get_address_of_classnames_3() { return &___classnames_3; }
	inline void set_classnames_3(Dictionary_2_t1632706988 * value)
	{
		___classnames_3 = value;
		Il2CppCodeGenWriteBarrier((&___classnames_3), value);
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(CryptoHandler_t2779508855, ___level_4)); }
	inline int32_t get_level_4() const { return ___level_4; }
	inline int32_t* get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(int32_t value)
	{
		___level_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOHANDLER_T2779508855_H
#ifndef CSPKEYCONTAINERINFO_T3833902945_H
#define CSPKEYCONTAINERINFO_T3833902945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspKeyContainerInfo
struct  CspKeyContainerInfo_t3833902945  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters System.Security.Cryptography.CspKeyContainerInfo::_params
	CspParameters_t239852639 * ____params_0;
	// System.Boolean System.Security.Cryptography.CspKeyContainerInfo::_random
	bool ____random_1;

public:
	inline static int32_t get_offset_of__params_0() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t3833902945, ____params_0)); }
	inline CspParameters_t239852639 * get__params_0() const { return ____params_0; }
	inline CspParameters_t239852639 ** get_address_of__params_0() { return &____params_0; }
	inline void set__params_0(CspParameters_t239852639 * value)
	{
		____params_0 = value;
		Il2CppCodeGenWriteBarrier((&____params_0), value);
	}

	inline static int32_t get_offset_of__random_1() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t3833902945, ____random_1)); }
	inline bool get__random_1() const { return ____random_1; }
	inline bool* get_address_of__random_1() { return &____random_1; }
	inline void set__random_1(bool value)
	{
		____random_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPKEYCONTAINERINFO_T3833902945_H
#ifndef DERIVEBYTES_T2246965020_H
#define DERIVEBYTES_T2246965020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t2246965020  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T2246965020_H
#ifndef U3CU3EC_T44063686_H
#define U3CU3EC_T44063686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256/<>c
struct  U3CU3Ec_t44063686  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t44063686_StaticFields
{
public:
	// System.Security.Cryptography.HMACSHA256/<>c System.Security.Cryptography.HMACSHA256/<>c::<>9
	U3CU3Ec_t44063686 * ___U3CU3E9_0;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA256/<>c::<>9__1_0
	Func_1_t862063866 * ___U3CU3E9__1_0_1;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA256/<>c::<>9__1_1
	Func_1_t862063866 * ___U3CU3E9__1_1_2;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA256/<>c::<>9__1_2
	Func_1_t862063866 * ___U3CU3E9__1_2_3;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA256/<>c::<>9__1_3
	Func_1_t862063866 * ___U3CU3E9__1_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t44063686_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t44063686 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t44063686 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t44063686 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t44063686_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_1_t862063866 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_1_t862063866 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t44063686_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_1_t862063866 * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_1_t862063866 * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t44063686_StaticFields, ___U3CU3E9__1_2_3)); }
	inline Func_1_t862063866 * get_U3CU3E9__1_2_3() const { return ___U3CU3E9__1_2_3; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__1_2_3() { return &___U3CU3E9__1_2_3; }
	inline void set_U3CU3E9__1_2_3(Func_1_t862063866 * value)
	{
		___U3CU3E9__1_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t44063686_StaticFields, ___U3CU3E9__1_3_4)); }
	inline Func_1_t862063866 * get_U3CU3E9__1_3_4() const { return ___U3CU3E9__1_3_4; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__1_3_4() { return &___U3CU3E9__1_3_4; }
	inline void set_U3CU3E9__1_3_4(Func_1_t862063866 * value)
	{
		___U3CU3E9__1_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T44063686_H
#ifndef U3CU3EC_T3166561961_H
#define U3CU3EC_T3166561961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384/<>c
struct  U3CU3Ec_t3166561961  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3166561961_StaticFields
{
public:
	// System.Security.Cryptography.HMACSHA384/<>c System.Security.Cryptography.HMACSHA384/<>c::<>9
	U3CU3Ec_t3166561961 * ___U3CU3E9_0;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA384/<>c::<>9__2_0
	Func_1_t862063866 * ___U3CU3E9__2_0_1;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA384/<>c::<>9__2_1
	Func_1_t862063866 * ___U3CU3E9__2_1_2;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA384/<>c::<>9__2_2
	Func_1_t862063866 * ___U3CU3E9__2_2_3;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA384/<>c::<>9__2_3
	Func_1_t862063866 * ___U3CU3E9__2_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3166561961_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3166561961 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3166561961 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3166561961 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3166561961_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_1_t862063866 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_1_t862063866 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3166561961_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_1_t862063866 * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_1_t862063866 * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3166561961_StaticFields, ___U3CU3E9__2_2_3)); }
	inline Func_1_t862063866 * get_U3CU3E9__2_2_3() const { return ___U3CU3E9__2_2_3; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__2_2_3() { return &___U3CU3E9__2_2_3; }
	inline void set_U3CU3E9__2_2_3(Func_1_t862063866 * value)
	{
		___U3CU3E9__2_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3166561961_StaticFields, ___U3CU3E9__2_3_4)); }
	inline Func_1_t862063866 * get_U3CU3E9__2_3_4() const { return ___U3CU3E9__2_3_4; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__2_3_4() { return &___U3CU3E9__2_3_4; }
	inline void set_U3CU3E9__2_3_4(Func_1_t862063866 * value)
	{
		___U3CU3E9__2_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3166561961_H
#ifndef U3CU3EC_T616840057_H
#define U3CU3EC_T616840057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512/<>c
struct  U3CU3Ec_t616840057  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t616840057_StaticFields
{
public:
	// System.Security.Cryptography.HMACSHA512/<>c System.Security.Cryptography.HMACSHA512/<>c::<>9
	U3CU3Ec_t616840057 * ___U3CU3E9_0;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA512/<>c::<>9__2_0
	Func_1_t862063866 * ___U3CU3E9__2_0_1;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA512/<>c::<>9__2_1
	Func_1_t862063866 * ___U3CU3E9__2_1_2;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA512/<>c::<>9__2_2
	Func_1_t862063866 * ___U3CU3E9__2_2_3;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA512/<>c::<>9__2_3
	Func_1_t862063866 * ___U3CU3E9__2_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t616840057_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t616840057 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t616840057 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t616840057 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t616840057_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_1_t862063866 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_1_t862063866 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t616840057_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_1_t862063866 * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_1_t862063866 * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t616840057_StaticFields, ___U3CU3E9__2_2_3)); }
	inline Func_1_t862063866 * get_U3CU3E9__2_2_3() const { return ___U3CU3E9__2_2_3; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__2_2_3() { return &___U3CU3E9__2_2_3; }
	inline void set_U3CU3E9__2_2_3(Func_1_t862063866 * value)
	{
		___U3CU3E9__2_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t616840057_StaticFields, ___U3CU3E9__2_3_4)); }
	inline Func_1_t862063866 * get_U3CU3E9__2_3_4() const { return ___U3CU3E9__2_3_4; }
	inline Func_1_t862063866 ** get_address_of_U3CU3E9__2_3_4() { return &___U3CU3E9__2_3_4; }
	inline void set_U3CU3E9__2_3_4(Func_1_t862063866 * value)
	{
		___U3CU3E9__2_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T616840057_H
#ifndef HASHALGORITHM_T1432317219_H
#define HASHALGORITHM_T1432317219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1432317219  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t4116647657* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashValue_1)); }
	inline ByteU5BU5D_t4116647657* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_t4116647657* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_1), value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1432317219_H
#ifndef KEYSIZES_T85027896_H
#define KEYSIZES_T85027896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t85027896  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::m_minSize
	int32_t ___m_minSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::m_maxSize
	int32_t ___m_maxSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::m_skipSize
	int32_t ___m_skipSize_2;

public:
	inline static int32_t get_offset_of_m_minSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ___m_minSize_0)); }
	inline int32_t get_m_minSize_0() const { return ___m_minSize_0; }
	inline int32_t* get_address_of_m_minSize_0() { return &___m_minSize_0; }
	inline void set_m_minSize_0(int32_t value)
	{
		___m_minSize_0 = value;
	}

	inline static int32_t get_offset_of_m_maxSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ___m_maxSize_1)); }
	inline int32_t get_m_maxSize_1() const { return ___m_maxSize_1; }
	inline int32_t* get_address_of_m_maxSize_1() { return &___m_maxSize_1; }
	inline void set_m_maxSize_1(int32_t value)
	{
		___m_maxSize_1 = value;
	}

	inline static int32_t get_offset_of_m_skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ___m_skipSize_2)); }
	inline int32_t get_m_skipSize_2() const { return ___m_skipSize_2; }
	inline int32_t* get_address_of_m_skipSize_2() { return &___m_skipSize_2; }
	inline void set_m_skipSize_2(int32_t value)
	{
		___m_skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T85027896_H
#ifndef MASKGENERATIONMETHOD_T2116484826_H
#define MASKGENERATIONMETHOD_T2116484826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MaskGenerationMethod
struct  MaskGenerationMethod_t2116484826  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKGENERATIONMETHOD_T2116484826_H
#ifndef RANDOMNUMBERGENERATOR_T386037858_H
#define RANDOMNUMBERGENERATOR_T386037858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t386037858  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T386037858_H
#ifndef SIGNATUREDESCRIPTION_T1971889425_H
#define SIGNATUREDESCRIPTION_T1971889425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t1971889425  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_strKey
	String_t* ____strKey_0;
	// System.String System.Security.Cryptography.SignatureDescription::_strDigest
	String_t* ____strDigest_1;
	// System.String System.Security.Cryptography.SignatureDescription::_strFormatter
	String_t* ____strFormatter_2;
	// System.String System.Security.Cryptography.SignatureDescription::_strDeformatter
	String_t* ____strDeformatter_3;

public:
	inline static int32_t get_offset_of__strKey_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t1971889425, ____strKey_0)); }
	inline String_t* get__strKey_0() const { return ____strKey_0; }
	inline String_t** get_address_of__strKey_0() { return &____strKey_0; }
	inline void set__strKey_0(String_t* value)
	{
		____strKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____strKey_0), value);
	}

	inline static int32_t get_offset_of__strDigest_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t1971889425, ____strDigest_1)); }
	inline String_t* get__strDigest_1() const { return ____strDigest_1; }
	inline String_t** get_address_of__strDigest_1() { return &____strDigest_1; }
	inline void set__strDigest_1(String_t* value)
	{
		____strDigest_1 = value;
		Il2CppCodeGenWriteBarrier((&____strDigest_1), value);
	}

	inline static int32_t get_offset_of__strFormatter_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t1971889425, ____strFormatter_2)); }
	inline String_t* get__strFormatter_2() const { return ____strFormatter_2; }
	inline String_t** get_address_of__strFormatter_2() { return &____strFormatter_2; }
	inline void set__strFormatter_2(String_t* value)
	{
		____strFormatter_2 = value;
		Il2CppCodeGenWriteBarrier((&____strFormatter_2), value);
	}

	inline static int32_t get_offset_of__strDeformatter_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t1971889425, ____strDeformatter_3)); }
	inline String_t* get__strDeformatter_3() const { return ____strDeformatter_3; }
	inline String_t** get_address_of__strDeformatter_3() { return &____strDeformatter_3; }
	inline void set__strDeformatter_3(String_t* value)
	{
		____strDeformatter_3 = value;
		Il2CppCodeGenWriteBarrier((&____strDeformatter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T1971889425_H
#ifndef TOBASE64TRANSFORM_T2551557057_H
#define TOBASE64TRANSFORM_T2551557057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t2551557057  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T2551557057_H
#ifndef UTILS_T1416439708_H
#define UTILS_T1416439708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Utils
struct  Utils_t1416439708  : public RuntimeObject
{
public:

public:
};

struct Utils_t1416439708_StaticFields
{
public:
	// System.Security.Cryptography.RNGCryptoServiceProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.Utils::_rng
	RNGCryptoServiceProvider_t3397414743 * ____rng_1;

public:
	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Utils_t1416439708_StaticFields, ____rng_1)); }
	inline RNGCryptoServiceProvider_t3397414743 * get__rng_1() const { return ____rng_1; }
	inline RNGCryptoServiceProvider_t3397414743 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RNGCryptoServiceProvider_t3397414743 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T1416439708_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef ASYNCMETHODBUILDERCORE_T2955600131_H
#define ASYNCMETHODBUILDERCORE_T2955600131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2955600131 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1264377477 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_defaultContextAction_1)); }
	inline Action_t1264377477 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1264377477 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1264377477 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2955600131_H
#ifndef CONFIGUREDTASKAWAITER_T555647845_H
#define CONFIGUREDTASKAWAITER_T555647845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t555647845 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T555647845_H
#ifndef CONFIGUREDTASKAWAITER_T4273446738_H
#define CONFIGUREDTASKAWAITER_T4273446738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct  ConfiguredTaskAwaiter_t4273446738 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t61518632 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t4273446738, ___m_task_0)); }
	inline Task_1_t61518632 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t61518632 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t61518632 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t4273446738, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITER_T4273446738_H
#ifndef HOPTOTHREADPOOLAWAITABLE_T810938849_H
#define HOPTOTHREADPOOLAWAITABLE_T810938849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable
struct  HopToThreadPoolAwaitable_t810938849 
{
public:
	union
	{
		struct
		{
		};
		uint8_t HopToThreadPoolAwaitable_t810938849__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOPTOTHREADPOOLAWAITABLE_T810938849_H
#ifndef DSA_T2386879874_H
#define DSA_T2386879874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2386879874  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2386879874_H
#ifndef DSAPARAMETERS_T1885824122_H
#define DSAPARAMETERS_T1885824122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t1885824122 
{
public:
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t4116647657* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t4116647657* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t4116647657* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t4116647657* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t4116647657* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t4116647657* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t4116647657* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___P_0)); }
	inline ByteU5BU5D_t4116647657* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t4116647657* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___Q_1)); }
	inline ByteU5BU5D_t4116647657* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t4116647657* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___G_2)); }
	inline ByteU5BU5D_t4116647657* get_G_2() const { return ___G_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(ByteU5BU5D_t4116647657* value)
	{
		___G_2 = value;
		Il2CppCodeGenWriteBarrier((&___G_2), value);
	}

	inline static int32_t get_offset_of_Y_3() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___Y_3)); }
	inline ByteU5BU5D_t4116647657* get_Y_3() const { return ___Y_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_Y_3() { return &___Y_3; }
	inline void set_Y_3(ByteU5BU5D_t4116647657* value)
	{
		___Y_3 = value;
		Il2CppCodeGenWriteBarrier((&___Y_3), value);
	}

	inline static int32_t get_offset_of_J_4() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___J_4)); }
	inline ByteU5BU5D_t4116647657* get_J_4() const { return ___J_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_J_4() { return &___J_4; }
	inline void set_J_4(ByteU5BU5D_t4116647657* value)
	{
		___J_4 = value;
		Il2CppCodeGenWriteBarrier((&___J_4), value);
	}

	inline static int32_t get_offset_of_X_5() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___X_5)); }
	inline ByteU5BU5D_t4116647657* get_X_5() const { return ___X_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_X_5() { return &___X_5; }
	inline void set_X_5(ByteU5BU5D_t4116647657* value)
	{
		___X_5 = value;
		Il2CppCodeGenWriteBarrier((&___X_5), value);
	}

	inline static int32_t get_offset_of_Seed_6() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___Seed_6)); }
	inline ByteU5BU5D_t4116647657* get_Seed_6() const { return ___Seed_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_Seed_6() { return &___Seed_6; }
	inline void set_Seed_6(ByteU5BU5D_t4116647657* value)
	{
		___Seed_6 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_6), value);
	}

	inline static int32_t get_offset_of_Counter_7() { return static_cast<int32_t>(offsetof(DSAParameters_t1885824122, ___Counter_7)); }
	inline int32_t get_Counter_7() const { return ___Counter_7; }
	inline int32_t* get_address_of_Counter_7() { return &___Counter_7; }
	inline void set_Counter_7(int32_t value)
	{
		___Counter_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1885824122_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___G_2;
	uint8_t* ___Y_3;
	uint8_t* ___J_4;
	uint8_t* ___X_5;
	uint8_t* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1885824122_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___G_2;
	uint8_t* ___Y_3;
	uint8_t* ___J_4;
	uint8_t* ___X_5;
	uint8_t* ___Seed_6;
	int32_t ___Counter_7;
};
#endif // DSAPARAMETERS_T1885824122_H
#ifndef DSASIGNATUREDEFORMATTER_T3677955172_H
#define DSASIGNATUREDEFORMATTER_T3677955172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t3677955172  : public AsymmetricSignatureDeformatter_t2681190756
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::_dsaKey
	DSA_t2386879874 * ____dsaKey_0;
	// System.String System.Security.Cryptography.DSASignatureDeformatter::_oid
	String_t* ____oid_1;

public:
	inline static int32_t get_offset_of__dsaKey_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t3677955172, ____dsaKey_0)); }
	inline DSA_t2386879874 * get__dsaKey_0() const { return ____dsaKey_0; }
	inline DSA_t2386879874 ** get_address_of__dsaKey_0() { return &____dsaKey_0; }
	inline void set__dsaKey_0(DSA_t2386879874 * value)
	{
		____dsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____dsaKey_0), value);
	}

	inline static int32_t get_offset_of__oid_1() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t3677955172, ____oid_1)); }
	inline String_t* get__oid_1() const { return ____oid_1; }
	inline String_t** get_address_of__oid_1() { return &____oid_1; }
	inline void set__oid_1(String_t* value)
	{
		____oid_1 = value;
		Il2CppCodeGenWriteBarrier((&____oid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T3677955172_H
#ifndef DSASIGNATUREDESCRIPTION_T1163053634_H
#define DSASIGNATUREDESCRIPTION_T1163053634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t1163053634  : public SignatureDescription_t1971889425
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T1163053634_H
#ifndef DSASIGNATUREFORMATTER_T2007981259_H
#define DSASIGNATUREFORMATTER_T2007981259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t2007981259  : public AsymmetricSignatureFormatter_t3486936014
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::_dsaKey
	DSA_t2386879874 * ____dsaKey_0;
	// System.String System.Security.Cryptography.DSASignatureFormatter::_oid
	String_t* ____oid_1;

public:
	inline static int32_t get_offset_of__dsaKey_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t2007981259, ____dsaKey_0)); }
	inline DSA_t2386879874 * get__dsaKey_0() const { return ____dsaKey_0; }
	inline DSA_t2386879874 ** get_address_of__dsaKey_0() { return &____dsaKey_0; }
	inline void set__dsaKey_0(DSA_t2386879874 * value)
	{
		____dsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____dsaKey_0), value);
	}

	inline static int32_t get_offset_of__oid_1() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t2007981259, ____oid_1)); }
	inline String_t* get__oid_1() const { return ____oid_1; }
	inline String_t** get_address_of__oid_1() { return &____oid_1; }
	inline void set__oid_1(String_t* value)
	{
		____oid_1 = value;
		Il2CppCodeGenWriteBarrier((&____oid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T2007981259_H
#ifndef HASHALGORITHMNAME_T3637476002_H
#define HASHALGORITHMNAME_T3637476002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithmName
struct  HashAlgorithmName_t3637476002 
{
public:
	// System.String System.Security.Cryptography.HashAlgorithmName::_name
	String_t* ____name_0;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(HashAlgorithmName_t3637476002, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t3637476002_marshaled_pinvoke
{
	char* ____name_0;
};
// Native definition for COM marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t3637476002_marshaled_com
{
	Il2CppChar* ____name_0;
};
#endif // HASHALGORITHMNAME_T3637476002_H
#ifndef KEYEDHASHALGORITHM_T112861511_H
#define KEYEDHASHALGORITHM_T112861511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t112861511  : public HashAlgorithm_t1432317219
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t112861511, ___KeyValue_4)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T112861511_H
#ifndef MD5_T3177620429_H
#define MD5_T3177620429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t3177620429  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T3177620429_H
#ifndef PKCS1MASKGENERATIONMETHOD_T1129351447_H
#define PKCS1MASKGENERATIONMETHOD_T1129351447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PKCS1MaskGenerationMethod
struct  PKCS1MaskGenerationMethod_t1129351447  : public MaskGenerationMethod_t2116484826
{
public:
	// System.String System.Security.Cryptography.PKCS1MaskGenerationMethod::HashNameValue
	String_t* ___HashNameValue_0;

public:
	inline static int32_t get_offset_of_HashNameValue_0() { return static_cast<int32_t>(offsetof(PKCS1MaskGenerationMethod_t1129351447, ___HashNameValue_0)); }
	inline String_t* get_HashNameValue_0() const { return ___HashNameValue_0; }
	inline String_t** get_address_of_HashNameValue_0() { return &___HashNameValue_0; }
	inline void set_HashNameValue_0(String_t* value)
	{
		___HashNameValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashNameValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1MASKGENERATIONMETHOD_T1129351447_H
#ifndef PASSWORDDERIVEBYTES_T2836652680_H
#define PASSWORDDERIVEBYTES_T2836652680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PasswordDeriveBytes
struct  PasswordDeriveBytes_t2836652680  : public DeriveBytes_t2246965020
{
public:
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::_extraCount
	int32_t ____extraCount_0;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::_prefix
	int32_t ____prefix_1;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::_iterations
	int32_t ____iterations_2;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::_baseValue
	ByteU5BU5D_t4116647657* ____baseValue_3;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::_extra
	ByteU5BU5D_t4116647657* ____extra_4;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::_salt
	ByteU5BU5D_t4116647657* ____salt_5;
	// System.String System.Security.Cryptography.PasswordDeriveBytes::_hashName
	String_t* ____hashName_6;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::_password
	ByteU5BU5D_t4116647657* ____password_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.PasswordDeriveBytes::_hash
	HashAlgorithm_t1432317219 * ____hash_8;

public:
	inline static int32_t get_offset_of__extraCount_0() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____extraCount_0)); }
	inline int32_t get__extraCount_0() const { return ____extraCount_0; }
	inline int32_t* get_address_of__extraCount_0() { return &____extraCount_0; }
	inline void set__extraCount_0(int32_t value)
	{
		____extraCount_0 = value;
	}

	inline static int32_t get_offset_of__prefix_1() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____prefix_1)); }
	inline int32_t get__prefix_1() const { return ____prefix_1; }
	inline int32_t* get_address_of__prefix_1() { return &____prefix_1; }
	inline void set__prefix_1(int32_t value)
	{
		____prefix_1 = value;
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__baseValue_3() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____baseValue_3)); }
	inline ByteU5BU5D_t4116647657* get__baseValue_3() const { return ____baseValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__baseValue_3() { return &____baseValue_3; }
	inline void set__baseValue_3(ByteU5BU5D_t4116647657* value)
	{
		____baseValue_3 = value;
		Il2CppCodeGenWriteBarrier((&____baseValue_3), value);
	}

	inline static int32_t get_offset_of__extra_4() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____extra_4)); }
	inline ByteU5BU5D_t4116647657* get__extra_4() const { return ____extra_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__extra_4() { return &____extra_4; }
	inline void set__extra_4(ByteU5BU5D_t4116647657* value)
	{
		____extra_4 = value;
		Il2CppCodeGenWriteBarrier((&____extra_4), value);
	}

	inline static int32_t get_offset_of__salt_5() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____salt_5)); }
	inline ByteU5BU5D_t4116647657* get__salt_5() const { return ____salt_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_5() { return &____salt_5; }
	inline void set__salt_5(ByteU5BU5D_t4116647657* value)
	{
		____salt_5 = value;
		Il2CppCodeGenWriteBarrier((&____salt_5), value);
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__password_7() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____password_7)); }
	inline ByteU5BU5D_t4116647657* get__password_7() const { return ____password_7; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_7() { return &____password_7; }
	inline void set__password_7(ByteU5BU5D_t4116647657* value)
	{
		____password_7 = value;
		Il2CppCodeGenWriteBarrier((&____password_7), value);
	}

	inline static int32_t get_offset_of__hash_8() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2836652680, ____hash_8)); }
	inline HashAlgorithm_t1432317219 * get__hash_8() const { return ____hash_8; }
	inline HashAlgorithm_t1432317219 ** get_address_of__hash_8() { return &____hash_8; }
	inline void set__hash_8(HashAlgorithm_t1432317219 * value)
	{
		____hash_8 = value;
		Il2CppCodeGenWriteBarrier((&____hash_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDDERIVEBYTES_T2836652680_H
#ifndef RIPEMD160_T268675434_H
#define RIPEMD160_T268675434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t268675434  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T268675434_H
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
#ifndef RSAPKCS1SIGNATUREDESCRIPTION_T653172199_H
#define RSAPKCS1SIGNATUREDESCRIPTION_T653172199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDescription
struct  RSAPKCS1SignatureDescription_t653172199  : public SignatureDescription_t1971889425
{
public:
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDescription::_hashAlgorithm
	String_t* ____hashAlgorithm_4;

public:
	inline static int32_t get_offset_of__hashAlgorithm_4() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDescription_t653172199, ____hashAlgorithm_4)); }
	inline String_t* get__hashAlgorithm_4() const { return ____hashAlgorithm_4; }
	inline String_t** get_address_of__hashAlgorithm_4() { return &____hashAlgorithm_4; }
	inline void set__hashAlgorithm_4(String_t* value)
	{
		____hashAlgorithm_4 = value;
		Il2CppCodeGenWriteBarrier((&____hashAlgorithm_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDESCRIPTION_T653172199_H
#ifndef RSAPARAMETERS_T1728406613_H
#define RSAPARAMETERS_T1728406613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t1728406613 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t4116647657* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t4116647657* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t4116647657* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t4116647657* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t4116647657* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t4116647657* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t4116647657* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t4116647657* ___D_7;

public:
	inline static int32_t get_offset_of_Exponent_0() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___Exponent_0)); }
	inline ByteU5BU5D_t4116647657* get_Exponent_0() const { return ___Exponent_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Exponent_0() { return &___Exponent_0; }
	inline void set_Exponent_0(ByteU5BU5D_t4116647657* value)
	{
		___Exponent_0 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_0), value);
	}

	inline static int32_t get_offset_of_Modulus_1() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___Modulus_1)); }
	inline ByteU5BU5D_t4116647657* get_Modulus_1() const { return ___Modulus_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_Modulus_1() { return &___Modulus_1; }
	inline void set_Modulus_1(ByteU5BU5D_t4116647657* value)
	{
		___Modulus_1 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_1), value);
	}

	inline static int32_t get_offset_of_P_2() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___P_2)); }
	inline ByteU5BU5D_t4116647657* get_P_2() const { return ___P_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_P_2() { return &___P_2; }
	inline void set_P_2(ByteU5BU5D_t4116647657* value)
	{
		___P_2 = value;
		Il2CppCodeGenWriteBarrier((&___P_2), value);
	}

	inline static int32_t get_offset_of_Q_3() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___Q_3)); }
	inline ByteU5BU5D_t4116647657* get_Q_3() const { return ___Q_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_Q_3() { return &___Q_3; }
	inline void set_Q_3(ByteU5BU5D_t4116647657* value)
	{
		___Q_3 = value;
		Il2CppCodeGenWriteBarrier((&___Q_3), value);
	}

	inline static int32_t get_offset_of_DP_4() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___DP_4)); }
	inline ByteU5BU5D_t4116647657* get_DP_4() const { return ___DP_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_DP_4() { return &___DP_4; }
	inline void set_DP_4(ByteU5BU5D_t4116647657* value)
	{
		___DP_4 = value;
		Il2CppCodeGenWriteBarrier((&___DP_4), value);
	}

	inline static int32_t get_offset_of_DQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___DQ_5)); }
	inline ByteU5BU5D_t4116647657* get_DQ_5() const { return ___DQ_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_DQ_5() { return &___DQ_5; }
	inline void set_DQ_5(ByteU5BU5D_t4116647657* value)
	{
		___DQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_5), value);
	}

	inline static int32_t get_offset_of_InverseQ_6() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___InverseQ_6)); }
	inline ByteU5BU5D_t4116647657* get_InverseQ_6() const { return ___InverseQ_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_InverseQ_6() { return &___InverseQ_6; }
	inline void set_InverseQ_6(ByteU5BU5D_t4116647657* value)
	{
		___InverseQ_6 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_6), value);
	}

	inline static int32_t get_offset_of_D_7() { return static_cast<int32_t>(offsetof(RSAParameters_t1728406613, ___D_7)); }
	inline ByteU5BU5D_t4116647657* get_D_7() const { return ___D_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_D_7() { return &___D_7; }
	inline void set_D_7(ByteU5BU5D_t4116647657* value)
	{
		___D_7 = value;
		Il2CppCodeGenWriteBarrier((&___D_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t1728406613_marshaled_pinvoke
{
	uint8_t* ___Exponent_0;
	uint8_t* ___Modulus_1;
	uint8_t* ___P_2;
	uint8_t* ___Q_3;
	uint8_t* ___DP_4;
	uint8_t* ___DQ_5;
	uint8_t* ___InverseQ_6;
	uint8_t* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t1728406613_marshaled_com
{
	uint8_t* ___Exponent_0;
	uint8_t* ___Modulus_1;
	uint8_t* ___P_2;
	uint8_t* ___Q_3;
	uint8_t* ___DP_4;
	uint8_t* ___DQ_5;
	uint8_t* ___InverseQ_6;
	uint8_t* ___D_7;
};
#endif // RSAPARAMETERS_T1728406613_H
#ifndef RFC2898DERIVEBYTES_T546674159_H
#define RFC2898DERIVEBYTES_T546674159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rfc2898DeriveBytes
struct  Rfc2898DeriveBytes_t546674159  : public DeriveBytes_t2246965020
{
public:
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::m_buffer
	ByteU5BU5D_t4116647657* ___m_buffer_0;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::m_salt
	ByteU5BU5D_t4116647657* ___m_salt_1;
	// System.Security.Cryptography.HMACSHA1 System.Security.Cryptography.Rfc2898DeriveBytes::m_hmacsha1
	HMACSHA1_t1952596188 * ___m_hmacsha1_2;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::m_password
	ByteU5BU5D_t4116647657* ___m_password_3;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::m_iterations
	uint32_t ___m_iterations_4;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::m_block
	uint32_t ___m_block_5;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::m_startIndex
	int32_t ___m_startIndex_6;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::m_endIndex
	int32_t ___m_endIndex_7;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ___m_buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_m_buffer_0() const { return ___m_buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___m_buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_buffer_0), value);
	}

	inline static int32_t get_offset_of_m_salt_1() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ___m_salt_1)); }
	inline ByteU5BU5D_t4116647657* get_m_salt_1() const { return ___m_salt_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_salt_1() { return &___m_salt_1; }
	inline void set_m_salt_1(ByteU5BU5D_t4116647657* value)
	{
		___m_salt_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_salt_1), value);
	}

	inline static int32_t get_offset_of_m_hmacsha1_2() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ___m_hmacsha1_2)); }
	inline HMACSHA1_t1952596188 * get_m_hmacsha1_2() const { return ___m_hmacsha1_2; }
	inline HMACSHA1_t1952596188 ** get_address_of_m_hmacsha1_2() { return &___m_hmacsha1_2; }
	inline void set_m_hmacsha1_2(HMACSHA1_t1952596188 * value)
	{
		___m_hmacsha1_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_hmacsha1_2), value);
	}

	inline static int32_t get_offset_of_m_password_3() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ___m_password_3)); }
	inline ByteU5BU5D_t4116647657* get_m_password_3() const { return ___m_password_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_password_3() { return &___m_password_3; }
	inline void set_m_password_3(ByteU5BU5D_t4116647657* value)
	{
		___m_password_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_password_3), value);
	}

	inline static int32_t get_offset_of_m_iterations_4() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ___m_iterations_4)); }
	inline uint32_t get_m_iterations_4() const { return ___m_iterations_4; }
	inline uint32_t* get_address_of_m_iterations_4() { return &___m_iterations_4; }
	inline void set_m_iterations_4(uint32_t value)
	{
		___m_iterations_4 = value;
	}

	inline static int32_t get_offset_of_m_block_5() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ___m_block_5)); }
	inline uint32_t get_m_block_5() const { return ___m_block_5; }
	inline uint32_t* get_address_of_m_block_5() { return &___m_block_5; }
	inline void set_m_block_5(uint32_t value)
	{
		___m_block_5 = value;
	}

	inline static int32_t get_offset_of_m_startIndex_6() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ___m_startIndex_6)); }
	inline int32_t get_m_startIndex_6() const { return ___m_startIndex_6; }
	inline int32_t* get_address_of_m_startIndex_6() { return &___m_startIndex_6; }
	inline void set_m_startIndex_6(int32_t value)
	{
		___m_startIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_endIndex_7() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t546674159, ___m_endIndex_7)); }
	inline int32_t get_m_endIndex_7() const { return ___m_endIndex_7; }
	inline int32_t* get_address_of_m_endIndex_7() { return &___m_endIndex_7; }
	inline void set_m_endIndex_7(int32_t value)
	{
		___m_endIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RFC2898DERIVEBYTES_T546674159_H
#ifndef SHA1_T1803193667_H
#define SHA1_T1803193667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t1803193667  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T1803193667_H
#ifndef SHA256_T3672283617_H
#define SHA256_T3672283617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3672283617  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3672283617_H
#ifndef SHA384_T540967702_H
#define SHA384_T540967702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t540967702  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T540967702_H
#ifndef SHA512_T1346946930_H
#define SHA512_T1346946930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t1346946930  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T1346946930_H
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
#ifndef CANCELLATIONTOKEN_T784455623_H
#define CANCELLATIONTOKEN_T784455623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t784455623 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t540272775 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623, ___m_source_0)); }
	inline CancellationTokenSource_t540272775 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t540272775 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t784455623_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3252573759 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3252573759 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3252573759 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3252573759 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_pinvoke
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_com
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T784455623_H
#ifndef ASYNCTASKMETHODBUILDER_1_T976952967_H
#define ASYNCTASKMETHODBUILDER_1_T976952967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct  AsyncTaskMethodBuilder_1_t976952967 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t61518632 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t976952967, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t976952967, ___m_task_2)); }
	inline Task_1_t61518632 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t61518632 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t61518632 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t976952967_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t61518632 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t976952967_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t61518632 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t61518632 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t61518632 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T976952967_H
#ifndef ASYNCTASKMETHODBUILDER_1_T642595793_H
#define ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t642595793 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4022128754 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_task_2)); }
	inline Task_1_t4022128754 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4022128754 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4022128754 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t642595793_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4022128754 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4022128754 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4022128754 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4022128754 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___2)); }
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
#endif // CIPHERMODE_T84635067_H
#ifndef CRYPTOSTREAMMODE_T3639658227_H
#define CRYPTOSTREAMMODE_T3639658227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStreamMode
struct  CryptoStreamMode_t3639658227 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CryptoStreamMode_t3639658227, ___value___2)); }
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
#endif // CRYPTOSTREAMMODE_T3639658227_H
#ifndef CRYPTOGRAPHICEXCEPTION_T248831461_H
#define CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t248831461  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifndef CSPALGORITHMTYPE_T2452657849_H
#define CSPALGORITHMTYPE_T2452657849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspAlgorithmType
struct  CspAlgorithmType_t2452657849 
{
public:
	// System.Int32 System.Security.Cryptography.CspAlgorithmType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspAlgorithmType_t2452657849, ___value___2)); }
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
#endif // CSPALGORITHMTYPE_T2452657849_H
#ifndef CSPPARAMETERS_T239852639_H
#define CSPPARAMETERS_T239852639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t239852639  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_0;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_1;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_2;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_3;
	// System.Int32 System.Security.Cryptography.CspParameters::m_flags
	int32_t ___m_flags_4;
	// System.Security.AccessControl.CryptoKeySecurity System.Security.Cryptography.CspParameters::m_cryptoKeySecurity
	CryptoKeySecurity_t1177725497 * ___m_cryptoKeySecurity_5;
	// System.Security.SecureString System.Security.Cryptography.CspParameters::m_keyPassword
	SecureString_t3041467854 * ___m_keyPassword_6;
	// System.IntPtr System.Security.Cryptography.CspParameters::m_parentWindowHandle
	intptr_t ___m_parentWindowHandle_7;

public:
	inline static int32_t get_offset_of_ProviderType_0() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___ProviderType_0)); }
	inline int32_t get_ProviderType_0() const { return ___ProviderType_0; }
	inline int32_t* get_address_of_ProviderType_0() { return &___ProviderType_0; }
	inline void set_ProviderType_0(int32_t value)
	{
		___ProviderType_0 = value;
	}

	inline static int32_t get_offset_of_ProviderName_1() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___ProviderName_1)); }
	inline String_t* get_ProviderName_1() const { return ___ProviderName_1; }
	inline String_t** get_address_of_ProviderName_1() { return &___ProviderName_1; }
	inline void set_ProviderName_1(String_t* value)
	{
		___ProviderName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_1), value);
	}

	inline static int32_t get_offset_of_KeyContainerName_2() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___KeyContainerName_2)); }
	inline String_t* get_KeyContainerName_2() const { return ___KeyContainerName_2; }
	inline String_t** get_address_of_KeyContainerName_2() { return &___KeyContainerName_2; }
	inline void set_KeyContainerName_2(String_t* value)
	{
		___KeyContainerName_2 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_2), value);
	}

	inline static int32_t get_offset_of_KeyNumber_3() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___KeyNumber_3)); }
	inline int32_t get_KeyNumber_3() const { return ___KeyNumber_3; }
	inline int32_t* get_address_of_KeyNumber_3() { return &___KeyNumber_3; }
	inline void set_KeyNumber_3(int32_t value)
	{
		___KeyNumber_3 = value;
	}

	inline static int32_t get_offset_of_m_flags_4() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___m_flags_4)); }
	inline int32_t get_m_flags_4() const { return ___m_flags_4; }
	inline int32_t* get_address_of_m_flags_4() { return &___m_flags_4; }
	inline void set_m_flags_4(int32_t value)
	{
		___m_flags_4 = value;
	}

	inline static int32_t get_offset_of_m_cryptoKeySecurity_5() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___m_cryptoKeySecurity_5)); }
	inline CryptoKeySecurity_t1177725497 * get_m_cryptoKeySecurity_5() const { return ___m_cryptoKeySecurity_5; }
	inline CryptoKeySecurity_t1177725497 ** get_address_of_m_cryptoKeySecurity_5() { return &___m_cryptoKeySecurity_5; }
	inline void set_m_cryptoKeySecurity_5(CryptoKeySecurity_t1177725497 * value)
	{
		___m_cryptoKeySecurity_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_cryptoKeySecurity_5), value);
	}

	inline static int32_t get_offset_of_m_keyPassword_6() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___m_keyPassword_6)); }
	inline SecureString_t3041467854 * get_m_keyPassword_6() const { return ___m_keyPassword_6; }
	inline SecureString_t3041467854 ** get_address_of_m_keyPassword_6() { return &___m_keyPassword_6; }
	inline void set_m_keyPassword_6(SecureString_t3041467854 * value)
	{
		___m_keyPassword_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyPassword_6), value);
	}

	inline static int32_t get_offset_of_m_parentWindowHandle_7() { return static_cast<int32_t>(offsetof(CspParameters_t239852639, ___m_parentWindowHandle_7)); }
	inline intptr_t get_m_parentWindowHandle_7() const { return ___m_parentWindowHandle_7; }
	inline intptr_t* get_address_of_m_parentWindowHandle_7() { return &___m_parentWindowHandle_7; }
	inline void set_m_parentWindowHandle_7(intptr_t value)
	{
		___m_parentWindowHandle_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T239852639_H
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
#ifndef DSACRYPTOSERVICEPROVIDER_T3992668923_H
#define DSACRYPTOSERVICEPROVIDER_T3992668923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t3992668923  : public DSA_t2386879874
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t2094547461 * ___store_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t2800260182 * ___dsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___store_3)); }
	inline KeyPairPersistence_t2094547461 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t2094547461 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t2094547461 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_dsa_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923, ___dsa_8)); }
	inline DSAManaged_t2800260182 * get_dsa_8() const { return ___dsa_8; }
	inline DSAManaged_t2800260182 ** get_address_of_dsa_8() { return &___dsa_8; }
	inline void set_dsa_8(DSAManaged_t2800260182 * value)
	{
		___dsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_8), value);
	}
};

struct DSACryptoServiceProvider_t3992668923_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_9;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_9() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3992668923_StaticFields, ___useMachineKeyStore_9)); }
	inline bool get_useMachineKeyStore_9() const { return ___useMachineKeyStore_9; }
	inline bool* get_address_of_useMachineKeyStore_9() { return &___useMachineKeyStore_9; }
	inline void set_useMachineKeyStore_9(bool value)
	{
		___useMachineKeyStore_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T3992668923_H
#ifndef FROMBASE64TRANSFORMMODE_T2018065788_H
#define FROMBASE64TRANSFORMMODE_T2018065788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64TransformMode
struct  FromBase64TransformMode_t2018065788 
{
public:
	// System.Int32 System.Security.Cryptography.FromBase64TransformMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FromBase64TransformMode_t2018065788, ___value___2)); }
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
#endif // FROMBASE64TRANSFORMMODE_T2018065788_H
#ifndef HMAC_T2621101144_H
#define HMAC_T2621101144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t2621101144  : public KeyedHashAlgorithm_t112861511
{
public:
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t1432317219 * ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t1432317219 * ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_t4116647657* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_t4116647657* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;

public:
	inline static int32_t get_offset_of_blockSizeValue_5() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ___blockSizeValue_5)); }
	inline int32_t get_blockSizeValue_5() const { return ___blockSizeValue_5; }
	inline int32_t* get_address_of_blockSizeValue_5() { return &___blockSizeValue_5; }
	inline void set_blockSizeValue_5(int32_t value)
	{
		___blockSizeValue_5 = value;
	}

	inline static int32_t get_offset_of_m_hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ___m_hashName_6)); }
	inline String_t* get_m_hashName_6() const { return ___m_hashName_6; }
	inline String_t** get_address_of_m_hashName_6() { return &___m_hashName_6; }
	inline void set_m_hashName_6(String_t* value)
	{
		___m_hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashName_6), value);
	}

	inline static int32_t get_offset_of_m_hash1_7() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ___m_hash1_7)); }
	inline HashAlgorithm_t1432317219 * get_m_hash1_7() const { return ___m_hash1_7; }
	inline HashAlgorithm_t1432317219 ** get_address_of_m_hash1_7() { return &___m_hash1_7; }
	inline void set_m_hash1_7(HashAlgorithm_t1432317219 * value)
	{
		___m_hash1_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_hash1_7), value);
	}

	inline static int32_t get_offset_of_m_hash2_8() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ___m_hash2_8)); }
	inline HashAlgorithm_t1432317219 * get_m_hash2_8() const { return ___m_hash2_8; }
	inline HashAlgorithm_t1432317219 ** get_address_of_m_hash2_8() { return &___m_hash2_8; }
	inline void set_m_hash2_8(HashAlgorithm_t1432317219 * value)
	{
		___m_hash2_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_hash2_8), value);
	}

	inline static int32_t get_offset_of_m_inner_9() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ___m_inner_9)); }
	inline ByteU5BU5D_t4116647657* get_m_inner_9() const { return ___m_inner_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_inner_9() { return &___m_inner_9; }
	inline void set_m_inner_9(ByteU5BU5D_t4116647657* value)
	{
		___m_inner_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_inner_9), value);
	}

	inline static int32_t get_offset_of_m_outer_10() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ___m_outer_10)); }
	inline ByteU5BU5D_t4116647657* get_m_outer_10() const { return ___m_outer_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_outer_10() { return &___m_outer_10; }
	inline void set_m_outer_10(ByteU5BU5D_t4116647657* value)
	{
		___m_outer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_outer_10), value);
	}

	inline static int32_t get_offset_of_m_hashing_11() { return static_cast<int32_t>(offsetof(HMAC_t2621101144, ___m_hashing_11)); }
	inline bool get_m_hashing_11() const { return ___m_hashing_11; }
	inline bool* get_address_of_m_hashing_11() { return &___m_hashing_11; }
	inline void set_m_hashing_11(bool value)
	{
		___m_hashing_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T2621101144_H
#ifndef KEYNUMBER_T1560809490_H
#define KEYNUMBER_T1560809490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyNumber
struct  KeyNumber_t1560809490 
{
public:
	// System.Int32 System.Security.Cryptography.KeyNumber::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyNumber_t1560809490, ___value___2)); }
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
#endif // KEYNUMBER_T1560809490_H
#ifndef MACTRIPLEDES_T1631262397_H
#define MACTRIPLEDES_T1631262397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1631262397  : public KeyedHashAlgorithm_t112861511
{
public:
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.MACTripleDES::m_encryptor
	RuntimeObject* ___m_encryptor_5;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.MACTripleDES::_cs
	CryptoStream_t2702504504 * ____cs_6;
	// System.Security.Cryptography.TailStream System.Security.Cryptography.MACTripleDES::_ts
	TailStream_t1447577651 * ____ts_7;
	// System.Int32 System.Security.Cryptography.MACTripleDES::m_bytesPerBlock
	int32_t ___m_bytesPerBlock_9;
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::des
	TripleDES_t92303514 * ___des_10;

public:
	inline static int32_t get_offset_of_m_encryptor_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t1631262397, ___m_encryptor_5)); }
	inline RuntimeObject* get_m_encryptor_5() const { return ___m_encryptor_5; }
	inline RuntimeObject** get_address_of_m_encryptor_5() { return &___m_encryptor_5; }
	inline void set_m_encryptor_5(RuntimeObject* value)
	{
		___m_encryptor_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_encryptor_5), value);
	}

	inline static int32_t get_offset_of__cs_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t1631262397, ____cs_6)); }
	inline CryptoStream_t2702504504 * get__cs_6() const { return ____cs_6; }
	inline CryptoStream_t2702504504 ** get_address_of__cs_6() { return &____cs_6; }
	inline void set__cs_6(CryptoStream_t2702504504 * value)
	{
		____cs_6 = value;
		Il2CppCodeGenWriteBarrier((&____cs_6), value);
	}

	inline static int32_t get_offset_of__ts_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t1631262397, ____ts_7)); }
	inline TailStream_t1447577651 * get__ts_7() const { return ____ts_7; }
	inline TailStream_t1447577651 ** get_address_of__ts_7() { return &____ts_7; }
	inline void set__ts_7(TailStream_t1447577651 * value)
	{
		____ts_7 = value;
		Il2CppCodeGenWriteBarrier((&____ts_7), value);
	}

	inline static int32_t get_offset_of_m_bytesPerBlock_9() { return static_cast<int32_t>(offsetof(MACTripleDES_t1631262397, ___m_bytesPerBlock_9)); }
	inline int32_t get_m_bytesPerBlock_9() const { return ___m_bytesPerBlock_9; }
	inline int32_t* get_address_of_m_bytesPerBlock_9() { return &___m_bytesPerBlock_9; }
	inline void set_m_bytesPerBlock_9(int32_t value)
	{
		___m_bytesPerBlock_9 = value;
	}

	inline static int32_t get_offset_of_des_10() { return static_cast<int32_t>(offsetof(MACTripleDES_t1631262397, ___des_10)); }
	inline TripleDES_t92303514 * get_des_10() const { return ___des_10; }
	inline TripleDES_t92303514 ** get_address_of_des_10() { return &___des_10; }
	inline void set_des_10(TripleDES_t92303514 * value)
	{
		___des_10 = value;
		Il2CppCodeGenWriteBarrier((&___des_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T1631262397_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___2)); }
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
#endif // PADDINGMODE_T2546806710_H
#ifndef RIPEMD160MANAGED_T2491561941_H
#define RIPEMD160MANAGED_T2491561941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t2491561941  : public RIPEMD160_t268675434
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.Int64 System.Security.Cryptography.RIPEMD160Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_stateMD160
	UInt32U5BU5D_t2770800703* ____stateMD160_6;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_blockDWords
	UInt32U5BU5D_t2770800703* ____blockDWords_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateMD160_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____stateMD160_6)); }
	inline UInt32U5BU5D_t2770800703* get__stateMD160_6() const { return ____stateMD160_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of__stateMD160_6() { return &____stateMD160_6; }
	inline void set__stateMD160_6(UInt32U5BU5D_t2770800703* value)
	{
		____stateMD160_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateMD160_6), value);
	}

	inline static int32_t get_offset_of__blockDWords_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2491561941, ____blockDWords_7)); }
	inline UInt32U5BU5D_t2770800703* get__blockDWords_7() const { return ____blockDWords_7; }
	inline UInt32U5BU5D_t2770800703** get_address_of__blockDWords_7() { return &____blockDWords_7; }
	inline void set__blockDWords_7(UInt32U5BU5D_t2770800703* value)
	{
		____blockDWords_7 = value;
		Il2CppCodeGenWriteBarrier((&____blockDWords_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T2491561941_H
#ifndef RSAENCRYPTIONPADDINGMODE_T4163793404_H
#define RSAENCRYPTIONPADDINGMODE_T4163793404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAEncryptionPaddingMode
struct  RSAEncryptionPaddingMode_t4163793404 
{
public:
	// System.Int32 System.Security.Cryptography.RSAEncryptionPaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RSAEncryptionPaddingMode_t4163793404, ___value___2)); }
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
#endif // RSAENCRYPTIONPADDINGMODE_T4163793404_H
#ifndef RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#define RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
struct  RSAOAEPKeyExchangeDeformatter_t3344463048  : public AsymmetricKeyExchangeDeformatter_t3370779160
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::_rsaKey
	RSA_t2385438082 * ____rsaKey_0;
	// System.Nullable`1<System.Boolean> System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::_rsaOverridesDecrypt
	Nullable_1_t1819850047  ____rsaOverridesDecrypt_1;

public:
	inline static int32_t get_offset_of__rsaKey_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeDeformatter_t3344463048, ____rsaKey_0)); }
	inline RSA_t2385438082 * get__rsaKey_0() const { return ____rsaKey_0; }
	inline RSA_t2385438082 ** get_address_of__rsaKey_0() { return &____rsaKey_0; }
	inline void set__rsaKey_0(RSA_t2385438082 * value)
	{
		____rsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____rsaKey_0), value);
	}

	inline static int32_t get_offset_of__rsaOverridesDecrypt_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeDeformatter_t3344463048, ____rsaOverridesDecrypt_1)); }
	inline Nullable_1_t1819850047  get__rsaOverridesDecrypt_1() const { return ____rsaOverridesDecrypt_1; }
	inline Nullable_1_t1819850047 * get_address_of__rsaOverridesDecrypt_1() { return &____rsaOverridesDecrypt_1; }
	inline void set__rsaOverridesDecrypt_1(Nullable_1_t1819850047  value)
	{
		____rsaOverridesDecrypt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#ifndef RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#define RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct  RSAOAEPKeyExchangeFormatter_t2041696538  : public AsymmetricKeyExchangeFormatter_t937192061
{
public:
	// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::ParameterValue
	ByteU5BU5D_t4116647657* ___ParameterValue_0;
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::_rsaKey
	RSA_t2385438082 * ____rsaKey_1;
	// System.Nullable`1<System.Boolean> System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::_rsaOverridesEncrypt
	Nullable_1_t1819850047  ____rsaOverridesEncrypt_2;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::RngValue
	RandomNumberGenerator_t386037858 * ___RngValue_3;

public:
	inline static int32_t get_offset_of_ParameterValue_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ___ParameterValue_0)); }
	inline ByteU5BU5D_t4116647657* get_ParameterValue_0() const { return ___ParameterValue_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_ParameterValue_0() { return &___ParameterValue_0; }
	inline void set_ParameterValue_0(ByteU5BU5D_t4116647657* value)
	{
		___ParameterValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___ParameterValue_0), value);
	}

	inline static int32_t get_offset_of__rsaKey_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ____rsaKey_1)); }
	inline RSA_t2385438082 * get__rsaKey_1() const { return ____rsaKey_1; }
	inline RSA_t2385438082 ** get_address_of__rsaKey_1() { return &____rsaKey_1; }
	inline void set__rsaKey_1(RSA_t2385438082 * value)
	{
		____rsaKey_1 = value;
		Il2CppCodeGenWriteBarrier((&____rsaKey_1), value);
	}

	inline static int32_t get_offset_of__rsaOverridesEncrypt_2() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ____rsaOverridesEncrypt_2)); }
	inline Nullable_1_t1819850047  get__rsaOverridesEncrypt_2() const { return ____rsaOverridesEncrypt_2; }
	inline Nullable_1_t1819850047 * get_address_of__rsaOverridesEncrypt_2() { return &____rsaOverridesEncrypt_2; }
	inline void set__rsaOverridesEncrypt_2(Nullable_1_t1819850047  value)
	{
		____rsaOverridesEncrypt_2 = value;
	}

	inline static int32_t get_offset_of_RngValue_3() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ___RngValue_3)); }
	inline RandomNumberGenerator_t386037858 * get_RngValue_3() const { return ___RngValue_3; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_RngValue_3() { return &___RngValue_3; }
	inline void set_RngValue_3(RandomNumberGenerator_t386037858 * value)
	{
		___RngValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___RngValue_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#ifndef RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#define RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct  RSAPKCS1KeyExchangeDeformatter_t2578812791  : public AsymmetricKeyExchangeDeformatter_t3370779160
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::_rsaKey
	RSA_t2385438082 * ____rsaKey_0;
	// System.Nullable`1<System.Boolean> System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::_rsaOverridesDecrypt
	Nullable_1_t1819850047  ____rsaOverridesDecrypt_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::RngValue
	RandomNumberGenerator_t386037858 * ___RngValue_2;

public:
	inline static int32_t get_offset_of__rsaKey_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t2578812791, ____rsaKey_0)); }
	inline RSA_t2385438082 * get__rsaKey_0() const { return ____rsaKey_0; }
	inline RSA_t2385438082 ** get_address_of__rsaKey_0() { return &____rsaKey_0; }
	inline void set__rsaKey_0(RSA_t2385438082 * value)
	{
		____rsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____rsaKey_0), value);
	}

	inline static int32_t get_offset_of__rsaOverridesDecrypt_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t2578812791, ____rsaOverridesDecrypt_1)); }
	inline Nullable_1_t1819850047  get__rsaOverridesDecrypt_1() const { return ____rsaOverridesDecrypt_1; }
	inline Nullable_1_t1819850047 * get_address_of__rsaOverridesDecrypt_1() { return &____rsaOverridesDecrypt_1; }
	inline void set__rsaOverridesDecrypt_1(Nullable_1_t1819850047  value)
	{
		____rsaOverridesDecrypt_1 = value;
	}

	inline static int32_t get_offset_of_RngValue_2() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t2578812791, ___RngValue_2)); }
	inline RandomNumberGenerator_t386037858 * get_RngValue_2() const { return ___RngValue_2; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_RngValue_2() { return &___RngValue_2; }
	inline void set_RngValue_2(RandomNumberGenerator_t386037858 * value)
	{
		___RngValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___RngValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t2761096101  : public AsymmetricKeyExchangeFormatter_t937192061
{
public:
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::RngValue
	RandomNumberGenerator_t386037858 * ___RngValue_0;
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::_rsaKey
	RSA_t2385438082 * ____rsaKey_1;
	// System.Nullable`1<System.Boolean> System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::_rsaOverridesEncrypt
	Nullable_1_t1819850047  ____rsaOverridesEncrypt_2;

public:
	inline static int32_t get_offset_of_RngValue_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2761096101, ___RngValue_0)); }
	inline RandomNumberGenerator_t386037858 * get_RngValue_0() const { return ___RngValue_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_RngValue_0() { return &___RngValue_0; }
	inline void set_RngValue_0(RandomNumberGenerator_t386037858 * value)
	{
		___RngValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___RngValue_0), value);
	}

	inline static int32_t get_offset_of__rsaKey_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2761096101, ____rsaKey_1)); }
	inline RSA_t2385438082 * get__rsaKey_1() const { return ____rsaKey_1; }
	inline RSA_t2385438082 ** get_address_of__rsaKey_1() { return &____rsaKey_1; }
	inline void set__rsaKey_1(RSA_t2385438082 * value)
	{
		____rsaKey_1 = value;
		Il2CppCodeGenWriteBarrier((&____rsaKey_1), value);
	}

	inline static int32_t get_offset_of__rsaOverridesEncrypt_2() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2761096101, ____rsaOverridesEncrypt_2)); }
	inline Nullable_1_t1819850047  get__rsaOverridesEncrypt_2() const { return ____rsaOverridesEncrypt_2; }
	inline Nullable_1_t1819850047 * get_address_of__rsaOverridesEncrypt_2() { return &____rsaOverridesEncrypt_2; }
	inline void set__rsaOverridesEncrypt_2(Nullable_1_t1819850047  value)
	{
		____rsaOverridesEncrypt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2887980541_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2887980541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t2887980541  : public RSAPKCS1SignatureDescription_t653172199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2887980541_H
#ifndef RSAPKCS1SHA256SIGNATUREDESCRIPTION_T4122087809_H
#define RSAPKCS1SHA256SIGNATUREDESCRIPTION_T4122087809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA256SignatureDescription
struct  RSAPKCS1SHA256SignatureDescription_t4122087809  : public RSAPKCS1SignatureDescription_t653172199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA256SIGNATUREDESCRIPTION_T4122087809_H
#ifndef RSAPKCS1SHA384SIGNATUREDESCRIPTION_T519503511_H
#define RSAPKCS1SHA384SIGNATUREDESCRIPTION_T519503511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA384SignatureDescription
struct  RSAPKCS1SHA384SignatureDescription_t519503511  : public RSAPKCS1SignatureDescription_t653172199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA384SIGNATUREDESCRIPTION_T519503511_H
#ifndef RSAPKCS1SHA512SIGNATUREDESCRIPTION_T4135346397_H
#define RSAPKCS1SHA512SIGNATUREDESCRIPTION_T4135346397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA512SignatureDescription
struct  RSAPKCS1SHA512SignatureDescription_t4135346397  : public RSAPKCS1SignatureDescription_t653172199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA512SIGNATUREDESCRIPTION_T4135346397_H
#ifndef RSASIGNATUREPADDINGMODE_T3665782209_H
#define RSASIGNATUREPADDINGMODE_T3665782209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSASignaturePaddingMode
struct  RSASignaturePaddingMode_t3665782209 
{
public:
	// System.Int32 System.Security.Cryptography.RSASignaturePaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RSASignaturePaddingMode_t3665782209, ___value___2)); }
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
#endif // RSASIGNATUREPADDINGMODE_T3665782209_H
#ifndef RIJNDAELMANAGEDTRANSFORMMODE_T144661339_H
#define RIJNDAELMANAGEDTRANSFORMMODE_T144661339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransformMode
struct  RijndaelManagedTransformMode_t144661339 
{
public:
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransformMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RijndaelManagedTransformMode_t144661339, ___value___2)); }
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
#endif // RIJNDAELMANAGEDTRANSFORMMODE_T144661339_H
#ifndef SHA1MANAGED_T1754513891_H
#define SHA1MANAGED_T1754513891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t1754513891  : public SHA1_t1803193667
{
public:
	// System.Byte[] System.Security.Cryptography.SHA1Managed::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA1Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA1Managed::_stateSHA1
	UInt32U5BU5D_t2770800703* ____stateSHA1_6;
	// System.UInt32[] System.Security.Cryptography.SHA1Managed::_expandedBuffer
	UInt32U5BU5D_t2770800703* ____expandedBuffer_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t1754513891, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA1Managed_t1754513891, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA1_6() { return static_cast<int32_t>(offsetof(SHA1Managed_t1754513891, ____stateSHA1_6)); }
	inline UInt32U5BU5D_t2770800703* get__stateSHA1_6() const { return ____stateSHA1_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of__stateSHA1_6() { return &____stateSHA1_6; }
	inline void set__stateSHA1_6(UInt32U5BU5D_t2770800703* value)
	{
		____stateSHA1_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateSHA1_6), value);
	}

	inline static int32_t get_offset_of__expandedBuffer_7() { return static_cast<int32_t>(offsetof(SHA1Managed_t1754513891, ____expandedBuffer_7)); }
	inline UInt32U5BU5D_t2770800703* get__expandedBuffer_7() const { return ____expandedBuffer_7; }
	inline UInt32U5BU5D_t2770800703** get_address_of__expandedBuffer_7() { return &____expandedBuffer_7; }
	inline void set__expandedBuffer_7(UInt32U5BU5D_t2770800703* value)
	{
		____expandedBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____expandedBuffer_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T1754513891_H
#ifndef SHA256MANAGED_T955042874_H
#define SHA256MANAGED_T955042874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t955042874  : public SHA256_t3672283617
{
public:
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA256Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_stateSHA256
	UInt32U5BU5D_t2770800703* ____stateSHA256_6;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_W
	UInt32U5BU5D_t2770800703* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA256_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____stateSHA256_6)); }
	inline UInt32U5BU5D_t2770800703* get__stateSHA256_6() const { return ____stateSHA256_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of__stateSHA256_6() { return &____stateSHA256_6; }
	inline void set__stateSHA256_6(UInt32U5BU5D_t2770800703* value)
	{
		____stateSHA256_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateSHA256_6), value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____W_7)); }
	inline UInt32U5BU5D_t2770800703* get__W_7() const { return ____W_7; }
	inline UInt32U5BU5D_t2770800703** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt32U5BU5D_t2770800703* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((&____W_7), value);
	}
};

struct SHA256Managed_t955042874_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_K
	UInt32U5BU5D_t2770800703* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874_StaticFields, ____K_8)); }
	inline UInt32U5BU5D_t2770800703* get__K_8() const { return ____K_8; }
	inline UInt32U5BU5D_t2770800703** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt32U5BU5D_t2770800703* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((&____K_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T955042874_H
#ifndef SHA384MANAGED_T74158575_H
#define SHA384MANAGED_T74158575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t74158575  : public SHA384_t540967702
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::_count
	uint64_t ____count_5;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_stateSHA384
	UInt64U5BU5D_t1659327989* ____stateSHA384_6;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_W
	UInt64U5BU5D_t1659327989* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ____count_5)); }
	inline uint64_t get__count_5() const { return ____count_5; }
	inline uint64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(uint64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA384_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ____stateSHA384_6)); }
	inline UInt64U5BU5D_t1659327989* get__stateSHA384_6() const { return ____stateSHA384_6; }
	inline UInt64U5BU5D_t1659327989** get_address_of__stateSHA384_6() { return &____stateSHA384_6; }
	inline void set__stateSHA384_6(UInt64U5BU5D_t1659327989* value)
	{
		____stateSHA384_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateSHA384_6), value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575, ____W_7)); }
	inline UInt64U5BU5D_t1659327989* get__W_7() const { return ____W_7; }
	inline UInt64U5BU5D_t1659327989** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt64U5BU5D_t1659327989* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((&____W_7), value);
	}
};

struct SHA384Managed_t74158575_StaticFields
{
public:
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_K
	UInt64U5BU5D_t1659327989* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t74158575_StaticFields, ____K_8)); }
	inline UInt64U5BU5D_t1659327989* get__K_8() const { return ____K_8; }
	inline UInt64U5BU5D_t1659327989** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt64U5BU5D_t1659327989* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((&____K_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T74158575_H
#ifndef SHA512MANAGED_T1787336339_H
#define SHA512MANAGED_T1787336339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t1787336339  : public SHA512_t1346946930
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::_count
	uint64_t ____count_5;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_stateSHA512
	UInt64U5BU5D_t1659327989* ____stateSHA512_6;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_W
	UInt64U5BU5D_t1659327989* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ____count_5)); }
	inline uint64_t get__count_5() const { return ____count_5; }
	inline uint64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(uint64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA512_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ____stateSHA512_6)); }
	inline UInt64U5BU5D_t1659327989* get__stateSHA512_6() const { return ____stateSHA512_6; }
	inline UInt64U5BU5D_t1659327989** get_address_of__stateSHA512_6() { return &____stateSHA512_6; }
	inline void set__stateSHA512_6(UInt64U5BU5D_t1659327989* value)
	{
		____stateSHA512_6 = value;
		Il2CppCodeGenWriteBarrier((&____stateSHA512_6), value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339, ____W_7)); }
	inline UInt64U5BU5D_t1659327989* get__W_7() const { return ____W_7; }
	inline UInt64U5BU5D_t1659327989** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt64U5BU5D_t1659327989* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((&____W_7), value);
	}
};

struct SHA512Managed_t1787336339_StaticFields
{
public:
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_K
	UInt64U5BU5D_t1659327989* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t1787336339_StaticFields, ____K_8)); }
	inline UInt64U5BU5D_t1659327989* get__K_8() const { return ____K_8; }
	inline UInt64U5BU5D_t1659327989** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt64U5BU5D_t1659327989* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((&____K_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T1787336339_H
#ifndef TAILSTREAM_T1447577651_H
#define TAILSTREAM_T1447577651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TailStream
struct  TailStream_t1447577651  : public Stream_t1273022909
{
public:
	// System.Byte[] System.Security.Cryptography.TailStream::_Buffer
	ByteU5BU5D_t4116647657* ____Buffer_4;
	// System.Int32 System.Security.Cryptography.TailStream::_BufferSize
	int32_t ____BufferSize_5;
	// System.Int32 System.Security.Cryptography.TailStream::_BufferIndex
	int32_t ____BufferIndex_6;
	// System.Boolean System.Security.Cryptography.TailStream::_BufferFull
	bool ____BufferFull_7;

public:
	inline static int32_t get_offset_of__Buffer_4() { return static_cast<int32_t>(offsetof(TailStream_t1447577651, ____Buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__Buffer_4() const { return ____Buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__Buffer_4() { return &____Buffer_4; }
	inline void set__Buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____Buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____Buffer_4), value);
	}

	inline static int32_t get_offset_of__BufferSize_5() { return static_cast<int32_t>(offsetof(TailStream_t1447577651, ____BufferSize_5)); }
	inline int32_t get__BufferSize_5() const { return ____BufferSize_5; }
	inline int32_t* get_address_of__BufferSize_5() { return &____BufferSize_5; }
	inline void set__BufferSize_5(int32_t value)
	{
		____BufferSize_5 = value;
	}

	inline static int32_t get_offset_of__BufferIndex_6() { return static_cast<int32_t>(offsetof(TailStream_t1447577651, ____BufferIndex_6)); }
	inline int32_t get__BufferIndex_6() const { return ____BufferIndex_6; }
	inline int32_t* get_address_of__BufferIndex_6() { return &____BufferIndex_6; }
	inline void set__BufferIndex_6(int32_t value)
	{
		____BufferIndex_6 = value;
	}

	inline static int32_t get_offset_of__BufferFull_7() { return static_cast<int32_t>(offsetof(TailStream_t1447577651, ____BufferFull_7)); }
	inline bool get__BufferFull_7() const { return ____BufferFull_7; }
	inline bool* get_address_of__BufferFull_7() { return &____BufferFull_7; }
	inline void set__BufferFull_7(bool value)
	{
		____BufferFull_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILSTREAM_T1447577651_H
#ifndef PRINCIPALPOLICY_T1761212333_H
#define PRINCIPALPOLICY_T1761212333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t1761212333 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t1761212333, ___value___2)); }
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
#endif // PRINCIPALPOLICY_T1761212333_H
#ifndef TOKENIMPERSONATIONLEVEL_T3773270939_H
#define TOKENIMPERSONATIONLEVEL_T3773270939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.TokenImpersonationLevel
struct  TokenImpersonationLevel_t3773270939 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t3773270939, ___value___2)); }
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
#endif // TOKENIMPERSONATIONLEVEL_T3773270939_H
#ifndef SYMMETRICTRANSFORM_T3802591842_H
#define SYMMETRICTRANSFORM_T3802591842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591842  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591842_H
#ifndef ASYNCTASKMETHODBUILDER_T3536885450_H
#define ASYNCTASKMETHODBUILDER_T3536885450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3536885450 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t642595793  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t642595793 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t642595793  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3536885450_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t4022128754 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t4022128754 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t4022128754 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t4022128754 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_com
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3536885450_H
#ifndef CRYPTOSTREAM_T2702504504_H
#define CRYPTOSTREAM_T2702504504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t2702504504  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t1273022909 * ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_Transform
	RuntimeObject* ____Transform_5;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_InputBuffer
	ByteU5BU5D_t4116647657* ____InputBuffer_6;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBufferIndex
	int32_t ____InputBufferIndex_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBlockSize
	int32_t ____InputBlockSize_8;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_OutputBuffer
	ByteU5BU5D_t4116647657* ____OutputBuffer_9;
	// System.Int32 System.Security.Cryptography.CryptoStream::_OutputBufferIndex
	int32_t ____OutputBufferIndex_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_OutputBlockSize
	int32_t ____OutputBlockSize_11;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;

public:
	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____stream_4)); }
	inline Stream_t1273022909 * get__stream_4() const { return ____stream_4; }
	inline Stream_t1273022909 ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t1273022909 * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((&____stream_4), value);
	}

	inline static int32_t get_offset_of__Transform_5() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____Transform_5)); }
	inline RuntimeObject* get__Transform_5() const { return ____Transform_5; }
	inline RuntimeObject** get_address_of__Transform_5() { return &____Transform_5; }
	inline void set__Transform_5(RuntimeObject* value)
	{
		____Transform_5 = value;
		Il2CppCodeGenWriteBarrier((&____Transform_5), value);
	}

	inline static int32_t get_offset_of__InputBuffer_6() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____InputBuffer_6)); }
	inline ByteU5BU5D_t4116647657* get__InputBuffer_6() const { return ____InputBuffer_6; }
	inline ByteU5BU5D_t4116647657** get_address_of__InputBuffer_6() { return &____InputBuffer_6; }
	inline void set__InputBuffer_6(ByteU5BU5D_t4116647657* value)
	{
		____InputBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____InputBuffer_6), value);
	}

	inline static int32_t get_offset_of__InputBufferIndex_7() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____InputBufferIndex_7)); }
	inline int32_t get__InputBufferIndex_7() const { return ____InputBufferIndex_7; }
	inline int32_t* get_address_of__InputBufferIndex_7() { return &____InputBufferIndex_7; }
	inline void set__InputBufferIndex_7(int32_t value)
	{
		____InputBufferIndex_7 = value;
	}

	inline static int32_t get_offset_of__InputBlockSize_8() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____InputBlockSize_8)); }
	inline int32_t get__InputBlockSize_8() const { return ____InputBlockSize_8; }
	inline int32_t* get_address_of__InputBlockSize_8() { return &____InputBlockSize_8; }
	inline void set__InputBlockSize_8(int32_t value)
	{
		____InputBlockSize_8 = value;
	}

	inline static int32_t get_offset_of__OutputBuffer_9() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____OutputBuffer_9)); }
	inline ByteU5BU5D_t4116647657* get__OutputBuffer_9() const { return ____OutputBuffer_9; }
	inline ByteU5BU5D_t4116647657** get_address_of__OutputBuffer_9() { return &____OutputBuffer_9; }
	inline void set__OutputBuffer_9(ByteU5BU5D_t4116647657* value)
	{
		____OutputBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&____OutputBuffer_9), value);
	}

	inline static int32_t get_offset_of__OutputBufferIndex_10() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____OutputBufferIndex_10)); }
	inline int32_t get__OutputBufferIndex_10() const { return ____OutputBufferIndex_10; }
	inline int32_t* get_address_of__OutputBufferIndex_10() { return &____OutputBufferIndex_10; }
	inline void set__OutputBufferIndex_10(int32_t value)
	{
		____OutputBufferIndex_10 = value;
	}

	inline static int32_t get_offset_of__OutputBlockSize_11() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____OutputBlockSize_11)); }
	inline int32_t get__OutputBlockSize_11() const { return ____OutputBlockSize_11; }
	inline int32_t* get_address_of__OutputBlockSize_11() { return &____OutputBlockSize_11; }
	inline void set__OutputBlockSize_11(int32_t value)
	{
		____OutputBlockSize_11 = value;
	}

	inline static int32_t get_offset_of__transformMode_12() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transformMode_12)); }
	inline int32_t get__transformMode_12() const { return ____transformMode_12; }
	inline int32_t* get_address_of__transformMode_12() { return &____transformMode_12; }
	inline void set__transformMode_12(int32_t value)
	{
		____transformMode_12 = value;
	}

	inline static int32_t get_offset_of__canRead_13() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____canRead_13)); }
	inline bool get__canRead_13() const { return ____canRead_13; }
	inline bool* get_address_of__canRead_13() { return &____canRead_13; }
	inline void set__canRead_13(bool value)
	{
		____canRead_13 = value;
	}

	inline static int32_t get_offset_of__canWrite_14() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____canWrite_14)); }
	inline bool get__canWrite_14() const { return ____canWrite_14; }
	inline bool* get_address_of__canWrite_14() { return &____canWrite_14; }
	inline void set__canWrite_14(bool value)
	{
		____canWrite_14 = value;
	}

	inline static int32_t get_offset_of__finalBlockTransformed_15() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____finalBlockTransformed_15)); }
	inline bool get__finalBlockTransformed_15() const { return ____finalBlockTransformed_15; }
	inline bool* get_address_of__finalBlockTransformed_15() { return &____finalBlockTransformed_15; }
	inline void set__finalBlockTransformed_15(bool value)
	{
		____finalBlockTransformed_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOSTREAM_T2702504504_H
#ifndef U3CREADASYNCINTERNALU3ED__34_T2482231463_H
#define U3CREADASYNCINTERNALU3ED__34_T2482231463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34
struct  U3CReadAsyncInternalU3Ed__34_t2482231463 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>t__builder
	AsyncTaskMethodBuilder_1_t976952967  ___U3CU3Et__builder_1;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>4__this
	CryptoStream_t2702504504 * ___U3CU3E4__this_2;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::count
	int32_t ___count_3;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::offset
	int32_t ___offset_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::buffer
	ByteU5BU5D_t4116647657* ___buffer_5;
	// System.Threading.CancellationToken System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::cancellationToken
	CancellationToken_t784455623  ___cancellationToken_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<tempInputBuffer>5__1
	ByteU5BU5D_t4116647657* ___U3CtempInputBufferU3E5__1_7;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<currentOutputIndex>5__2
	int32_t ___U3CcurrentOutputIndexU3E5__2_8;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<bytesToDeliver>5__3
	int32_t ___U3CbytesToDeliverU3E5__3_9;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<sem>5__4
	SemaphoreSlim_t2974092902 * ___U3CsemU3E5__4_10;
	// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__1
	HopToThreadPoolAwaitable_t810938849  ___U3CU3Eu__1_11;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__2
	ConfiguredTaskAwaiter_t555647845  ___U3CU3Eu__2_12;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>7__wrap1
	int32_t ___U3CU3E7__wrap1_13;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__3
	ConfiguredTaskAwaiter_t4273446738  ___U3CU3Eu__3_14;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t976952967  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t976952967 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t976952967  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CU3E4__this_2)); }
	inline CryptoStream_t2702504504 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CryptoStream_t2702504504 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CryptoStream_t2702504504 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___buffer_5)); }
	inline ByteU5BU5D_t4116647657* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t4116647657* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___cancellationToken_6)); }
	inline CancellationToken_t784455623  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t784455623 * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t784455623  value)
	{
		___cancellationToken_6 = value;
	}

	inline static int32_t get_offset_of_U3CtempInputBufferU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CtempInputBufferU3E5__1_7)); }
	inline ByteU5BU5D_t4116647657* get_U3CtempInputBufferU3E5__1_7() const { return ___U3CtempInputBufferU3E5__1_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CtempInputBufferU3E5__1_7() { return &___U3CtempInputBufferU3E5__1_7; }
	inline void set_U3CtempInputBufferU3E5__1_7(ByteU5BU5D_t4116647657* value)
	{
		___U3CtempInputBufferU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtempInputBufferU3E5__1_7), value);
	}

	inline static int32_t get_offset_of_U3CcurrentOutputIndexU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CcurrentOutputIndexU3E5__2_8)); }
	inline int32_t get_U3CcurrentOutputIndexU3E5__2_8() const { return ___U3CcurrentOutputIndexU3E5__2_8; }
	inline int32_t* get_address_of_U3CcurrentOutputIndexU3E5__2_8() { return &___U3CcurrentOutputIndexU3E5__2_8; }
	inline void set_U3CcurrentOutputIndexU3E5__2_8(int32_t value)
	{
		___U3CcurrentOutputIndexU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CbytesToDeliverU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CbytesToDeliverU3E5__3_9)); }
	inline int32_t get_U3CbytesToDeliverU3E5__3_9() const { return ___U3CbytesToDeliverU3E5__3_9; }
	inline int32_t* get_address_of_U3CbytesToDeliverU3E5__3_9() { return &___U3CbytesToDeliverU3E5__3_9; }
	inline void set_U3CbytesToDeliverU3E5__3_9(int32_t value)
	{
		___U3CbytesToDeliverU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CsemU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CsemU3E5__4_10)); }
	inline SemaphoreSlim_t2974092902 * get_U3CsemU3E5__4_10() const { return ___U3CsemU3E5__4_10; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_U3CsemU3E5__4_10() { return &___U3CsemU3E5__4_10; }
	inline void set_U3CsemU3E5__4_10(SemaphoreSlim_t2974092902 * value)
	{
		___U3CsemU3E5__4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsemU3E5__4_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CU3Eu__1_11)); }
	inline HopToThreadPoolAwaitable_t810938849  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline HopToThreadPoolAwaitable_t810938849 * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(HopToThreadPoolAwaitable_t810938849  value)
	{
		___U3CU3Eu__1_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_12() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CU3Eu__2_12)); }
	inline ConfiguredTaskAwaiter_t555647845  get_U3CU3Eu__2_12() const { return ___U3CU3Eu__2_12; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_U3CU3Eu__2_12() { return &___U3CU3Eu__2_12; }
	inline void set_U3CU3Eu__2_12(ConfiguredTaskAwaiter_t555647845  value)
	{
		___U3CU3Eu__2_12 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_13() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CU3E7__wrap1_13)); }
	inline int32_t get_U3CU3E7__wrap1_13() const { return ___U3CU3E7__wrap1_13; }
	inline int32_t* get_address_of_U3CU3E7__wrap1_13() { return &___U3CU3E7__wrap1_13; }
	inline void set_U3CU3E7__wrap1_13(int32_t value)
	{
		___U3CU3E7__wrap1_13 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_14() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t2482231463, ___U3CU3Eu__3_14)); }
	inline ConfiguredTaskAwaiter_t4273446738  get_U3CU3Eu__3_14() const { return ___U3CU3Eu__3_14; }
	inline ConfiguredTaskAwaiter_t4273446738 * get_address_of_U3CU3Eu__3_14() { return &___U3CU3Eu__3_14; }
	inline void set_U3CU3Eu__3_14(ConfiguredTaskAwaiter_t4273446738  value)
	{
		___U3CU3Eu__3_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREADASYNCINTERNALU3ED__34_T2482231463_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2790575154_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2790575154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t2790575154  : public CryptographicException_t248831461
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2790575154_H
#ifndef FROMBASE64TRANSFORM_T2896579788_H
#define FROMBASE64TRANSFORM_T2896579788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64Transform
struct  FromBase64Transform_t2896579788  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::_inputBuffer
	ByteU5BU5D_t4116647657* ____inputBuffer_0;
	// System.Int32 System.Security.Cryptography.FromBase64Transform::_inputIndex
	int32_t ____inputIndex_1;
	// System.Security.Cryptography.FromBase64TransformMode System.Security.Cryptography.FromBase64Transform::_whitespaces
	int32_t ____whitespaces_2;

public:
	inline static int32_t get_offset_of__inputBuffer_0() { return static_cast<int32_t>(offsetof(FromBase64Transform_t2896579788, ____inputBuffer_0)); }
	inline ByteU5BU5D_t4116647657* get__inputBuffer_0() const { return ____inputBuffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__inputBuffer_0() { return &____inputBuffer_0; }
	inline void set__inputBuffer_0(ByteU5BU5D_t4116647657* value)
	{
		____inputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&____inputBuffer_0), value);
	}

	inline static int32_t get_offset_of__inputIndex_1() { return static_cast<int32_t>(offsetof(FromBase64Transform_t2896579788, ____inputIndex_1)); }
	inline int32_t get__inputIndex_1() const { return ____inputIndex_1; }
	inline int32_t* get_address_of__inputIndex_1() { return &____inputIndex_1; }
	inline void set__inputIndex_1(int32_t value)
	{
		____inputIndex_1 = value;
	}

	inline static int32_t get_offset_of__whitespaces_2() { return static_cast<int32_t>(offsetof(FromBase64Transform_t2896579788, ____whitespaces_2)); }
	inline int32_t get__whitespaces_2() const { return ____whitespaces_2; }
	inline int32_t* get_address_of__whitespaces_2() { return &____whitespaces_2; }
	inline void set__whitespaces_2(int32_t value)
	{
		____whitespaces_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMBASE64TRANSFORM_T2896579788_H
#ifndef HMACMD5_T2742219965_H
#define HMACMD5_T2742219965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t2742219965  : public HMAC_t2621101144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T2742219965_H
#ifndef HMACRIPEMD160_T3724196729_H
#define HMACRIPEMD160_T3724196729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t3724196729  : public HMAC_t2621101144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T3724196729_H
#ifndef HMACSHA1_T1952596188_H
#define HMACSHA1_T1952596188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t1952596188  : public HMAC_t2621101144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T1952596188_H
#ifndef HMACSHA256_T3249253224_H
#define HMACSHA256_T3249253224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t3249253224  : public HMAC_t2621101144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T3249253224_H
#ifndef HMACSHA384_T117937311_H
#define HMACSHA384_T117937311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t117937311  : public HMAC_t2621101144
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::m_useLegacyBlockSize
	bool ___m_useLegacyBlockSize_12;

public:
	inline static int32_t get_offset_of_m_useLegacyBlockSize_12() { return static_cast<int32_t>(offsetof(HMACSHA384_t117937311, ___m_useLegacyBlockSize_12)); }
	inline bool get_m_useLegacyBlockSize_12() const { return ___m_useLegacyBlockSize_12; }
	inline bool* get_address_of_m_useLegacyBlockSize_12() { return &___m_useLegacyBlockSize_12; }
	inline void set_m_useLegacyBlockSize_12(bool value)
	{
		___m_useLegacyBlockSize_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T117937311_H
#ifndef HMACSHA512_T923916539_H
#define HMACSHA512_T923916539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t923916539  : public HMAC_t2621101144
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::m_useLegacyBlockSize
	bool ___m_useLegacyBlockSize_12;

public:
	inline static int32_t get_offset_of_m_useLegacyBlockSize_12() { return static_cast<int32_t>(offsetof(HMACSHA512_t923916539, ___m_useLegacyBlockSize_12)); }
	inline bool get_m_useLegacyBlockSize_12() const { return ___m_useLegacyBlockSize_12; }
	inline bool* get_address_of_m_useLegacyBlockSize_12() { return &___m_useLegacyBlockSize_12; }
	inline void set_m_useLegacyBlockSize_12(bool value)
	{
		___m_useLegacyBlockSize_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T923916539_H
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
#ifndef RSAENCRYPTIONPADDING_T979300544_H
#define RSAENCRYPTIONPADDING_T979300544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAEncryptionPadding
struct  RSAEncryptionPadding_t979300544  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSAEncryptionPaddingMode System.Security.Cryptography.RSAEncryptionPadding::_mode
	int32_t ____mode_5;
	// System.Security.Cryptography.HashAlgorithmName System.Security.Cryptography.RSAEncryptionPadding::_oaepHashAlgorithm
	HashAlgorithmName_t3637476002  ____oaepHashAlgorithm_6;

public:
	inline static int32_t get_offset_of__mode_5() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t979300544, ____mode_5)); }
	inline int32_t get__mode_5() const { return ____mode_5; }
	inline int32_t* get_address_of__mode_5() { return &____mode_5; }
	inline void set__mode_5(int32_t value)
	{
		____mode_5 = value;
	}

	inline static int32_t get_offset_of__oaepHashAlgorithm_6() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t979300544, ____oaepHashAlgorithm_6)); }
	inline HashAlgorithmName_t3637476002  get__oaepHashAlgorithm_6() const { return ____oaepHashAlgorithm_6; }
	inline HashAlgorithmName_t3637476002 * get_address_of__oaepHashAlgorithm_6() { return &____oaepHashAlgorithm_6; }
	inline void set__oaepHashAlgorithm_6(HashAlgorithmName_t3637476002  value)
	{
		____oaepHashAlgorithm_6 = value;
	}
};

struct RSAEncryptionPadding_t979300544_StaticFields
{
public:
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_pkcs1
	RSAEncryptionPadding_t979300544 * ___s_pkcs1_0;
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_oaepSHA1
	RSAEncryptionPadding_t979300544 * ___s_oaepSHA1_1;
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_oaepSHA256
	RSAEncryptionPadding_t979300544 * ___s_oaepSHA256_2;
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_oaepSHA384
	RSAEncryptionPadding_t979300544 * ___s_oaepSHA384_3;
	// System.Security.Cryptography.RSAEncryptionPadding System.Security.Cryptography.RSAEncryptionPadding::s_oaepSHA512
	RSAEncryptionPadding_t979300544 * ___s_oaepSHA512_4;

public:
	inline static int32_t get_offset_of_s_pkcs1_0() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t979300544_StaticFields, ___s_pkcs1_0)); }
	inline RSAEncryptionPadding_t979300544 * get_s_pkcs1_0() const { return ___s_pkcs1_0; }
	inline RSAEncryptionPadding_t979300544 ** get_address_of_s_pkcs1_0() { return &___s_pkcs1_0; }
	inline void set_s_pkcs1_0(RSAEncryptionPadding_t979300544 * value)
	{
		___s_pkcs1_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_pkcs1_0), value);
	}

	inline static int32_t get_offset_of_s_oaepSHA1_1() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t979300544_StaticFields, ___s_oaepSHA1_1)); }
	inline RSAEncryptionPadding_t979300544 * get_s_oaepSHA1_1() const { return ___s_oaepSHA1_1; }
	inline RSAEncryptionPadding_t979300544 ** get_address_of_s_oaepSHA1_1() { return &___s_oaepSHA1_1; }
	inline void set_s_oaepSHA1_1(RSAEncryptionPadding_t979300544 * value)
	{
		___s_oaepSHA1_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_oaepSHA1_1), value);
	}

	inline static int32_t get_offset_of_s_oaepSHA256_2() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t979300544_StaticFields, ___s_oaepSHA256_2)); }
	inline RSAEncryptionPadding_t979300544 * get_s_oaepSHA256_2() const { return ___s_oaepSHA256_2; }
	inline RSAEncryptionPadding_t979300544 ** get_address_of_s_oaepSHA256_2() { return &___s_oaepSHA256_2; }
	inline void set_s_oaepSHA256_2(RSAEncryptionPadding_t979300544 * value)
	{
		___s_oaepSHA256_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_oaepSHA256_2), value);
	}

	inline static int32_t get_offset_of_s_oaepSHA384_3() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t979300544_StaticFields, ___s_oaepSHA384_3)); }
	inline RSAEncryptionPadding_t979300544 * get_s_oaepSHA384_3() const { return ___s_oaepSHA384_3; }
	inline RSAEncryptionPadding_t979300544 ** get_address_of_s_oaepSHA384_3() { return &___s_oaepSHA384_3; }
	inline void set_s_oaepSHA384_3(RSAEncryptionPadding_t979300544 * value)
	{
		___s_oaepSHA384_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_oaepSHA384_3), value);
	}

	inline static int32_t get_offset_of_s_oaepSHA512_4() { return static_cast<int32_t>(offsetof(RSAEncryptionPadding_t979300544_StaticFields, ___s_oaepSHA512_4)); }
	inline RSAEncryptionPadding_t979300544 * get_s_oaepSHA512_4() const { return ___s_oaepSHA512_4; }
	inline RSAEncryptionPadding_t979300544 ** get_address_of_s_oaepSHA512_4() { return &___s_oaepSHA512_4; }
	inline void set_s_oaepSHA512_4(RSAEncryptionPadding_t979300544 * value)
	{
		___s_oaepSHA512_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_oaepSHA512_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAENCRYPTIONPADDING_T979300544_H
#ifndef RSASIGNATUREPADDING_T1107417227_H
#define RSASIGNATUREPADDING_T1107417227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSASignaturePadding
struct  RSASignaturePadding_t1107417227  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSASignaturePaddingMode System.Security.Cryptography.RSASignaturePadding::_mode
	int32_t ____mode_2;

public:
	inline static int32_t get_offset_of__mode_2() { return static_cast<int32_t>(offsetof(RSASignaturePadding_t1107417227, ____mode_2)); }
	inline int32_t get__mode_2() const { return ____mode_2; }
	inline int32_t* get_address_of__mode_2() { return &____mode_2; }
	inline void set__mode_2(int32_t value)
	{
		____mode_2 = value;
	}
};

struct RSASignaturePadding_t1107417227_StaticFields
{
public:
	// System.Security.Cryptography.RSASignaturePadding System.Security.Cryptography.RSASignaturePadding::s_pkcs1
	RSASignaturePadding_t1107417227 * ___s_pkcs1_0;
	// System.Security.Cryptography.RSASignaturePadding System.Security.Cryptography.RSASignaturePadding::s_pss
	RSASignaturePadding_t1107417227 * ___s_pss_1;

public:
	inline static int32_t get_offset_of_s_pkcs1_0() { return static_cast<int32_t>(offsetof(RSASignaturePadding_t1107417227_StaticFields, ___s_pkcs1_0)); }
	inline RSASignaturePadding_t1107417227 * get_s_pkcs1_0() const { return ___s_pkcs1_0; }
	inline RSASignaturePadding_t1107417227 ** get_address_of_s_pkcs1_0() { return &___s_pkcs1_0; }
	inline void set_s_pkcs1_0(RSASignaturePadding_t1107417227 * value)
	{
		___s_pkcs1_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_pkcs1_0), value);
	}

	inline static int32_t get_offset_of_s_pss_1() { return static_cast<int32_t>(offsetof(RSASignaturePadding_t1107417227_StaticFields, ___s_pss_1)); }
	inline RSASignaturePadding_t1107417227 * get_s_pss_1() const { return ___s_pss_1; }
	inline RSASignaturePadding_t1107417227 ** get_address_of_s_pss_1() { return &___s_pss_1; }
	inline void set_s_pss_1(RSASignaturePadding_t1107417227 * value)
	{
		___s_pss_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_pss_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASIGNATUREPADDING_T1107417227_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T4102601014_H
#define RIJNDAELMANAGEDTRANSFORM_T4102601014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t4102601014  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.RijndaelManagedTransform::m_cipherMode
	int32_t ___m_cipherMode_0;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.RijndaelManagedTransform::m_paddingValue
	int32_t ___m_paddingValue_1;
	// System.Security.Cryptography.RijndaelManagedTransformMode System.Security.Cryptography.RijndaelManagedTransform::m_transformMode
	int32_t ___m_transformMode_2;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_blockSizeBits
	int32_t ___m_blockSizeBits_3;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_blockSizeBytes
	int32_t ___m_blockSizeBytes_4;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_inputBlockSize
	int32_t ___m_inputBlockSize_5;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_outputBlockSize
	int32_t ___m_outputBlockSize_6;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_encryptKeyExpansion
	Int32U5BU5D_t385246372* ___m_encryptKeyExpansion_7;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_decryptKeyExpansion
	Int32U5BU5D_t385246372* ___m_decryptKeyExpansion_8;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nr
	int32_t ___m_Nr_9;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nb
	int32_t ___m_Nb_10;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nk
	int32_t ___m_Nk_11;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_encryptindex
	Int32U5BU5D_t385246372* ___m_encryptindex_12;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_decryptindex
	Int32U5BU5D_t385246372* ___m_decryptindex_13;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_IV
	Int32U5BU5D_t385246372* ___m_IV_14;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_lastBlockBuffer
	Int32U5BU5D_t385246372* ___m_lastBlockBuffer_15;
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::m_depadBuffer
	ByteU5BU5D_t4116647657* ___m_depadBuffer_16;
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::m_shiftRegister
	ByteU5BU5D_t4116647657* ___m_shiftRegister_17;

public:
	inline static int32_t get_offset_of_m_cipherMode_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_cipherMode_0)); }
	inline int32_t get_m_cipherMode_0() const { return ___m_cipherMode_0; }
	inline int32_t* get_address_of_m_cipherMode_0() { return &___m_cipherMode_0; }
	inline void set_m_cipherMode_0(int32_t value)
	{
		___m_cipherMode_0 = value;
	}

	inline static int32_t get_offset_of_m_paddingValue_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_paddingValue_1)); }
	inline int32_t get_m_paddingValue_1() const { return ___m_paddingValue_1; }
	inline int32_t* get_address_of_m_paddingValue_1() { return &___m_paddingValue_1; }
	inline void set_m_paddingValue_1(int32_t value)
	{
		___m_paddingValue_1 = value;
	}

	inline static int32_t get_offset_of_m_transformMode_2() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_transformMode_2)); }
	inline int32_t get_m_transformMode_2() const { return ___m_transformMode_2; }
	inline int32_t* get_address_of_m_transformMode_2() { return &___m_transformMode_2; }
	inline void set_m_transformMode_2(int32_t value)
	{
		___m_transformMode_2 = value;
	}

	inline static int32_t get_offset_of_m_blockSizeBits_3() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_blockSizeBits_3)); }
	inline int32_t get_m_blockSizeBits_3() const { return ___m_blockSizeBits_3; }
	inline int32_t* get_address_of_m_blockSizeBits_3() { return &___m_blockSizeBits_3; }
	inline void set_m_blockSizeBits_3(int32_t value)
	{
		___m_blockSizeBits_3 = value;
	}

	inline static int32_t get_offset_of_m_blockSizeBytes_4() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_blockSizeBytes_4)); }
	inline int32_t get_m_blockSizeBytes_4() const { return ___m_blockSizeBytes_4; }
	inline int32_t* get_address_of_m_blockSizeBytes_4() { return &___m_blockSizeBytes_4; }
	inline void set_m_blockSizeBytes_4(int32_t value)
	{
		___m_blockSizeBytes_4 = value;
	}

	inline static int32_t get_offset_of_m_inputBlockSize_5() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_inputBlockSize_5)); }
	inline int32_t get_m_inputBlockSize_5() const { return ___m_inputBlockSize_5; }
	inline int32_t* get_address_of_m_inputBlockSize_5() { return &___m_inputBlockSize_5; }
	inline void set_m_inputBlockSize_5(int32_t value)
	{
		___m_inputBlockSize_5 = value;
	}

	inline static int32_t get_offset_of_m_outputBlockSize_6() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_outputBlockSize_6)); }
	inline int32_t get_m_outputBlockSize_6() const { return ___m_outputBlockSize_6; }
	inline int32_t* get_address_of_m_outputBlockSize_6() { return &___m_outputBlockSize_6; }
	inline void set_m_outputBlockSize_6(int32_t value)
	{
		___m_outputBlockSize_6 = value;
	}

	inline static int32_t get_offset_of_m_encryptKeyExpansion_7() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_encryptKeyExpansion_7)); }
	inline Int32U5BU5D_t385246372* get_m_encryptKeyExpansion_7() const { return ___m_encryptKeyExpansion_7; }
	inline Int32U5BU5D_t385246372** get_address_of_m_encryptKeyExpansion_7() { return &___m_encryptKeyExpansion_7; }
	inline void set_m_encryptKeyExpansion_7(Int32U5BU5D_t385246372* value)
	{
		___m_encryptKeyExpansion_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_encryptKeyExpansion_7), value);
	}

	inline static int32_t get_offset_of_m_decryptKeyExpansion_8() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_decryptKeyExpansion_8)); }
	inline Int32U5BU5D_t385246372* get_m_decryptKeyExpansion_8() const { return ___m_decryptKeyExpansion_8; }
	inline Int32U5BU5D_t385246372** get_address_of_m_decryptKeyExpansion_8() { return &___m_decryptKeyExpansion_8; }
	inline void set_m_decryptKeyExpansion_8(Int32U5BU5D_t385246372* value)
	{
		___m_decryptKeyExpansion_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_decryptKeyExpansion_8), value);
	}

	inline static int32_t get_offset_of_m_Nr_9() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_Nr_9)); }
	inline int32_t get_m_Nr_9() const { return ___m_Nr_9; }
	inline int32_t* get_address_of_m_Nr_9() { return &___m_Nr_9; }
	inline void set_m_Nr_9(int32_t value)
	{
		___m_Nr_9 = value;
	}

	inline static int32_t get_offset_of_m_Nb_10() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_Nb_10)); }
	inline int32_t get_m_Nb_10() const { return ___m_Nb_10; }
	inline int32_t* get_address_of_m_Nb_10() { return &___m_Nb_10; }
	inline void set_m_Nb_10(int32_t value)
	{
		___m_Nb_10 = value;
	}

	inline static int32_t get_offset_of_m_Nk_11() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_Nk_11)); }
	inline int32_t get_m_Nk_11() const { return ___m_Nk_11; }
	inline int32_t* get_address_of_m_Nk_11() { return &___m_Nk_11; }
	inline void set_m_Nk_11(int32_t value)
	{
		___m_Nk_11 = value;
	}

	inline static int32_t get_offset_of_m_encryptindex_12() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_encryptindex_12)); }
	inline Int32U5BU5D_t385246372* get_m_encryptindex_12() const { return ___m_encryptindex_12; }
	inline Int32U5BU5D_t385246372** get_address_of_m_encryptindex_12() { return &___m_encryptindex_12; }
	inline void set_m_encryptindex_12(Int32U5BU5D_t385246372* value)
	{
		___m_encryptindex_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_encryptindex_12), value);
	}

	inline static int32_t get_offset_of_m_decryptindex_13() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_decryptindex_13)); }
	inline Int32U5BU5D_t385246372* get_m_decryptindex_13() const { return ___m_decryptindex_13; }
	inline Int32U5BU5D_t385246372** get_address_of_m_decryptindex_13() { return &___m_decryptindex_13; }
	inline void set_m_decryptindex_13(Int32U5BU5D_t385246372* value)
	{
		___m_decryptindex_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_decryptindex_13), value);
	}

	inline static int32_t get_offset_of_m_IV_14() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_IV_14)); }
	inline Int32U5BU5D_t385246372* get_m_IV_14() const { return ___m_IV_14; }
	inline Int32U5BU5D_t385246372** get_address_of_m_IV_14() { return &___m_IV_14; }
	inline void set_m_IV_14(Int32U5BU5D_t385246372* value)
	{
		___m_IV_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_IV_14), value);
	}

	inline static int32_t get_offset_of_m_lastBlockBuffer_15() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_lastBlockBuffer_15)); }
	inline Int32U5BU5D_t385246372* get_m_lastBlockBuffer_15() const { return ___m_lastBlockBuffer_15; }
	inline Int32U5BU5D_t385246372** get_address_of_m_lastBlockBuffer_15() { return &___m_lastBlockBuffer_15; }
	inline void set_m_lastBlockBuffer_15(Int32U5BU5D_t385246372* value)
	{
		___m_lastBlockBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_lastBlockBuffer_15), value);
	}

	inline static int32_t get_offset_of_m_depadBuffer_16() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_depadBuffer_16)); }
	inline ByteU5BU5D_t4116647657* get_m_depadBuffer_16() const { return ___m_depadBuffer_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_depadBuffer_16() { return &___m_depadBuffer_16; }
	inline void set_m_depadBuffer_16(ByteU5BU5D_t4116647657* value)
	{
		___m_depadBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_depadBuffer_16), value);
	}

	inline static int32_t get_offset_of_m_shiftRegister_17() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014, ___m_shiftRegister_17)); }
	inline ByteU5BU5D_t4116647657* get_m_shiftRegister_17() const { return ___m_shiftRegister_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_shiftRegister_17() { return &___m_shiftRegister_17; }
	inline void set_m_shiftRegister_17(ByteU5BU5D_t4116647657* value)
	{
		___m_shiftRegister_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_shiftRegister_17), value);
	}
};

struct RijndaelManagedTransform_t4102601014_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::s_Sbox
	ByteU5BU5D_t4116647657* ___s_Sbox_18;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_Rcon
	Int32U5BU5D_t385246372* ___s_Rcon_19;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_T
	Int32U5BU5D_t385246372* ___s_T_20;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_TF
	Int32U5BU5D_t385246372* ___s_TF_21;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_iT
	Int32U5BU5D_t385246372* ___s_iT_22;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_iTF
	Int32U5BU5D_t385246372* ___s_iTF_23;

public:
	inline static int32_t get_offset_of_s_Sbox_18() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014_StaticFields, ___s_Sbox_18)); }
	inline ByteU5BU5D_t4116647657* get_s_Sbox_18() const { return ___s_Sbox_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_s_Sbox_18() { return &___s_Sbox_18; }
	inline void set_s_Sbox_18(ByteU5BU5D_t4116647657* value)
	{
		___s_Sbox_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_Sbox_18), value);
	}

	inline static int32_t get_offset_of_s_Rcon_19() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014_StaticFields, ___s_Rcon_19)); }
	inline Int32U5BU5D_t385246372* get_s_Rcon_19() const { return ___s_Rcon_19; }
	inline Int32U5BU5D_t385246372** get_address_of_s_Rcon_19() { return &___s_Rcon_19; }
	inline void set_s_Rcon_19(Int32U5BU5D_t385246372* value)
	{
		___s_Rcon_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_Rcon_19), value);
	}

	inline static int32_t get_offset_of_s_T_20() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014_StaticFields, ___s_T_20)); }
	inline Int32U5BU5D_t385246372* get_s_T_20() const { return ___s_T_20; }
	inline Int32U5BU5D_t385246372** get_address_of_s_T_20() { return &___s_T_20; }
	inline void set_s_T_20(Int32U5BU5D_t385246372* value)
	{
		___s_T_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_T_20), value);
	}

	inline static int32_t get_offset_of_s_TF_21() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014_StaticFields, ___s_TF_21)); }
	inline Int32U5BU5D_t385246372* get_s_TF_21() const { return ___s_TF_21; }
	inline Int32U5BU5D_t385246372** get_address_of_s_TF_21() { return &___s_TF_21; }
	inline void set_s_TF_21(Int32U5BU5D_t385246372* value)
	{
		___s_TF_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_TF_21), value);
	}

	inline static int32_t get_offset_of_s_iT_22() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014_StaticFields, ___s_iT_22)); }
	inline Int32U5BU5D_t385246372* get_s_iT_22() const { return ___s_iT_22; }
	inline Int32U5BU5D_t385246372** get_address_of_s_iT_22() { return &___s_iT_22; }
	inline void set_s_iT_22(Int32U5BU5D_t385246372* value)
	{
		___s_iT_22 = value;
		Il2CppCodeGenWriteBarrier((&___s_iT_22), value);
	}

	inline static int32_t get_offset_of_s_iTF_23() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4102601014_StaticFields, ___s_iTF_23)); }
	inline Int32U5BU5D_t385246372* get_s_iTF_23() const { return ___s_iTF_23; }
	inline Int32U5BU5D_t385246372** get_address_of_s_iTF_23() { return &___s_iTF_23; }
	inline void set_s_iTF_23(Int32U5BU5D_t385246372* value)
	{
		___s_iTF_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_iTF_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T4102601014_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_2)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_2), value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef AES_T1218282760_H
#define AES_T1218282760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1218282760  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct Aes_t1218282760_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_t1218282760_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_t1218282760_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1218282760_H
#ifndef U3CWRITEASYNCINTERNALU3ED__37_T1756569490_H
#define U3CWRITEASYNCINTERNALU3ED__37_T1756569490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37
struct  U3CWriteAsyncInternalU3Ed__37_t1756569490 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>t__builder
	AsyncTaskMethodBuilder_t3536885450  ___U3CU3Et__builder_1;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>4__this
	CryptoStream_t2702504504 * ___U3CU3E4__this_2;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::count
	int32_t ___count_3;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::offset
	int32_t ___offset_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::buffer
	ByteU5BU5D_t4116647657* ___buffer_5;
	// System.Threading.CancellationToken System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::cancellationToken
	CancellationToken_t784455623  ___cancellationToken_6;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<bytesToWrite>5__1
	int32_t ___U3CbytesToWriteU3E5__1_7;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<currentInputIndex>5__2
	int32_t ___U3CcurrentInputIndexU3E5__2_8;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<numWholeBlocksInBytes>5__3
	int32_t ___U3CnumWholeBlocksInBytesU3E5__3_9;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<sem>5__4
	SemaphoreSlim_t2974092902 * ___U3CsemU3E5__4_10;
	// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>u__1
	HopToThreadPoolAwaitable_t810938849  ___U3CU3Eu__1_11;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>u__2
	ConfiguredTaskAwaiter_t555647845  ___U3CU3Eu__2_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t3536885450  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t3536885450 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t3536885450  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CU3E4__this_2)); }
	inline CryptoStream_t2702504504 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CryptoStream_t2702504504 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CryptoStream_t2702504504 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___buffer_5)); }
	inline ByteU5BU5D_t4116647657* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t4116647657* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___cancellationToken_6)); }
	inline CancellationToken_t784455623  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t784455623 * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t784455623  value)
	{
		___cancellationToken_6 = value;
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CbytesToWriteU3E5__1_7)); }
	inline int32_t get_U3CbytesToWriteU3E5__1_7() const { return ___U3CbytesToWriteU3E5__1_7; }
	inline int32_t* get_address_of_U3CbytesToWriteU3E5__1_7() { return &___U3CbytesToWriteU3E5__1_7; }
	inline void set_U3CbytesToWriteU3E5__1_7(int32_t value)
	{
		___U3CbytesToWriteU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentInputIndexU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CcurrentInputIndexU3E5__2_8)); }
	inline int32_t get_U3CcurrentInputIndexU3E5__2_8() const { return ___U3CcurrentInputIndexU3E5__2_8; }
	inline int32_t* get_address_of_U3CcurrentInputIndexU3E5__2_8() { return &___U3CcurrentInputIndexU3E5__2_8; }
	inline void set_U3CcurrentInputIndexU3E5__2_8(int32_t value)
	{
		___U3CcurrentInputIndexU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CnumWholeBlocksInBytesU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CnumWholeBlocksInBytesU3E5__3_9)); }
	inline int32_t get_U3CnumWholeBlocksInBytesU3E5__3_9() const { return ___U3CnumWholeBlocksInBytesU3E5__3_9; }
	inline int32_t* get_address_of_U3CnumWholeBlocksInBytesU3E5__3_9() { return &___U3CnumWholeBlocksInBytesU3E5__3_9; }
	inline void set_U3CnumWholeBlocksInBytesU3E5__3_9(int32_t value)
	{
		___U3CnumWholeBlocksInBytesU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CsemU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CsemU3E5__4_10)); }
	inline SemaphoreSlim_t2974092902 * get_U3CsemU3E5__4_10() const { return ___U3CsemU3E5__4_10; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_U3CsemU3E5__4_10() { return &___U3CsemU3E5__4_10; }
	inline void set_U3CsemU3E5__4_10(SemaphoreSlim_t2974092902 * value)
	{
		___U3CsemU3E5__4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsemU3E5__4_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CU3Eu__1_11)); }
	inline HopToThreadPoolAwaitable_t810938849  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline HopToThreadPoolAwaitable_t810938849 * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(HopToThreadPoolAwaitable_t810938849  value)
	{
		___U3CU3Eu__1_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_12() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1756569490, ___U3CU3Eu__2_12)); }
	inline ConfiguredTaskAwaiter_t555647845  get_U3CU3Eu__2_12() const { return ___U3CU3Eu__2_12; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_U3CU3Eu__2_12() { return &___U3CU3Eu__2_12; }
	inline void set_U3CU3Eu__2_12(ConfiguredTaskAwaiter_t555647845  value)
	{
		___U3CU3Eu__2_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWRITEASYNCINTERNALU3ED__37_T1756569490_H
#ifndef DES_T821106792_H
#define DES_T821106792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t821106792  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct DES_t821106792_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.DES::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.DES::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(DES_t821106792_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(DES_t821106792_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T821106792_H
#ifndef DESTRANSFORM_T4088905499_H
#define DESTRANSFORM_T4088905499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t4088905499  : public SymmetricTransform_t3802591842
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t4116647657* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t4116647657* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t2770800703* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499, ___keySchedule_16)); }
	inline ByteU5BU5D_t4116647657* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t4116647657* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499, ___byteBuff_17)); }
	inline ByteU5BU5D_t4116647657* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t4116647657* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t2770800703* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t2770800703** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t2770800703* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t4088905499_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t2770800703* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t4116647657* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t4116647657* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t4116647657* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t2770800703* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t2770800703* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t2770800703* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t2770800703* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t4116647657* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t4116647657** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t4116647657* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t4116647657* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t4116647657** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t4116647657* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t4116647657* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t4116647657** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t4116647657* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t2770800703* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t2770800703* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t4088905499_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t2770800703* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t2770800703* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T4088905499_H
#ifndef RC2_T3167825714_H
#define RC2_T3167825714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t3167825714  : public SymmetricAlgorithm_t4254223087
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_9;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_9() { return static_cast<int32_t>(offsetof(RC2_t3167825714, ___EffectiveKeySizeValue_9)); }
	inline int32_t get_EffectiveKeySizeValue_9() const { return ___EffectiveKeySizeValue_9; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_9() { return &___EffectiveKeySizeValue_9; }
	inline void set_EffectiveKeySizeValue_9(int32_t value)
	{
		___EffectiveKeySizeValue_9 = value;
	}
};

struct RC2_t3167825714_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC2_t3167825714_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC2_t3167825714_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T3167825714_H
#ifndef RIJNDAEL_T2986313634_H
#define RIJNDAEL_T2986313634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t2986313634  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct Rijndael_t2986313634_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Rijndael_t2986313634_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Rijndael_t2986313634_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T2986313634_H
#ifndef TRIPLEDES_T92303514_H
#define TRIPLEDES_T92303514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t92303514  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct TripleDES_t92303514_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.TripleDES::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.TripleDES::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(TripleDES_t92303514_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(TripleDES_t92303514_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T92303514_H
#ifndef DESCRYPTOSERVICEPROVIDER_T1519490285_H
#define DESCRYPTOSERVICEPROVIDER_T1519490285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t1519490285  : public DES_t821106792
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T1519490285_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T662919463_H
#define RC2CRYPTOSERVICEPROVIDER_T662919463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t662919463  : public RC2_t3167825714
{
public:
	// System.Boolean System.Security.Cryptography.RC2CryptoServiceProvider::m_use40bitSalt
	bool ___m_use40bitSalt_12;

public:
	inline static int32_t get_offset_of_m_use40bitSalt_12() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t662919463, ___m_use40bitSalt_12)); }
	inline bool get_m_use40bitSalt_12() const { return ___m_use40bitSalt_12; }
	inline bool* get_address_of_m_use40bitSalt_12() { return &___m_use40bitSalt_12; }
	inline void set_m_use40bitSalt_12(bool value)
	{
		___m_use40bitSalt_12 = value;
	}
};

struct RC2CryptoServiceProvider_t662919463_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2CryptoServiceProvider::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_13;

public:
	inline static int32_t get_offset_of_s_legalKeySizes_13() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t662919463_StaticFields, ___s_legalKeySizes_13)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_13() const { return ___s_legalKeySizes_13; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_13() { return &___s_legalKeySizes_13; }
	inline void set_s_legalKeySizes_13(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T662919463_H
#ifndef RIJNDAELMANAGED_T3586970409_H
#define RIJNDAELMANAGED_T3586970409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t3586970409  : public Rijndael_t2986313634
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T3586970409_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T3595206342_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T3595206342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t3595206342  : public TripleDES_t92303514
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T3595206342_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (PrincipalPolicy_t1761212333)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1000[4] = 
{
	PrincipalPolicy_t1761212333::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (TokenImpersonationLevel_t3773270939)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1001[6] = 
{
	TokenImpersonationLevel_t3773270939::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (HashAlgorithmName_t3637476002)+ sizeof (RuntimeObject), sizeof(HashAlgorithmName_t3637476002_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1002[1] = 
{
	HashAlgorithmName_t3637476002::get_offset_of__name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (RSAEncryptionPadding_t979300544), -1, sizeof(RSAEncryptionPadding_t979300544_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1003[7] = 
{
	RSAEncryptionPadding_t979300544_StaticFields::get_offset_of_s_pkcs1_0(),
	RSAEncryptionPadding_t979300544_StaticFields::get_offset_of_s_oaepSHA1_1(),
	RSAEncryptionPadding_t979300544_StaticFields::get_offset_of_s_oaepSHA256_2(),
	RSAEncryptionPadding_t979300544_StaticFields::get_offset_of_s_oaepSHA384_3(),
	RSAEncryptionPadding_t979300544_StaticFields::get_offset_of_s_oaepSHA512_4(),
	RSAEncryptionPadding_t979300544::get_offset_of__mode_5(),
	RSAEncryptionPadding_t979300544::get_offset_of__oaepHashAlgorithm_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (RSAEncryptionPaddingMode_t4163793404)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1004[3] = 
{
	RSAEncryptionPaddingMode_t4163793404::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (RSASignaturePadding_t1107417227), -1, sizeof(RSASignaturePadding_t1107417227_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1005[3] = 
{
	RSASignaturePadding_t1107417227_StaticFields::get_offset_of_s_pkcs1_0(),
	RSASignaturePadding_t1107417227_StaticFields::get_offset_of_s_pss_1(),
	RSASignaturePadding_t1107417227::get_offset_of__mode_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (RSASignaturePaddingMode_t3665782209)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1006[3] = 
{
	RSASignaturePaddingMode_t3665782209::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (Aes_t1218282760), -1, sizeof(Aes_t1218282760_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1007[2] = 
{
	Aes_t1218282760_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	Aes_t1218282760_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (AsymmetricAlgorithm_t932037087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1008[2] = 
{
	AsymmetricAlgorithm_t932037087::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t932037087::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (AsymmetricKeyExchangeDeformatter_t3370779160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (AsymmetricKeyExchangeFormatter_t937192061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (AsymmetricSignatureDeformatter_t2681190756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (AsymmetricSignatureFormatter_t3486936014), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (FromBase64TransformMode_t2018065788)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1013[3] = 
{
	FromBase64TransformMode_t2018065788::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (ToBase64Transform_t2551557057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (FromBase64Transform_t2896579788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1015[3] = 
{
	FromBase64Transform_t2896579788::get_offset_of__inputBuffer_0(),
	FromBase64Transform_t2896579788::get_offset_of__inputIndex_1(),
	FromBase64Transform_t2896579788::get_offset_of__whitespaces_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (CipherMode_t84635067)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1016[6] = 
{
	CipherMode_t84635067::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (PaddingMode_t2546806710)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1017[6] = 
{
	PaddingMode_t2546806710::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (KeySizes_t85027896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1018[3] = 
{
	KeySizes_t85027896::get_offset_of_m_minSize_0(),
	KeySizes_t85027896::get_offset_of_m_maxSize_1(),
	KeySizes_t85027896::get_offset_of_m_skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (CryptographicException_t248831461), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1019[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (CryptographicUnexpectedOperationException_t2790575154), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (CspProviderFlags_t4094439141)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1021[10] = 
{
	CspProviderFlags_t4094439141::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (CspParameters_t239852639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1022[8] = 
{
	CspParameters_t239852639::get_offset_of_ProviderType_0(),
	CspParameters_t239852639::get_offset_of_ProviderName_1(),
	CspParameters_t239852639::get_offset_of_KeyContainerName_2(),
	CspParameters_t239852639::get_offset_of_KeyNumber_3(),
	CspParameters_t239852639::get_offset_of_m_flags_4(),
	CspParameters_t239852639::get_offset_of_m_cryptoKeySecurity_5(),
	CspParameters_t239852639::get_offset_of_m_keyPassword_6(),
	CspParameters_t239852639::get_offset_of_m_parentWindowHandle_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (CryptoStreamMode_t3639658227)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1023[3] = 
{
	CryptoStreamMode_t3639658227::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (CryptoStream_t2702504504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1024[12] = 
{
	CryptoStream_t2702504504::get_offset_of__stream_4(),
	CryptoStream_t2702504504::get_offset_of__Transform_5(),
	CryptoStream_t2702504504::get_offset_of__InputBuffer_6(),
	CryptoStream_t2702504504::get_offset_of__InputBufferIndex_7(),
	CryptoStream_t2702504504::get_offset_of__InputBlockSize_8(),
	CryptoStream_t2702504504::get_offset_of__OutputBuffer_9(),
	CryptoStream_t2702504504::get_offset_of__OutputBufferIndex_10(),
	CryptoStream_t2702504504::get_offset_of__OutputBlockSize_11(),
	CryptoStream_t2702504504::get_offset_of__transformMode_12(),
	CryptoStream_t2702504504::get_offset_of__canRead_13(),
	CryptoStream_t2702504504::get_offset_of__canWrite_14(),
	CryptoStream_t2702504504::get_offset_of__finalBlockTransformed_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (HopToThreadPoolAwaitable_t810938849)+ sizeof (RuntimeObject), sizeof(HopToThreadPoolAwaitable_t810938849 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (U3CReadAsyncInternalU3Ed__34_t2482231463)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1026[15] = 
{
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_count_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_buffer_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_cancellationToken_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CtempInputBufferU3E5__1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CcurrentOutputIndexU3E5__2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CbytesToDeliverU3E5__3_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CsemU3E5__4_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CU3Eu__1_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CU3Eu__2_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CU3E7__wrap1_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t2482231463::get_offset_of_U3CU3Eu__3_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (U3CWriteAsyncInternalU3Ed__37_t1756569490)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1027[13] = 
{
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_count_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_buffer_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_cancellationToken_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CbytesToWriteU3E5__1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CcurrentInputIndexU3E5__2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CnumWholeBlocksInBytesU3E5__3_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CsemU3E5__4_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CU3Eu__1_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1756569490::get_offset_of_U3CU3Eu__2_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (DeriveBytes_t2246965020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { sizeof (DES_t821106792), -1, sizeof(DES_t821106792_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1029[2] = 
{
	DES_t821106792_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	DES_t821106792_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { sizeof (DESCryptoServiceProvider_t1519490285), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { sizeof (DSAParameters_t1885824122)+ sizeof (RuntimeObject), sizeof(DSAParameters_t1885824122_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1031[8] = 
{
	DSAParameters_t1885824122::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_G_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_Y_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_J_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_X_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_Seed_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1885824122::get_offset_of_Counter_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (DSA_t2386879874), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (DSASignatureDeformatter_t3677955172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1033[2] = 
{
	DSASignatureDeformatter_t3677955172::get_offset_of__dsaKey_0(),
	DSASignatureDeformatter_t3677955172::get_offset_of__oid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (DSASignatureFormatter_t2007981259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1034[2] = 
{
	DSASignatureFormatter_t2007981259::get_offset_of__dsaKey_0(),
	DSASignatureFormatter_t2007981259::get_offset_of__oid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (HashAlgorithm_t1432317219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1035[4] = 
{
	HashAlgorithm_t1432317219::get_offset_of_HashSizeValue_0(),
	HashAlgorithm_t1432317219::get_offset_of_HashValue_1(),
	HashAlgorithm_t1432317219::get_offset_of_State_2(),
	HashAlgorithm_t1432317219::get_offset_of_m_bDisposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (HMAC_t2621101144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1036[7] = 
{
	HMAC_t2621101144::get_offset_of_blockSizeValue_5(),
	HMAC_t2621101144::get_offset_of_m_hashName_6(),
	HMAC_t2621101144::get_offset_of_m_hash1_7(),
	HMAC_t2621101144::get_offset_of_m_hash2_8(),
	HMAC_t2621101144::get_offset_of_m_inner_9(),
	HMAC_t2621101144::get_offset_of_m_outer_10(),
	HMAC_t2621101144::get_offset_of_m_hashing_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (HMACMD5_t2742219965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (HMACRIPEMD160_t3724196729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (HMACSHA1_t1952596188), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (HMACSHA256_t3249253224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (U3CU3Ec_t44063686), -1, sizeof(U3CU3Ec_t44063686_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1041[5] = 
{
	U3CU3Ec_t44063686_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t44063686_StaticFields::get_offset_of_U3CU3E9__1_0_1(),
	U3CU3Ec_t44063686_StaticFields::get_offset_of_U3CU3E9__1_1_2(),
	U3CU3Ec_t44063686_StaticFields::get_offset_of_U3CU3E9__1_2_3(),
	U3CU3Ec_t44063686_StaticFields::get_offset_of_U3CU3E9__1_3_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (HMACSHA384_t117937311), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1042[1] = 
{
	HMACSHA384_t117937311::get_offset_of_m_useLegacyBlockSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (U3CU3Ec_t3166561961), -1, sizeof(U3CU3Ec_t3166561961_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1043[5] = 
{
	U3CU3Ec_t3166561961_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3166561961_StaticFields::get_offset_of_U3CU3E9__2_0_1(),
	U3CU3Ec_t3166561961_StaticFields::get_offset_of_U3CU3E9__2_1_2(),
	U3CU3Ec_t3166561961_StaticFields::get_offset_of_U3CU3E9__2_2_3(),
	U3CU3Ec_t3166561961_StaticFields::get_offset_of_U3CU3E9__2_3_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (HMACSHA512_t923916539), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1044[1] = 
{
	HMACSHA512_t923916539::get_offset_of_m_useLegacyBlockSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (U3CU3Ec_t616840057), -1, sizeof(U3CU3Ec_t616840057_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1045[5] = 
{
	U3CU3Ec_t616840057_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t616840057_StaticFields::get_offset_of_U3CU3E9__2_0_1(),
	U3CU3Ec_t616840057_StaticFields::get_offset_of_U3CU3E9__2_1_2(),
	U3CU3Ec_t616840057_StaticFields::get_offset_of_U3CU3E9__2_2_3(),
	U3CU3Ec_t616840057_StaticFields::get_offset_of_U3CU3E9__2_3_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (KeyedHashAlgorithm_t112861511), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1047[1] = 
{
	KeyedHashAlgorithm_t112861511::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (MACTripleDES_t1631262397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1048[6] = 
{
	MACTripleDES_t1631262397::get_offset_of_m_encryptor_5(),
	MACTripleDES_t1631262397::get_offset_of__cs_6(),
	MACTripleDES_t1631262397::get_offset_of__ts_7(),
	0,
	MACTripleDES_t1631262397::get_offset_of_m_bytesPerBlock_9(),
	MACTripleDES_t1631262397::get_offset_of_des_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (TailStream_t1447577651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1049[4] = 
{
	TailStream_t1447577651::get_offset_of__Buffer_4(),
	TailStream_t1447577651::get_offset_of__BufferSize_5(),
	TailStream_t1447577651::get_offset_of__BufferIndex_6(),
	TailStream_t1447577651::get_offset_of__BufferFull_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (MaskGenerationMethod_t2116484826), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (MD5_t3177620429), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (PasswordDeriveBytes_t2836652680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1052[9] = 
{
	PasswordDeriveBytes_t2836652680::get_offset_of__extraCount_0(),
	PasswordDeriveBytes_t2836652680::get_offset_of__prefix_1(),
	PasswordDeriveBytes_t2836652680::get_offset_of__iterations_2(),
	PasswordDeriveBytes_t2836652680::get_offset_of__baseValue_3(),
	PasswordDeriveBytes_t2836652680::get_offset_of__extra_4(),
	PasswordDeriveBytes_t2836652680::get_offset_of__salt_5(),
	PasswordDeriveBytes_t2836652680::get_offset_of__hashName_6(),
	PasswordDeriveBytes_t2836652680::get_offset_of__password_7(),
	PasswordDeriveBytes_t2836652680::get_offset_of__hash_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (PKCS1MaskGenerationMethod_t1129351447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1053[1] = 
{
	PKCS1MaskGenerationMethod_t1129351447::get_offset_of_HashNameValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (RandomNumberGenerator_t386037858), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (RC2_t3167825714), -1, sizeof(RC2_t3167825714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1055[3] = 
{
	RC2_t3167825714::get_offset_of_EffectiveKeySizeValue_9(),
	RC2_t3167825714_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC2_t3167825714_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (RC2CryptoServiceProvider_t662919463), -1, sizeof(RC2CryptoServiceProvider_t662919463_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1056[2] = 
{
	RC2CryptoServiceProvider_t662919463::get_offset_of_m_use40bitSalt_12(),
	RC2CryptoServiceProvider_t662919463_StaticFields::get_offset_of_s_legalKeySizes_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (Rfc2898DeriveBytes_t546674159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1057[9] = 
{
	Rfc2898DeriveBytes_t546674159::get_offset_of_m_buffer_0(),
	Rfc2898DeriveBytes_t546674159::get_offset_of_m_salt_1(),
	Rfc2898DeriveBytes_t546674159::get_offset_of_m_hmacsha1_2(),
	Rfc2898DeriveBytes_t546674159::get_offset_of_m_password_3(),
	Rfc2898DeriveBytes_t546674159::get_offset_of_m_iterations_4(),
	Rfc2898DeriveBytes_t546674159::get_offset_of_m_block_5(),
	Rfc2898DeriveBytes_t546674159::get_offset_of_m_startIndex_6(),
	Rfc2898DeriveBytes_t546674159::get_offset_of_m_endIndex_7(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (Rijndael_t2986313634), -1, sizeof(Rijndael_t2986313634_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1058[2] = 
{
	Rijndael_t2986313634_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	Rijndael_t2986313634_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (RijndaelManaged_t3586970409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (RijndaelManagedTransformMode_t144661339)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1060[3] = 
{
	RijndaelManagedTransformMode_t144661339::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (RijndaelManagedTransform_t4102601014), -1, sizeof(RijndaelManagedTransform_t4102601014_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1061[24] = 
{
	RijndaelManagedTransform_t4102601014::get_offset_of_m_cipherMode_0(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_paddingValue_1(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_transformMode_2(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_blockSizeBits_3(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_blockSizeBytes_4(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_inputBlockSize_5(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_outputBlockSize_6(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_encryptKeyExpansion_7(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_decryptKeyExpansion_8(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_Nr_9(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_Nb_10(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_Nk_11(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_encryptindex_12(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_decryptindex_13(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_IV_14(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_lastBlockBuffer_15(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_depadBuffer_16(),
	RijndaelManagedTransform_t4102601014::get_offset_of_m_shiftRegister_17(),
	RijndaelManagedTransform_t4102601014_StaticFields::get_offset_of_s_Sbox_18(),
	RijndaelManagedTransform_t4102601014_StaticFields::get_offset_of_s_Rcon_19(),
	RijndaelManagedTransform_t4102601014_StaticFields::get_offset_of_s_T_20(),
	RijndaelManagedTransform_t4102601014_StaticFields::get_offset_of_s_TF_21(),
	RijndaelManagedTransform_t4102601014_StaticFields::get_offset_of_s_iT_22(),
	RijndaelManagedTransform_t4102601014_StaticFields::get_offset_of_s_iTF_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (RIPEMD160_t268675434), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (RIPEMD160Managed_t2491561941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1063[4] = 
{
	RIPEMD160Managed_t2491561941::get_offset_of__buffer_4(),
	RIPEMD160Managed_t2491561941::get_offset_of__count_5(),
	RIPEMD160Managed_t2491561941::get_offset_of__stateMD160_6(),
	RIPEMD160Managed_t2491561941::get_offset_of__blockDWords_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (RSAParameters_t1728406613)+ sizeof (RuntimeObject), sizeof(RSAParameters_t1728406613_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1064[8] = 
{
	RSAParameters_t1728406613::get_offset_of_Exponent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_Modulus_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_P_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_Q_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_DP_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_DQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_InverseQ_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t1728406613::get_offset_of_D_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (RSA_t2385438082), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (RSACryptoServiceProvider_t2683512874), -1, sizeof(RSACryptoServiceProvider_t2683512874_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1066[10] = 
{
	RSACryptoServiceProvider_t2683512874_StaticFields::get_offset_of_s_UseMachineKeyStore_2(),
	0,
	0,
	0,
	RSACryptoServiceProvider_t2683512874::get_offset_of_store_6(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_persistKey_7(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_persisted_8(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_privateKeyExportable_9(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_m_disposed_10(),
	RSACryptoServiceProvider_t2683512874::get_offset_of_rsa_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (RSAOAEPKeyExchangeDeformatter_t3344463048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1067[2] = 
{
	RSAOAEPKeyExchangeDeformatter_t3344463048::get_offset_of__rsaKey_0(),
	RSAOAEPKeyExchangeDeformatter_t3344463048::get_offset_of__rsaOverridesDecrypt_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (RSAOAEPKeyExchangeFormatter_t2041696538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1068[4] = 
{
	RSAOAEPKeyExchangeFormatter_t2041696538::get_offset_of_ParameterValue_0(),
	RSAOAEPKeyExchangeFormatter_t2041696538::get_offset_of__rsaKey_1(),
	RSAOAEPKeyExchangeFormatter_t2041696538::get_offset_of__rsaOverridesEncrypt_2(),
	RSAOAEPKeyExchangeFormatter_t2041696538::get_offset_of_RngValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (RSAPKCS1KeyExchangeDeformatter_t2578812791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1069[3] = 
{
	RSAPKCS1KeyExchangeDeformatter_t2578812791::get_offset_of__rsaKey_0(),
	RSAPKCS1KeyExchangeDeformatter_t2578812791::get_offset_of__rsaOverridesDecrypt_1(),
	RSAPKCS1KeyExchangeDeformatter_t2578812791::get_offset_of_RngValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (RSAPKCS1KeyExchangeFormatter_t2761096101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1070[3] = 
{
	RSAPKCS1KeyExchangeFormatter_t2761096101::get_offset_of_RngValue_0(),
	RSAPKCS1KeyExchangeFormatter_t2761096101::get_offset_of__rsaKey_1(),
	RSAPKCS1KeyExchangeFormatter_t2761096101::get_offset_of__rsaOverridesEncrypt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (SHA1_t1803193667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (SHA1Managed_t1754513891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1072[4] = 
{
	SHA1Managed_t1754513891::get_offset_of__buffer_4(),
	SHA1Managed_t1754513891::get_offset_of__count_5(),
	SHA1Managed_t1754513891::get_offset_of__stateSHA1_6(),
	SHA1Managed_t1754513891::get_offset_of__expandedBuffer_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (SHA256_t3672283617), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (SHA256Managed_t955042874), -1, sizeof(SHA256Managed_t955042874_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1074[5] = 
{
	SHA256Managed_t955042874::get_offset_of__buffer_4(),
	SHA256Managed_t955042874::get_offset_of__count_5(),
	SHA256Managed_t955042874::get_offset_of__stateSHA256_6(),
	SHA256Managed_t955042874::get_offset_of__W_7(),
	SHA256Managed_t955042874_StaticFields::get_offset_of__K_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (SHA384_t540967702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (SHA384Managed_t74158575), -1, sizeof(SHA384Managed_t74158575_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1076[5] = 
{
	SHA384Managed_t74158575::get_offset_of__buffer_4(),
	SHA384Managed_t74158575::get_offset_of__count_5(),
	SHA384Managed_t74158575::get_offset_of__stateSHA384_6(),
	SHA384Managed_t74158575::get_offset_of__W_7(),
	SHA384Managed_t74158575_StaticFields::get_offset_of__K_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (SHA512_t1346946930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (SHA512Managed_t1787336339), -1, sizeof(SHA512Managed_t1787336339_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1078[5] = 
{
	SHA512Managed_t1787336339::get_offset_of__buffer_4(),
	SHA512Managed_t1787336339::get_offset_of__count_5(),
	SHA512Managed_t1787336339::get_offset_of__stateSHA512_6(),
	SHA512Managed_t1787336339::get_offset_of__W_7(),
	SHA512Managed_t1787336339_StaticFields::get_offset_of__K_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (SignatureDescription_t1971889425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1079[4] = 
{
	SignatureDescription_t1971889425::get_offset_of__strKey_0(),
	SignatureDescription_t1971889425::get_offset_of__strDigest_1(),
	SignatureDescription_t1971889425::get_offset_of__strFormatter_2(),
	SignatureDescription_t1971889425::get_offset_of__strDeformatter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (RSAPKCS1SignatureDescription_t653172199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1080[1] = 
{
	RSAPKCS1SignatureDescription_t653172199::get_offset_of__hashAlgorithm_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (RSAPKCS1SHA1SignatureDescription_t2887980541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (RSAPKCS1SHA256SignatureDescription_t4122087809), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (RSAPKCS1SHA384SignatureDescription_t519503511), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (RSAPKCS1SHA512SignatureDescription_t4135346397), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (DSASignatureDescription_t1163053634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (SymmetricAlgorithm_t4254223087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1086[9] = 
{
	SymmetricAlgorithm_t4254223087::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t4254223087::get_offset_of_FeedbackSizeValue_1(),
	SymmetricAlgorithm_t4254223087::get_offset_of_IVValue_2(),
	SymmetricAlgorithm_t4254223087::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t4254223087::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t4254223087::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t4254223087::get_offset_of_KeySizeValue_6(),
	SymmetricAlgorithm_t4254223087::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t4254223087::get_offset_of_PaddingValue_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (TripleDES_t92303514), -1, sizeof(TripleDES_t92303514_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1087[2] = 
{
	TripleDES_t92303514_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	TripleDES_t92303514_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (TripleDESCryptoServiceProvider_t3595206342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (CspAlgorithmType_t2452657849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1089[3] = 
{
	CspAlgorithmType_t2452657849::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (Constants_t3997854879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1090[69] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (Utils_t1416439708), -1, sizeof(Utils_t1416439708_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1091[2] = 
{
	0,
	Utils_t1416439708_StaticFields::get_offset_of__rng_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (CryptoAPITransform_t1695680317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1092[1] = 
{
	CryptoAPITransform_t1695680317::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (CryptoConfig_t4201145714), -1, sizeof(CryptoConfig_t4201145714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1093[182] = 
{
	CryptoConfig_t4201145714_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_unresolved_algorithms_2(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_oids_3(),
	0,
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultSHA1_5(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultMD5_6(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultSHA256_7(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultSHA384_8(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultSHA512_9(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultRSA_10(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultDSA_11(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultDES_12(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_default3DES_13(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultRC2_14(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultAES_15(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultRNG_16(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultHMAC_17(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultMAC3DES_18(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultDSASigDesc_19(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultRSAPKCS1SHA1SigDesc_20(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultRSAPKCS1SHA256SigDesc_21(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultRSAPKCS1SHA384SigDesc_22(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultRSAPKCS1SHA512SigDesc_23(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultRIPEMD160_24(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultHMACMD5_25(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultHMACRIPEMD160_26(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultHMACSHA256_27(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultHMACSHA384_28(),
	CryptoConfig_t4201145714_StaticFields::get_offset_of_defaultHMACSHA512_29(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (CryptoHandler_t2779508855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1094[5] = 
{
	CryptoHandler_t2779508855::get_offset_of_algorithms_0(),
	CryptoHandler_t2779508855::get_offset_of_oid_1(),
	CryptoHandler_t2779508855::get_offset_of_names_2(),
	CryptoHandler_t2779508855::get_offset_of_classnames_3(),
	CryptoHandler_t2779508855::get_offset_of_level_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (CspKeyContainerInfo_t3833902945), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1095[2] = 
{
	CspKeyContainerInfo_t3833902945::get_offset_of__params_0(),
	CspKeyContainerInfo_t3833902945::get_offset_of__random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (DESTransform_t4088905499), -1, sizeof(DESTransform_t4088905499_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1096[13] = 
{
	DESTransform_t4088905499_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t4088905499_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t4088905499_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t4088905499_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t4088905499::get_offset_of_keySchedule_16(),
	DESTransform_t4088905499::get_offset_of_byteBuff_17(),
	DESTransform_t4088905499::get_offset_of_dwordBuff_18(),
	DESTransform_t4088905499_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t4088905499_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t4088905499_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t4088905499_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t4088905499_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t4088905499_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (DSACryptoServiceProvider_t3992668923), -1, sizeof(DSACryptoServiceProvider_t3992668923_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1097[8] = 
{
	0,
	DSACryptoServiceProvider_t3992668923::get_offset_of_store_3(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_persistKey_4(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_persisted_5(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_privateKeyExportable_6(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_m_disposed_7(),
	DSACryptoServiceProvider_t3992668923::get_offset_of_dsa_8(),
	DSACryptoServiceProvider_t3992668923_StaticFields::get_offset_of_useMachineKeyStore_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (KeyNumber_t1560809490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1099[3] = 
{
	KeyNumber_t1560809490::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

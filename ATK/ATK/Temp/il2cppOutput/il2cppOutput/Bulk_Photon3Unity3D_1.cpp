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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2581629031;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t2066969247;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_t1394662050;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1230688399;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t2000596048;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t423627973;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2956237011;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t2462891903;
// ExitGames.Client.Photon.PeerBase/MyAction[]
struct MyActionU5BU5D_t207368102;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t1608153861;
// ExitGames.Client.Photon.Protocol16
struct Protocol16_t1856210005;
// ExitGames.Client.Photon.Protocol18
struct Protocol18_t1857127509;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t1264674278;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t2169445464;
// ExitGames.Client.Photon.SimulationItem
struct SimulationItem_t3044638479;
// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_t182200829;
// ExitGames.Client.Photon.SocketUdp
struct SocketUdp_t1337106072;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t3827669789;
// ExitGames.Client.Photon.StreamBuffer[]
struct StreamBufferU5BU5D_t2661682128;
// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_t356392828;
// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t2492842391;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t651311252;
// ExitGames.Client.Photon.TPeer
struct TPeer_t1497954812;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1302902347;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t4013908777;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t956758543;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t915317458;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t1662250179;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.ArithmeticException
struct ArithmeticException_t4283546778;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t293096029;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t1594928955;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t3121297802;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1405253484;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t3241628394;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t1884284488;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct List_1_t1004777235;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t3349700990;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_t3772910811;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_t4063950034;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t2309151397;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t3673929283;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3962907151;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.IOAsyncCallback
struct IOAsyncCallback_t705871752;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t2567786569;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1707895399;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Net.IPAddress
struct IPAddress_t241777590;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t610293888;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Net.Sockets.SocketException
struct SocketException_t3852068672;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Random
struct Random_t108471755;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2986313634;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t3586970409;
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t955042874;
// System.Security.IPermission
struct IPermission_t4015543450;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t2427220165;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.InternalThread
struct InternalThread_t95296544;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Threading.ThreadStart
struct ThreadStart_t1006689297;
// System.Threading.Thread[]
struct ThreadU5BU5D_t820565480;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* AddressFamily_t2612549059_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ArithmeticException_t4283546778_il2cpp_TypeInfo_var;
extern RuntimeClass* BigInteger_t956758543_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* ConnectionStateValue_t4213441778_il2cpp_TypeInfo_var;
extern RuntimeClass* DeliveryMode_t90936453_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1405253484_il2cpp_TypeInfo_var;
extern RuntimeClass* DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_t959872083_il2cpp_TypeInfo_var;
extern RuntimeClass* ICryptoProvider_t1662250179_il2cpp_TypeInfo_var;
extern RuntimeClass* ICryptoTransform_t2733259762_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var;
extern RuntimeClass* IPhotonSocket_t2066969247_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntegerMillisecondsDelegate_t651311252_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1004777235_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3349700990_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3772910811_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_t1671470975_il2cpp_TypeInfo_var;
extern RuntimeClass* MyAction_t2462891903_il2cpp_TypeInfo_var;
extern RuntimeClass* OakleyGroups_t1704371988_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* PeerBase_t2956237011_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotonCodes_t543425440_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotonSocketState_t2742032721_il2cpp_TypeInfo_var;
extern RuntimeClass* Protocol16_t1856210005_il2cpp_TypeInfo_var;
extern RuntimeClass* Protocol18_t1857127509_il2cpp_TypeInfo_var;
extern RuntimeClass* Protocol_t1622296502_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t3962907151_il2cpp_TypeInfo_var;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern RuntimeClass* RijndaelManaged_t3586970409_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SHA256Managed_t955042874_il2cpp_TypeInfo_var;
extern RuntimeClass* SecurityException_t975544473_il2cpp_TypeInfo_var;
extern RuntimeClass* SendOptions_t967321410_il2cpp_TypeInfo_var;
extern RuntimeClass* SocketError_t3760144386_il2cpp_TypeInfo_var;
extern RuntimeClass* SocketException_t3852068672_il2cpp_TypeInfo_var;
extern RuntimeClass* SocketTcp_t182200829_il2cpp_TypeInfo_var;
extern RuntimeClass* Socket_t1119025450_il2cpp_TypeInfo_var;
extern RuntimeClass* Stopwatch_t305734070_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamBuffer_t3827669789_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SupportClass_t2974952451_il2cpp_TypeInfo_var;
extern RuntimeClass* TPeer_t1497954812_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeRandom_t1204416265_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadStart_t1006689297_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass6_0_t2492842391_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t356392828_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Version_t2916202802_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255371____4989E5469B40416DC5AFB739C747E32B40CC5C77_0_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255371____49ECABA9727A1AF0636082C467485A1A9A04B669_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255371____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255371____6DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255371____AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255371____C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5_FieldInfo_var;
extern String_t* _stringLiteral103614924;
extern String_t* _stringLiteral105646513;
extern String_t* _stringLiteral1058880636;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral1304914181;
extern String_t* _stringLiteral1407959169;
extern String_t* _stringLiteral1429687774;
extern String_t* _stringLiteral144399336;
extern String_t* _stringLiteral1573185300;
extern String_t* _stringLiteral1602122195;
extern String_t* _stringLiteral1605499696;
extern String_t* _stringLiteral1605998574;
extern String_t* _stringLiteral1634808006;
extern String_t* _stringLiteral1764579347;
extern String_t* _stringLiteral1790208040;
extern String_t* _stringLiteral1806566695;
extern String_t* _stringLiteral1828021971;
extern String_t* _stringLiteral1926357507;
extern String_t* _stringLiteral1929844350;
extern String_t* _stringLiteral1973328828;
extern String_t* _stringLiteral1982708895;
extern String_t* _stringLiteral2002595865;
extern String_t* _stringLiteral2071980384;
extern String_t* _stringLiteral2094611839;
extern String_t* _stringLiteral2131714090;
extern String_t* _stringLiteral215727883;
extern String_t* _stringLiteral2178715226;
extern String_t* _stringLiteral2439391445;
extern String_t* _stringLiteral2489687337;
extern String_t* _stringLiteral2587075820;
extern String_t* _stringLiteral265795232;
extern String_t* _stringLiteral2890037872;
extern String_t* _stringLiteral3053100963;
extern String_t* _stringLiteral3105760256;
extern String_t* _stringLiteral3198613099;
extern String_t* _stringLiteral3198630429;
extern String_t* _stringLiteral3287687826;
extern String_t* _stringLiteral3429825515;
extern String_t* _stringLiteral3444471541;
extern String_t* _stringLiteral3450517378;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3450648455;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3452614611;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral3686846028;
extern String_t* _stringLiteral3782069545;
extern String_t* _stringLiteral385363368;
extern String_t* _stringLiteral3854244401;
extern String_t* _stringLiteral3895168893;
extern String_t* _stringLiteral3910125420;
extern String_t* _stringLiteral3931093795;
extern String_t* _stringLiteral3931995141;
extern String_t* _stringLiteral3975347840;
extern String_t* _stringLiteral4030192765;
extern String_t* _stringLiteral4110760290;
extern String_t* _stringLiteral487777839;
extern String_t* _stringLiteral529615309;
extern String_t* _stringLiteral591816982;
extern String_t* _stringLiteral64855482;
extern String_t* _stringLiteral675343421;
extern String_t* _stringLiteral698643059;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral762882209;
extern String_t* _stringLiteral788081930;
extern String_t* _stringLiteral800449946;
extern String_t* _stringLiteral803324135;
extern String_t* _stringLiteral813302798;
extern String_t* _stringLiteral831544133;
extern String_t* _stringLiteral897557957;
extern String_t* _stringLiteral897590821;
extern String_t* _stringLiteral932042022;
extern const RuntimeMethod* BigInteger_ModPow_m1818331774_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger_ToString_m2781201991_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger__ctor_m1240160733_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger__ctor_m3091364386_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger__ctor_m3579054046_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger_genRandomBits_m2936729685_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger_op_Addition_m949304235_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger_op_Multiply_m664707877_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger_op_Subtraction_m1996860654_RuntimeMethod_var;
extern const RuntimeMethod* BigInteger_op_UnaryNegation_m3272019706_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1883976453_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m705142683_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m390015880_RuntimeMethod_var;
extern const RuntimeMethod* Func_1_Invoke_m370346740_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1133289729_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3964035183_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m919845895_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3161676039_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1532814905_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m184824557_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m496368285_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2693864399_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3880499525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1470117044_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Clear_m3276543074_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m3140887159_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m3292979456_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m2809316599_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m2913697457_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m3416801760_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m3906391565_RuntimeMethod_var;
extern const RuntimeMethod* SocketTcp_DnsAndConnect_m2616926937_RuntimeMethod_var;
extern const RuntimeMethod* SocketTcp_ReceiveLoop_m3990976773_RuntimeMethod_var;
extern const RuntimeMethod* SocketUdp_DnsAndConnect_m2857623423_RuntimeMethod_var;
extern const RuntimeMethod* SocketUdp_ReceiveLoop_m1175583893_RuntimeMethod_var;
extern const RuntimeMethod* StreamBuffer_Seek_m2671349007_RuntimeMethod_var;
extern const RuntimeMethod* TPeer_EnqueueMessageAsPayload_m1514707185_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__20_0_m2150557480_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m1096870055_RuntimeMethod_var;
extern const RuntimeType* ByteU5BU5D_t4116647657_0_0_0_var;
extern const RuntimeType* Hashtable_t1048209202_0_0_0_var;
extern const RuntimeType* IDictionary_t1363984059_0_0_0_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeType* StringU5BU5D_t1281789340_0_0_0_var;
extern const uint32_t BigInteger_BarrettReduction_m2302199077_MetadataUsageId;
extern const uint32_t BigInteger_Equals_m3600662586_MetadataUsageId;
extern const uint32_t BigInteger_GenerateRandom_m3242160242_MetadataUsageId;
extern const uint32_t BigInteger_GetBytes_m2793402501_MetadataUsageId;
extern const uint32_t BigInteger_ModPow_m1818331774_MetadataUsageId;
extern const uint32_t BigInteger_ToString_m2781201991_MetadataUsageId;
extern const uint32_t BigInteger__cctor_m3142840545_MetadataUsageId;
extern const uint32_t BigInteger__ctor_m1240160733_MetadataUsageId;
extern const uint32_t BigInteger__ctor_m2516099295_MetadataUsageId;
extern const uint32_t BigInteger__ctor_m3091364386_MetadataUsageId;
extern const uint32_t BigInteger__ctor_m3579054046_MetadataUsageId;
extern const uint32_t BigInteger__ctor_m497354907_MetadataUsageId;
extern const uint32_t BigInteger_genRandomBits_m2936729685_MetadataUsageId;
extern const uint32_t BigInteger_multiByteDivide_m635723330_MetadataUsageId;
extern const uint32_t BigInteger_op_Addition_m949304235_MetadataUsageId;
extern const uint32_t BigInteger_op_Division_m3347195961_MetadataUsageId;
extern const uint32_t BigInteger_op_GreaterThanOrEqual_m1973220735_MetadataUsageId;
extern const uint32_t BigInteger_op_Implicit_m1456924192_MetadataUsageId;
extern const uint32_t BigInteger_op_Implicit_m1457317411_MetadataUsageId;
extern const uint32_t BigInteger_op_LeftShift_m2731198774_MetadataUsageId;
extern const uint32_t BigInteger_op_Modulus_m2469490318_MetadataUsageId;
extern const uint32_t BigInteger_op_Multiply_m664707877_MetadataUsageId;
extern const uint32_t BigInteger_op_Subtraction_m1996860654_MetadataUsageId;
extern const uint32_t BigInteger_op_UnaryNegation_m3272019706_MetadataUsageId;
extern const uint32_t BigInteger_singleByteDivide_m972382485_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_Decrypt_m2209477771_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_Dispose_m1904765254_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_Encrypt_m3205762831_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider__cctor_m2518077788_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider__ctor_m3020782632_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider__ctor_m450787995_MetadataUsageId;
extern const uint32_t OakleyGroups__cctor_m3563987568_MetadataUsageId;
extern const uint32_t SendOptions__cctor_m49335226_MetadataUsageId;
extern const uint32_t SerializationProtocolFactory_Create_m2607855562_MetadataUsageId;
extern const uint32_t SimulationItem__ctor_m3584472599_MetadataUsageId;
extern const uint32_t SocketTcp_Connect_m606928437_MetadataUsageId;
extern const uint32_t SocketTcp_Disconnect_m3224550065_MetadataUsageId;
extern const uint32_t SocketTcp_Dispose_m1366002559_MetadataUsageId;
extern const uint32_t SocketTcp_DnsAndConnect_m2616926937_MetadataUsageId;
extern const uint32_t SocketTcp_ReceiveLoop_m3990976773_MetadataUsageId;
extern const uint32_t SocketTcp_Send_m3366193615_MetadataUsageId;
extern const uint32_t SocketTcp__ctor_m3106271083_MetadataUsageId;
extern const uint32_t SocketUdp_Connect_m3671884378_MetadataUsageId;
extern const uint32_t SocketUdp_Disconnect_m233880284_MetadataUsageId;
extern const uint32_t SocketUdp_Dispose_m3485359311_MetadataUsageId;
extern const uint32_t SocketUdp_DnsAndConnect_m2857623423_MetadataUsageId;
extern const uint32_t SocketUdp_ReceiveLoop_m1175583893_MetadataUsageId;
extern const uint32_t SocketUdp_Send_m2948963369_MetadataUsageId;
extern const uint32_t SocketUdp__ctor_m3882629729_MetadataUsageId;
extern const uint32_t StreamBuffer_CheckSize_m1370664956_MetadataUsageId;
extern const uint32_t StreamBuffer_Seek_m2671349007_MetadataUsageId;
extern const uint32_t StreamBuffer_ToArrayFromPos_m549317868_MetadataUsageId;
extern const uint32_t StreamBuffer_ToArray_m3109285386_MetadataUsageId;
extern const uint32_t StreamBuffer__ctor_m1585703076_MetadataUsageId;
extern const uint32_t SupportClass_ByteArrayToString_m472784792_MetadataUsageId;
extern const uint32_t SupportClass_CalculateCrc_m1797984796_MetadataUsageId;
extern const uint32_t SupportClass_CallInBackground_m4010782055_MetadataUsageId;
extern const uint32_t SupportClass_DictionaryToString_m1908829707_MetadataUsageId;
extern const uint32_t SupportClass_DictionaryToString_m937902345_MetadataUsageId;
extern const uint32_t SupportClass_GetMethods_m639269240_MetadataUsageId;
extern const uint32_t SupportClass_GetTickCount_m1042627442_MetadataUsageId;
extern const uint32_t SupportClass_InitializeTable_m1028104517_MetadataUsageId;
extern const uint32_t SupportClass_StartBackgroundCalls_m2029470730_MetadataUsageId;
extern const uint32_t SupportClass_WriteStackTrace_m3074858457_MetadataUsageId;
extern const uint32_t SupportClass__cctor_m510827305_MetadataUsageId;
extern const uint32_t TPeer_Connect_m3943904030_MetadataUsageId;
extern const uint32_t TPeer_Disconnect_m2231374297_MetadataUsageId;
extern const uint32_t TPeer_DispatchIncomingCommands_m1581931628_MetadataUsageId;
extern const uint32_t TPeer_EnqueueInit_m592328192_MetadataUsageId;
extern const uint32_t TPeer_EnqueueMessageAsPayload_m1514707185_MetadataUsageId;
extern const uint32_t TPeer_EnqueueOperation_m152825139_MetadataUsageId;
extern const uint32_t TPeer_FetchServerTimestamp_m664560504_MetadataUsageId;
extern const uint32_t TPeer_InitPeerBase_m2646313747_MetadataUsageId;
extern const uint32_t TPeer_OnConnect_m3581061708_MetadataUsageId;
extern const uint32_t TPeer_ReadPingResult_m1267646657_MetadataUsageId;
extern const uint32_t TPeer_ReadPingResult_m1294536143_MetadataUsageId;
extern const uint32_t TPeer_ReceiveIncomingCommands_m3142297905_MetadataUsageId;
extern const uint32_t TPeer_SendAcksOnly_m53483304_MetadataUsageId;
extern const uint32_t TPeer_SendData_m1400878091_MetadataUsageId;
extern const uint32_t TPeer_SendOutgoingCommands_m1793181074_MetadataUsageId;
extern const uint32_t TPeer_SendPing_m232307456_MetadataUsageId;
extern const uint32_t TPeer_SerializeOperationToMessage_m1961794242_MetadataUsageId;
extern const uint32_t TPeer_StopConnection_m2137277672_MetadataUsageId;
extern const uint32_t TPeer__cctor_m1779985491_MetadataUsageId;
extern const uint32_t TPeer__ctor_m3014112402_MetadataUsageId;
extern const uint32_t ThreadSafeRandom_Next_m3420421965_MetadataUsageId;
extern const uint32_t ThreadSafeRandom__cctor_m3373245192_MetadataUsageId;
extern const uint32_t TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m524433314_MetadataUsageId;
extern const uint32_t TrafficStatsGameLevel_SendOutgoingCommandsCalled_m3439818030_MetadataUsageId;
extern const uint32_t TrafficStatsGameLevel_ToStringVitalStats_m2699597432_MetadataUsageId;
extern const uint32_t TrafficStatsGameLevel_ToString_m1358013804_MetadataUsageId;
extern const uint32_t TrafficStats_ToString_m4056329990_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m1096870055_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m2224029212_MetadataUsageId;
extern const uint32_t Version__cctor_m949376060_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct DelegateU5BU5D_t1703627840;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct MethodInfoU5BU5D_t2572182361;
struct StringU5BU5D_t1281789340;
struct UInt32U5BU5D_t2770800703;


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
#ifndef IPROTOCOL_T1394662050_H
#define IPROTOCOL_T1394662050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.IProtocol
struct  IProtocol_t1394662050  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPROTOCOL_T1394662050_H
#ifndef NETWORKSIMULATIONSET_T2000596048_H
#define NETWORKSIMULATIONSET_T2000596048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.NetworkSimulationSet
struct  NetworkSimulationSet_t2000596048  : public RuntimeObject
{
public:
	// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::isSimulationEnabled
	bool ___isSimulationEnabled_0;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLag
	int32_t ___outgoingLag_1;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingJitter
	int32_t ___outgoingJitter_2;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLossPercentage
	int32_t ___outgoingLossPercentage_3;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLag
	int32_t ___incomingLag_4;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingJitter
	int32_t ___incomingJitter_5;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLossPercentage
	int32_t ___incomingLossPercentage_6;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.NetworkSimulationSet::peerBase
	PeerBase_t2956237011 * ___peerBase_7;
	// System.Threading.Thread ExitGames.Client.Photon.NetworkSimulationSet::netSimThread
	Thread_t2300836069 * ___netSimThread_8;
	// System.Threading.ManualResetEvent ExitGames.Client.Photon.NetworkSimulationSet::NetSimManualResetEvent
	ManualResetEvent_t451242010 * ___NetSimManualResetEvent_9;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesOut>k__BackingField
	int32_t ___U3CLostPackagesOutU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesIn>k__BackingField
	int32_t ___U3CLostPackagesInU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_isSimulationEnabled_0() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___isSimulationEnabled_0)); }
	inline bool get_isSimulationEnabled_0() const { return ___isSimulationEnabled_0; }
	inline bool* get_address_of_isSimulationEnabled_0() { return &___isSimulationEnabled_0; }
	inline void set_isSimulationEnabled_0(bool value)
	{
		___isSimulationEnabled_0 = value;
	}

	inline static int32_t get_offset_of_outgoingLag_1() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___outgoingLag_1)); }
	inline int32_t get_outgoingLag_1() const { return ___outgoingLag_1; }
	inline int32_t* get_address_of_outgoingLag_1() { return &___outgoingLag_1; }
	inline void set_outgoingLag_1(int32_t value)
	{
		___outgoingLag_1 = value;
	}

	inline static int32_t get_offset_of_outgoingJitter_2() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___outgoingJitter_2)); }
	inline int32_t get_outgoingJitter_2() const { return ___outgoingJitter_2; }
	inline int32_t* get_address_of_outgoingJitter_2() { return &___outgoingJitter_2; }
	inline void set_outgoingJitter_2(int32_t value)
	{
		___outgoingJitter_2 = value;
	}

	inline static int32_t get_offset_of_outgoingLossPercentage_3() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___outgoingLossPercentage_3)); }
	inline int32_t get_outgoingLossPercentage_3() const { return ___outgoingLossPercentage_3; }
	inline int32_t* get_address_of_outgoingLossPercentage_3() { return &___outgoingLossPercentage_3; }
	inline void set_outgoingLossPercentage_3(int32_t value)
	{
		___outgoingLossPercentage_3 = value;
	}

	inline static int32_t get_offset_of_incomingLag_4() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___incomingLag_4)); }
	inline int32_t get_incomingLag_4() const { return ___incomingLag_4; }
	inline int32_t* get_address_of_incomingLag_4() { return &___incomingLag_4; }
	inline void set_incomingLag_4(int32_t value)
	{
		___incomingLag_4 = value;
	}

	inline static int32_t get_offset_of_incomingJitter_5() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___incomingJitter_5)); }
	inline int32_t get_incomingJitter_5() const { return ___incomingJitter_5; }
	inline int32_t* get_address_of_incomingJitter_5() { return &___incomingJitter_5; }
	inline void set_incomingJitter_5(int32_t value)
	{
		___incomingJitter_5 = value;
	}

	inline static int32_t get_offset_of_incomingLossPercentage_6() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___incomingLossPercentage_6)); }
	inline int32_t get_incomingLossPercentage_6() const { return ___incomingLossPercentage_6; }
	inline int32_t* get_address_of_incomingLossPercentage_6() { return &___incomingLossPercentage_6; }
	inline void set_incomingLossPercentage_6(int32_t value)
	{
		___incomingLossPercentage_6 = value;
	}

	inline static int32_t get_offset_of_peerBase_7() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___peerBase_7)); }
	inline PeerBase_t2956237011 * get_peerBase_7() const { return ___peerBase_7; }
	inline PeerBase_t2956237011 ** get_address_of_peerBase_7() { return &___peerBase_7; }
	inline void set_peerBase_7(PeerBase_t2956237011 * value)
	{
		___peerBase_7 = value;
		Il2CppCodeGenWriteBarrier((&___peerBase_7), value);
	}

	inline static int32_t get_offset_of_netSimThread_8() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___netSimThread_8)); }
	inline Thread_t2300836069 * get_netSimThread_8() const { return ___netSimThread_8; }
	inline Thread_t2300836069 ** get_address_of_netSimThread_8() { return &___netSimThread_8; }
	inline void set_netSimThread_8(Thread_t2300836069 * value)
	{
		___netSimThread_8 = value;
		Il2CppCodeGenWriteBarrier((&___netSimThread_8), value);
	}

	inline static int32_t get_offset_of_NetSimManualResetEvent_9() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___NetSimManualResetEvent_9)); }
	inline ManualResetEvent_t451242010 * get_NetSimManualResetEvent_9() const { return ___NetSimManualResetEvent_9; }
	inline ManualResetEvent_t451242010 ** get_address_of_NetSimManualResetEvent_9() { return &___NetSimManualResetEvent_9; }
	inline void set_NetSimManualResetEvent_9(ManualResetEvent_t451242010 * value)
	{
		___NetSimManualResetEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___NetSimManualResetEvent_9), value);
	}

	inline static int32_t get_offset_of_U3CLostPackagesOutU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___U3CLostPackagesOutU3Ek__BackingField_10)); }
	inline int32_t get_U3CLostPackagesOutU3Ek__BackingField_10() const { return ___U3CLostPackagesOutU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLostPackagesOutU3Ek__BackingField_10() { return &___U3CLostPackagesOutU3Ek__BackingField_10; }
	inline void set_U3CLostPackagesOutU3Ek__BackingField_10(int32_t value)
	{
		___U3CLostPackagesOutU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLostPackagesInU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t2000596048, ___U3CLostPackagesInU3Ek__BackingField_11)); }
	inline int32_t get_U3CLostPackagesInU3Ek__BackingField_11() const { return ___U3CLostPackagesInU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLostPackagesInU3Ek__BackingField_11() { return &___U3CLostPackagesInU3Ek__BackingField_11; }
	inline void set_U3CLostPackagesInU3Ek__BackingField_11(int32_t value)
	{
		___U3CLostPackagesInU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSIMULATIONSET_T2000596048_H
#ifndef OPERATIONRESPONSE_T423627973_H
#define OPERATIONRESPONSE_T423627973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_t423627973  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t1405253484 * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DebugMessage_2), value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___Parameters_3)); }
	inline Dictionary_2_t1405253484 * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_t1405253484 ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_t1405253484 * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___Parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONRESPONSE_T423627973_H
#ifndef PHOTONCODES_T543425440_H
#define PHOTONCODES_T543425440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonCodes
struct  PhotonCodes_t543425440  : public RuntimeObject
{
public:

public:
};

struct PhotonCodes_t543425440_StaticFields
{
public:
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ClientKey
	uint8_t ___ClientKey_0;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ModeKey
	uint8_t ___ModeKey_1;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ServerKey
	uint8_t ___ServerKey_2;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::InitEncryption
	uint8_t ___InitEncryption_3;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::Ping
	uint8_t ___Ping_4;

public:
	inline static int32_t get_offset_of_ClientKey_0() { return static_cast<int32_t>(offsetof(PhotonCodes_t543425440_StaticFields, ___ClientKey_0)); }
	inline uint8_t get_ClientKey_0() const { return ___ClientKey_0; }
	inline uint8_t* get_address_of_ClientKey_0() { return &___ClientKey_0; }
	inline void set_ClientKey_0(uint8_t value)
	{
		___ClientKey_0 = value;
	}

	inline static int32_t get_offset_of_ModeKey_1() { return static_cast<int32_t>(offsetof(PhotonCodes_t543425440_StaticFields, ___ModeKey_1)); }
	inline uint8_t get_ModeKey_1() const { return ___ModeKey_1; }
	inline uint8_t* get_address_of_ModeKey_1() { return &___ModeKey_1; }
	inline void set_ModeKey_1(uint8_t value)
	{
		___ModeKey_1 = value;
	}

	inline static int32_t get_offset_of_ServerKey_2() { return static_cast<int32_t>(offsetof(PhotonCodes_t543425440_StaticFields, ___ServerKey_2)); }
	inline uint8_t get_ServerKey_2() const { return ___ServerKey_2; }
	inline uint8_t* get_address_of_ServerKey_2() { return &___ServerKey_2; }
	inline void set_ServerKey_2(uint8_t value)
	{
		___ServerKey_2 = value;
	}

	inline static int32_t get_offset_of_InitEncryption_3() { return static_cast<int32_t>(offsetof(PhotonCodes_t543425440_StaticFields, ___InitEncryption_3)); }
	inline uint8_t get_InitEncryption_3() const { return ___InitEncryption_3; }
	inline uint8_t* get_address_of_InitEncryption_3() { return &___InitEncryption_3; }
	inline void set_InitEncryption_3(uint8_t value)
	{
		___InitEncryption_3 = value;
	}

	inline static int32_t get_offset_of_Ping_4() { return static_cast<int32_t>(offsetof(PhotonCodes_t543425440_StaticFields, ___Ping_4)); }
	inline uint8_t get_Ping_4() const { return ___Ping_4; }
	inline uint8_t* get_address_of_Ping_4() { return &___Ping_4; }
	inline void set_Ping_4(uint8_t value)
	{
		___Ping_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONCODES_T543425440_H
#ifndef SERIALIZATIONPROTOCOLFACTORY_T2539989091_H
#define SERIALIZATIONPROTOCOLFACTORY_T2539989091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SerializationProtocolFactory
struct  SerializationProtocolFactory_t2539989091  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONPROTOCOLFACTORY_T2539989091_H
#ifndef SIMULATIONITEM_T3044638479_H
#define SIMULATIONITEM_T3044638479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SimulationItem
struct  SimulationItem_t3044638479  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.SimulationItem::stopw
	Stopwatch_t305734070 * ___stopw_0;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::TimeToExecute
	int32_t ___TimeToExecute_1;
	// System.Byte[] ExitGames.Client.Photon.SimulationItem::DelayedData
	ByteU5BU5D_t4116647657* ___DelayedData_2;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::<Delay>k__BackingField
	int32_t ___U3CDelayU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_stopw_0() { return static_cast<int32_t>(offsetof(SimulationItem_t3044638479, ___stopw_0)); }
	inline Stopwatch_t305734070 * get_stopw_0() const { return ___stopw_0; }
	inline Stopwatch_t305734070 ** get_address_of_stopw_0() { return &___stopw_0; }
	inline void set_stopw_0(Stopwatch_t305734070 * value)
	{
		___stopw_0 = value;
		Il2CppCodeGenWriteBarrier((&___stopw_0), value);
	}

	inline static int32_t get_offset_of_TimeToExecute_1() { return static_cast<int32_t>(offsetof(SimulationItem_t3044638479, ___TimeToExecute_1)); }
	inline int32_t get_TimeToExecute_1() const { return ___TimeToExecute_1; }
	inline int32_t* get_address_of_TimeToExecute_1() { return &___TimeToExecute_1; }
	inline void set_TimeToExecute_1(int32_t value)
	{
		___TimeToExecute_1 = value;
	}

	inline static int32_t get_offset_of_DelayedData_2() { return static_cast<int32_t>(offsetof(SimulationItem_t3044638479, ___DelayedData_2)); }
	inline ByteU5BU5D_t4116647657* get_DelayedData_2() const { return ___DelayedData_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_DelayedData_2() { return &___DelayedData_2; }
	inline void set_DelayedData_2(ByteU5BU5D_t4116647657* value)
	{
		___DelayedData_2 = value;
		Il2CppCodeGenWriteBarrier((&___DelayedData_2), value);
	}

	inline static int32_t get_offset_of_U3CDelayU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SimulationItem_t3044638479, ___U3CDelayU3Ek__BackingField_3)); }
	inline int32_t get_U3CDelayU3Ek__BackingField_3() const { return ___U3CDelayU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDelayU3Ek__BackingField_3() { return &___U3CDelayU3Ek__BackingField_3; }
	inline void set_U3CDelayU3Ek__BackingField_3(int32_t value)
	{
		___U3CDelayU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATIONITEM_T3044638479_H
#ifndef STREAMBUFFER_T3827669789_H
#define STREAMBUFFER_T3827669789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.StreamBuffer
struct  StreamBuffer_t3827669789  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::pos
	int32_t ___pos_1;
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::len
	int32_t ___len_2;
	// System.Byte[] ExitGames.Client.Photon.StreamBuffer::buf
	ByteU5BU5D_t4116647657* ___buf_3;

public:
	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(StreamBuffer_t3827669789, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(StreamBuffer_t3827669789, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_buf_3() { return static_cast<int32_t>(offsetof(StreamBuffer_t3827669789, ___buf_3)); }
	inline ByteU5BU5D_t4116647657* get_buf_3() const { return ___buf_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_3() { return &___buf_3; }
	inline void set_buf_3(ByteU5BU5D_t4116647657* value)
	{
		___buf_3 = value;
		Il2CppCodeGenWriteBarrier((&___buf_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMBUFFER_T3827669789_H
#ifndef SUPPORTCLASS_T2974952451_H
#define SUPPORTCLASS_T2974952451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SupportClass
struct  SupportClass_t2974952451  : public RuntimeObject
{
public:

public:
};

struct SupportClass_t2974952451_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Threading.Thread> ExitGames.Client.Photon.SupportClass::threadList
	List_1_t3772910811 * ___threadList_0;
	// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate ExitGames.Client.Photon.SupportClass::IntegerMilliseconds
	IntegerMillisecondsDelegate_t651311252 * ___IntegerMilliseconds_1;
	// System.UInt32[] ExitGames.Client.Photon.SupportClass::crcLookupTable
	UInt32U5BU5D_t2770800703* ___crcLookupTable_2;

public:
	inline static int32_t get_offset_of_threadList_0() { return static_cast<int32_t>(offsetof(SupportClass_t2974952451_StaticFields, ___threadList_0)); }
	inline List_1_t3772910811 * get_threadList_0() const { return ___threadList_0; }
	inline List_1_t3772910811 ** get_address_of_threadList_0() { return &___threadList_0; }
	inline void set_threadList_0(List_1_t3772910811 * value)
	{
		___threadList_0 = value;
		Il2CppCodeGenWriteBarrier((&___threadList_0), value);
	}

	inline static int32_t get_offset_of_IntegerMilliseconds_1() { return static_cast<int32_t>(offsetof(SupportClass_t2974952451_StaticFields, ___IntegerMilliseconds_1)); }
	inline IntegerMillisecondsDelegate_t651311252 * get_IntegerMilliseconds_1() const { return ___IntegerMilliseconds_1; }
	inline IntegerMillisecondsDelegate_t651311252 ** get_address_of_IntegerMilliseconds_1() { return &___IntegerMilliseconds_1; }
	inline void set_IntegerMilliseconds_1(IntegerMillisecondsDelegate_t651311252 * value)
	{
		___IntegerMilliseconds_1 = value;
		Il2CppCodeGenWriteBarrier((&___IntegerMilliseconds_1), value);
	}

	inline static int32_t get_offset_of_crcLookupTable_2() { return static_cast<int32_t>(offsetof(SupportClass_t2974952451_StaticFields, ___crcLookupTable_2)); }
	inline UInt32U5BU5D_t2770800703* get_crcLookupTable_2() const { return ___crcLookupTable_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of_crcLookupTable_2() { return &___crcLookupTable_2; }
	inline void set_crcLookupTable_2(UInt32U5BU5D_t2770800703* value)
	{
		___crcLookupTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___crcLookupTable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTCLASS_T2974952451_H
#ifndef U3CU3EC_T356392828_H
#define U3CU3EC_T356392828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SupportClass/<>c
struct  U3CU3Ec_t356392828  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t356392828_StaticFields
{
public:
	// ExitGames.Client.Photon.SupportClass/<>c ExitGames.Client.Photon.SupportClass/<>c::<>9
	U3CU3Ec_t356392828 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t356392828_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t356392828 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t356392828 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t356392828 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T356392828_H
#ifndef U3CU3EC__DISPLAYCLASS6_0_T2492842391_H
#define U3CU3EC__DISPLAYCLASS6_0_T2492842391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t2492842391  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::millisecondsInterval
	int32_t ___millisecondsInterval_0;
	// System.Func`1<System.Boolean> ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::myThread
	Func_1_t3822001908 * ___myThread_1;

public:
	inline static int32_t get_offset_of_millisecondsInterval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t2492842391, ___millisecondsInterval_0)); }
	inline int32_t get_millisecondsInterval_0() const { return ___millisecondsInterval_0; }
	inline int32_t* get_address_of_millisecondsInterval_0() { return &___millisecondsInterval_0; }
	inline void set_millisecondsInterval_0(int32_t value)
	{
		___millisecondsInterval_0 = value;
	}

	inline static int32_t get_offset_of_myThread_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t2492842391, ___myThread_1)); }
	inline Func_1_t3822001908 * get_myThread_1() const { return ___myThread_1; }
	inline Func_1_t3822001908 ** get_address_of_myThread_1() { return &___myThread_1; }
	inline void set_myThread_1(Func_1_t3822001908 * value)
	{
		___myThread_1 = value;
		Il2CppCodeGenWriteBarrier((&___myThread_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS6_0_T2492842391_H
#ifndef THREADSAFERANDOM_T1204416265_H
#define THREADSAFERANDOM_T1204416265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct  ThreadSafeRandom_t1204416265  : public RuntimeObject
{
public:

public:
};

struct ThreadSafeRandom_t1204416265_StaticFields
{
public:
	// System.Random ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::_r
	Random_t108471755 * ____r_0;

public:
	inline static int32_t get_offset_of__r_0() { return static_cast<int32_t>(offsetof(ThreadSafeRandom_t1204416265_StaticFields, ____r_0)); }
	inline Random_t108471755 * get__r_0() const { return ____r_0; }
	inline Random_t108471755 ** get_address_of__r_0() { return &____r_0; }
	inline void set__r_0(Random_t108471755 * value)
	{
		____r_0 = value;
		Il2CppCodeGenWriteBarrier((&____r_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFERANDOM_T1204416265_H
#ifndef TRAFFICSTATS_T1302902347_H
#define TRAFFICSTATS_T1302902347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.TrafficStats
struct  TrafficStats_t1302902347  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<PackageHeaderSize>k__BackingField
	int32_t ___U3CPackageHeaderSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandCount>k__BackingField
	int32_t ___U3CReliableCommandCountU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandCount>k__BackingField
	int32_t ___U3CUnreliableCommandCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandCount>k__BackingField
	int32_t ___U3CFragmentCommandCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandCount>k__BackingField
	int32_t ___U3CControlCommandCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalPacketCount>k__BackingField
	int32_t ___U3CTotalPacketCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalCommandsInPackets>k__BackingField
	int32_t ___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandBytes>k__BackingField
	int32_t ___U3CReliableCommandBytesU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandBytes>k__BackingField
	int32_t ___U3CUnreliableCommandBytesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandBytes>k__BackingField
	int32_t ___U3CFragmentCommandBytesU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandBytes>k__BackingField
	int32_t ___U3CControlCommandBytesU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastAck>k__BackingField
	int32_t ___U3CTimestampOfLastAckU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastReliableCommand>k__BackingField
	int32_t ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CPackageHeaderSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CPackageHeaderSizeU3Ek__BackingField_0() const { return ___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return &___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline void set_U3CPackageHeaderSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CPackageHeaderSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CReliableCommandCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CReliableCommandCountU3Ek__BackingField_1() const { return ___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReliableCommandCountU3Ek__BackingField_1() { return &___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline void set_U3CReliableCommandCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CReliableCommandCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CUnreliableCommandCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CUnreliableCommandCountU3Ek__BackingField_2() const { return ___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return &___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline void set_U3CUnreliableCommandCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CUnreliableCommandCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CFragmentCommandCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CFragmentCommandCountU3Ek__BackingField_3() const { return ___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return &___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline void set_U3CFragmentCommandCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CFragmentCommandCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CControlCommandCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CControlCommandCountU3Ek__BackingField_4() const { return ___U3CControlCommandCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CControlCommandCountU3Ek__BackingField_4() { return &___U3CControlCommandCountU3Ek__BackingField_4; }
	inline void set_U3CControlCommandCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CControlCommandCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTotalPacketCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CTotalPacketCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CTotalPacketCountU3Ek__BackingField_5() const { return ___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTotalPacketCountU3Ek__BackingField_5() { return &___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline void set_U3CTotalPacketCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CTotalPacketCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CTotalCommandsInPacketsU3Ek__BackingField_6)); }
	inline int32_t get_U3CTotalCommandsInPacketsU3Ek__BackingField_6() const { return ___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return &___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline void set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(int32_t value)
	{
		___U3CTotalCommandsInPacketsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CReliableCommandBytesU3Ek__BackingField_7)); }
	inline int32_t get_U3CReliableCommandBytesU3Ek__BackingField_7() const { return ___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return &___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline void set_U3CReliableCommandBytesU3Ek__BackingField_7(int32_t value)
	{
		___U3CReliableCommandBytesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CUnreliableCommandBytesU3Ek__BackingField_8)); }
	inline int32_t get_U3CUnreliableCommandBytesU3Ek__BackingField_8() const { return ___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return &___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline void set_U3CUnreliableCommandBytesU3Ek__BackingField_8(int32_t value)
	{
		___U3CUnreliableCommandBytesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CFragmentCommandBytesU3Ek__BackingField_9)); }
	inline int32_t get_U3CFragmentCommandBytesU3Ek__BackingField_9() const { return ___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return &___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline void set_U3CFragmentCommandBytesU3Ek__BackingField_9(int32_t value)
	{
		___U3CFragmentCommandBytesU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandBytesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CControlCommandBytesU3Ek__BackingField_10)); }
	inline int32_t get_U3CControlCommandBytesU3Ek__BackingField_10() const { return ___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CControlCommandBytesU3Ek__BackingField_10() { return &___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline void set_U3CControlCommandBytesU3Ek__BackingField_10(int32_t value)
	{
		___U3CControlCommandBytesU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CTimestampOfLastAckU3Ek__BackingField_11)); }
	inline int32_t get_U3CTimestampOfLastAckU3Ek__BackingField_11() const { return ___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return &___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline void set_U3CTimestampOfLastAckU3Ek__BackingField_11(int32_t value)
	{
		___U3CTimestampOfLastAckU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12)); }
	inline int32_t get_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() const { return ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return &___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline void set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(int32_t value)
	{
		___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAFFICSTATS_T1302902347_H
#ifndef TRAFFICSTATSGAMELEVEL_T4013908777_H
#define TRAFFICSTATSGAMELEVEL_T4013908777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.TrafficStatsGameLevel
struct  TrafficStatsGameLevel_t4013908777  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastDispatchCall
	int32_t ___timeOfLastDispatchCall_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastSendCall
	int32_t ___timeOfLastSendCall_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationByteCount>k__BackingField
	int32_t ___U3COperationByteCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationCount>k__BackingField
	int32_t ___U3COperationCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultByteCount>k__BackingField
	int32_t ___U3CResultByteCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultCount>k__BackingField
	int32_t ___U3CResultCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventByteCount>k__BackingField
	int32_t ___U3CEventByteCountU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventCount>k__BackingField
	int32_t ___U3CEventCountU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallback>k__BackingField
	int32_t ___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallbackOpCode>k__BackingField
	uint8_t ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallback>k__BackingField
	int32_t ___U3CLongestEventCallbackU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestMessageCallback>k__BackingField
	int32_t ___U3CLongestMessageCallbackU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestRawMessageCallback>k__BackingField
	int32_t ___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallbackCode>k__BackingField
	uint8_t ___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenDispatching>k__BackingField
	int32_t ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenSending>k__BackingField
	int32_t ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<DispatchIncomingCommandsCalls>k__BackingField
	int32_t ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<SendOutgoingCommandsCalls>k__BackingField
	int32_t ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_timeOfLastDispatchCall_0() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___timeOfLastDispatchCall_0)); }
	inline int32_t get_timeOfLastDispatchCall_0() const { return ___timeOfLastDispatchCall_0; }
	inline int32_t* get_address_of_timeOfLastDispatchCall_0() { return &___timeOfLastDispatchCall_0; }
	inline void set_timeOfLastDispatchCall_0(int32_t value)
	{
		___timeOfLastDispatchCall_0 = value;
	}

	inline static int32_t get_offset_of_timeOfLastSendCall_1() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___timeOfLastSendCall_1)); }
	inline int32_t get_timeOfLastSendCall_1() const { return ___timeOfLastSendCall_1; }
	inline int32_t* get_address_of_timeOfLastSendCall_1() { return &___timeOfLastSendCall_1; }
	inline void set_timeOfLastSendCall_1(int32_t value)
	{
		___timeOfLastSendCall_1 = value;
	}

	inline static int32_t get_offset_of_U3COperationByteCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3COperationByteCountU3Ek__BackingField_2)); }
	inline int32_t get_U3COperationByteCountU3Ek__BackingField_2() const { return ___U3COperationByteCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COperationByteCountU3Ek__BackingField_2() { return &___U3COperationByteCountU3Ek__BackingField_2; }
	inline void set_U3COperationByteCountU3Ek__BackingField_2(int32_t value)
	{
		___U3COperationByteCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COperationCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3COperationCountU3Ek__BackingField_3)); }
	inline int32_t get_U3COperationCountU3Ek__BackingField_3() const { return ___U3COperationCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3COperationCountU3Ek__BackingField_3() { return &___U3COperationCountU3Ek__BackingField_3; }
	inline void set_U3COperationCountU3Ek__BackingField_3(int32_t value)
	{
		___U3COperationCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultByteCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CResultByteCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CResultByteCountU3Ek__BackingField_4() const { return ___U3CResultByteCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CResultByteCountU3Ek__BackingField_4() { return &___U3CResultByteCountU3Ek__BackingField_4; }
	inline void set_U3CResultByteCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CResultByteCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CResultCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CResultCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultCountU3Ek__BackingField_5() const { return ___U3CResultCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultCountU3Ek__BackingField_5() { return &___U3CResultCountU3Ek__BackingField_5; }
	inline void set_U3CResultCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEventByteCountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CEventByteCountU3Ek__BackingField_6)); }
	inline int32_t get_U3CEventByteCountU3Ek__BackingField_6() const { return ___U3CEventByteCountU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CEventByteCountU3Ek__BackingField_6() { return &___U3CEventByteCountU3Ek__BackingField_6; }
	inline void set_U3CEventByteCountU3Ek__BackingField_6(int32_t value)
	{
		___U3CEventByteCountU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEventCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CEventCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CEventCountU3Ek__BackingField_7() const { return ___U3CEventCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CEventCountU3Ek__BackingField_7() { return &___U3CEventCountU3Ek__BackingField_7; }
	inline void set_U3CEventCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CEventCountU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestOpResponseCallbackU3Ek__BackingField_8)); }
	inline int32_t get_U3CLongestOpResponseCallbackU3Ek__BackingField_8() const { return ___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return &___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline void set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(int32_t value)
	{
		___U3CLongestOpResponseCallbackU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9)); }
	inline uint8_t get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() const { return ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline uint8_t* get_address_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return &___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline void set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(uint8_t value)
	{
		___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestEventCallbackU3Ek__BackingField_10)); }
	inline int32_t get_U3CLongestEventCallbackU3Ek__BackingField_10() const { return ___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return &___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline void set_U3CLongestEventCallbackU3Ek__BackingField_10(int32_t value)
	{
		___U3CLongestEventCallbackU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLongestMessageCallbackU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestMessageCallbackU3Ek__BackingField_11)); }
	inline int32_t get_U3CLongestMessageCallbackU3Ek__BackingField_11() const { return ___U3CLongestMessageCallbackU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLongestMessageCallbackU3Ek__BackingField_11() { return &___U3CLongestMessageCallbackU3Ek__BackingField_11; }
	inline void set_U3CLongestMessageCallbackU3Ek__BackingField_11(int32_t value)
	{
		___U3CLongestMessageCallbackU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLongestRawMessageCallbackU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestRawMessageCallbackU3Ek__BackingField_12)); }
	inline int32_t get_U3CLongestRawMessageCallbackU3Ek__BackingField_12() const { return ___U3CLongestRawMessageCallbackU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CLongestRawMessageCallbackU3Ek__BackingField_12() { return &___U3CLongestRawMessageCallbackU3Ek__BackingField_12; }
	inline void set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(int32_t value)
	{
		___U3CLongestRawMessageCallbackU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackCodeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestEventCallbackCodeU3Ek__BackingField_13)); }
	inline uint8_t get_U3CLongestEventCallbackCodeU3Ek__BackingField_13() const { return ___U3CLongestEventCallbackCodeU3Ek__BackingField_13; }
	inline uint8_t* get_address_of_U3CLongestEventCallbackCodeU3Ek__BackingField_13() { return &___U3CLongestEventCallbackCodeU3Ek__BackingField_13; }
	inline void set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(uint8_t value)
	{
		___U3CLongestEventCallbackCodeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14)); }
	inline int32_t get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() const { return ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() { return &___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14; }
	inline void set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(int32_t value)
	{
		___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15)); }
	inline int32_t get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() const { return ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() { return &___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15; }
	inline void set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(int32_t value)
	{
		___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16)); }
	inline int32_t get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() const { return ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() { return &___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16; }
	inline void set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(int32_t value)
	{
		___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17)); }
	inline int32_t get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() const { return ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() { return &___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17; }
	inline void set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(int32_t value)
	{
		___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAFFICSTATSGAMELEVEL_T4013908777_H
#ifndef VERSION_T2916202802_H
#define VERSION_T2916202802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Version
struct  Version_t2916202802  : public RuntimeObject
{
public:

public:
};

struct Version_t2916202802_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Version::clientVersion
	ByteU5BU5D_t4116647657* ___clientVersion_0;

public:
	inline static int32_t get_offset_of_clientVersion_0() { return static_cast<int32_t>(offsetof(Version_t2916202802_StaticFields, ___clientVersion_0)); }
	inline ByteU5BU5D_t4116647657* get_clientVersion_0() const { return ___clientVersion_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_clientVersion_0() { return &___clientVersion_0; }
	inline void set_clientVersion_0(ByteU5BU5D_t4116647657* value)
	{
		___clientVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___clientVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T2916202802_H
#ifndef BIGINTEGER_T956758543_H
#define BIGINTEGER_T956758543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Numeric.BigInteger
struct  BigInteger_t956758543  : public RuntimeObject
{
public:
	// System.UInt32[] Photon.SocketServer.Numeric.BigInteger::data
	UInt32U5BU5D_t2770800703* ___data_1;
	// System.Int32 Photon.SocketServer.Numeric.BigInteger::dataLength
	int32_t ___dataLength_2;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t956758543, ___data_1)); }
	inline UInt32U5BU5D_t2770800703* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2770800703** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2770800703* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}

	inline static int32_t get_offset_of_dataLength_2() { return static_cast<int32_t>(offsetof(BigInteger_t956758543, ___dataLength_2)); }
	inline int32_t get_dataLength_2() const { return ___dataLength_2; }
	inline int32_t* get_address_of_dataLength_2() { return &___dataLength_2; }
	inline void set_dataLength_2(int32_t value)
	{
		___dataLength_2 = value;
	}
};

struct BigInteger_t956758543_StaticFields
{
public:
	// System.Int32[] Photon.SocketServer.Numeric.BigInteger::primesBelow2000
	Int32U5BU5D_t385246372* ___primesBelow2000_0;

public:
	inline static int32_t get_offset_of_primesBelow2000_0() { return static_cast<int32_t>(offsetof(BigInteger_t956758543_StaticFields, ___primesBelow2000_0)); }
	inline Int32U5BU5D_t385246372* get_primesBelow2000_0() const { return ___primesBelow2000_0; }
	inline Int32U5BU5D_t385246372** get_address_of_primesBelow2000_0() { return &___primesBelow2000_0; }
	inline void set_primesBelow2000_0(Int32U5BU5D_t385246372* value)
	{
		___primesBelow2000_0 = value;
		Il2CppCodeGenWriteBarrier((&___primesBelow2000_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T956758543_H
#ifndef DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
#define DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct  DiffieHellmanCryptoProvider_t915317458  : public RuntimeObject
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_t956758543 * ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_t956758543 * ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_t956758543 * ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t2986313634 * ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_t4116647657* ___sharedKey_5;

public:
	inline static int32_t get_offset_of_prime_1() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___prime_1)); }
	inline BigInteger_t956758543 * get_prime_1() const { return ___prime_1; }
	inline BigInteger_t956758543 ** get_address_of_prime_1() { return &___prime_1; }
	inline void set_prime_1(BigInteger_t956758543 * value)
	{
		___prime_1 = value;
		Il2CppCodeGenWriteBarrier((&___prime_1), value);
	}

	inline static int32_t get_offset_of_secret_2() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___secret_2)); }
	inline BigInteger_t956758543 * get_secret_2() const { return ___secret_2; }
	inline BigInteger_t956758543 ** get_address_of_secret_2() { return &___secret_2; }
	inline void set_secret_2(BigInteger_t956758543 * value)
	{
		___secret_2 = value;
		Il2CppCodeGenWriteBarrier((&___secret_2), value);
	}

	inline static int32_t get_offset_of_publicKey_3() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___publicKey_3)); }
	inline BigInteger_t956758543 * get_publicKey_3() const { return ___publicKey_3; }
	inline BigInteger_t956758543 ** get_address_of_publicKey_3() { return &___publicKey_3; }
	inline void set_publicKey_3(BigInteger_t956758543 * value)
	{
		___publicKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_3), value);
	}

	inline static int32_t get_offset_of_crypto_4() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___crypto_4)); }
	inline Rijndael_t2986313634 * get_crypto_4() const { return ___crypto_4; }
	inline Rijndael_t2986313634 ** get_address_of_crypto_4() { return &___crypto_4; }
	inline void set_crypto_4(Rijndael_t2986313634 * value)
	{
		___crypto_4 = value;
		Il2CppCodeGenWriteBarrier((&___crypto_4), value);
	}

	inline static int32_t get_offset_of_sharedKey_5() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___sharedKey_5)); }
	inline ByteU5BU5D_t4116647657* get_sharedKey_5() const { return ___sharedKey_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_sharedKey_5() { return &___sharedKey_5; }
	inline void set_sharedKey_5(ByteU5BU5D_t4116647657* value)
	{
		___sharedKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___sharedKey_5), value);
	}
};

struct DiffieHellmanCryptoProvider_t915317458_StaticFields
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_t956758543 * ___primeRoot_0;

public:
	inline static int32_t get_offset_of_primeRoot_0() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458_StaticFields, ___primeRoot_0)); }
	inline BigInteger_t956758543 * get_primeRoot_0() const { return ___primeRoot_0; }
	inline BigInteger_t956758543 ** get_address_of_primeRoot_0() { return &___primeRoot_0; }
	inline void set_primeRoot_0(BigInteger_t956758543 * value)
	{
		___primeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___primeRoot_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
#ifndef OAKLEYGROUPS_T1704371988_H
#define OAKLEYGROUPS_T1704371988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Security.OakleyGroups
struct  OakleyGroups_t1704371988  : public RuntimeObject
{
public:

public:
};

struct OakleyGroups_t1704371988_StaticFields
{
public:
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_t4116647657* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_t4116647657* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_t4116647657* ___OakleyPrime1536_3;

public:
	inline static int32_t get_offset_of_Generator_0() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___Generator_0)); }
	inline int32_t get_Generator_0() const { return ___Generator_0; }
	inline int32_t* get_address_of_Generator_0() { return &___Generator_0; }
	inline void set_Generator_0(int32_t value)
	{
		___Generator_0 = value;
	}

	inline static int32_t get_offset_of_OakleyPrime768_1() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime768_1)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime768_1() const { return ___OakleyPrime768_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime768_1() { return &___OakleyPrime768_1; }
	inline void set_OakleyPrime768_1(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime768_1 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime768_1), value);
	}

	inline static int32_t get_offset_of_OakleyPrime1024_2() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime1024_2)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime1024_2() const { return ___OakleyPrime1024_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime1024_2() { return &___OakleyPrime1024_2; }
	inline void set_OakleyPrime1024_2(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime1024_2 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime1024_2), value);
	}

	inline static int32_t get_offset_of_OakleyPrime1536_3() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime1536_3)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime1536_3() const { return ___OakleyPrime1536_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime1536_3() { return &___OakleyPrime1536_3; }
	inline void set_OakleyPrime1536_3(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime1536_3 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime1536_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OAKLEYGROUPS_T1704371988_H
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
#ifndef DICTIONARY_2_T1405253484_H
#define DICTIONARY_2_T1405253484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_t1405253484  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t293096029* ___entries_1;
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
	KeyCollection_t1594928955 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3121297802 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___entries_1)); }
	inline EntryU5BU5D_t293096029* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t293096029** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t293096029* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___keys_7)); }
	inline KeyCollection_t1594928955 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1594928955 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1594928955 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___values_8)); }
	inline ValueCollection_t3121297802 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3121297802 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3121297802 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T1405253484_H
#ifndef LIST_1_T1004777235_H
#define LIST_1_T1004777235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct  List_1_t1004777235  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StreamBufferU5BU5D_t2661682128* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1004777235, ____items_1)); }
	inline StreamBufferU5BU5D_t2661682128* get__items_1() const { return ____items_1; }
	inline StreamBufferU5BU5D_t2661682128** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StreamBufferU5BU5D_t2661682128* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1004777235, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1004777235, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1004777235, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1004777235_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StreamBufferU5BU5D_t2661682128* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1004777235_StaticFields, ____emptyArray_5)); }
	inline StreamBufferU5BU5D_t2661682128* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StreamBufferU5BU5D_t2661682128** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StreamBufferU5BU5D_t2661682128* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1004777235_H
#ifndef LIST_1_T3349700990_H
#define LIST_1_T3349700990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct  List_1_t3349700990  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MethodInfoU5BU5D_t2572182361* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3349700990, ____items_1)); }
	inline MethodInfoU5BU5D_t2572182361* get__items_1() const { return ____items_1; }
	inline MethodInfoU5BU5D_t2572182361** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MethodInfoU5BU5D_t2572182361* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3349700990, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3349700990, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3349700990, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3349700990_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MethodInfoU5BU5D_t2572182361* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3349700990_StaticFields, ____emptyArray_5)); }
	inline MethodInfoU5BU5D_t2572182361* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MethodInfoU5BU5D_t2572182361** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MethodInfoU5BU5D_t2572182361* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3349700990_H
#ifndef LIST_1_T3772910811_H
#define LIST_1_T3772910811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Threading.Thread>
struct  List_1_t3772910811  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ThreadU5BU5D_t820565480* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3772910811, ____items_1)); }
	inline ThreadU5BU5D_t820565480* get__items_1() const { return ____items_1; }
	inline ThreadU5BU5D_t820565480** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ThreadU5BU5D_t820565480* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3772910811, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3772910811, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3772910811, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3772910811_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ThreadU5BU5D_t820565480* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3772910811_StaticFields, ____emptyArray_5)); }
	inline ThreadU5BU5D_t820565480* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ThreadU5BU5D_t820565480** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ThreadU5BU5D_t820565480* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3772910811_H
#ifndef QUEUE_1_T2309151397_H
#define QUEUE_1_T2309151397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct  Queue_1_t2309151397  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	MyActionU5BU5D_t207368102* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t2309151397, ____array_0)); }
	inline MyActionU5BU5D_t207368102* get__array_0() const { return ____array_0; }
	inline MyActionU5BU5D_t207368102** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MyActionU5BU5D_t207368102* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t2309151397, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t2309151397, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t2309151397, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t2309151397, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t2309151397, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T2309151397_H
#ifndef QUEUE_1_T3962907151_H
#define QUEUE_1_T3962907151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Byte[]>
struct  Queue_1_t3962907151  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_t457913172* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t3962907151, ____array_0)); }
	inline ByteU5BU5DU5BU5D_t457913172* get__array_0() const { return ____array_0; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5DU5BU5D_t457913172* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t3962907151, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t3962907151, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t3962907151, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t3962907151, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t3962907151, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T3962907151_H
#ifndef STOPWATCH_T305734070_H
#define STOPWATCH_T305734070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Stopwatch
struct  Stopwatch_t305734070  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t305734070_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t305734070_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOPWATCH_T305734070_H
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
#ifndef ENDPOINT_T982345378_H
#define ENDPOINT_T982345378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_t982345378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_T982345378_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_5)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D1212_T3800721096_H
#define __STATICARRAYINITTYPESIZEU3D1212_T3800721096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212
struct  __StaticArrayInitTypeSizeU3D1212_t3800721096 
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
		uint8_t __StaticArrayInitTypeSizeU3D1212_t3800721096__padding[1212];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1212_T3800721096_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529103_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529103 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529103__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529103_H
#ifndef __STATICARRAYINITTYPESIZEU3D192_T3674326164_H
#define __STATICARRAYINITTYPESIZEU3D192_T3674326164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct  __StaticArrayInitTypeSizeU3D192_t3674326164 
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
		uint8_t __StaticArrayInitTypeSizeU3D192_t3674326164__padding[192];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D192_T3674326164_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278901_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278901 
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
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278901__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278901_H
#ifndef __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#define __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct  __StaticArrayInitTypeSizeU3D96_t385919777 
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
		uint8_t __StaticArrayInitTypeSizeU3D96_t385919777__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#ifndef PROTOCOL16_T1856210005_H
#define PROTOCOL16_T1856210005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Protocol16
struct  Protocol16_t1856210005  : public IProtocol_t1394662050
{
public:
	// System.Byte[] ExitGames.Client.Photon.Protocol16::versionBytes
	ByteU5BU5D_t4116647657* ___versionBytes_0;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memShort
	ByteU5BU5D_t4116647657* ___memShort_1;
	// System.Int64[] ExitGames.Client.Photon.Protocol16::memLongBlock
	Int64U5BU5D_t2559172825* ___memLongBlock_2;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memLongBlockBytes
	ByteU5BU5D_t4116647657* ___memLongBlockBytes_3;
	// System.Double[] ExitGames.Client.Photon.Protocol16::memDoubleBlock
	DoubleU5BU5D_t3413330114* ___memDoubleBlock_6;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memDoubleBlockBytes
	ByteU5BU5D_t4116647657* ___memDoubleBlockBytes_7;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memInteger
	ByteU5BU5D_t4116647657* ___memInteger_8;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memLong
	ByteU5BU5D_t4116647657* ___memLong_9;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memFloat
	ByteU5BU5D_t4116647657* ___memFloat_10;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memDouble
	ByteU5BU5D_t4116647657* ___memDouble_11;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memString
	ByteU5BU5D_t4116647657* ___memString_12;

public:
	inline static int32_t get_offset_of_versionBytes_0() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___versionBytes_0)); }
	inline ByteU5BU5D_t4116647657* get_versionBytes_0() const { return ___versionBytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_versionBytes_0() { return &___versionBytes_0; }
	inline void set_versionBytes_0(ByteU5BU5D_t4116647657* value)
	{
		___versionBytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___versionBytes_0), value);
	}

	inline static int32_t get_offset_of_memShort_1() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memShort_1)); }
	inline ByteU5BU5D_t4116647657* get_memShort_1() const { return ___memShort_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_memShort_1() { return &___memShort_1; }
	inline void set_memShort_1(ByteU5BU5D_t4116647657* value)
	{
		___memShort_1 = value;
		Il2CppCodeGenWriteBarrier((&___memShort_1), value);
	}

	inline static int32_t get_offset_of_memLongBlock_2() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memLongBlock_2)); }
	inline Int64U5BU5D_t2559172825* get_memLongBlock_2() const { return ___memLongBlock_2; }
	inline Int64U5BU5D_t2559172825** get_address_of_memLongBlock_2() { return &___memLongBlock_2; }
	inline void set_memLongBlock_2(Int64U5BU5D_t2559172825* value)
	{
		___memLongBlock_2 = value;
		Il2CppCodeGenWriteBarrier((&___memLongBlock_2), value);
	}

	inline static int32_t get_offset_of_memLongBlockBytes_3() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memLongBlockBytes_3)); }
	inline ByteU5BU5D_t4116647657* get_memLongBlockBytes_3() const { return ___memLongBlockBytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_memLongBlockBytes_3() { return &___memLongBlockBytes_3; }
	inline void set_memLongBlockBytes_3(ByteU5BU5D_t4116647657* value)
	{
		___memLongBlockBytes_3 = value;
		Il2CppCodeGenWriteBarrier((&___memLongBlockBytes_3), value);
	}

	inline static int32_t get_offset_of_memDoubleBlock_6() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memDoubleBlock_6)); }
	inline DoubleU5BU5D_t3413330114* get_memDoubleBlock_6() const { return ___memDoubleBlock_6; }
	inline DoubleU5BU5D_t3413330114** get_address_of_memDoubleBlock_6() { return &___memDoubleBlock_6; }
	inline void set_memDoubleBlock_6(DoubleU5BU5D_t3413330114* value)
	{
		___memDoubleBlock_6 = value;
		Il2CppCodeGenWriteBarrier((&___memDoubleBlock_6), value);
	}

	inline static int32_t get_offset_of_memDoubleBlockBytes_7() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memDoubleBlockBytes_7)); }
	inline ByteU5BU5D_t4116647657* get_memDoubleBlockBytes_7() const { return ___memDoubleBlockBytes_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_memDoubleBlockBytes_7() { return &___memDoubleBlockBytes_7; }
	inline void set_memDoubleBlockBytes_7(ByteU5BU5D_t4116647657* value)
	{
		___memDoubleBlockBytes_7 = value;
		Il2CppCodeGenWriteBarrier((&___memDoubleBlockBytes_7), value);
	}

	inline static int32_t get_offset_of_memInteger_8() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memInteger_8)); }
	inline ByteU5BU5D_t4116647657* get_memInteger_8() const { return ___memInteger_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_memInteger_8() { return &___memInteger_8; }
	inline void set_memInteger_8(ByteU5BU5D_t4116647657* value)
	{
		___memInteger_8 = value;
		Il2CppCodeGenWriteBarrier((&___memInteger_8), value);
	}

	inline static int32_t get_offset_of_memLong_9() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memLong_9)); }
	inline ByteU5BU5D_t4116647657* get_memLong_9() const { return ___memLong_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_memLong_9() { return &___memLong_9; }
	inline void set_memLong_9(ByteU5BU5D_t4116647657* value)
	{
		___memLong_9 = value;
		Il2CppCodeGenWriteBarrier((&___memLong_9), value);
	}

	inline static int32_t get_offset_of_memFloat_10() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memFloat_10)); }
	inline ByteU5BU5D_t4116647657* get_memFloat_10() const { return ___memFloat_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_memFloat_10() { return &___memFloat_10; }
	inline void set_memFloat_10(ByteU5BU5D_t4116647657* value)
	{
		___memFloat_10 = value;
		Il2CppCodeGenWriteBarrier((&___memFloat_10), value);
	}

	inline static int32_t get_offset_of_memDouble_11() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memDouble_11)); }
	inline ByteU5BU5D_t4116647657* get_memDouble_11() const { return ___memDouble_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_memDouble_11() { return &___memDouble_11; }
	inline void set_memDouble_11(ByteU5BU5D_t4116647657* value)
	{
		___memDouble_11 = value;
		Il2CppCodeGenWriteBarrier((&___memDouble_11), value);
	}

	inline static int32_t get_offset_of_memString_12() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005, ___memString_12)); }
	inline ByteU5BU5D_t4116647657* get_memString_12() const { return ___memString_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_memString_12() { return &___memString_12; }
	inline void set_memString_12(ByteU5BU5D_t4116647657* value)
	{
		___memString_12 = value;
		Il2CppCodeGenWriteBarrier((&___memString_12), value);
	}
};

struct Protocol16_t1856210005_StaticFields
{
public:
	// System.Single[] ExitGames.Client.Photon.Protocol16::memFloatBlock
	SingleU5BU5D_t1444911251* ___memFloatBlock_4;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memFloatBlockBytes
	ByteU5BU5D_t4116647657* ___memFloatBlockBytes_5;

public:
	inline static int32_t get_offset_of_memFloatBlock_4() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005_StaticFields, ___memFloatBlock_4)); }
	inline SingleU5BU5D_t1444911251* get_memFloatBlock_4() const { return ___memFloatBlock_4; }
	inline SingleU5BU5D_t1444911251** get_address_of_memFloatBlock_4() { return &___memFloatBlock_4; }
	inline void set_memFloatBlock_4(SingleU5BU5D_t1444911251* value)
	{
		___memFloatBlock_4 = value;
		Il2CppCodeGenWriteBarrier((&___memFloatBlock_4), value);
	}

	inline static int32_t get_offset_of_memFloatBlockBytes_5() { return static_cast<int32_t>(offsetof(Protocol16_t1856210005_StaticFields, ___memFloatBlockBytes_5)); }
	inline ByteU5BU5D_t4116647657* get_memFloatBlockBytes_5() const { return ___memFloatBlockBytes_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_memFloatBlockBytes_5() { return &___memFloatBlockBytes_5; }
	inline void set_memFloatBlockBytes_5(ByteU5BU5D_t4116647657* value)
	{
		___memFloatBlockBytes_5 = value;
		Il2CppCodeGenWriteBarrier((&___memFloatBlockBytes_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTOCOL16_T1856210005_H
#ifndef PROTOCOL18_T1857127509_H
#define PROTOCOL18_T1857127509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Protocol18
struct  Protocol18_t1857127509  : public IProtocol_t1394662050
{
public:
	// System.Byte[] ExitGames.Client.Photon.Protocol18::versionBytes
	ByteU5BU5D_t4116647657* ___versionBytes_0;
	// System.Byte[] ExitGames.Client.Photon.Protocol18::memDouble
	ByteU5BU5D_t4116647657* ___memDouble_1;
	// System.Double[] ExitGames.Client.Photon.Protocol18::memDoubleBlock
	DoubleU5BU5D_t3413330114* ___memDoubleBlock_3;
	// System.Single[] ExitGames.Client.Photon.Protocol18::memFloatBlock
	SingleU5BU5D_t1444911251* ___memFloatBlock_4;
	// System.Byte[] ExitGames.Client.Photon.Protocol18::memFloat
	ByteU5BU5D_t4116647657* ___memFloat_5;
	// System.Byte[] ExitGames.Client.Photon.Protocol18::memCustomTypeBodyLengthSerialized
	ByteU5BU5D_t4116647657* ___memCustomTypeBodyLengthSerialized_6;
	// System.Byte[] ExitGames.Client.Photon.Protocol18::memCompressedUInt32
	ByteU5BU5D_t4116647657* ___memCompressedUInt32_7;
	// System.Byte[] ExitGames.Client.Photon.Protocol18::memCompressedUInt64
	ByteU5BU5D_t4116647657* ___memCompressedUInt64_8;

public:
	inline static int32_t get_offset_of_versionBytes_0() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509, ___versionBytes_0)); }
	inline ByteU5BU5D_t4116647657* get_versionBytes_0() const { return ___versionBytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_versionBytes_0() { return &___versionBytes_0; }
	inline void set_versionBytes_0(ByteU5BU5D_t4116647657* value)
	{
		___versionBytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___versionBytes_0), value);
	}

	inline static int32_t get_offset_of_memDouble_1() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509, ___memDouble_1)); }
	inline ByteU5BU5D_t4116647657* get_memDouble_1() const { return ___memDouble_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_memDouble_1() { return &___memDouble_1; }
	inline void set_memDouble_1(ByteU5BU5D_t4116647657* value)
	{
		___memDouble_1 = value;
		Il2CppCodeGenWriteBarrier((&___memDouble_1), value);
	}

	inline static int32_t get_offset_of_memDoubleBlock_3() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509, ___memDoubleBlock_3)); }
	inline DoubleU5BU5D_t3413330114* get_memDoubleBlock_3() const { return ___memDoubleBlock_3; }
	inline DoubleU5BU5D_t3413330114** get_address_of_memDoubleBlock_3() { return &___memDoubleBlock_3; }
	inline void set_memDoubleBlock_3(DoubleU5BU5D_t3413330114* value)
	{
		___memDoubleBlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___memDoubleBlock_3), value);
	}

	inline static int32_t get_offset_of_memFloatBlock_4() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509, ___memFloatBlock_4)); }
	inline SingleU5BU5D_t1444911251* get_memFloatBlock_4() const { return ___memFloatBlock_4; }
	inline SingleU5BU5D_t1444911251** get_address_of_memFloatBlock_4() { return &___memFloatBlock_4; }
	inline void set_memFloatBlock_4(SingleU5BU5D_t1444911251* value)
	{
		___memFloatBlock_4 = value;
		Il2CppCodeGenWriteBarrier((&___memFloatBlock_4), value);
	}

	inline static int32_t get_offset_of_memFloat_5() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509, ___memFloat_5)); }
	inline ByteU5BU5D_t4116647657* get_memFloat_5() const { return ___memFloat_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_memFloat_5() { return &___memFloat_5; }
	inline void set_memFloat_5(ByteU5BU5D_t4116647657* value)
	{
		___memFloat_5 = value;
		Il2CppCodeGenWriteBarrier((&___memFloat_5), value);
	}

	inline static int32_t get_offset_of_memCustomTypeBodyLengthSerialized_6() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509, ___memCustomTypeBodyLengthSerialized_6)); }
	inline ByteU5BU5D_t4116647657* get_memCustomTypeBodyLengthSerialized_6() const { return ___memCustomTypeBodyLengthSerialized_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_memCustomTypeBodyLengthSerialized_6() { return &___memCustomTypeBodyLengthSerialized_6; }
	inline void set_memCustomTypeBodyLengthSerialized_6(ByteU5BU5D_t4116647657* value)
	{
		___memCustomTypeBodyLengthSerialized_6 = value;
		Il2CppCodeGenWriteBarrier((&___memCustomTypeBodyLengthSerialized_6), value);
	}

	inline static int32_t get_offset_of_memCompressedUInt32_7() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509, ___memCompressedUInt32_7)); }
	inline ByteU5BU5D_t4116647657* get_memCompressedUInt32_7() const { return ___memCompressedUInt32_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_memCompressedUInt32_7() { return &___memCompressedUInt32_7; }
	inline void set_memCompressedUInt32_7(ByteU5BU5D_t4116647657* value)
	{
		___memCompressedUInt32_7 = value;
		Il2CppCodeGenWriteBarrier((&___memCompressedUInt32_7), value);
	}

	inline static int32_t get_offset_of_memCompressedUInt64_8() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509, ___memCompressedUInt64_8)); }
	inline ByteU5BU5D_t4116647657* get_memCompressedUInt64_8() const { return ___memCompressedUInt64_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_memCompressedUInt64_8() { return &___memCompressedUInt64_8; }
	inline void set_memCompressedUInt64_8(ByteU5BU5D_t4116647657* value)
	{
		___memCompressedUInt64_8 = value;
		Il2CppCodeGenWriteBarrier((&___memCompressedUInt64_8), value);
	}
};

struct Protocol18_t1857127509_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Protocol18::boolMasks
	ByteU5BU5D_t4116647657* ___boolMasks_2;

public:
	inline static int32_t get_offset_of_boolMasks_2() { return static_cast<int32_t>(offsetof(Protocol18_t1857127509_StaticFields, ___boolMasks_2)); }
	inline ByteU5BU5D_t4116647657* get_boolMasks_2() const { return ___boolMasks_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_boolMasks_2() { return &___boolMasks_2; }
	inline void set_boolMasks_2(ByteU5BU5D_t4116647657* value)
	{
		___boolMasks_2 = value;
		Il2CppCodeGenWriteBarrier((&___boolMasks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTOCOL18_T1857127509_H
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
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public MarshalByRefObject_t2760389100
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_9)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t3252573759 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t3252573759 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t3252573759 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t3252573759 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t3252573759 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_1)); }
	inline TextWriter_t3478189236 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t3478189236 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t3478189236 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t3252573759 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t3252573759 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t3252573759 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t3252573759 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t3252573759 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t3252573759 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t3252573759 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t3252573759 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t3252573759 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t3252573759 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t3252573759 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t3252573759 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t3252573759 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t3252573759 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t3252573759 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t3252573759 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
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
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t95296544 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t1748372627 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___internal_thread_6)); }
	inline InternalThread_t95296544 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t95296544 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t95296544 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((&___internal_thread_6), value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ThreadStartArg_7), value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_8), value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((&___principal_9), value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegate_12), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t1748372627 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t1748372627 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t1748372627 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionContext_13), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1707895399 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1707895399 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1707895399 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStoreMgr_0), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentCulture_4), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentUICulture_5), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t2567786569 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t4157843068 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t4157843068 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t2300836069 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_t2567786569 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_t2567786569 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_t2567786569 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStore_1), value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t4157843068 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t4157843068 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentCulture_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t4157843068 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t4157843068 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentUICulture_3), value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_t2300836069 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_t2300836069 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_t2300836069 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((&___current_thread_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255371  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::4989E5469B40416DC5AFB739C747E32B40CC5C77
	__StaticArrayInitTypeSizeU3D96_t385919777  ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::49ECABA9727A1AF0636082C467485A1A9A04B669
	__StaticArrayInitTypeSizeU3D192_t3674326164  ___49ECABA9727A1AF0636082C467485A1A9A04B669_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6668D4903321030E42A6CE59AB96ADD9D0214FAC
	__StaticArrayInitTypeSizeU3D9_t3218278901  ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2;
	// System.Int32 <PrivateImplementationDetails>::6DDAB634AD2B1CEB854EA2128C959D16CC29D6BF
	int32_t ___6DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212 <PrivateImplementationDetails>::AEAF34DCCF141E917F02F7768DAEA80AA2B13B95
	__StaticArrayInitTypeSizeU3D1212_t3800721096  ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::C033BD4351FBA3732545EA2E016D52B0FC3E69EC
	__StaticArrayInitTypeSizeU3D128_t531529103  ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5;
	// System.Int64 <PrivateImplementationDetails>::C5E8AB60ED9C473EBFB92E52109524A608BCFBE2
	int64_t ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6;

public:
	inline static int32_t get_offset_of_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0)); }
	inline __StaticArrayInitTypeSizeU3D96_t385919777  get_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() const { return ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0; }
	inline __StaticArrayInitTypeSizeU3D96_t385919777 * get_address_of_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() { return &___4989E5469B40416DC5AFB739C747E32B40CC5C77_0; }
	inline void set_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0(__StaticArrayInitTypeSizeU3D96_t385919777  value)
	{
		___4989E5469B40416DC5AFB739C747E32B40CC5C77_0 = value;
	}

	inline static int32_t get_offset_of_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___49ECABA9727A1AF0636082C467485A1A9A04B669_1)); }
	inline __StaticArrayInitTypeSizeU3D192_t3674326164  get_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() const { return ___49ECABA9727A1AF0636082C467485A1A9A04B669_1; }
	inline __StaticArrayInitTypeSizeU3D192_t3674326164 * get_address_of_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() { return &___49ECABA9727A1AF0636082C467485A1A9A04B669_1; }
	inline void set_U349ECABA9727A1AF0636082C467485A1A9A04B669_1(__StaticArrayInitTypeSizeU3D192_t3674326164  value)
	{
		___49ECABA9727A1AF0636082C467485A1A9A04B669_1 = value;
	}

	inline static int32_t get_offset_of_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278901  get_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() const { return ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278901 * get_address_of_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() { return &___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2; }
	inline void set_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2(__StaticArrayInitTypeSizeU3D9_t3218278901  value)
	{
		___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2 = value;
	}

	inline static int32_t get_offset_of_U36DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___6DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3)); }
	inline int32_t get_U36DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3() const { return ___6DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3; }
	inline int32_t* get_address_of_U36DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3() { return &___6DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3; }
	inline void set_U36DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3(int32_t value)
	{
		___6DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3 = value;
	}

	inline static int32_t get_offset_of_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4)); }
	inline __StaticArrayInitTypeSizeU3D1212_t3800721096  get_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4() const { return ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4; }
	inline __StaticArrayInitTypeSizeU3D1212_t3800721096 * get_address_of_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4() { return &___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4; }
	inline void set_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4(__StaticArrayInitTypeSizeU3D1212_t3800721096  value)
	{
		___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4 = value;
	}

	inline static int32_t get_offset_of_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529103  get_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() const { return ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5; }
	inline __StaticArrayInitTypeSizeU3D128_t531529103 * get_address_of_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() { return &___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5; }
	inline void set_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5(__StaticArrayInitTypeSizeU3D128_t531529103  value)
	{
		___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5 = value;
	}

	inline static int32_t get_offset_of_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6)); }
	inline int64_t get_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() const { return ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6; }
	inline int64_t* get_address_of_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() { return &___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6; }
	inline void set_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6(int64_t value)
	{
		___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#ifndef CONNECTIONPROTOCOL_T2586603950_H
#define CONNECTIONPROTOCOL_T2586603950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t2586603950 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t2586603950, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONPROTOCOL_T2586603950_H
#ifndef CONNECTIONSTATEVALUE_T4213441778_H
#define CONNECTIONSTATEVALUE_T4213441778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionStateValue
struct  ConnectionStateValue_t4213441778 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_t4213441778, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONSTATEVALUE_T4213441778_H
#ifndef DEBUGLEVEL_T3671880145_H
#define DEBUGLEVEL_T3671880145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t3671880145 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t3671880145, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLEVEL_T3671880145_H
#ifndef DELIVERYMODE_T90936453_H
#define DELIVERYMODE_T90936453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DeliveryMode
struct  DeliveryMode_t90936453 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_t90936453, ___value___2)); }
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
#endif // DELIVERYMODE_T90936453_H
#ifndef EGMESSAGETYPE_T996079676_H
#define EGMESSAGETYPE_T996079676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EgMessageType
struct  EgMessageType_t996079676 
{
public:
	// System.Byte ExitGames.Client.Photon.EgMessageType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EgMessageType_t996079676, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EGMESSAGETYPE_T996079676_H
#ifndef PHOTONSOCKETERROR_T821309465_H
#define PHOTONSOCKETERROR_T821309465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonSocketError
struct  PhotonSocketError_t821309465 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketError_t821309465, ___value___2)); }
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
#endif // PHOTONSOCKETERROR_T821309465_H
#ifndef PHOTONSOCKETSTATE_T2742032721_H
#define PHOTONSOCKETSTATE_T2742032721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonSocketState
struct  PhotonSocketState_t2742032721 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketState_t2742032721, ___value___2)); }
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
#endif // PHOTONSOCKETSTATE_T2742032721_H
#ifndef GPTYPE_T3547323011_H
#define GPTYPE_T3547323011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Protocol18/GpType
struct  GpType_t3547323011 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol18/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_t3547323011, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPTYPE_T3547323011_H
#ifndef SERIALIZATIONPROTOCOL_T4091957412_H
#define SERIALIZATIONPROTOCOL_T4091957412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t4091957412 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t4091957412, ___value___2)); }
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
#endif // SERIALIZATIONPROTOCOL_T4091957412_H
#ifndef STATUSCODE_T823606708_H
#define STATUSCODE_T823606708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.StatusCode
struct  StatusCode_t823606708 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t823606708, ___value___2)); }
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
#endif // STATUSCODE_T823606708_H
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
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef SEEKORIGIN_T1441174344_H
#define SEEKORIGIN_T1441174344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t1441174344 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t1441174344, ___value___2)); }
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
#endif // SEEKORIGIN_T1441174344_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___2)); }
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
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef PROTOCOLTYPE_T303635025_H
#define PROTOCOLTYPE_T303635025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t303635025 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t303635025, ___value___2)); }
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
#endif // PROTOCOLTYPE_T303635025_H
#ifndef SOCKETERROR_T3760144386_H
#define SOCKETERROR_T3760144386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketError
struct  SocketError_t3760144386 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_t3760144386, ___value___2)); }
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
#endif // SOCKETERROR_T3760144386_H
#ifndef SOCKETFLAGS_T2969870452_H
#define SOCKETFLAGS_T2969870452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t2969870452 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_t2969870452, ___value___2)); }
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
#endif // SOCKETFLAGS_T2969870452_H
#ifndef SOCKETTYPE_T2175930299_H
#define SOCKETTYPE_T2175930299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2175930299 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t2175930299, ___value___2)); }
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
#endif // SOCKETTYPE_T2175930299_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
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
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T3027515415_H
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
#ifndef SECURITYEXCEPTION_T975544473_H
#define SECURITYEXCEPTION_T975544473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t975544473  : public SystemException_t176217640
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_17;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_18;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_19;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_20;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_21;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_22;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_23;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t2008144148 * ____evidence_24;

public:
	inline static int32_t get_offset_of_permissionState_17() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionState_17)); }
	inline String_t* get_permissionState_17() const { return ___permissionState_17; }
	inline String_t** get_address_of_permissionState_17() { return &___permissionState_17; }
	inline void set_permissionState_17(String_t* value)
	{
		___permissionState_17 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_17), value);
	}

	inline static int32_t get_offset_of_permissionType_18() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionType_18)); }
	inline Type_t * get_permissionType_18() const { return ___permissionType_18; }
	inline Type_t ** get_address_of_permissionType_18() { return &___permissionType_18; }
	inline void set_permissionType_18(Type_t * value)
	{
		___permissionType_18 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_18), value);
	}

	inline static int32_t get_offset_of__granted_19() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____granted_19)); }
	inline String_t* get__granted_19() const { return ____granted_19; }
	inline String_t** get_address_of__granted_19() { return &____granted_19; }
	inline void set__granted_19(String_t* value)
	{
		____granted_19 = value;
		Il2CppCodeGenWriteBarrier((&____granted_19), value);
	}

	inline static int32_t get_offset_of__refused_20() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____refused_20)); }
	inline String_t* get__refused_20() const { return ____refused_20; }
	inline String_t** get_address_of__refused_20() { return &____refused_20; }
	inline void set__refused_20(String_t* value)
	{
		____refused_20 = value;
		Il2CppCodeGenWriteBarrier((&____refused_20), value);
	}

	inline static int32_t get_offset_of__demanded_21() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____demanded_21)); }
	inline RuntimeObject * get__demanded_21() const { return ____demanded_21; }
	inline RuntimeObject ** get_address_of__demanded_21() { return &____demanded_21; }
	inline void set__demanded_21(RuntimeObject * value)
	{
		____demanded_21 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_21), value);
	}

	inline static int32_t get_offset_of__firstperm_22() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____firstperm_22)); }
	inline RuntimeObject* get__firstperm_22() const { return ____firstperm_22; }
	inline RuntimeObject** get_address_of__firstperm_22() { return &____firstperm_22; }
	inline void set__firstperm_22(RuntimeObject* value)
	{
		____firstperm_22 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_22), value);
	}

	inline static int32_t get_offset_of__method_23() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____method_23)); }
	inline MethodInfo_t * get__method_23() const { return ____method_23; }
	inline MethodInfo_t ** get_address_of__method_23() { return &____method_23; }
	inline void set__method_23(MethodInfo_t * value)
	{
		____method_23 = value;
		Il2CppCodeGenWriteBarrier((&____method_23), value);
	}

	inline static int32_t get_offset_of__evidence_24() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____evidence_24)); }
	inline Evidence_t2008144148 * get__evidence_24() const { return ____evidence_24; }
	inline Evidence_t2008144148 ** get_address_of__evidence_24() { return &____evidence_24; }
	inline void set__evidence_24(Evidence_t2008144148 * value)
	{
		____evidence_24 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T975544473_H
#ifndef IPHOTONSOCKET_T2066969247_H
#define IPHOTONSOCKET_T2066969247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.IPhotonSocket
struct  IPhotonSocket_t2066969247  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_t2956237011 * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_6;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_7;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_8;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___peerBase_0)); }
	inline PeerBase_t2956237011 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_t2956237011 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_t2956237011 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier((&___peerBase_0), value);
	}

	inline static int32_t get_offset_of_Protocol_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___Protocol_1)); }
	inline uint8_t get_Protocol_1() const { return ___Protocol_1; }
	inline uint8_t* get_address_of_Protocol_1() { return &___Protocol_1; }
	inline void set_Protocol_1(uint8_t value)
	{
		___Protocol_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CServerAddressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___U3CServerPortU3Ek__BackingField_6)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_6() const { return ___U3CServerPortU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_6() { return &___U3CServerPortU3Ek__BackingField_6; }
	inline void set_U3CServerPortU3Ek__BackingField_6(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_7)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_7() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_7() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_7; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_7(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___U3CUrlProtocolU3Ek__BackingField_8)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_8() const { return ___U3CUrlProtocolU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_8() { return &___U3CUrlProtocolU3Ek__BackingField_8; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_8(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUrlProtocolU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247, ___U3CUrlPathU3Ek__BackingField_9)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_9() const { return ___U3CUrlPathU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_9() { return &___U3CUrlPathU3Ek__BackingField_9; }
	inline void set_U3CUrlPathU3Ek__BackingField_9(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUrlPathU3Ek__BackingField_9), value);
	}
};

struct IPhotonSocket_t2066969247_StaticFields
{
public:
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CServerIpAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_t2066969247_StaticFields, ___U3CServerIpAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerIpAddressU3Ek__BackingField_5() const { return ___U3CServerIpAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerIpAddressU3Ek__BackingField_5() { return &___U3CServerIpAddressU3Ek__BackingField_5; }
	inline void set_U3CServerIpAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerIpAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CServerIpAddressU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPHOTONSOCKET_T2066969247_H
#ifndef PEERBASE_T2956237011_H
#define PEERBASE_T2956237011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t2956237011  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t1608153861 * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_t1394662050 * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t2066969247 * ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_5;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_7;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t1230688399 * ___CommandInCurrentDispatch_8;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_10;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t2309151397 * ___ActionQueue_11;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_12;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_13;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_14;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTimeVariance
	int32_t ___lastRoundTripTimeVariance_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_25;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_26;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeInt
	int32_t ___timeInt_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_32;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_33;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_34;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_35;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_37;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t108471755 * ___lagRandomizer_38;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t1884284488 * ___NetSimListOutgoing_39;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t1884284488 * ___NetSimListIncoming_40;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t2000596048 * ___networkSimulationSettings_41;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_42;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandLogSize
	int32_t ___commandLogSize_43;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::CommandLog
	Queue_1_t4063950034 * ___CommandLog_44;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::InReliableLog
	Queue_1_t4063950034 * ___InReliableLog_45;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___photonPeer_0)); }
	inline PhotonPeer_t1608153861 * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t1608153861 ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t1608153861 * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((&___photonPeer_0), value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___SerializationProtocol_1)); }
	inline IProtocol_t1394662050 * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_t1394662050 ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_t1394662050 * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((&___SerializationProtocol_1), value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___usedTransportProtocol_2)); }
	inline uint8_t get_usedTransportProtocol_2() const { return ___usedTransportProtocol_2; }
	inline uint8_t* get_address_of_usedTransportProtocol_2() { return &___usedTransportProtocol_2; }
	inline void set_usedTransportProtocol_2(uint8_t value)
	{
		___usedTransportProtocol_2 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_3() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___PhotonSocket_3)); }
	inline IPhotonSocket_t2066969247 * get_PhotonSocket_3() const { return ___PhotonSocket_3; }
	inline IPhotonSocket_t2066969247 ** get_address_of_PhotonSocket_3() { return &___PhotonSocket_3; }
	inline void set_PhotonSocket_3(IPhotonSocket_t2066969247 * value)
	{
		___PhotonSocket_3 = value;
		Il2CppCodeGenWriteBarrier((&___PhotonSocket_3), value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CServerAddressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_peerConnectionState_5() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___peerConnectionState_5)); }
	inline uint8_t get_peerConnectionState_5() const { return ___peerConnectionState_5; }
	inline uint8_t* get_address_of_peerConnectionState_5() { return &___peerConnectionState_5; }
	inline void set_peerConnectionState_5(uint8_t value)
	{
		___peerConnectionState_5 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_6() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___ByteCountLastOperation_6)); }
	inline int32_t get_ByteCountLastOperation_6() const { return ___ByteCountLastOperation_6; }
	inline int32_t* get_address_of_ByteCountLastOperation_6() { return &___ByteCountLastOperation_6; }
	inline void set_ByteCountLastOperation_6(int32_t value)
	{
		___ByteCountLastOperation_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_7() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___ByteCountCurrentDispatch_7)); }
	inline int32_t get_ByteCountCurrentDispatch_7() const { return ___ByteCountCurrentDispatch_7; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_7() { return &___ByteCountCurrentDispatch_7; }
	inline void set_ByteCountCurrentDispatch_7(int32_t value)
	{
		___ByteCountCurrentDispatch_7 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___CommandInCurrentDispatch_8)); }
	inline NCommand_t1230688399 * get_CommandInCurrentDispatch_8() const { return ___CommandInCurrentDispatch_8; }
	inline NCommand_t1230688399 ** get_address_of_CommandInCurrentDispatch_8() { return &___CommandInCurrentDispatch_8; }
	inline void set_CommandInCurrentDispatch_8(NCommand_t1230688399 * value)
	{
		___CommandInCurrentDispatch_8 = value;
		Il2CppCodeGenWriteBarrier((&___CommandInCurrentDispatch_8), value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_9() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___packetLossByCrc_9)); }
	inline int32_t get_packetLossByCrc_9() const { return ___packetLossByCrc_9; }
	inline int32_t* get_address_of_packetLossByCrc_9() { return &___packetLossByCrc_9; }
	inline void set_packetLossByCrc_9(int32_t value)
	{
		___packetLossByCrc_9 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_10() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___packetLossByChallenge_10)); }
	inline int32_t get_packetLossByChallenge_10() const { return ___packetLossByChallenge_10; }
	inline int32_t* get_address_of_packetLossByChallenge_10() { return &___packetLossByChallenge_10; }
	inline void set_packetLossByChallenge_10(int32_t value)
	{
		___packetLossByChallenge_10 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_11() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___ActionQueue_11)); }
	inline Queue_1_t2309151397 * get_ActionQueue_11() const { return ___ActionQueue_11; }
	inline Queue_1_t2309151397 ** get_address_of_ActionQueue_11() { return &___ActionQueue_11; }
	inline void set_ActionQueue_11(Queue_1_t2309151397 * value)
	{
		___ActionQueue_11 = value;
		Il2CppCodeGenWriteBarrier((&___ActionQueue_11), value);
	}

	inline static int32_t get_offset_of_peerID_12() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___peerID_12)); }
	inline int16_t get_peerID_12() const { return ___peerID_12; }
	inline int16_t* get_address_of_peerID_12() { return &___peerID_12; }
	inline void set_peerID_12(int16_t value)
	{
		___peerID_12 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_13() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___serverTimeOffset_13)); }
	inline int32_t get_serverTimeOffset_13() const { return ___serverTimeOffset_13; }
	inline int32_t* get_address_of_serverTimeOffset_13() { return &___serverTimeOffset_13; }
	inline void set_serverTimeOffset_13(int32_t value)
	{
		___serverTimeOffset_13 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_14() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___serverTimeOffsetIsAvailable_14)); }
	inline bool get_serverTimeOffsetIsAvailable_14() const { return ___serverTimeOffsetIsAvailable_14; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_14() { return &___serverTimeOffsetIsAvailable_14; }
	inline void set_serverTimeOffsetIsAvailable_14(bool value)
	{
		___serverTimeOffsetIsAvailable_14 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_15() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___roundTripTime_15)); }
	inline int32_t get_roundTripTime_15() const { return ___roundTripTime_15; }
	inline int32_t* get_address_of_roundTripTime_15() { return &___roundTripTime_15; }
	inline void set_roundTripTime_15(int32_t value)
	{
		___roundTripTime_15 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_16() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___roundTripTimeVariance_16)); }
	inline int32_t get_roundTripTimeVariance_16() const { return ___roundTripTimeVariance_16; }
	inline int32_t* get_address_of_roundTripTimeVariance_16() { return &___roundTripTimeVariance_16; }
	inline void set_roundTripTimeVariance_16(int32_t value)
	{
		___roundTripTimeVariance_16 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_17() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___lastRoundTripTime_17)); }
	inline int32_t get_lastRoundTripTime_17() const { return ___lastRoundTripTime_17; }
	inline int32_t* get_address_of_lastRoundTripTime_17() { return &___lastRoundTripTime_17; }
	inline void set_lastRoundTripTime_17(int32_t value)
	{
		___lastRoundTripTime_17 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_18() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___lowestRoundTripTime_18)); }
	inline int32_t get_lowestRoundTripTime_18() const { return ___lowestRoundTripTime_18; }
	inline int32_t* get_address_of_lowestRoundTripTime_18() { return &___lowestRoundTripTime_18; }
	inline void set_lowestRoundTripTime_18(int32_t value)
	{
		___lowestRoundTripTime_18 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTimeVariance_19() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___lastRoundTripTimeVariance_19)); }
	inline int32_t get_lastRoundTripTimeVariance_19() const { return ___lastRoundTripTimeVariance_19; }
	inline int32_t* get_address_of_lastRoundTripTimeVariance_19() { return &___lastRoundTripTimeVariance_19; }
	inline void set_lastRoundTripTimeVariance_19(int32_t value)
	{
		___lastRoundTripTimeVariance_19 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_20() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___highestRoundTripTimeVariance_20)); }
	inline int32_t get_highestRoundTripTimeVariance_20() const { return ___highestRoundTripTimeVariance_20; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_20() { return &___highestRoundTripTimeVariance_20; }
	inline void set_highestRoundTripTimeVariance_20(int32_t value)
	{
		___highestRoundTripTimeVariance_20 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_21() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___timestampOfLastReceive_21)); }
	inline int32_t get_timestampOfLastReceive_21() const { return ___timestampOfLastReceive_21; }
	inline int32_t* get_address_of_timestampOfLastReceive_21() { return &___timestampOfLastReceive_21; }
	inline void set_timestampOfLastReceive_21(int32_t value)
	{
		___timestampOfLastReceive_21 = value;
	}

	inline static int32_t get_offset_of_bytesOut_23() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___bytesOut_23)); }
	inline int64_t get_bytesOut_23() const { return ___bytesOut_23; }
	inline int64_t* get_address_of_bytesOut_23() { return &___bytesOut_23; }
	inline void set_bytesOut_23(int64_t value)
	{
		___bytesOut_23 = value;
	}

	inline static int32_t get_offset_of_bytesIn_24() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___bytesIn_24)); }
	inline int64_t get_bytesIn_24() const { return ___bytesIn_24; }
	inline int64_t* get_address_of_bytesIn_24() { return &___bytesIn_24; }
	inline void set_bytesIn_24(int64_t value)
	{
		___bytesIn_24 = value;
	}

	inline static int32_t get_offset_of_CustomInitData_25() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___CustomInitData_25)); }
	inline RuntimeObject * get_CustomInitData_25() const { return ___CustomInitData_25; }
	inline RuntimeObject ** get_address_of_CustomInitData_25() { return &___CustomInitData_25; }
	inline void set_CustomInitData_25(RuntimeObject * value)
	{
		___CustomInitData_25 = value;
		Il2CppCodeGenWriteBarrier((&___CustomInitData_25), value);
	}

	inline static int32_t get_offset_of_AppId_26() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___AppId_26)); }
	inline String_t* get_AppId_26() const { return ___AppId_26; }
	inline String_t** get_address_of_AppId_26() { return &___AppId_26; }
	inline void set_AppId_26(String_t* value)
	{
		___AppId_26 = value;
		Il2CppCodeGenWriteBarrier((&___AppId_26), value);
	}

	inline static int32_t get_offset_of_timeBase_27() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___timeBase_27)); }
	inline int32_t get_timeBase_27() const { return ___timeBase_27; }
	inline int32_t* get_address_of_timeBase_27() { return &___timeBase_27; }
	inline void set_timeBase_27(int32_t value)
	{
		___timeBase_27 = value;
	}

	inline static int32_t get_offset_of_timeInt_28() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___timeInt_28)); }
	inline int32_t get_timeInt_28() const { return ___timeInt_28; }
	inline int32_t* get_address_of_timeInt_28() { return &___timeInt_28; }
	inline void set_timeInt_28(int32_t value)
	{
		___timeInt_28 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_29() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___timeoutInt_29)); }
	inline int32_t get_timeoutInt_29() const { return ___timeoutInt_29; }
	inline int32_t* get_address_of_timeoutInt_29() { return &___timeoutInt_29; }
	inline void set_timeoutInt_29(int32_t value)
	{
		___timeoutInt_29 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_30() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___timeLastAckReceive_30)); }
	inline int32_t get_timeLastAckReceive_30() const { return ___timeLastAckReceive_30; }
	inline int32_t* get_address_of_timeLastAckReceive_30() { return &___timeLastAckReceive_30; }
	inline void set_timeLastAckReceive_30(int32_t value)
	{
		___timeLastAckReceive_30 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_31() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___timeLastSendAck_31)); }
	inline int32_t get_timeLastSendAck_31() const { return ___timeLastSendAck_31; }
	inline int32_t* get_address_of_timeLastSendAck_31() { return &___timeLastSendAck_31; }
	inline void set_timeLastSendAck_31(int32_t value)
	{
		___timeLastSendAck_31 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_32() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___timeLastSendOutgoing_32)); }
	inline int32_t get_timeLastSendOutgoing_32() const { return ___timeLastSendOutgoing_32; }
	inline int32_t* get_address_of_timeLastSendOutgoing_32() { return &___timeLastSendOutgoing_32; }
	inline void set_timeLastSendOutgoing_32(int32_t value)
	{
		___timeLastSendOutgoing_32 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_33() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___ApplicationIsInitialized_33)); }
	inline bool get_ApplicationIsInitialized_33() const { return ___ApplicationIsInitialized_33; }
	inline bool* get_address_of_ApplicationIsInitialized_33() { return &___ApplicationIsInitialized_33; }
	inline void set_ApplicationIsInitialized_33(bool value)
	{
		___ApplicationIsInitialized_33 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_34() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___isEncryptionAvailable_34)); }
	inline bool get_isEncryptionAvailable_34() const { return ___isEncryptionAvailable_34; }
	inline bool* get_address_of_isEncryptionAvailable_34() { return &___isEncryptionAvailable_34; }
	inline void set_isEncryptionAvailable_34(bool value)
	{
		___isEncryptionAvailable_34 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_35() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___outgoingCommandsInStream_35)); }
	inline int32_t get_outgoingCommandsInStream_35() const { return ___outgoingCommandsInStream_35; }
	inline int32_t* get_address_of_outgoingCommandsInStream_35() { return &___outgoingCommandsInStream_35; }
	inline void set_outgoingCommandsInStream_35(int32_t value)
	{
		___outgoingCommandsInStream_35 = value;
	}

	inline static int32_t get_offset_of_CryptoProvider_37() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___CryptoProvider_37)); }
	inline RuntimeObject* get_CryptoProvider_37() const { return ___CryptoProvider_37; }
	inline RuntimeObject** get_address_of_CryptoProvider_37() { return &___CryptoProvider_37; }
	inline void set_CryptoProvider_37(RuntimeObject* value)
	{
		___CryptoProvider_37 = value;
		Il2CppCodeGenWriteBarrier((&___CryptoProvider_37), value);
	}

	inline static int32_t get_offset_of_lagRandomizer_38() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___lagRandomizer_38)); }
	inline Random_t108471755 * get_lagRandomizer_38() const { return ___lagRandomizer_38; }
	inline Random_t108471755 ** get_address_of_lagRandomizer_38() { return &___lagRandomizer_38; }
	inline void set_lagRandomizer_38(Random_t108471755 * value)
	{
		___lagRandomizer_38 = value;
		Il2CppCodeGenWriteBarrier((&___lagRandomizer_38), value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_39() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___NetSimListOutgoing_39)); }
	inline LinkedList_1_t1884284488 * get_NetSimListOutgoing_39() const { return ___NetSimListOutgoing_39; }
	inline LinkedList_1_t1884284488 ** get_address_of_NetSimListOutgoing_39() { return &___NetSimListOutgoing_39; }
	inline void set_NetSimListOutgoing_39(LinkedList_1_t1884284488 * value)
	{
		___NetSimListOutgoing_39 = value;
		Il2CppCodeGenWriteBarrier((&___NetSimListOutgoing_39), value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_40() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___NetSimListIncoming_40)); }
	inline LinkedList_1_t1884284488 * get_NetSimListIncoming_40() const { return ___NetSimListIncoming_40; }
	inline LinkedList_1_t1884284488 ** get_address_of_NetSimListIncoming_40() { return &___NetSimListIncoming_40; }
	inline void set_NetSimListIncoming_40(LinkedList_1_t1884284488 * value)
	{
		___NetSimListIncoming_40 = value;
		Il2CppCodeGenWriteBarrier((&___NetSimListIncoming_40), value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_41() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___networkSimulationSettings_41)); }
	inline NetworkSimulationSet_t2000596048 * get_networkSimulationSettings_41() const { return ___networkSimulationSettings_41; }
	inline NetworkSimulationSet_t2000596048 ** get_address_of_networkSimulationSettings_41() { return &___networkSimulationSettings_41; }
	inline void set_networkSimulationSettings_41(NetworkSimulationSet_t2000596048 * value)
	{
		___networkSimulationSettings_41 = value;
		Il2CppCodeGenWriteBarrier((&___networkSimulationSettings_41), value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_42() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___TrafficPackageHeaderSize_42)); }
	inline int32_t get_TrafficPackageHeaderSize_42() const { return ___TrafficPackageHeaderSize_42; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_42() { return &___TrafficPackageHeaderSize_42; }
	inline void set_TrafficPackageHeaderSize_42(int32_t value)
	{
		___TrafficPackageHeaderSize_42 = value;
	}

	inline static int32_t get_offset_of_commandLogSize_43() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___commandLogSize_43)); }
	inline int32_t get_commandLogSize_43() const { return ___commandLogSize_43; }
	inline int32_t* get_address_of_commandLogSize_43() { return &___commandLogSize_43; }
	inline void set_commandLogSize_43(int32_t value)
	{
		___commandLogSize_43 = value;
	}

	inline static int32_t get_offset_of_CommandLog_44() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___CommandLog_44)); }
	inline Queue_1_t4063950034 * get_CommandLog_44() const { return ___CommandLog_44; }
	inline Queue_1_t4063950034 ** get_address_of_CommandLog_44() { return &___CommandLog_44; }
	inline void set_CommandLog_44(Queue_1_t4063950034 * value)
	{
		___CommandLog_44 = value;
		Il2CppCodeGenWriteBarrier((&___CommandLog_44), value);
	}

	inline static int32_t get_offset_of_InReliableLog_45() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011, ___InReliableLog_45)); }
	inline Queue_1_t4063950034 * get_InReliableLog_45() const { return ___InReliableLog_45; }
	inline Queue_1_t4063950034 ** get_address_of_InReliableLog_45() { return &___InReliableLog_45; }
	inline void set_InReliableLog_45(Queue_1_t4063950034 * value)
	{
		___InReliableLog_45 = value;
		Il2CppCodeGenWriteBarrier((&___InReliableLog_45), value);
	}
};

struct PeerBase_t2956237011_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t3673929283 * ___MessageBufferPool_36;

public:
	inline static int32_t get_offset_of_peerCount_22() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011_StaticFields, ___peerCount_22)); }
	inline int16_t get_peerCount_22() const { return ___peerCount_22; }
	inline int16_t* get_address_of_peerCount_22() { return &___peerCount_22; }
	inline void set_peerCount_22(int16_t value)
	{
		___peerCount_22 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_36() { return static_cast<int32_t>(offsetof(PeerBase_t2956237011_StaticFields, ___MessageBufferPool_36)); }
	inline Queue_1_t3673929283 * get_MessageBufferPool_36() const { return ___MessageBufferPool_36; }
	inline Queue_1_t3673929283 ** get_address_of_MessageBufferPool_36() { return &___MessageBufferPool_36; }
	inline void set_MessageBufferPool_36(Queue_1_t3673929283 * value)
	{
		___MessageBufferPool_36 = value;
		Il2CppCodeGenWriteBarrier((&___MessageBufferPool_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERBASE_T2956237011_H
#ifndef SENDOPTIONS_T967321410_H
#define SENDOPTIONS_T967321410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SendOptions
struct  SendOptions_t967321410 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_t967321410, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_t967321410, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_t967321410, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_t967321410_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_t967321410  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_t967321410  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_t967321410_StaticFields, ___SendReliable_0)); }
	inline SendOptions_t967321410  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_t967321410 * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_t967321410  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_t967321410_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_t967321410  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_t967321410 * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_t967321410  value)
	{
		___SendUnreliable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t967321410_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t967321410_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
#endif // SENDOPTIONS_T967321410_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef WIN32EXCEPTION_T3234146298_H
#define WIN32EXCEPTION_T3234146298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3234146298  : public ExternalException_t3544951457
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t3234146298_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t736164020 * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t736164020 * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t736164020 ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t736164020 * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_ErrorMessage_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3234146298_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef IPADDRESS_T241777590_H
#define IPADDRESS_T241777590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t241777590  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t3326319531* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ToString_6), value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t3326319531* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t3326319531** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t3326319531* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_11), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t241777590_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t241777590 * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t241777590 * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t241777590 * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t241777590 * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t241777590 * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t241777590 * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t241777590 * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Any_0)); }
	inline IPAddress_t241777590 * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t241777590 ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t241777590 * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((&___Any_0), value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Loopback_1)); }
	inline IPAddress_t241777590 * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t241777590 ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t241777590 * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_1), value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t241777590 * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t241777590 ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t241777590 * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_2), value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___None_3)); }
	inline IPAddress_t241777590 * get_None_3() const { return ___None_3; }
	inline IPAddress_t241777590 ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t241777590 * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((&___None_3), value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t241777590 * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t241777590 * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_7), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t241777590 * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t241777590 * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_8), value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t241777590 * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t241777590 ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t241777590 * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T241777590_H
#ifndef SOCKET_T1119025450_H
#define SOCKET_T1119025450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t1119025450  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t610293888 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t982345378 * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2974092902 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2974092902 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_Handle_13)); }
	inline SafeSocketHandle_t610293888 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t610293888 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t610293888 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_Handle_13), value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___seed_endpoint_14)); }
	inline EndPoint_t982345378 * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t982345378 ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t982345378 * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_14), value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___ReadSem_15)); }
	inline SemaphoreSlim_t2974092902 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t2974092902 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((&___ReadSem_15), value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___WriteSem_16)); }
	inline SemaphoreSlim_t2974092902 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t2974092902 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((&___WriteSem_16), value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}
};

struct Socket_t1119025450_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3962456242 * ___AcceptAsyncCallback_22;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptReceiveCallback_24;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3962456242 * ___ConnectAsyncCallback_25;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_t705871752 * ___BeginConnectCallback_26;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3962456242 * ___DisconnectAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_t705871752 * ___BeginDisconnectCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveGenericCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveFromAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveFromCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3962456242 * ___SendAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_t705871752 * ___BeginSendGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3962456242 * ___SendToAsyncCallback_36;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_22() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___AcceptAsyncCallback_22)); }
	inline AsyncCallback_t3962456242 * get_AcceptAsyncCallback_22() const { return ___AcceptAsyncCallback_22; }
	inline AsyncCallback_t3962456242 ** get_address_of_AcceptAsyncCallback_22() { return &___AcceptAsyncCallback_22; }
	inline void set_AcceptAsyncCallback_22(AsyncCallback_t3962456242 * value)
	{
		___AcceptAsyncCallback_22 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptAsyncCallback_22), value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_23() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptCallback_23)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptCallback_23() const { return ___BeginAcceptCallback_23; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptCallback_23() { return &___BeginAcceptCallback_23; }
	inline void set_BeginAcceptCallback_23(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptCallback_23 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptCallback_23), value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_24() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptReceiveCallback_24)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptReceiveCallback_24() const { return ___BeginAcceptReceiveCallback_24; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptReceiveCallback_24() { return &___BeginAcceptReceiveCallback_24; }
	inline void set_BeginAcceptReceiveCallback_24(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptReceiveCallback_24 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptReceiveCallback_24), value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_25() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ConnectAsyncCallback_25)); }
	inline AsyncCallback_t3962456242 * get_ConnectAsyncCallback_25() const { return ___ConnectAsyncCallback_25; }
	inline AsyncCallback_t3962456242 ** get_address_of_ConnectAsyncCallback_25() { return &___ConnectAsyncCallback_25; }
	inline void set_ConnectAsyncCallback_25(AsyncCallback_t3962456242 * value)
	{
		___ConnectAsyncCallback_25 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectAsyncCallback_25), value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_26() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginConnectCallback_26)); }
	inline IOAsyncCallback_t705871752 * get_BeginConnectCallback_26() const { return ___BeginConnectCallback_26; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginConnectCallback_26() { return &___BeginConnectCallback_26; }
	inline void set_BeginConnectCallback_26(IOAsyncCallback_t705871752 * value)
	{
		___BeginConnectCallback_26 = value;
		Il2CppCodeGenWriteBarrier((&___BeginConnectCallback_26), value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___DisconnectAsyncCallback_27)); }
	inline AsyncCallback_t3962456242 * get_DisconnectAsyncCallback_27() const { return ___DisconnectAsyncCallback_27; }
	inline AsyncCallback_t3962456242 ** get_address_of_DisconnectAsyncCallback_27() { return &___DisconnectAsyncCallback_27; }
	inline void set_DisconnectAsyncCallback_27(AsyncCallback_t3962456242 * value)
	{
		___DisconnectAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((&___DisconnectAsyncCallback_27), value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_28() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginDisconnectCallback_28)); }
	inline IOAsyncCallback_t705871752 * get_BeginDisconnectCallback_28() const { return ___BeginDisconnectCallback_28; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginDisconnectCallback_28() { return &___BeginDisconnectCallback_28; }
	inline void set_BeginDisconnectCallback_28(IOAsyncCallback_t705871752 * value)
	{
		___BeginDisconnectCallback_28 = value;
		Il2CppCodeGenWriteBarrier((&___BeginDisconnectCallback_28), value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveAsyncCallback_29)); }
	inline AsyncCallback_t3962456242 * get_ReceiveAsyncCallback_29() const { return ___ReceiveAsyncCallback_29; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveAsyncCallback_29() { return &___ReceiveAsyncCallback_29; }
	inline void set_ReceiveAsyncCallback_29(AsyncCallback_t3962456242 * value)
	{
		___ReceiveAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveAsyncCallback_29), value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_30() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveCallback_30)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveCallback_30() const { return ___BeginReceiveCallback_30; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveCallback_30() { return &___BeginReceiveCallback_30; }
	inline void set_BeginReceiveCallback_30(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveCallback_30 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveCallback_30), value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_31() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveGenericCallback_31)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveGenericCallback_31() const { return ___BeginReceiveGenericCallback_31; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveGenericCallback_31() { return &___BeginReceiveGenericCallback_31; }
	inline void set_BeginReceiveGenericCallback_31(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveGenericCallback_31 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveGenericCallback_31), value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveFromAsyncCallback_32)); }
	inline AsyncCallback_t3962456242 * get_ReceiveFromAsyncCallback_32() const { return ___ReceiveFromAsyncCallback_32; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveFromAsyncCallback_32() { return &___ReceiveFromAsyncCallback_32; }
	inline void set_ReceiveFromAsyncCallback_32(AsyncCallback_t3962456242 * value)
	{
		___ReceiveFromAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveFromAsyncCallback_32), value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_33() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveFromCallback_33)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveFromCallback_33() const { return ___BeginReceiveFromCallback_33; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveFromCallback_33() { return &___BeginReceiveFromCallback_33; }
	inline void set_BeginReceiveFromCallback_33(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveFromCallback_33 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveFromCallback_33), value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendAsyncCallback_34)); }
	inline AsyncCallback_t3962456242 * get_SendAsyncCallback_34() const { return ___SendAsyncCallback_34; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendAsyncCallback_34() { return &___SendAsyncCallback_34; }
	inline void set_SendAsyncCallback_34(AsyncCallback_t3962456242 * value)
	{
		___SendAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___SendAsyncCallback_34), value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginSendGenericCallback_35)); }
	inline IOAsyncCallback_t705871752 * get_BeginSendGenericCallback_35() const { return ___BeginSendGenericCallback_35; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginSendGenericCallback_35() { return &___BeginSendGenericCallback_35; }
	inline void set_BeginSendGenericCallback_35(IOAsyncCallback_t705871752 * value)
	{
		___BeginSendGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((&___BeginSendGenericCallback_35), value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendToAsyncCallback_36)); }
	inline AsyncCallback_t3962456242 * get_SendToAsyncCallback_36() const { return ___SendToAsyncCallback_36; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendToAsyncCallback_36() { return &___SendToAsyncCallback_36; }
	inline void set_SendToAsyncCallback_36(AsyncCallback_t3962456242 * value)
	{
		___SendToAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((&___SendToAsyncCallback_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T1119025450_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MYACTION_T2462891903_H
#define MYACTION_T2462891903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PeerBase/MyAction
struct  MyAction_t2462891903  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYACTION_T2462891903_H
#ifndef SERIALIZEMETHOD_T1264674278_H
#define SERIALIZEMETHOD_T1264674278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SerializeMethod
struct  SerializeMethod_t1264674278  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEMETHOD_T1264674278_H
#ifndef SERIALIZESTREAMMETHOD_T2169445464_H
#define SERIALIZESTREAMMETHOD_T2169445464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SerializeStreamMethod
struct  SerializeStreamMethod_t2169445464  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZESTREAMMETHOD_T2169445464_H
#ifndef SOCKETTCP_T182200829_H
#define SOCKETTCP_T182200829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketTcp
struct  SocketTcp_t182200829  : public IPhotonSocket_t2066969247
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcp::sock
	Socket_t1119025450 * ___sock_10;
	// System.Object ExitGames.Client.Photon.SocketTcp::syncer
	RuntimeObject * ___syncer_11;

public:
	inline static int32_t get_offset_of_sock_10() { return static_cast<int32_t>(offsetof(SocketTcp_t182200829, ___sock_10)); }
	inline Socket_t1119025450 * get_sock_10() const { return ___sock_10; }
	inline Socket_t1119025450 ** get_address_of_sock_10() { return &___sock_10; }
	inline void set_sock_10(Socket_t1119025450 * value)
	{
		___sock_10 = value;
		Il2CppCodeGenWriteBarrier((&___sock_10), value);
	}

	inline static int32_t get_offset_of_syncer_11() { return static_cast<int32_t>(offsetof(SocketTcp_t182200829, ___syncer_11)); }
	inline RuntimeObject * get_syncer_11() const { return ___syncer_11; }
	inline RuntimeObject ** get_address_of_syncer_11() { return &___syncer_11; }
	inline void set_syncer_11(RuntimeObject * value)
	{
		___syncer_11 = value;
		Il2CppCodeGenWriteBarrier((&___syncer_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETTCP_T182200829_H
#ifndef SOCKETUDP_T1337106072_H
#define SOCKETUDP_T1337106072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketUdp
struct  SocketUdp_t1337106072  : public IPhotonSocket_t2066969247
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketUdp::sock
	Socket_t1119025450 * ___sock_10;
	// System.Object ExitGames.Client.Photon.SocketUdp::syncer
	RuntimeObject * ___syncer_11;

public:
	inline static int32_t get_offset_of_sock_10() { return static_cast<int32_t>(offsetof(SocketUdp_t1337106072, ___sock_10)); }
	inline Socket_t1119025450 * get_sock_10() const { return ___sock_10; }
	inline Socket_t1119025450 ** get_address_of_sock_10() { return &___sock_10; }
	inline void set_sock_10(Socket_t1119025450 * value)
	{
		___sock_10 = value;
		Il2CppCodeGenWriteBarrier((&___sock_10), value);
	}

	inline static int32_t get_offset_of_syncer_11() { return static_cast<int32_t>(offsetof(SocketUdp_t1337106072, ___syncer_11)); }
	inline RuntimeObject * get_syncer_11() const { return ___syncer_11; }
	inline RuntimeObject ** get_address_of_syncer_11() { return &___syncer_11; }
	inline void set_syncer_11(RuntimeObject * value)
	{
		___syncer_11 = value;
		Il2CppCodeGenWriteBarrier((&___syncer_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETUDP_T1337106072_H
#ifndef INTEGERMILLISECONDSDELEGATE_T651311252_H
#define INTEGERMILLISECONDSDELEGATE_T651311252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct  IntegerMillisecondsDelegate_t651311252  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGERMILLISECONDSDELEGATE_T651311252_H
#ifndef TPEER_T1497954812_H
#define TPEER_T1497954812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.TPeer
struct  TPeer_t1497954812  : public PeerBase_t2956237011
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_t3962907151 * ___incomingList_46;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t1004777235 * ___outgoingStream_47;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_48;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_t4116647657* ___pingRequest_49;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_t4116647657* ___messageHeader_52;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_53;

public:
	inline static int32_t get_offset_of_incomingList_46() { return static_cast<int32_t>(offsetof(TPeer_t1497954812, ___incomingList_46)); }
	inline Queue_1_t3962907151 * get_incomingList_46() const { return ___incomingList_46; }
	inline Queue_1_t3962907151 ** get_address_of_incomingList_46() { return &___incomingList_46; }
	inline void set_incomingList_46(Queue_1_t3962907151 * value)
	{
		___incomingList_46 = value;
		Il2CppCodeGenWriteBarrier((&___incomingList_46), value);
	}

	inline static int32_t get_offset_of_outgoingStream_47() { return static_cast<int32_t>(offsetof(TPeer_t1497954812, ___outgoingStream_47)); }
	inline List_1_t1004777235 * get_outgoingStream_47() const { return ___outgoingStream_47; }
	inline List_1_t1004777235 ** get_address_of_outgoingStream_47() { return &___outgoingStream_47; }
	inline void set_outgoingStream_47(List_1_t1004777235 * value)
	{
		___outgoingStream_47 = value;
		Il2CppCodeGenWriteBarrier((&___outgoingStream_47), value);
	}

	inline static int32_t get_offset_of_lastPingResult_48() { return static_cast<int32_t>(offsetof(TPeer_t1497954812, ___lastPingResult_48)); }
	inline int32_t get_lastPingResult_48() const { return ___lastPingResult_48; }
	inline int32_t* get_address_of_lastPingResult_48() { return &___lastPingResult_48; }
	inline void set_lastPingResult_48(int32_t value)
	{
		___lastPingResult_48 = value;
	}

	inline static int32_t get_offset_of_pingRequest_49() { return static_cast<int32_t>(offsetof(TPeer_t1497954812, ___pingRequest_49)); }
	inline ByteU5BU5D_t4116647657* get_pingRequest_49() const { return ___pingRequest_49; }
	inline ByteU5BU5D_t4116647657** get_address_of_pingRequest_49() { return &___pingRequest_49; }
	inline void set_pingRequest_49(ByteU5BU5D_t4116647657* value)
	{
		___pingRequest_49 = value;
		Il2CppCodeGenWriteBarrier((&___pingRequest_49), value);
	}

	inline static int32_t get_offset_of_messageHeader_52() { return static_cast<int32_t>(offsetof(TPeer_t1497954812, ___messageHeader_52)); }
	inline ByteU5BU5D_t4116647657* get_messageHeader_52() const { return ___messageHeader_52; }
	inline ByteU5BU5D_t4116647657** get_address_of_messageHeader_52() { return &___messageHeader_52; }
	inline void set_messageHeader_52(ByteU5BU5D_t4116647657* value)
	{
		___messageHeader_52 = value;
		Il2CppCodeGenWriteBarrier((&___messageHeader_52), value);
	}

	inline static int32_t get_offset_of_DoFraming_53() { return static_cast<int32_t>(offsetof(TPeer_t1497954812, ___DoFraming_53)); }
	inline bool get_DoFraming_53() const { return ___DoFraming_53; }
	inline bool* get_address_of_DoFraming_53() { return &___DoFraming_53; }
	inline void set_DoFraming_53(bool value)
	{
		___DoFraming_53 = value;
	}
};

struct TPeer_t1497954812_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_t4116647657* ___tcpFramedMessageHead_50;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_t4116647657* ___tcpMsgHead_51;

public:
	inline static int32_t get_offset_of_tcpFramedMessageHead_50() { return static_cast<int32_t>(offsetof(TPeer_t1497954812_StaticFields, ___tcpFramedMessageHead_50)); }
	inline ByteU5BU5D_t4116647657* get_tcpFramedMessageHead_50() const { return ___tcpFramedMessageHead_50; }
	inline ByteU5BU5D_t4116647657** get_address_of_tcpFramedMessageHead_50() { return &___tcpFramedMessageHead_50; }
	inline void set_tcpFramedMessageHead_50(ByteU5BU5D_t4116647657* value)
	{
		___tcpFramedMessageHead_50 = value;
		Il2CppCodeGenWriteBarrier((&___tcpFramedMessageHead_50), value);
	}

	inline static int32_t get_offset_of_tcpMsgHead_51() { return static_cast<int32_t>(offsetof(TPeer_t1497954812_StaticFields, ___tcpMsgHead_51)); }
	inline ByteU5BU5D_t4116647657* get_tcpMsgHead_51() const { return ___tcpMsgHead_51; }
	inline ByteU5BU5D_t4116647657** get_address_of_tcpMsgHead_51() { return &___tcpMsgHead_51; }
	inline void set_tcpMsgHead_51(ByteU5BU5D_t4116647657* value)
	{
		___tcpMsgHead_51 = value;
		Il2CppCodeGenWriteBarrier((&___tcpMsgHead_51), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TPEER_T1497954812_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
#ifndef SOCKETEXCEPTION_T3852068672_H
#define SOCKETEXCEPTION_T3852068672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketException
struct  SocketException_t3852068672  : public Win32Exception_t3234146298
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t982345378 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t3852068672, ___m_EndPoint_20)); }
	inline EndPoint_t982345378 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t982345378 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t982345378 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_EndPoint_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETEXCEPTION_T3852068672_H
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
#ifndef THREADSTART_T1006689297_H
#define THREADSTART_T1006689297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1006689297  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1006689297_H
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
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
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
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
extern "C" IL2CPP_METHOD_ATTR bool Func_1_Invoke_m370346740_gshared (Func_1_t3822001908 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m2068090025_gshared (Queue_1_t2926365658 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Clear_m4070494218_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m2346748943_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m705142683_gshared (Dictionary_2_t1405253484 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1883976453_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3219050175_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m390015880_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, const RuntimeMethod* method);

// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_m237473686 (SendOptions_t967321410 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol18::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Protocol18__ctor_m2178585535 (Protocol18_t1857127509 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol16::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Protocol16__ctor_m2178592269 (Protocol16_t1856210005 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stopwatch__ctor_m2673586837 (Stopwatch_t305734070 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C" IL2CPP_METHOD_ATTR void Stopwatch_Start_m1142799187 (Stopwatch_t305734070 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" IL2CPP_METHOD_ATTR void IPhotonSocket__ctor_m40935805 (IPhotonSocket_t2066969247 * __this, PeerBase_t2956237011 * ___peerBase0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
extern "C" IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_m3414427787 (IPhotonSocket_t2066969247 * __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_m3998651287 (IPhotonSocket_t2066969247 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
extern "C" IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m3369138945 (IPhotonSocket_t2066969247 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
extern "C" IL2CPP_METHOD_ATTR bool Socket_get_Connected_m2875145796 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
extern "C" IL2CPP_METHOD_ATTR void Socket_Close_m3289097516 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_m2947957953 (IPhotonSocket_t2066969247 * __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
extern "C" IL2CPP_METHOD_ATTR bool IPhotonSocket_Connect_m622616089 (IPhotonSocket_t2066969247 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ThreadStart__ctor_m3250019360 (ThreadStart_t1006689297 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C" IL2CPP_METHOD_ATTR void Thread__ctor_m777188137 (Thread_t2300836069 * __this, ThreadStart_t1006689297 * p0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m3868016371 (Thread_t2300836069 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2860771284 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C" IL2CPP_METHOD_ATTR int32_t Socket_Send_m2509318470 (Socket_t1119025450 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
extern "C" IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m3838190543 (IPhotonSocket_t2066969247 * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern "C" IL2CPP_METHOD_ATTR EndPoint_t982345378 * Socket_get_LocalEndPoint_m456692531 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
extern "C" IL2CPP_METHOD_ATTR EndPoint_t982345378 * Socket_get_RemoteEndPoint_m3755127488 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_IsBound()
extern "C" IL2CPP_METHOD_ATTR bool Socket_get_IsBound_m1221034268 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m321374284 (IPhotonSocket_t2066969247 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
extern "C" IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_m1042627442 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_AddressResolvedAsIpv6()
extern "C" IL2CPP_METHOD_ATTR bool IPhotonSocket_get_AddressResolvedAsIpv6_m3951519959 (IPhotonSocket_t2066969247 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
extern "C" IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_m3202114139 (IPhotonSocket_t2066969247 * __this, int32_t ___statusCode0, const RuntimeMethod* method);
// System.Net.IPAddress ExitGames.Client.Photon.IPhotonSocket::GetIpAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR IPAddress_t241777590 * IPhotonSocket_GetIpAddress_m1722057511 (RuntimeObject * __this /* static, unused */, String_t* ___address0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C" IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1010663936 (IPAddress_t241777590 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C" IL2CPP_METHOD_ATTR void Socket__ctor_m3479084642 (Socket_t1119025450 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Socket_set_NoDelay_m3209939872 (Socket_t1119025450 * __this, bool p0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_DisconnectTimeout()
extern "C" IL2CPP_METHOD_ATTR int32_t PeerBase_get_DisconnectTimeout_m603764922 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_ReceiveTimeout(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Socket_set_ReceiveTimeout_m3726240067 (Socket_t1119025450 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_SendTimeout(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Socket_set_SendTimeout_m2494155708 (Socket_t1119025450 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
extern "C" IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m1939376162 (IPhotonSocket_t2066969247 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Socket_Connect_m1862028144 (Socket_t1119025450 * __this, IPAddress_t241777590 * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::IsIpv6SimpleCheck(System.Net.IPAddress)
extern "C" IL2CPP_METHOD_ATTR bool IPhotonSocket_IsIpv6SimpleCheck_m2020147281 (IPhotonSocket_t2066969247 * __this, IPAddress_t241777590 * ___address0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_AddressResolvedAsIpv6(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void IPhotonSocket_set_AddressResolvedAsIpv6_m4202628431 (IPhotonSocket_t2066969247 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
extern "C" IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_MTU_m3051045953 (IPhotonSocket_t2066969247 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m1585703076 (StreamBuffer_t3827669789 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_SetLength_m2522285437 (StreamBuffer_t3827669789 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C" IL2CPP_METHOD_ATTR int32_t Socket_Receive_m3794758455 (Socket_t1119025450 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern "C" IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m2767669540 (SocketException_t3852068672 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SocketException__ctor_m1369613389 (SocketException_t3852068672 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_m1283719406 (IPhotonSocket_t2066969247 * __this, ByteU5BU5D_t4116647657* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
extern "C" IL2CPP_METHOD_ATTR bool PeerBase_get_TrafficStatsEnabled_m3426645147 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsIncoming()
extern "C" IL2CPP_METHOD_ATTR TrafficStats_t1302902347 * PeerBase_get_TrafficStatsIncoming_m3832710925 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_m1486410076 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m1368676294 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::SetCapacityMinimum(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_SetCapacityMinimum_m807430420 (StreamBuffer_t3827669789 * __this, int32_t ___neededSize0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_Write_m17470745 (StreamBuffer_t3827669789 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___srcOffset1, int32_t ___count2, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* StreamBuffer_GetBuffer_m3307584100 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Position()
extern "C" IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Position_m1534163681 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_set_Position_m3199317582 (StreamBuffer_t3827669789 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* StreamBuffer_ToArray_m3109285386 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Length_m1616542868 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR int32_t Socket_Receive_m1491150995 (Socket_t1119025450 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.StreamBuffer::CheckSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool StreamBuffer_CheckSize_m1370664956 (StreamBuffer_t3827669789 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor()
inline void List_1__ctor_m496368285 (List_1_t3349700990 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3349700990 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Add(!0)
inline void List_1_Add_m919845895 (List_1_t3349700990 * __this, MethodInfo_t * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3349700990 *, MethodInfo_t *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m3991646450 (IntegerMillisecondsDelegate_t651311252 * __this, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m2029470730 (RuntimeObject * __this /* static, unused */, Func_1_t3822001908 * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m219761943 (U3CU3Ec__DisplayClass6_0_t2492842391 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::.ctor()
inline void List_1__ctor_m184824557 (List_1_t3772910811 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3772910811 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Thread_set_Name_m3537838048 (Thread_t2300836069 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::Add(!0)
inline void List_1_Add_m1133289729 (List_1_t3772910811 * __this, Thread_t2300836069 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3772910811 *, Thread_t2300836069 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Thread>::get_Count()
inline int32_t List_1_get_Count_m3880499525 (List_1_t3772910811 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3772910811 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
extern "C" IL2CPP_METHOD_ATTR void Debug_WriteLine_m3834261362 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_m353758348 (RuntimeObject * __this /* static, unused */, Exception_t * ___throwable0, TextWriter_t3478189236 * ___stream1, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m937902345 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m1908829707 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m921870684 (StringBuilder_t * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m3255666490 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String System.BitConverter::ToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m3464863163 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.UInt32[] ExitGames.Client.Photon.SupportClass::InitializeTable(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR UInt32U5BU5D_t2770800703* SupportClass_InitializeTable_m1028104517 (RuntimeObject * __this /* static, unused */, uint32_t ___polynomial0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_m2384978958 (IntegerMillisecondsDelegate_t651311252 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m794017737 (U3CU3Ec_t356392828 * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m2088073110 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Thread_Sleep_m483098292 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_m370346740 (Func_1_t3822001908 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t3822001908 *, const RuntimeMethod*))Func_1_Invoke_m370346740_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor(System.Int32)
inline void Queue_1__ctor_m2913697457 (Queue_1_t3962907151 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3962907151 *, int32_t, const RuntimeMethod*))Queue_1__ctor_m2068090025_gshared)(__this, p0, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PeerBase__ctor_m2995409454 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
extern "C" IL2CPP_METHOD_ATTR void PeerBase_InitPeerBase_m1190391789 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PeerBase_get_Listener_m753086860 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::get_debugOut()
extern "C" IL2CPP_METHOD_ATTR uint8_t PeerBase_get_debugOut_m755103680 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_m2509166174 (PeerBase_t2956237011 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::.ctor()
inline void List_1__ctor_m1532814905 (List_1_t1004777235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1004777235 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.String ExitGames.Client.Photon.PeerBase::PepareWebSocketUrl(System.String,System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* PeerBase_PepareWebSocketUrl_m766621361 (PeerBase_t2956237011 * __this, String_t* ___serverAddress0, String_t* ___appId1, RuntimeObject * ___customData2, const RuntimeMethod* method);
// System.Type ExitGames.Client.Photon.PeerBase::get_SocketImplementation()
extern "C" IL2CPP_METHOD_ATTR Type_t * PeerBase_get_SocketImplementation_m2865771389 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m94526014 (RuntimeObject * __this /* static, unused */, Type_t * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" IL2CPP_METHOD_ATTR void SocketTcp__ctor_m3106271083 (SocketTcp_t182200829 * __this, PeerBase_t2956237011 * ___npeer0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m2293059696 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.PeerBase::PrepareConnectData(System.String,System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* PeerBase_PrepareConnectData_m2278469355 (PeerBase_t2956237011 * __this, String_t* ___serverAddress0, String_t* ___appID1, RuntimeObject * ___custom2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_m592328192 (TPeer_t1497954812 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Clear()
inline void Queue_1_Clear_m3276543074 (Queue_1_t3962907151 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3962907151 *, const RuntimeMethod*))Queue_1_Clear_m4070494218_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
extern "C" IL2CPP_METHOD_ATTR void PeerBase_EnqueueStatusCallback_m765575269 (PeerBase_t2956237011 * __this, int32_t ___statusValue0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
extern "C" IL2CPP_METHOD_ATTR void TPeer_SendPing_m232307456 (TPeer_t1497954812 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void Protocol_Serialize_m2793941309 (RuntimeObject * __this /* static, unused */, int32_t ___value0, ByteU5BU5D_t4116647657* ___target1, int32_t* ___targetOffset2, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsOutgoing()
extern "C" IL2CPP_METHOD_ATTR TrafficStats_t1302902347 * PeerBase_get_TrafficStatsOutgoing_m3028454514 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m2954381143 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m2373240368 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_m3796906114 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_m350749640 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_m3783491252 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_m1514707185 (TPeer_t1497954812 * __this, int32_t ___deliveryMode0, StreamBuffer_t3827669789 * ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MyAction__ctor_m1999721389 (MyAction_t2462891903 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C" IL2CPP_METHOD_ATTR void PeerBase_EnqueueActionForDispatch_m1755888291 (PeerBase_t2956237011 * __this, MyAction_t2462891903 * ___action0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::get_Count()
inline int32_t Queue_1_get_Count_m3416801760 (Queue_1_t2309151397 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t2309151397 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Dequeue()
inline MyAction_t2462891903 * Queue_1_Dequeue_m3140887159 (Queue_1_t2309151397 * __this, const RuntimeMethod* method)
{
	return ((  MyAction_t2462891903 * (*) (Queue_1_t2309151397 *, const RuntimeMethod*))Queue_1_Dequeue_m2346748943_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
extern "C" IL2CPP_METHOD_ATTR void MyAction_Invoke_m3640138146 (MyAction_t2462891903 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Byte[]>::get_Count()
inline int32_t Queue_1_get_Count_m3906391565 (Queue_1_t3962907151 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3962907151 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Byte[]>::Dequeue()
inline ByteU5BU5D_t4116647657* Queue_1_Dequeue_m3292979456 (Queue_1_t3962907151 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_t4116647657* (*) (Queue_1_t3962907151 *, const RuntimeMethod*))Queue_1_Dequeue_m2346748943_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m417559151 (StreamBuffer_t3827669789 * __this, ByteU5BU5D_t4116647657* ___buf0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
extern "C" IL2CPP_METHOD_ATTR bool IPhotonSocket_get_Connected_m2854685997 (IPhotonSocket_t2066969247 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timePingInterval()
extern "C" IL2CPP_METHOD_ATTR int32_t PeerBase_get_timePingInterval_m4137618370 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Item(System.Int32)
inline StreamBuffer_t3827669789 * List_1_get_Item_m1470117044 (List_1_t1004777235 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  StreamBuffer_t3827669789 * (*) (List_1_t1004777235 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TPeer_SendData_m1400878091 (TPeer_t1497954812 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___length1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::MessageBufferPoolPut(ExitGames.Client.Photon.StreamBuffer)
extern "C" IL2CPP_METHOD_ATTR void PeerBase_MessageBufferPoolPut_m1808608170 (RuntimeObject * __this /* static, unused */, StreamBuffer_t3827669789 * ___buff0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Count()
inline int32_t List_1_get_Count_m2693864399 (List_1_t1004777235 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1004777235 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Clear()
inline void List_1_Clear_m3161676039 (List_1_t1004777235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1004777235 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Byte ExitGames.Client.Photon.PeerBase::get_ChannelCount()
extern "C" IL2CPP_METHOD_ATTR uint8_t PeerBase_get_ChannelCount_m3062422784 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::MessageBufferPoolGet()
extern "C" IL2CPP_METHOD_ATTR StreamBuffer_t3827669789 * PeerBase_MessageBufferPoolGet_m506376142 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m4164965325 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, RuntimeObject * p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Add(!0)
inline void List_1_Add_m3964035183 (List_1_t1004777235 * __this, StreamBuffer_t3827669789 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1004777235 *, StreamBuffer_t3827669789 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::get_TrafficStatsGameLevel()
extern "C" IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t4013908777 * PeerBase_get_TrafficStatsGameLevel_m3076803185 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_m1756829521 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___operationBytes0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m705142683 (Dictionary_2_t1405253484 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1405253484 *, const RuntimeMethod*))Dictionary_2__ctor_m705142683_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m1883976453 (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1405253484 *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m1883976453_gshared)(__this, p0, p1, method);
}
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
extern "C" IL2CPP_METHOD_ATTR NetworkSimulationSet_t2000596048 * PeerBase_get_NetworkSimulationSettings_m1440651547 (PeerBase_t2956237011 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::get_IsSimulationEnabled()
extern "C" IL2CPP_METHOD_ATTR bool NetworkSimulationSet_get_IsSimulationEnabled_m2067533518 (NetworkSimulationSet_t2000596048 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void PeerBase_SendNetworkSimulated_m151505705 (PeerBase_t2956237011 * __this, ByteU5BU5D_t4116647657* ___dataToSend0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_m3074858457 (RuntimeObject * __this /* static, unused */, Exception_t * ___throwable0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void PeerBase_EnqueueDebugReturn_m2353825928 (PeerBase_t2956237011 * __this, uint8_t ___level0, String_t* ___debugReturn1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(!0)
inline void Queue_1_Enqueue_m2809316599 (Queue_1_t3962907151 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3962907151 *, ByteU5BU5D_t4116647657*, const RuntimeMethod*))Queue_1_Enqueue_m3219050175_gshared)(__this, p0, method);
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m1294536143 (TPeer_t1497954812 * __this, ByteU5BU5D_t4116647657* ___inbuff0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void Protocol_Deserialize_m3416339765 (RuntimeObject * __this /* static, unused */, int32_t* ___value0, ByteU5BU5D_t4116647657* ___source1, int32_t* ___offset2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PeerBase_UpdateRoundTripTimeAndVariance_m848396558 (PeerBase_t2956237011 * __this, int32_t ___lastRoundtripTime0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m390015880 (Dictionary_2_t1405253484 * __this, uint8_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t1405253484 *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m390015880_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m331257984 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m4086795527 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m1836998829 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m1236928114 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_m3421439682 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_m936111460 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_m658012815 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_m2804408088 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_m1849822883 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m3213444035 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_m3595092292 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_m482813742 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_m987114278 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m2214626654 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m1577946692 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m3053853297 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_m616938761 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_m1944708715 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m1327790089 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_m1617082294 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_m513992761 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m3450799483 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m2850709180 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m1289681601 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_m2008944563 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_m2697293110 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_m955008509 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m1659749561 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m1885535817 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m1406817691 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m3221741268 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m3647081563 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m103005414 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m3663207651 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m3362607995 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m648070515 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m2349483848 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_m3901604312 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m4040460867 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_m3322487871 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_m2231256844 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_m2462990156 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m1934683369 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m2976413445 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m2374164164 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2232252709 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3568762106 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m2113040343 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m429271156 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m1164973423 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
extern "C" IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m194029821 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
extern "C" IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m1024426170 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m3551809662 (ArithmeticException_t4283546778 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m1240160733 (BigInteger_t956758543 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m2516099295 (BigInteger_t956758543 * __this, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m479063094 (ArithmeticException_t4283546778 * __this, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_UnaryNegation_m3272019706 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m497354907 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___bi0, const RuntimeMethod* method);
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t BigInteger_shiftLeft_m952412684 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method);
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m4107706715 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m2988481195 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_LeftShift_m2731198774 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m3091364386 (BigInteger_t956758543 * __this, UInt32U5BU5D_t2770800703* ___inData0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Implicit_m1457317411 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Multiply_m664707877 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Subtraction_m1996860654 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t BigInteger_shiftRight_m1897315128 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method);
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m1529345678 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR void BigInteger_singleByteDivide_m972382485 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, BigInteger_t956758543 * ___outQuotient2, BigInteger_t956758543 * ___outRemainder3, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR void BigInteger_multiByteDivide_m635723330 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, BigInteger_t956758543 * ___outQuotient2, BigInteger_t956758543 * ___outRemainder3, const RuntimeMethod* method);
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m2781201991 (BigInteger_t956758543 * __this, int32_t ___radix0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.Char::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Implicit_m1456924192 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Modulus_m2469490318 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Division_m3347195961 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C" IL2CPP_METHOD_ATTR int32_t BigInteger_bitCount_m3576967399 (BigInteger_t956758543 * __this, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_BarrettReduction_m2302199077 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___x0, BigInteger_t956758543 * ___n1, BigInteger_t956758543 * ___constant2, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Addition_m949304235 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m1973220735 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C" IL2CPP_METHOD_ATTR void BigInteger_genRandomBits_m2936729685 (BigInteger_t956758543 * __this, int32_t ___bits0, Random_t108471755 * ___rand1, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m3579054046 (BigInteger_t956758543 * __this, ByteU5BU5D_t4116647657* ___inData0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682 (DiffieHellmanCryptoProvider_t915317458 * __this, int32_t ___secretLength0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_m1562735454 (RijndaelManaged_t3586970409 * __this, const RuntimeMethod* method);
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BigInteger_GetBytes_m2793402501 (BigInteger_t956758543 * __this, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259 (DiffieHellmanCryptoProvider_t915317458 * __this, BigInteger_t956758543 * ___otherPartyPublicKey0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SHA256Managed__ctor_m2170017447 (SHA256Managed_t955042874 * __this, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* HashAlgorithm_ComputeHash_m2825542963 (HashAlgorithm_t1432317219 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m1853825749 (DiffieHellmanCryptoProvider_t915317458 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_ModPow_m1818331774 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___exp0, BigInteger_t956758543 * ___n1, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_GenerateRandom_m3242160242 (RuntimeObject * __this /* static, unused */, int32_t ___bits0, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: ExitGames.Client.Photon.SendOptions
extern "C" void SendOptions_t967321410_marshal_pinvoke(const SendOptions_t967321410& unmarshaled, SendOptions_t967321410_marshaled_pinvoke& marshaled)
{
	marshaled.___DeliveryMode_2 = unmarshaled.get_DeliveryMode_2();
	marshaled.___Encrypt_3 = static_cast<int32_t>(unmarshaled.get_Encrypt_3());
	marshaled.___Channel_4 = unmarshaled.get_Channel_4();
}
extern "C" void SendOptions_t967321410_marshal_pinvoke_back(const SendOptions_t967321410_marshaled_pinvoke& marshaled, SendOptions_t967321410& unmarshaled)
{
	int32_t unmarshaled_DeliveryMode_temp_0 = 0;
	unmarshaled_DeliveryMode_temp_0 = marshaled.___DeliveryMode_2;
	unmarshaled.set_DeliveryMode_2(unmarshaled_DeliveryMode_temp_0);
	bool unmarshaled_Encrypt_temp_1 = false;
	unmarshaled_Encrypt_temp_1 = static_cast<bool>(marshaled.___Encrypt_3);
	unmarshaled.set_Encrypt_3(unmarshaled_Encrypt_temp_1);
	uint8_t unmarshaled_Channel_temp_2 = 0x0;
	unmarshaled_Channel_temp_2 = marshaled.___Channel_4;
	unmarshaled.set_Channel_4(unmarshaled_Channel_temp_2);
}
// Conversion method for clean up from marshalling of: ExitGames.Client.Photon.SendOptions
extern "C" void SendOptions_t967321410_marshal_pinvoke_cleanup(SendOptions_t967321410_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ExitGames.Client.Photon.SendOptions
extern "C" void SendOptions_t967321410_marshal_com(const SendOptions_t967321410& unmarshaled, SendOptions_t967321410_marshaled_com& marshaled)
{
	marshaled.___DeliveryMode_2 = unmarshaled.get_DeliveryMode_2();
	marshaled.___Encrypt_3 = static_cast<int32_t>(unmarshaled.get_Encrypt_3());
	marshaled.___Channel_4 = unmarshaled.get_Channel_4();
}
extern "C" void SendOptions_t967321410_marshal_com_back(const SendOptions_t967321410_marshaled_com& marshaled, SendOptions_t967321410& unmarshaled)
{
	int32_t unmarshaled_DeliveryMode_temp_0 = 0;
	unmarshaled_DeliveryMode_temp_0 = marshaled.___DeliveryMode_2;
	unmarshaled.set_DeliveryMode_2(unmarshaled_DeliveryMode_temp_0);
	bool unmarshaled_Encrypt_temp_1 = false;
	unmarshaled_Encrypt_temp_1 = static_cast<bool>(marshaled.___Encrypt_3);
	unmarshaled.set_Encrypt_3(unmarshaled_Encrypt_temp_1);
	uint8_t unmarshaled_Channel_temp_2 = 0x0;
	unmarshaled_Channel_temp_2 = marshaled.___Channel_4;
	unmarshaled.set_Channel_4(unmarshaled_Channel_temp_2);
}
// Conversion method for clean up from marshalling of: ExitGames.Client.Photon.SendOptions
extern "C" void SendOptions_t967321410_marshal_com_cleanup(SendOptions_t967321410_marshaled_com& marshaled)
{
}
// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_m237473686 (SendOptions_t967321410 * __this, bool ___value0, const RuntimeMethod* method)
{
	SendOptions_t967321410 * G_B2_0 = NULL;
	SendOptions_t967321410 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SendOptions_t967321410 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		G_B3_1->set_DeliveryMode_2(G_B3_0);
		return;
	}
}
extern "C"  void SendOptions_set_Reliability_m237473686_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	SendOptions_t967321410 * _thisAdjusted = reinterpret_cast<SendOptions_t967321410 *>(__this + 1);
	SendOptions_set_Reliability_m237473686(_thisAdjusted, ___value0, method);
}
// System.Void ExitGames.Client.Photon.SendOptions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SendOptions__cctor_m49335226 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendOptions__cctor_m49335226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SendOptions_t967321410  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SendOptions_t967321410 ));
		SendOptions_set_Reliability_m237473686((SendOptions_t967321410 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		SendOptions_t967321410  L_0 = V_0;
		((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->set_SendReliable_0(L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(SendOptions_t967321410 ));
		SendOptions_set_Reliability_m237473686((SendOptions_t967321410 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		SendOptions_t967321410  L_1 = V_0;
		((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->set_SendUnreliable_1(L_1);
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
// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.SerializationProtocolFactory::Create(ExitGames.Client.Photon.SerializationProtocol)
extern "C" IL2CPP_METHOD_ATTR IProtocol_t1394662050 * SerializationProtocolFactory_Create_m2607855562 (RuntimeObject * __this /* static, unused */, int32_t ___serializationProtocol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializationProtocolFactory_Create_m2607855562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IProtocol_t1394662050 * V_1 = NULL;
	{
		int32_t L_0 = ___serializationProtocol0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		goto IL_0011;
	}

IL_0009:
	{
		Protocol18_t1857127509 * L_2 = (Protocol18_t1857127509 *)il2cpp_codegen_object_new(Protocol18_t1857127509_il2cpp_TypeInfo_var);
		Protocol18__ctor_m2178585535(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0019;
	}

IL_0011:
	{
		Protocol16_t1856210005 * L_3 = (Protocol16_t1856210005 *)il2cpp_codegen_object_new(Protocol16_t1856210005_il2cpp_TypeInfo_var);
		Protocol16__ctor_m2178592269(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		IProtocol_t1394662050 * L_4 = V_1;
		return L_4;
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
// System.Void ExitGames.Client.Photon.SerializeMethod::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SerializeMethod__ctor_m734690326 (SerializeMethod_t1264674278 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SerializeMethod_Invoke_m2147008402 (SerializeMethod_t1264674278 * __this, RuntimeObject * ___customObject0, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* result = NULL;
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef ByteU5BU5D_t4116647657* (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___customObject0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef ByteU5BU5D_t4116647657* (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___customObject0, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< ByteU5BU5D_t4116647657*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___customObject0);
							else
								result = GenericVirtFuncInvoker1< ByteU5BU5D_t4116647657*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___customObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< ByteU5BU5D_t4116647657*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___customObject0);
							else
								result = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___customObject0);
						}
					}
					else
					{
						typedef ByteU5BU5D_t4116647657* (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___customObject0, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(targetMethod, ___customObject0);
							else
								result = GenericVirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(targetMethod, ___customObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___customObject0);
							else
								result = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___customObject0);
						}
					}
					else
					{
						typedef ByteU5BU5D_t4116647657* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___customObject0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef ByteU5BU5D_t4116647657* (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___customObject0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef ByteU5BU5D_t4116647657* (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___customObject0, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< ByteU5BU5D_t4116647657*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___customObject0);
						else
							result = GenericVirtFuncInvoker1< ByteU5BU5D_t4116647657*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___customObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< ByteU5BU5D_t4116647657*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___customObject0);
						else
							result = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___customObject0);
					}
				}
				else
				{
					typedef ByteU5BU5D_t4116647657* (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___customObject0, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(targetMethod, ___customObject0);
						else
							result = GenericVirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(targetMethod, ___customObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___customObject0);
						else
							result = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___customObject0);
					}
				}
				else
				{
					typedef ByteU5BU5D_t4116647657* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___customObject0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SerializeMethod::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SerializeMethod_BeginInvoke_m1835628378 (SerializeMethod_t1264674278 * __this, RuntimeObject * ___customObject0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___customObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SerializeMethod_EndInvoke_m2423075605 (SerializeMethod_t1264674278 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (ByteU5BU5D_t4116647657*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SerializeStreamMethod__ctor_m3542251850 (SerializeStreamMethod_t2169445464 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::Invoke(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C" IL2CPP_METHOD_ATTR int16_t SerializeStreamMethod_Invoke_m63277767 (SerializeStreamMethod_t2169445464 * __this, StreamBuffer_t3827669789 * ___outStream0, RuntimeObject * ___customObject1, const RuntimeMethod* method)
{
	int16_t result = 0;
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef int16_t (*FunctionPointerType) (RuntimeObject *, StreamBuffer_t3827669789 *, RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___outStream0, ___customObject1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef int16_t (*FunctionPointerType) (RuntimeObject *, void*, StreamBuffer_t3827669789 *, RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___outStream0, ___customObject1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int16_t, StreamBuffer_t3827669789 *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___outStream0, ___customObject1);
							else
								result = GenericVirtFuncInvoker2< int16_t, StreamBuffer_t3827669789 *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___outStream0, ___customObject1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int16_t, StreamBuffer_t3827669789 *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___outStream0, ___customObject1);
							else
								result = VirtFuncInvoker2< int16_t, StreamBuffer_t3827669789 *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___outStream0, ___customObject1);
						}
					}
					else
					{
						typedef int16_t (*FunctionPointerType) (void*, StreamBuffer_t3827669789 *, RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___outStream0, ___customObject1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< int16_t, RuntimeObject * >::Invoke(targetMethod, ___outStream0, ___customObject1);
							else
								result = GenericVirtFuncInvoker1< int16_t, RuntimeObject * >::Invoke(targetMethod, ___outStream0, ___customObject1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< int16_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___outStream0, ___customObject1);
							else
								result = VirtFuncInvoker1< int16_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___outStream0, ___customObject1);
						}
					}
					else
					{
						typedef int16_t (*FunctionPointerType) (StreamBuffer_t3827669789 *, RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___outStream0, ___customObject1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef int16_t (*FunctionPointerType) (RuntimeObject *, StreamBuffer_t3827669789 *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___outStream0, ___customObject1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef int16_t (*FunctionPointerType) (RuntimeObject *, void*, StreamBuffer_t3827669789 *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___outStream0, ___customObject1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int16_t, StreamBuffer_t3827669789 *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___outStream0, ___customObject1);
						else
							result = GenericVirtFuncInvoker2< int16_t, StreamBuffer_t3827669789 *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___outStream0, ___customObject1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int16_t, StreamBuffer_t3827669789 *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___outStream0, ___customObject1);
						else
							result = VirtFuncInvoker2< int16_t, StreamBuffer_t3827669789 *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___outStream0, ___customObject1);
					}
				}
				else
				{
					typedef int16_t (*FunctionPointerType) (void*, StreamBuffer_t3827669789 *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___outStream0, ___customObject1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< int16_t, RuntimeObject * >::Invoke(targetMethod, ___outStream0, ___customObject1);
						else
							result = GenericVirtFuncInvoker1< int16_t, RuntimeObject * >::Invoke(targetMethod, ___outStream0, ___customObject1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< int16_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___outStream0, ___customObject1);
						else
							result = VirtFuncInvoker1< int16_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___outStream0, ___customObject1);
					}
				}
				else
				{
					typedef int16_t (*FunctionPointerType) (StreamBuffer_t3827669789 *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___outStream0, ___customObject1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SerializeStreamMethod::BeginInvoke(ExitGames.Client.Photon.StreamBuffer,System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SerializeStreamMethod_BeginInvoke_m2881338419 (SerializeStreamMethod_t2169445464 * __this, StreamBuffer_t3827669789 * ___outStream0, RuntimeObject * ___customObject1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___outStream0;
	__d_args[1] = ___customObject1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int16_t SerializeStreamMethod_EndInvoke_m3952544237 (SerializeStreamMethod_t2169445464 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int16_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SimulationItem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimulationItem__ctor_m3584472599 (SimulationItem_t3044638479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationItem__ctor_m3584472599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Stopwatch_t305734070 * L_0 = (Stopwatch_t305734070 *)il2cpp_codegen_object_new(Stopwatch_t305734070_il2cpp_TypeInfo_var);
		Stopwatch__ctor_m2673586837(L_0, /*hidden argument*/NULL);
		__this->set_stopw_0(L_0);
		Stopwatch_t305734070 * L_1 = __this->get_stopw_0();
		NullCheck(L_1);
		Stopwatch_Start_m1142799187(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SimulationItem::get_Delay()
extern "C" IL2CPP_METHOD_ATTR int32_t SimulationItem_get_Delay_m3192778454 (SimulationItem_t3044638479 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDelayU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SimulationItem::set_Delay(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SimulationItem_set_Delay_m3793931648 (SimulationItem_t3044638479 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDelayU3Ek__BackingField_3(L_0);
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
// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" IL2CPP_METHOD_ATTR void SocketTcp__ctor_m3106271083 (SocketTcp_t182200829 * __this, PeerBase_t2956237011 * ___npeer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketTcp__ctor_m3106271083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		__this->set_syncer_11(L_0);
		PeerBase_t2956237011 * L_1 = ___npeer0;
		IPhotonSocket__ctor_m40935805(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 5, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_4 = IPhotonSocket_get_Listener_m3998651287(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_4, 5, _stringLiteral3105760256);
	}

IL_0033:
	{
		((IPhotonSocket_t2066969247 *)__this)->set_PollReceive_2((bool)0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcp::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SocketTcp_Dispose_m1366002559 (SocketTcp_t182200829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketTcp_Dispose_m1366002559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IPhotonSocket_set_State_m3369138945(__this, 3, /*hidden argument*/NULL);
		Socket_t1119025450 * L_0 = __this->get_sock_10();
		V_0 = (bool)((!(((RuntimeObject*)(Socket_t1119025450 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Socket_t1119025450 * L_2 = __this->get_sock_10();
			NullCheck(L_2);
			bool L_3 = Socket_get_Connected_m2875145796(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			Socket_t1119025450 * L_5 = __this->get_sock_10();
			NullCheck(L_5);
			Socket_Close_m3289097516(L_5, /*hidden argument*/NULL);
		}

IL_0033:
		{
			goto IL_004e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_6 = V_2;
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3782069545, L_6, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 3, L_7, /*hidden argument*/NULL);
		goto IL_004e;
	} // end catch (depth: 1)

IL_004e:
	{
	}

IL_004f:
	{
		__this->set_sock_10((Socket_t1119025450 *)NULL);
		IPhotonSocket_set_State_m3369138945(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcp::Connect()
extern "C" IL2CPP_METHOD_ATTR bool SocketTcp_Connect_m606928437 (SocketTcp_t182200829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketTcp_Connect_m606928437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Thread_t2300836069 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = IPhotonSocket_Connect_m622616089(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0042;
	}

IL_0015:
	{
		IPhotonSocket_set_State_m3369138945(__this, 1, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)SocketTcp_DnsAndConnect_m2616926937_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_4 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_4, __this, L_3, /*hidden argument*/NULL);
		Thread_t2300836069 * L_5 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Thread_t2300836069 * L_6 = V_1;
		NullCheck(L_6);
		Thread_set_IsBackground_m3868016371(L_6, (bool)1, /*hidden argument*/NULL);
		Thread_t2300836069 * L_7 = V_1;
		NullCheck(L_7);
		Thread_Start_m2860771284(L_7, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcp::Disconnect()
extern "C" IL2CPP_METHOD_ATTR bool SocketTcp_Disconnect_m3224550065 (SocketTcp_t182200829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketTcp_Disconnect_m3224550065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 3, _stringLiteral4030192765, /*hidden argument*/NULL);
	}

IL_001b:
	{
		IPhotonSocket_set_State_m3369138945(__this, 3, /*hidden argument*/NULL);
		RuntimeObject * L_2 = __this->get_syncer_11();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			Socket_t1119025450 * L_4 = __this->get_sock_10();
			V_2 = (bool)((!(((RuntimeObject*)(Socket_t1119025450 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0070;
			}
		}

IL_003f:
		{
		}

IL_0040:
		try
		{ // begin try (depth: 2)
			Socket_t1119025450 * L_6 = __this->get_sock_10();
			NullCheck(L_6);
			Socket_Close_m3289097516(L_6, /*hidden argument*/NULL);
			goto IL_0068;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0050;
			throw e;
		}

CATCH_0050:
		{ // begin catch(System.Exception)
			V_3 = ((Exception_t *)__exception_local);
			Exception_t * L_7 = V_3;
			String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral932042022, L_7, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 3, L_8, /*hidden argument*/NULL);
			goto IL_0068;
		} // end catch (depth: 2)

IL_0068:
		{
			__this->set_sock_10((Socket_t1119025450 *)NULL);
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x7B, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007b:
	{
		IPhotonSocket_set_State_m3369138945(__this, 0, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_0088;
	}

IL_0088:
	{
		bool L_10 = V_4;
		return L_10;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketTcp::Send(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SocketTcp_Send_m3366193615 (SocketTcp_t182200829 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketTcp_Send_m3366193615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	ObjectU5BU5D_t2843939325* G_B15_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	int32_t G_B14_0 = 0;
	ObjectU5BU5D_t2843939325* G_B14_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B14_2 = NULL;
	String_t* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	ObjectU5BU5D_t2843939325* G_B16_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B16_3 = NULL;
	String_t* G_B16_4 = NULL;
	int32_t G_B18_0 = 0;
	ObjectU5BU5D_t2843939325* G_B18_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B18_2 = NULL;
	String_t* G_B18_3 = NULL;
	int32_t G_B17_0 = 0;
	ObjectU5BU5D_t2843939325* G_B17_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B17_2 = NULL;
	String_t* G_B17_3 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	ObjectU5BU5D_t2843939325* G_B19_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B19_3 = NULL;
	String_t* G_B19_4 = NULL;
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_t2843939325* G_B22_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B22_2 = NULL;
	String_t* G_B22_3 = NULL;
	int32_t G_B22_4 = 0;
	SocketTcp_t182200829 * G_B22_5 = NULL;
	int32_t G_B21_0 = 0;
	ObjectU5BU5D_t2843939325* G_B21_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B21_2 = NULL;
	String_t* G_B21_3 = NULL;
	int32_t G_B21_4 = 0;
	SocketTcp_t182200829 * G_B21_5 = NULL;
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	ObjectU5BU5D_t2843939325* G_B23_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B23_3 = NULL;
	String_t* G_B23_4 = NULL;
	int32_t G_B23_5 = 0;
	SocketTcp_t182200829 * G_B23_6 = NULL;
	{
		Socket_t1119025450 * L_0 = __this->get_sock_10();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Socket_t1119025450 * L_1 = __this->get_sock_10();
		NullCheck(L_1);
		bool L_2 = Socket_get_Connected_m2875145796(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = 1;
		goto IL_015c;
	}

IL_0026:
	{
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		Socket_t1119025450 * L_4 = __this->get_sock_10();
		ByteU5BU5D_t4116647657* L_5 = ___data0;
		int32_t L_6 = ___length1;
		NullCheck(L_4);
		Socket_Send_m2509318470(L_4, L_5, 0, L_6, 0, /*hidden argument*/NULL);
		goto IL_0158;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)__exception_local);
			int32_t L_7 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_7) == ((int32_t)3)))
			{
				goto IL_0054;
			}
		}

IL_0049:
		{
			int32_t L_8 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			G_B10_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0055;
		}

IL_0054:
		{
			G_B10_0 = 0;
		}

IL_0055:
		{
			V_3 = (bool)G_B10_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0154;
			}
		}

IL_005c:
		{
			bool L_10 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_0147;
			}
		}

IL_006d:
		{
			V_5 = _stringLiteral757602046;
			Socket_t1119025450 * L_12 = __this->get_sock_10();
			V_6 = (bool)((!(((RuntimeObject*)(Socket_t1119025450 *)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_13 = V_6;
			if (!L_13)
			{
				goto IL_00ec;
			}
		}

IL_0084:
		{
			ObjectU5BU5D_t2843939325* L_14 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t2843939325* L_15 = L_14;
			Socket_t1119025450 * L_16 = __this->get_sock_10();
			NullCheck(L_16);
			EndPoint_t982345378 * L_17 = Socket_get_LocalEndPoint_m456692531(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_17);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_t2843939325* L_18 = L_15;
			Socket_t1119025450 * L_19 = __this->get_sock_10();
			NullCheck(L_19);
			EndPoint_t982345378 * L_20 = Socket_get_RemoteEndPoint_m3755127488(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_20);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
			ObjectU5BU5D_t2843939325* L_21 = L_18;
			Socket_t1119025450 * L_22 = __this->get_sock_10();
			NullCheck(L_22);
			bool L_23 = Socket_get_Connected_m2875145796(L_22, /*hidden argument*/NULL);
			G_B14_0 = 2;
			G_B14_1 = L_21;
			G_B14_2 = L_21;
			G_B14_3 = _stringLiteral803324135;
			if (L_23)
			{
				G_B15_0 = 2;
				G_B15_1 = L_21;
				G_B15_2 = L_21;
				G_B15_3 = _stringLiteral803324135;
				goto IL_00c2;
			}
		}

IL_00bb:
		{
			G_B16_0 = _stringLiteral1602122195;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			goto IL_00c7;
		}

IL_00c2:
		{
			G_B16_0 = _stringLiteral1982708895;
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
			G_B16_3 = G_B15_2;
			G_B16_4 = G_B15_3;
		}

IL_00c7:
		{
			NullCheck(G_B16_2);
			ArrayElementTypeCheck (G_B16_2, G_B16_0);
			(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (RuntimeObject *)G_B16_0);
			ObjectU5BU5D_t2843939325* L_24 = G_B16_3;
			Socket_t1119025450 * L_25 = __this->get_sock_10();
			NullCheck(L_25);
			bool L_26 = Socket_get_IsBound_m1221034268(L_25, /*hidden argument*/NULL);
			G_B17_0 = 3;
			G_B17_1 = L_24;
			G_B17_2 = L_24;
			G_B17_3 = G_B16_4;
			if (L_26)
			{
				G_B18_0 = 3;
				G_B18_1 = L_24;
				G_B18_2 = L_24;
				G_B18_3 = G_B16_4;
				goto IL_00de;
			}
		}

IL_00d7:
		{
			G_B19_0 = _stringLiteral2178715226;
			G_B19_1 = G_B17_0;
			G_B19_2 = G_B17_1;
			G_B19_3 = G_B17_2;
			G_B19_4 = G_B17_3;
			goto IL_00e3;
		}

IL_00de:
		{
			G_B19_0 = _stringLiteral2002595865;
			G_B19_1 = G_B18_0;
			G_B19_2 = G_B18_1;
			G_B19_3 = G_B18_2;
			G_B19_4 = G_B18_3;
		}

IL_00e3:
		{
			NullCheck(G_B19_2);
			ArrayElementTypeCheck (G_B19_2, G_B19_0);
			(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (RuntimeObject *)G_B19_0);
			String_t* L_27 = String_Format_m630303134(NULL /*static, unused*/, G_B19_4, G_B19_3, /*hidden argument*/NULL);
			V_5 = L_27;
		}

IL_00ec:
		{
			ObjectU5BU5D_t2843939325* L_28 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
			ObjectU5BU5D_t2843939325* L_29 = L_28;
			String_t* L_30 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, L_30);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
			ObjectU5BU5D_t2843939325* L_31 = L_29;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
			int32_t L_32 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
			PeerBase_t2956237011 * L_33 = ((IPhotonSocket_t2066969247 *)__this)->get_peerBase_0();
			NullCheck(L_33);
			int32_t L_34 = L_33->get_timeBase_27();
			int32_t L_35 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_34));
			RuntimeObject * L_36 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_35);
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, L_36);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_36);
			ObjectU5BU5D_t2843939325* L_37 = L_31;
			bool L_38 = IPhotonSocket_get_AddressResolvedAsIpv6_m3951519959(__this, /*hidden argument*/NULL);
			G_B21_0 = 2;
			G_B21_1 = L_37;
			G_B21_2 = L_37;
			G_B21_3 = _stringLiteral3854244401;
			G_B21_4 = 1;
			G_B21_5 = __this;
			if (L_38)
			{
				G_B22_0 = 2;
				G_B22_1 = L_37;
				G_B22_2 = L_37;
				G_B22_3 = _stringLiteral3854244401;
				G_B22_4 = 1;
				G_B22_5 = __this;
				goto IL_012c;
			}
		}

IL_0125:
		{
			String_t* L_39 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			G_B23_0 = L_39;
			G_B23_1 = G_B21_0;
			G_B23_2 = G_B21_1;
			G_B23_3 = G_B21_2;
			G_B23_4 = G_B21_3;
			G_B23_5 = G_B21_4;
			G_B23_6 = G_B21_5;
			goto IL_0131;
		}

IL_012c:
		{
			G_B23_0 = _stringLiteral1429687774;
			G_B23_1 = G_B22_0;
			G_B23_2 = G_B22_1;
			G_B23_3 = G_B22_2;
			G_B23_4 = G_B22_3;
			G_B23_5 = G_B22_4;
			G_B23_6 = G_B22_5;
		}

IL_0131:
		{
			NullCheck(G_B23_2);
			ArrayElementTypeCheck (G_B23_2, G_B23_0);
			(G_B23_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B23_1), (RuntimeObject *)G_B23_0);
			ObjectU5BU5D_t2843939325* L_40 = G_B23_3;
			String_t* L_41 = V_5;
			NullCheck(L_40);
			ArrayElementTypeCheck (L_40, L_41);
			(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
			ObjectU5BU5D_t2843939325* L_42 = L_40;
			Exception_t * L_43 = V_2;
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_43);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_43);
			String_t* L_44 = String_Format_m630303134(NULL /*static, unused*/, G_B23_4, L_42, /*hidden argument*/NULL);
			NullCheck(G_B23_6);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(G_B23_6, G_B23_5, L_44, /*hidden argument*/NULL);
		}

IL_0147:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1026), /*hidden argument*/NULL);
		}

IL_0154:
		{
			V_1 = 3;
			goto IL_015c;
		}
	} // end catch (depth: 1)

IL_0158:
	{
		V_1 = 0;
		goto IL_015c;
	}

IL_015c:
	{
		int32_t L_45 = V_1;
		return L_45;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcp::DnsAndConnect()
extern "C" IL2CPP_METHOD_ATTR void SocketTcp_DnsAndConnect_m2616926937 (SocketTcp_t182200829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketTcp_DnsAndConnect_m2616926937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Thread_t2300836069 * V_0 = NULL;
	IPAddress_t241777590 * V_1 = NULL;
	bool V_2 = false;
	SecurityException_t975544473 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			IPAddress_t241777590 * L_1 = IPhotonSocket_GetIpAddress_m1722057511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			V_1 = L_1;
			IPAddress_t241777590 * L_2 = V_1;
			V_2 = (bool)((((RuntimeObject*)(IPAddress_t241777590 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_002d;
			}
		}

IL_0016:
		{
			String_t* L_4 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral813302798, L_4, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SocketTcp_DnsAndConnect_m2616926937_RuntimeMethod_var);
		}

IL_002d:
		{
			IPAddress_t241777590 * L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = IPAddress_get_AddressFamily_m1010663936(L_7, /*hidden argument*/NULL);
			Socket_t1119025450 * L_9 = (Socket_t1119025450 *)il2cpp_codegen_object_new(Socket_t1119025450_il2cpp_TypeInfo_var);
			Socket__ctor_m3479084642(L_9, L_8, 1, 6, /*hidden argument*/NULL);
			__this->set_sock_10(L_9);
			Socket_t1119025450 * L_10 = __this->get_sock_10();
			NullCheck(L_10);
			Socket_set_NoDelay_m3209939872(L_10, (bool)1, /*hidden argument*/NULL);
			Socket_t1119025450 * L_11 = __this->get_sock_10();
			PeerBase_t2956237011 * L_12 = ((IPhotonSocket_t2066969247 *)__this)->get_peerBase_0();
			NullCheck(L_12);
			int32_t L_13 = PeerBase_get_DisconnectTimeout_m603764922(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			Socket_set_ReceiveTimeout_m3726240067(L_11, L_13, /*hidden argument*/NULL);
			Socket_t1119025450 * L_14 = __this->get_sock_10();
			PeerBase_t2956237011 * L_15 = ((IPhotonSocket_t2066969247 *)__this)->get_peerBase_0();
			NullCheck(L_15);
			int32_t L_16 = PeerBase_get_DisconnectTimeout_m603764922(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			Socket_set_SendTimeout_m2494155708(L_14, L_16, /*hidden argument*/NULL);
			Socket_t1119025450 * L_17 = __this->get_sock_10();
			IPAddress_t241777590 * L_18 = V_1;
			int32_t L_19 = IPhotonSocket_get_ServerPort_m1939376162(__this, /*hidden argument*/NULL);
			NullCheck(L_17);
			Socket_Connect_m1862028144(L_17, L_18, L_19, /*hidden argument*/NULL);
			IPAddress_t241777590 * L_20 = V_1;
			bool L_21 = IPhotonSocket_IsIpv6SimpleCheck_m2020147281(__this, L_20, /*hidden argument*/NULL);
			IPhotonSocket_set_AddressResolvedAsIpv6_m4202628431(__this, L_21, /*hidden argument*/NULL);
			IPhotonSocket_set_State_m3369138945(__this, 2, /*hidden argument*/NULL);
			PeerBase_t2956237011 * L_22 = ((IPhotonSocket_t2066969247 *)__this)->get_peerBase_0();
			NullCheck(L_22);
			VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_22);
			goto IL_0146;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SecurityException_t975544473_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00b6;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00fd;
		throw e;
	}

CATCH_00b6:
	{ // begin catch(System.Security.SecurityException)
		{
			V_3 = ((SecurityException_t975544473 *)__exception_local);
			bool L_23 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_4 = L_23;
			bool L_24 = V_4;
			if (!L_24)
			{
				goto IL_00ef;
			}
		}

IL_00c5:
		{
			RuntimeObject* L_25 = IPhotonSocket_get_Listener_m3998651287(__this, /*hidden argument*/NULL);
			String_t* L_26 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			SecurityException_t975544473 * L_27 = V_3;
			NullCheck(L_27);
			String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
			String_t* L_29 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral2489687337, L_26, _stringLiteral3198613099, L_28, /*hidden argument*/NULL);
			NullCheck(L_25);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_25, 1, L_29);
		}

IL_00ef:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1022), /*hidden argument*/NULL);
			goto IL_0167;
		}
	} // end catch (depth: 1)

CATCH_00fd:
	{ // begin catch(System.Exception)
		{
			V_5 = ((Exception_t *)__exception_local);
			bool L_30 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_6 = L_30;
			bool L_31 = V_6;
			if (!L_31)
			{
				goto IL_0138;
			}
		}

IL_010d:
		{
			RuntimeObject* L_32 = IPhotonSocket_get_Listener_m3998651287(__this, /*hidden argument*/NULL);
			String_t* L_33 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			Exception_t * L_34 = V_5;
			NullCheck(L_34);
			String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
			String_t* L_36 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral2489687337, L_33, _stringLiteral3198613099, L_35, /*hidden argument*/NULL);
			NullCheck(L_32);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_32, 1, L_36);
		}

IL_0138:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1023), /*hidden argument*/NULL);
			goto IL_0167;
		}
	} // end catch (depth: 1)

IL_0146:
	{
		intptr_t L_37 = (intptr_t)SocketTcp_ReceiveLoop_m3990976773_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_38 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_38, __this, L_37, /*hidden argument*/NULL);
		Thread_t2300836069 * L_39 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_39, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		Thread_t2300836069 * L_40 = V_0;
		NullCheck(L_40);
		Thread_set_IsBackground_m3868016371(L_40, (bool)1, /*hidden argument*/NULL);
		Thread_t2300836069 * L_41 = V_0;
		NullCheck(L_41);
		Thread_Start_m2860771284(L_41, /*hidden argument*/NULL);
	}

IL_0167:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcp::ReceiveLoop()
extern "C" IL2CPP_METHOD_ATTR void SocketTcp_ReceiveLoop_m3990976773 (SocketTcp_t182200829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketTcp_ReceiveLoop_m3990976773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_t3827669789 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SocketException_t3852068672 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	SocketException_t3852068672 * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	SocketException_t3852068672 * V_21 = NULL;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	Exception_t * V_25 = NULL;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	int32_t G_B34_0 = 0;
	RuntimeObject * G_B46_0 = NULL;
	String_t* G_B46_1 = NULL;
	int32_t G_B46_2 = 0;
	SocketTcp_t182200829 * G_B46_3 = NULL;
	RuntimeObject * G_B45_0 = NULL;
	String_t* G_B45_1 = NULL;
	int32_t G_B45_2 = 0;
	SocketTcp_t182200829 * G_B45_3 = NULL;
	String_t* G_B47_0 = NULL;
	RuntimeObject * G_B47_1 = NULL;
	String_t* G_B47_2 = NULL;
	int32_t G_B47_3 = 0;
	SocketTcp_t182200829 * G_B47_4 = NULL;
	int32_t G_B52_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B66_0 = 0;
	{
		int32_t L_0 = IPhotonSocket_get_MTU_m3051045953(__this, /*hidden argument*/NULL);
		StreamBuffer_t3827669789 * L_1 = (StreamBuffer_t3827669789 *)il2cpp_codegen_object_new(StreamBuffer_t3827669789_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m1585703076(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_1 = L_2;
		goto IL_03b4;
	}

IL_001a:
	{
		StreamBuffer_t3827669789 * L_3 = V_0;
		NullCheck(L_3);
		StreamBuffer_SetLength_m2522285437(L_3, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			V_2 = 0;
			V_3 = 0;
			goto IL_00ae;
		}

IL_002e:
		{
		}

IL_002f:
		try
		{ // begin try (depth: 2)
			Socket_t1119025450 * L_4 = __this->get_sock_10();
			ByteU5BU5D_t4116647657* L_5 = V_1;
			int32_t L_6 = V_2;
			int32_t L_7 = V_2;
			NullCheck(L_4);
			int32_t L_8 = Socket_Receive_m3794758455(L_4, L_5, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)9), (int32_t)L_7)), 0, /*hidden argument*/NULL);
			V_3 = L_8;
			goto IL_0093;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (SocketException_t3852068672_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0046;
			throw e;
		}

CATCH_0046:
		{ // begin catch(System.Net.Sockets.SocketException)
			{
				V_5 = ((SocketException_t3852068672 *)__exception_local);
				int32_t L_9 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_9) == ((int32_t)3)))
				{
					goto IL_006b;
				}
			}

IL_0052:
			{
				int32_t L_10 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_10) <= ((int32_t)0)))
				{
					goto IL_006b;
				}
			}

IL_005b:
			{
				SocketException_t3852068672 * L_11 = V_5;
				NullCheck(L_11);
				int32_t L_12 = SocketException_get_SocketErrorCode_m2767669540(L_11, /*hidden argument*/NULL);
				G_B9_0 = ((((int32_t)L_12) == ((int32_t)((int32_t)10035)))? 1 : 0);
				goto IL_006c;
			}

IL_006b:
			{
				G_B9_0 = 0;
			}

IL_006c:
			{
				V_6 = (bool)G_B9_0;
				bool L_13 = V_6;
				if (!L_13)
				{
					goto IL_0091;
				}
			}

IL_0072:
			{
				bool L_14 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 5, /*hidden argument*/NULL);
				V_7 = L_14;
				bool L_15 = V_7;
				if (!L_15)
				{
					goto IL_008f;
				}
			}

IL_0080:
			{
				IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 5, _stringLiteral1929844350, /*hidden argument*/NULL);
			}

IL_008f:
			{
				goto IL_00ae;
			}

IL_0091:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, SocketTcp_ReceiveLoop_m3990976773_RuntimeMethod_var);
			}
		} // end catch (depth: 2)

IL_0093:
		{
			int32_t L_16 = V_2;
			int32_t L_17 = V_3;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
			int32_t L_18 = V_3;
			V_8 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
			bool L_19 = V_8;
			if (!L_19)
			{
				goto IL_00ad;
			}
		}

IL_00a1:
		{
			SocketException_t3852068672 * L_20 = (SocketException_t3852068672 *)il2cpp_codegen_object_new(SocketException_t3852068672_il2cpp_TypeInfo_var);
			SocketException__ctor_m1369613389(L_20, ((int32_t)10054), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, SocketTcp_ReceiveLoop_m3990976773_RuntimeMethod_var);
		}

IL_00ad:
		{
		}

IL_00ae:
		{
			int32_t L_21 = V_2;
			V_9 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)9)))? 1 : 0);
			bool L_22 = V_9;
			if (L_22)
			{
				goto IL_002e;
			}
		}

IL_00bc:
		{
			ByteU5BU5D_t4116647657* L_23 = V_1;
			NullCheck(L_23);
			int32_t L_24 = 0;
			uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
			V_10 = (bool)((((int32_t)L_25) == ((int32_t)((int32_t)240)))? 1 : 0);
			bool L_26 = V_10;
			if (!L_26)
			{
				goto IL_00de;
			}
		}

IL_00cc:
		{
			ByteU5BU5D_t4116647657* L_27 = V_1;
			ByteU5BU5D_t4116647657* L_28 = V_1;
			NullCheck(L_28);
			IPhotonSocket_HandleReceivedDatagram_m1283719406(__this, L_27, (((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))), (bool)1, /*hidden argument*/NULL);
			goto IL_03b4;
		}

IL_00de:
		{
			ByteU5BU5D_t4116647657* L_29 = V_1;
			NullCheck(L_29);
			int32_t L_30 = 1;
			uint8_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
			ByteU5BU5D_t4116647657* L_32 = V_1;
			NullCheck(L_32);
			int32_t L_33 = 2;
			uint8_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			ByteU5BU5D_t4116647657* L_35 = V_1;
			NullCheck(L_35);
			int32_t L_36 = 3;
			uint8_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
			ByteU5BU5D_t4116647657* L_38 = V_1;
			NullCheck(L_38);
			int32_t L_39 = 4;
			uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
			V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_34<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_37<<(int32_t)8))))|(int32_t)L_40));
			PeerBase_t2956237011 * L_41 = ((IPhotonSocket_t2066969247 *)__this)->get_peerBase_0();
			NullCheck(L_41);
			bool L_42 = PeerBase_get_TrafficStatsEnabled_m3426645147(L_41, /*hidden argument*/NULL);
			V_11 = L_42;
			bool L_43 = V_11;
			if (!L_43)
			{
				goto IL_0146;
			}
		}

IL_0108:
		{
			ByteU5BU5D_t4116647657* L_44 = V_1;
			NullCheck(L_44);
			int32_t L_45 = 5;
			uint8_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
			V_12 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
			bool L_47 = V_12;
			V_13 = L_47;
			bool L_48 = V_13;
			if (!L_48)
			{
				goto IL_0130;
			}
		}

IL_0119:
		{
			PeerBase_t2956237011 * L_49 = ((IPhotonSocket_t2066969247 *)__this)->get_peerBase_0();
			NullCheck(L_49);
			TrafficStats_t1302902347 * L_50 = PeerBase_get_TrafficStatsIncoming_m3832710925(L_49, /*hidden argument*/NULL);
			int32_t L_51 = V_4;
			NullCheck(L_50);
			TrafficStats_CountReliableOpCommand_m1486410076(L_50, L_51, /*hidden argument*/NULL);
			goto IL_0145;
		}

IL_0130:
		{
			PeerBase_t2956237011 * L_52 = ((IPhotonSocket_t2066969247 *)__this)->get_peerBase_0();
			NullCheck(L_52);
			TrafficStats_t1302902347 * L_53 = PeerBase_get_TrafficStatsIncoming_m3832710925(L_52, /*hidden argument*/NULL);
			int32_t L_54 = V_4;
			NullCheck(L_53);
			TrafficStats_CountUnreliableOpCommand_m1368676294(L_53, L_54, /*hidden argument*/NULL);
		}

IL_0145:
		{
		}

IL_0146:
		{
			bool L_55 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 5, /*hidden argument*/NULL);
			V_14 = L_55;
			bool L_56 = V_14;
			if (!L_56)
			{
				goto IL_016e;
			}
		}

IL_0153:
		{
			int32_t L_57 = V_4;
			int32_t L_58 = L_57;
			RuntimeObject * L_59 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_58);
			String_t* L_60 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral144399336, L_59, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 5, L_60, /*hidden argument*/NULL);
		}

IL_016e:
		{
			StreamBuffer_t3827669789 * L_61 = V_0;
			int32_t L_62 = V_4;
			NullCheck(L_61);
			StreamBuffer_SetCapacityMinimum_m807430420(L_61, ((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)7)), /*hidden argument*/NULL);
			StreamBuffer_t3827669789 * L_63 = V_0;
			ByteU5BU5D_t4116647657* L_64 = V_1;
			int32_t L_65 = V_2;
			NullCheck(L_63);
			StreamBuffer_Write_m17470745(L_63, L_64, 7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)7)), /*hidden argument*/NULL);
			V_2 = 0;
			int32_t L_66 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)((int32_t)9)));
			goto IL_022c;
		}

IL_0193:
		{
		}

IL_0194:
		try
		{ // begin try (depth: 2)
			Socket_t1119025450 * L_67 = __this->get_sock_10();
			StreamBuffer_t3827669789 * L_68 = V_0;
			NullCheck(L_68);
			ByteU5BU5D_t4116647657* L_69 = StreamBuffer_GetBuffer_m3307584100(L_68, /*hidden argument*/NULL);
			StreamBuffer_t3827669789 * L_70 = V_0;
			NullCheck(L_70);
			int32_t L_71 = StreamBuffer_get_Position_m1534163681(L_70, /*hidden argument*/NULL);
			int32_t L_72 = V_4;
			int32_t L_73 = V_2;
			NullCheck(L_67);
			int32_t L_74 = Socket_Receive_m3794758455(L_67, L_69, L_71, ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)L_73)), 0, /*hidden argument*/NULL);
			V_3 = L_74;
			goto IL_0202;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (SocketException_t3852068672_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_01b5;
			throw e;
		}

CATCH_01b5:
		{ // begin catch(System.Net.Sockets.SocketException)
			{
				V_15 = ((SocketException_t3852068672 *)__exception_local);
				int32_t L_75 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_75) == ((int32_t)3)))
				{
					goto IL_01da;
				}
			}

IL_01c1:
			{
				int32_t L_76 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_76) <= ((int32_t)0)))
				{
					goto IL_01da;
				}
			}

IL_01ca:
			{
				SocketException_t3852068672 * L_77 = V_15;
				NullCheck(L_77);
				int32_t L_78 = SocketException_get_SocketErrorCode_m2767669540(L_77, /*hidden argument*/NULL);
				G_B34_0 = ((((int32_t)L_78) == ((int32_t)((int32_t)10035)))? 1 : 0);
				goto IL_01db;
			}

IL_01da:
			{
				G_B34_0 = 0;
			}

IL_01db:
			{
				V_16 = (bool)G_B34_0;
				bool L_79 = V_16;
				if (!L_79)
				{
					goto IL_0200;
				}
			}

IL_01e1:
			{
				bool L_80 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 5, /*hidden argument*/NULL);
				V_17 = L_80;
				bool L_81 = V_17;
				if (!L_81)
				{
					goto IL_01fe;
				}
			}

IL_01ef:
			{
				IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 5, _stringLiteral1929844350, /*hidden argument*/NULL);
			}

IL_01fe:
			{
				goto IL_022c;
			}

IL_0200:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, SocketTcp_ReceiveLoop_m3990976773_RuntimeMethod_var);
			}
		} // end catch (depth: 2)

IL_0202:
		{
			StreamBuffer_t3827669789 * L_82 = V_0;
			StreamBuffer_t3827669789 * L_83 = L_82;
			NullCheck(L_83);
			int32_t L_84 = StreamBuffer_get_Position_m1534163681(L_83, /*hidden argument*/NULL);
			int32_t L_85 = V_3;
			NullCheck(L_83);
			StreamBuffer_set_Position_m3199317582(L_83, ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)L_85)), /*hidden argument*/NULL);
			int32_t L_86 = V_2;
			int32_t L_87 = V_3;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87));
			int32_t L_88 = V_3;
			V_18 = (bool)((((int32_t)L_88) == ((int32_t)0))? 1 : 0);
			bool L_89 = V_18;
			if (!L_89)
			{
				goto IL_022b;
			}
		}

IL_021f:
		{
			SocketException_t3852068672 * L_90 = (SocketException_t3852068672 *)il2cpp_codegen_object_new(SocketException_t3852068672_il2cpp_TypeInfo_var);
			SocketException__ctor_m1369613389(L_90, ((int32_t)10054), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, NULL, SocketTcp_ReceiveLoop_m3990976773_RuntimeMethod_var);
		}

IL_022b:
		{
		}

IL_022c:
		{
			int32_t L_91 = V_2;
			int32_t L_92 = V_4;
			V_19 = (bool)((((int32_t)L_91) < ((int32_t)L_92))? 1 : 0);
			bool L_93 = V_19;
			if (L_93)
			{
				goto IL_0193;
			}
		}

IL_023a:
		{
			StreamBuffer_t3827669789 * L_94 = V_0;
			NullCheck(L_94);
			ByteU5BU5D_t4116647657* L_95 = StreamBuffer_ToArray_m3109285386(L_94, /*hidden argument*/NULL);
			StreamBuffer_t3827669789 * L_96 = V_0;
			NullCheck(L_96);
			int32_t L_97 = StreamBuffer_get_Length_m1616542868(L_96, /*hidden argument*/NULL);
			IPhotonSocket_HandleReceivedDatagram_m1283719406(__this, L_95, L_97, (bool)0, /*hidden argument*/NULL);
			bool L_98 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 5, /*hidden argument*/NULL);
			V_20 = L_98;
			bool L_99 = V_20;
			if (!L_99)
			{
				goto IL_0292;
			}
		}

IL_025b:
		{
			StreamBuffer_t3827669789 * L_100 = V_0;
			NullCheck(L_100);
			int32_t L_101 = StreamBuffer_get_Length_m1616542868(L_100, /*hidden argument*/NULL);
			int32_t L_102 = L_101;
			RuntimeObject * L_103 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_102);
			StreamBuffer_t3827669789 * L_104 = V_0;
			NullCheck(L_104);
			int32_t L_105 = StreamBuffer_get_Length_m1616542868(L_104, /*hidden argument*/NULL);
			int32_t L_106 = V_4;
			G_B45_0 = L_103;
			G_B45_1 = _stringLiteral144399336;
			G_B45_2 = 5;
			G_B45_3 = __this;
			if ((((int32_t)L_105) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)2)))))
			{
				G_B46_0 = L_103;
				G_B46_1 = _stringLiteral144399336;
				G_B46_2 = 5;
				G_B46_3 = __this;
				goto IL_0281;
			}
		}

IL_027a:
		{
			G_B47_0 = _stringLiteral831544133;
			G_B47_1 = G_B45_0;
			G_B47_2 = G_B45_1;
			G_B47_3 = G_B45_2;
			G_B47_4 = G_B45_3;
			goto IL_0286;
		}

IL_0281:
		{
			G_B47_0 = _stringLiteral3053100963;
			G_B47_1 = G_B46_0;
			G_B47_2 = G_B46_1;
			G_B47_3 = G_B46_2;
			G_B47_4 = G_B46_3;
		}

IL_0286:
		{
			String_t* L_107 = String_Concat_m1715369213(NULL /*static, unused*/, G_B47_2, G_B47_1, G_B47_0, /*hidden argument*/NULL);
			NullCheck(G_B47_4);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(G_B47_4, G_B47_3, L_107, /*hidden argument*/NULL);
		}

IL_0292:
		{
			goto IL_03b3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t3852068672_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0298;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_032e;
		throw e;
	}

CATCH_0298:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_21 = ((SocketException_t3852068672 *)__exception_local);
			int32_t L_108 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_108) == ((int32_t)3)))
			{
				goto IL_02af;
			}
		}

IL_02a4:
		{
			int32_t L_109 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			G_B52_0 = ((!(((uint32_t)L_109) <= ((uint32_t)0)))? 1 : 0);
			goto IL_02b0;
		}

IL_02af:
		{
			G_B52_0 = 0;
		}

IL_02b0:
		{
			V_22 = (bool)G_B52_0;
			bool L_110 = V_22;
			if (!L_110)
			{
				goto IL_0328;
			}
		}

IL_02b6:
		{
			bool L_111 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_23 = L_111;
			bool L_112 = V_23;
			if (!L_112)
			{
				goto IL_02e4;
			}
		}

IL_02c4:
		{
			SocketException_t3852068672 * L_113 = V_21;
			NullCheck(L_113);
			int32_t L_114 = SocketException_get_SocketErrorCode_m2767669540(L_113, /*hidden argument*/NULL);
			int32_t L_115 = L_114;
			RuntimeObject * L_116 = Box(SocketError_t3760144386_il2cpp_TypeInfo_var, &L_115);
			String_t* L_117 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral698643059, L_116, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 1, L_117, /*hidden argument*/NULL);
		}

IL_02e4:
		{
			SocketException_t3852068672 * L_118 = V_21;
			NullCheck(L_118);
			int32_t L_119 = SocketException_get_SocketErrorCode_m2767669540(L_118, /*hidden argument*/NULL);
			if ((((int32_t)L_119) == ((int32_t)((int32_t)10054))))
			{
				goto IL_0302;
			}
		}

IL_02f2:
		{
			SocketException_t3852068672 * L_120 = V_21;
			NullCheck(L_120);
			int32_t L_121 = SocketException_get_SocketErrorCode_m2767669540(L_120, /*hidden argument*/NULL);
			G_B58_0 = ((((int32_t)L_121) == ((int32_t)((int32_t)10053)))? 1 : 0);
			goto IL_0303;
		}

IL_0302:
		{
			G_B58_0 = 1;
		}

IL_0303:
		{
			V_24 = (bool)G_B58_0;
			bool L_122 = V_24;
			if (!L_122)
			{
				goto IL_0319;
			}
		}

IL_0309:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1041), /*hidden argument*/NULL);
			goto IL_0327;
		}

IL_0319:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_0327:
		{
		}

IL_0328:
		{
			goto IL_03b3;
		}
	} // end catch (depth: 1)

CATCH_032e:
	{ // begin catch(System.Exception)
		{
			V_25 = ((Exception_t *)__exception_local);
			int32_t L_123 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_123) == ((int32_t)3)))
			{
				goto IL_0345;
			}
		}

IL_033a:
		{
			int32_t L_124 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			G_B66_0 = ((!(((uint32_t)L_124) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0346;
		}

IL_0345:
		{
			G_B66_0 = 0;
		}

IL_0346:
		{
			V_26 = (bool)G_B66_0;
			bool L_125 = V_26;
			if (!L_125)
			{
				goto IL_03b0;
			}
		}

IL_034c:
		{
			bool L_126 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_27 = L_126;
			bool L_127 = V_27;
			if (!L_127)
			{
				goto IL_03a3;
			}
		}

IL_035a:
		{
			ObjectU5BU5D_t2843939325* L_128 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
			ObjectU5BU5D_t2843939325* L_129 = L_128;
			NullCheck(L_129);
			ArrayElementTypeCheck (L_129, _stringLiteral2071980384);
			(L_129)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2071980384);
			ObjectU5BU5D_t2843939325* L_130 = L_129;
			int32_t L_131 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			int32_t L_132 = L_131;
			RuntimeObject * L_133 = Box(PhotonSocketState_t2742032721_il2cpp_TypeInfo_var, &L_132);
			NullCheck(L_130);
			ArrayElementTypeCheck (L_130, L_133);
			(L_130)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_133);
			ObjectU5BU5D_t2843939325* L_134 = L_130;
			NullCheck(L_134);
			ArrayElementTypeCheck (L_134, _stringLiteral788081930);
			(L_134)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral788081930);
			ObjectU5BU5D_t2843939325* L_135 = L_134;
			String_t* L_136 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			NullCheck(L_135);
			ArrayElementTypeCheck (L_135, L_136);
			(L_135)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_136);
			ObjectU5BU5D_t2843939325* L_137 = L_135;
			NullCheck(L_137);
			ArrayElementTypeCheck (L_137, _stringLiteral1304914181);
			(L_137)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1304914181);
			ObjectU5BU5D_t2843939325* L_138 = L_137;
			Exception_t * L_139 = V_25;
			NullCheck(L_138);
			ArrayElementTypeCheck (L_138, L_139);
			(L_138)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_139);
			String_t* L_140 = String_Concat_m2971454694(NULL /*static, unused*/, L_138, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 1, L_140, /*hidden argument*/NULL);
		}

IL_03a3:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_03b0:
		{
			goto IL_03b3;
		}
	} // end catch (depth: 1)

IL_03b3:
	{
	}

IL_03b4:
	{
		int32_t L_141 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
		V_28 = (bool)((((int32_t)L_141) == ((int32_t)2))? 1 : 0);
		bool L_142 = V_28;
		if (L_142)
		{
			goto IL_001a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, __this);
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
// System.Void ExitGames.Client.Photon.SocketUdp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" IL2CPP_METHOD_ATTR void SocketUdp__ctor_m3882629729 (SocketUdp_t1337106072 * __this, PeerBase_t2956237011 * ___npeer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp__ctor_m3882629729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		__this->set_syncer_11(L_0);
		PeerBase_t2956237011 * L_1 = ___npeer0;
		IPhotonSocket__ctor_m40935805(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 5, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_4 = IPhotonSocket_get_Listener_m3998651287(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_4, 5, _stringLiteral1764579347);
	}

IL_0033:
	{
		((IPhotonSocket_t2066969247 *)__this)->set_PollReceive_2((bool)0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SocketUdp_Dispose_m3485359311 (SocketUdp_t1337106072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_Dispose_m3485359311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IPhotonSocket_set_State_m3369138945(__this, 3, /*hidden argument*/NULL);
		Socket_t1119025450 * L_0 = __this->get_sock_10();
		V_0 = (bool)((!(((RuntimeObject*)(Socket_t1119025450 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Socket_t1119025450 * L_2 = __this->get_sock_10();
			NullCheck(L_2);
			bool L_3 = Socket_get_Connected_m2875145796(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			Socket_t1119025450 * L_5 = __this->get_sock_10();
			NullCheck(L_5);
			Socket_Close_m3289097516(L_5, /*hidden argument*/NULL);
		}

IL_0033:
		{
			goto IL_004e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_6 = V_2;
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3782069545, L_6, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 3, L_7, /*hidden argument*/NULL);
		goto IL_004e;
	} // end catch (depth: 1)

IL_004e:
	{
	}

IL_004f:
	{
		__this->set_sock_10((Socket_t1119025450 *)NULL);
		IPhotonSocket_set_State_m3369138945(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketUdp::Connect()
extern "C" IL2CPP_METHOD_ATTR bool SocketUdp_Connect_m3671884378 (SocketUdp_t1337106072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_Connect_m3671884378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Thread_t2300836069 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get_syncer_11();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = IPhotonSocket_Connect_m622616089(__this, /*hidden argument*/NULL);
			V_1 = L_2;
			bool L_3 = V_1;
			V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_3;
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x5B, FINALLY_0053);
		}

IL_0025:
		{
			IPhotonSocket_set_State_m3369138945(__this, 1, /*hidden argument*/NULL);
			intptr_t L_5 = (intptr_t)SocketUdp_DnsAndConnect_m2857623423_RuntimeMethod_var;
			ThreadStart_t1006689297 * L_6 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m3250019360(L_6, __this, L_5, /*hidden argument*/NULL);
			Thread_t2300836069 * L_7 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
			Thread__ctor_m777188137(L_7, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			Thread_t2300836069 * L_8 = V_2;
			NullCheck(L_8);
			Thread_set_IsBackground_m3868016371(L_8, (bool)1, /*hidden argument*/NULL);
			Thread_t2300836069 * L_9 = V_2;
			NullCheck(L_9);
			Thread_Start_m2860771284(L_9, /*hidden argument*/NULL);
			V_4 = (bool)1;
			IL2CPP_LEAVE(0x5B, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		bool L_11 = V_4;
		return L_11;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketUdp::Disconnect()
extern "C" IL2CPP_METHOD_ATTR bool SocketUdp_Disconnect_m233880284 (SocketUdp_t1337106072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_Disconnect_m233880284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 3, _stringLiteral3931995141, /*hidden argument*/NULL);
	}

IL_001b:
	{
		IPhotonSocket_set_State_m3369138945(__this, 3, /*hidden argument*/NULL);
		RuntimeObject * L_2 = __this->get_syncer_11();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			Socket_t1119025450 * L_4 = __this->get_sock_10();
			V_2 = (bool)((!(((RuntimeObject*)(Socket_t1119025450 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0070;
			}
		}

IL_003f:
		{
		}

IL_0040:
		try
		{ // begin try (depth: 2)
			Socket_t1119025450 * L_6 = __this->get_sock_10();
			NullCheck(L_6);
			Socket_Close_m3289097516(L_6, /*hidden argument*/NULL);
			goto IL_0068;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0050;
			throw e;
		}

CATCH_0050:
		{ // begin catch(System.Exception)
			V_3 = ((Exception_t *)__exception_local);
			Exception_t * L_7 = V_3;
			String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral932042022, L_7, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 3, L_8, /*hidden argument*/NULL);
			goto IL_0068;
		} // end catch (depth: 2)

IL_0068:
		{
			__this->set_sock_10((Socket_t1119025450 *)NULL);
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x7B, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007b:
	{
		IPhotonSocket_set_State_m3369138945(__this, 0, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_0088;
	}

IL_0088:
	{
		bool L_10 = V_4;
		return L_10;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Send(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SocketUdp_Send_m2948963369 (SocketUdp_t1337106072 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_Send_m2948963369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B4_0 = 0;
	{
		RuntimeObject * L_0 = __this->get_syncer_11();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Socket_t1119025450 * L_2 = __this->get_sock_10();
			if (!L_2)
			{
				goto IL_0028;
			}
		}

IL_0018:
		{
			Socket_t1119025450 * L_3 = __this->get_sock_10();
			NullCheck(L_3);
			bool L_4 = Socket_get_Connected_m2875145796(L_3, /*hidden argument*/NULL);
			G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			goto IL_0029;
		}

IL_0028:
		{
			G_B4_0 = 1;
		}

IL_0029:
		{
			V_1 = (bool)G_B4_0;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002d:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x8E, FINALLY_0082);
		}

IL_0032:
		{
		}

IL_0033:
		try
		{ // begin try (depth: 2)
			Socket_t1119025450 * L_6 = __this->get_sock_10();
			ByteU5BU5D_t4116647657* L_7 = ___data0;
			int32_t L_8 = ___length1;
			NullCheck(L_6);
			Socket_Send_m2509318470(L_6, L_7, 0, L_8, 0, /*hidden argument*/NULL);
			goto IL_007f;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0047;
			throw e;
		}

CATCH_0047:
		{ // begin catch(System.Exception)
			{
				V_3 = ((Exception_t *)__exception_local);
				bool L_9 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
				V_4 = L_9;
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_007b;
				}
			}

IL_0056:
			{
				String_t* L_11 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
				Exception_t * L_12 = V_3;
				NullCheck(L_12);
				String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
				String_t* L_14 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral105646513, L_11, _stringLiteral3450517378, L_13, /*hidden argument*/NULL);
				IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 1, L_14, /*hidden argument*/NULL);
			}

IL_007b:
			{
				V_2 = 3;
				IL2CPP_LEAVE(0x8E, FINALLY_0082);
			}
		} // end catch (depth: 2)

IL_007f:
		{
			IL2CPP_LEAVE(0x8A, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		RuntimeObject * L_15 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008a:
	{
		V_2 = 0;
		goto IL_008e;
	}

IL_008e:
	{
		int32_t L_16 = V_2;
		return L_16;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::DnsAndConnect()
extern "C" IL2CPP_METHOD_ATTR void SocketUdp_DnsAndConnect_m2857623423 (SocketUdp_t1337106072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_DnsAndConnect_m2857623423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t241777590 * V_0 = NULL;
	Thread_t2300836069 * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	SecurityException_t975544473 * V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	Exception_t * V_8 = NULL;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	int32_t G_B15_0 = 0;
	StringU5BU5D_t1281789340* G_B15_1 = NULL;
	StringU5BU5D_t1281789340* G_B15_2 = NULL;
	int32_t G_B15_3 = 0;
	RuntimeObject* G_B15_4 = NULL;
	int32_t G_B14_0 = 0;
	StringU5BU5D_t1281789340* G_B14_1 = NULL;
	StringU5BU5D_t1281789340* G_B14_2 = NULL;
	int32_t G_B14_3 = 0;
	RuntimeObject* G_B14_4 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t1281789340* G_B16_2 = NULL;
	StringU5BU5D_t1281789340* G_B16_3 = NULL;
	int32_t G_B16_4 = 0;
	RuntimeObject* G_B16_5 = NULL;
	int32_t G_B21_0 = 0;
	StringU5BU5D_t1281789340* G_B21_1 = NULL;
	StringU5BU5D_t1281789340* G_B21_2 = NULL;
	int32_t G_B21_3 = 0;
	RuntimeObject* G_B21_4 = NULL;
	int32_t G_B20_0 = 0;
	StringU5BU5D_t1281789340* G_B20_1 = NULL;
	StringU5BU5D_t1281789340* G_B20_2 = NULL;
	int32_t G_B20_3 = 0;
	RuntimeObject* G_B20_4 = NULL;
	String_t* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_t1281789340* G_B22_2 = NULL;
	StringU5BU5D_t1281789340* G_B22_3 = NULL;
	int32_t G_B22_4 = 0;
	RuntimeObject* G_B22_5 = NULL;
	{
		V_0 = (IPAddress_t241777590 *)NULL;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			IPAddress_t241777590 * L_1 = IPhotonSocket_GetIpAddress_m1722057511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			V_0 = L_1;
			IPAddress_t241777590 * L_2 = V_0;
			V_2 = (bool)((((RuntimeObject*)(IPAddress_t241777590 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_002f;
			}
		}

IL_0018:
		{
			String_t* L_4 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral813302798, L_4, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SocketUdp_DnsAndConnect_m2857623423_RuntimeMethod_var);
		}

IL_002f:
		{
			RuntimeObject * L_7 = __this->get_syncer_11();
			V_3 = L_7;
			RuntimeObject * L_8 = V_3;
			Monitor_Enter_m2249409497(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		}

IL_003d:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_9 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_9) == ((int32_t)3)))
				{
					goto IL_0052;
				}
			}

IL_0047:
			{
				int32_t L_10 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
				G_B7_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
				goto IL_0053;
			}

IL_0052:
			{
				G_B7_0 = 1;
			}

IL_0053:
			{
				V_4 = (bool)G_B7_0;
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_005f;
				}
			}

IL_0059:
			{
				IL2CPP_LEAVE(0x1E7, FINALLY_00ab);
			}

IL_005f:
			{
				IPAddress_t241777590 * L_12 = V_0;
				NullCheck(L_12);
				int32_t L_13 = IPAddress_get_AddressFamily_m1010663936(L_12, /*hidden argument*/NULL);
				Socket_t1119025450 * L_14 = (Socket_t1119025450 *)il2cpp_codegen_object_new(Socket_t1119025450_il2cpp_TypeInfo_var);
				Socket__ctor_m3479084642(L_14, L_13, 2, ((int32_t)17), /*hidden argument*/NULL);
				__this->set_sock_10(L_14);
				Socket_t1119025450 * L_15 = __this->get_sock_10();
				IPAddress_t241777590 * L_16 = V_0;
				int32_t L_17 = IPhotonSocket_get_ServerPort_m1939376162(__this, /*hidden argument*/NULL);
				NullCheck(L_15);
				Socket_Connect_m1862028144(L_15, L_16, L_17, /*hidden argument*/NULL);
				IPAddress_t241777590 * L_18 = V_0;
				bool L_19 = IPhotonSocket_IsIpv6SimpleCheck_m2020147281(__this, L_18, /*hidden argument*/NULL);
				IPhotonSocket_set_AddressResolvedAsIpv6_m4202628431(__this, L_19, /*hidden argument*/NULL);
				IPhotonSocket_set_State_m3369138945(__this, 2, /*hidden argument*/NULL);
				PeerBase_t2956237011 * L_20 = ((IPhotonSocket_t2066969247 *)__this)->get_peerBase_0();
				NullCheck(L_20);
				VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_20);
				IL2CPP_LEAVE(0xB3, FINALLY_00ab);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ab;
		}

FINALLY_00ab:
		{ // begin finally (depth: 2)
			RuntimeObject * L_21 = V_3;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(171)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(171)
		{
			IL2CPP_JUMP_TBL(0x1E7, IL_01e7)
			IL2CPP_JUMP_TBL(0xB3, IL_00b3)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00b3:
		{
			goto IL_01c6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SecurityException_t975544473_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00b9;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0141;
		throw e;
	}

CATCH_00b9:
	{ // begin catch(System.Security.SecurityException)
		{
			V_5 = ((SecurityException_t975544473 *)__exception_local);
			bool L_22 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_6 = L_22;
			bool L_23 = V_6;
			if (!L_23)
			{
				goto IL_0130;
			}
		}

IL_00c9:
		{
			RuntimeObject* L_24 = IPhotonSocket_get_Listener_m3998651287(__this, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_25 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_t1281789340* L_26 = L_25;
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, _stringLiteral2489687337);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2489687337);
			StringU5BU5D_t1281789340* L_27 = L_26;
			String_t* L_28 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, L_28);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
			StringU5BU5D_t1281789340* L_29 = L_27;
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, _stringLiteral3429825515);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3429825515);
			StringU5BU5D_t1281789340* L_30 = L_29;
			IPAddress_t241777590 * L_31 = V_0;
			G_B14_0 = 3;
			G_B14_1 = L_30;
			G_B14_2 = L_30;
			G_B14_3 = 1;
			G_B14_4 = L_24;
			if (!L_31)
			{
				G_B15_0 = 3;
				G_B15_1 = L_30;
				G_B15_2 = L_30;
				G_B15_3 = 1;
				G_B15_4 = L_24;
				goto IL_010c;
			}
		}

IL_00f5:
		{
			IPAddress_t241777590 * L_32 = V_0;
			NullCheck(L_32);
			int32_t L_33 = IPAddress_get_AddressFamily_m1010663936(L_32, /*hidden argument*/NULL);
			V_7 = L_33;
			RuntimeObject * L_34 = Box(AddressFamily_t2612549059_il2cpp_TypeInfo_var, (&V_7));
			NullCheck(L_34);
			String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
			V_7 = *(int32_t*)UnBox(L_34);
			G_B16_0 = L_35;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			G_B16_5 = G_B14_4;
			goto IL_0111;
		}

IL_010c:
		{
			G_B16_0 = _stringLiteral757602046;
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
			G_B16_3 = G_B15_2;
			G_B16_4 = G_B15_3;
			G_B16_5 = G_B15_4;
		}

IL_0111:
		{
			NullCheck(G_B16_2);
			ArrayElementTypeCheck (G_B16_2, G_B16_0);
			(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
			StringU5BU5D_t1281789340* L_36 = G_B16_3;
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, _stringLiteral3198630429);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3198630429);
			StringU5BU5D_t1281789340* L_37 = L_36;
			SecurityException_t975544473 * L_38 = V_5;
			NullCheck(L_38);
			String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
			NullCheck(L_37);
			ArrayElementTypeCheck (L_37, L_39);
			(L_37)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_39);
			String_t* L_40 = String_Concat_m1809518182(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(G_B16_5);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, G_B16_5, G_B16_4, L_40);
		}

IL_0130:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1022), /*hidden argument*/NULL);
			goto IL_01e7;
		}
	} // end catch (depth: 1)

CATCH_0141:
	{ // begin catch(System.Exception)
		{
			V_8 = ((Exception_t *)__exception_local);
			bool L_41 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_9 = L_41;
			bool L_42 = V_9;
			if (!L_42)
			{
				goto IL_01b8;
			}
		}

IL_0151:
		{
			RuntimeObject* L_43 = IPhotonSocket_get_Listener_m3998651287(__this, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_44 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_t1281789340* L_45 = L_44;
			NullCheck(L_45);
			ArrayElementTypeCheck (L_45, _stringLiteral2489687337);
			(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2489687337);
			StringU5BU5D_t1281789340* L_46 = L_45;
			String_t* L_47 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_47);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_47);
			StringU5BU5D_t1281789340* L_48 = L_46;
			NullCheck(L_48);
			ArrayElementTypeCheck (L_48, _stringLiteral3429825515);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3429825515);
			StringU5BU5D_t1281789340* L_49 = L_48;
			IPAddress_t241777590 * L_50 = V_0;
			G_B20_0 = 3;
			G_B20_1 = L_49;
			G_B20_2 = L_49;
			G_B20_3 = 1;
			G_B20_4 = L_43;
			if (!L_50)
			{
				G_B21_0 = 3;
				G_B21_1 = L_49;
				G_B21_2 = L_49;
				G_B21_3 = 1;
				G_B21_4 = L_43;
				goto IL_0194;
			}
		}

IL_017d:
		{
			IPAddress_t241777590 * L_51 = V_0;
			NullCheck(L_51);
			int32_t L_52 = IPAddress_get_AddressFamily_m1010663936(L_51, /*hidden argument*/NULL);
			V_7 = L_52;
			RuntimeObject * L_53 = Box(AddressFamily_t2612549059_il2cpp_TypeInfo_var, (&V_7));
			NullCheck(L_53);
			String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
			V_7 = *(int32_t*)UnBox(L_53);
			G_B22_0 = L_54;
			G_B22_1 = G_B20_0;
			G_B22_2 = G_B20_1;
			G_B22_3 = G_B20_2;
			G_B22_4 = G_B20_3;
			G_B22_5 = G_B20_4;
			goto IL_0199;
		}

IL_0194:
		{
			G_B22_0 = _stringLiteral757602046;
			G_B22_1 = G_B21_0;
			G_B22_2 = G_B21_1;
			G_B22_3 = G_B21_2;
			G_B22_4 = G_B21_3;
			G_B22_5 = G_B21_4;
		}

IL_0199:
		{
			NullCheck(G_B22_2);
			ArrayElementTypeCheck (G_B22_2, G_B22_0);
			(G_B22_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_1), (String_t*)G_B22_0);
			StringU5BU5D_t1281789340* L_55 = G_B22_3;
			NullCheck(L_55);
			ArrayElementTypeCheck (L_55, _stringLiteral3198630429);
			(L_55)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3198630429);
			StringU5BU5D_t1281789340* L_56 = L_55;
			Exception_t * L_57 = V_8;
			NullCheck(L_57);
			String_t* L_58 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_57);
			NullCheck(L_56);
			ArrayElementTypeCheck (L_56, L_58);
			(L_56)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_58);
			String_t* L_59 = String_Concat_m1809518182(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
			NullCheck(G_B22_5);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, G_B22_5, G_B22_4, L_59);
		}

IL_01b8:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1023), /*hidden argument*/NULL);
			goto IL_01e7;
		}
	} // end catch (depth: 1)

IL_01c6:
	{
		intptr_t L_60 = (intptr_t)SocketUdp_ReceiveLoop_m1175583893_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_61 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_61, __this, L_60, /*hidden argument*/NULL);
		Thread_t2300836069 * L_62 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_62, L_61, /*hidden argument*/NULL);
		V_1 = L_62;
		Thread_t2300836069 * L_63 = V_1;
		NullCheck(L_63);
		Thread_set_IsBackground_m3868016371(L_63, (bool)1, /*hidden argument*/NULL);
		Thread_t2300836069 * L_64 = V_1;
		NullCheck(L_64);
		Thread_Start_m2860771284(L_64, /*hidden argument*/NULL);
	}

IL_01e7:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::ReceiveLoop()
extern "C" IL2CPP_METHOD_ATTR void SocketUdp_ReceiveLoop_m1175583893 (SocketUdp_t1337106072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_ReceiveLoop_m1175583893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	SocketException_t3852068672 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = IPhotonSocket_get_MTU_m3051045953(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		goto IL_0194;
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		Socket_t1119025450 * L_2 = __this->get_sock_10();
		ByteU5BU5D_t4116647657* L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = Socket_Receive_m1491150995(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		int32_t L_6 = V_1;
		IPhotonSocket_HandleReceivedDatagram_m1283719406(__this, L_5, L_6, (bool)1, /*hidden argument*/NULL);
		goto IL_0193;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t3852068672_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0031;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00fc;
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_2 = ((SocketException_t3852068672 *)__exception_local);
			int32_t L_7 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_7) == ((int32_t)3)))
			{
				goto IL_0047;
			}
		}

IL_003c:
		{
			int32_t L_8 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			G_B6_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0048;
		}

IL_0047:
		{
			G_B6_0 = 0;
		}

IL_0048:
		{
			V_3 = (bool)G_B6_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_00f6;
			}
		}

IL_004f:
		{
			bool L_10 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_00e9;
			}
		}

IL_0060:
		{
			ObjectU5BU5D_t2843939325* L_12 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
			ObjectU5BU5D_t2843939325* L_13 = L_12;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, _stringLiteral2071980384);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2071980384);
			ObjectU5BU5D_t2843939325* L_14 = L_13;
			int32_t L_15 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(PhotonSocketState_t2742032721_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
			ObjectU5BU5D_t2843939325* L_18 = L_14;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, _stringLiteral788081930);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral788081930);
			ObjectU5BU5D_t2843939325* L_19 = L_18;
			String_t* L_20 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			NullCheck(L_19);
			ArrayElementTypeCheck (L_19, L_20);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
			ObjectU5BU5D_t2843939325* L_21 = L_19;
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, _stringLiteral3444471541);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3444471541);
			ObjectU5BU5D_t2843939325* L_22 = L_21;
			SocketException_t3852068672 * L_23 = V_2;
			NullCheck(L_23);
			int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_23);
			int32_t L_25 = L_24;
			RuntimeObject * L_26 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_25);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_26);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_26);
			ObjectU5BU5D_t2843939325* L_27 = L_22;
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, _stringLiteral1573185300);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1573185300);
			ObjectU5BU5D_t2843939325* L_28 = L_27;
			SocketException_t3852068672 * L_29 = V_2;
			NullCheck(L_29);
			int32_t L_30 = SocketException_get_SocketErrorCode_m2767669540(L_29, /*hidden argument*/NULL);
			int32_t L_31 = L_30;
			RuntimeObject * L_32 = Box(SocketError_t3760144386_il2cpp_TypeInfo_var, &L_31);
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_32);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_32);
			ObjectU5BU5D_t2843939325* L_33 = L_28;
			NullCheck(L_33);
			ArrayElementTypeCheck (L_33, _stringLiteral1407959169);
			(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral1407959169);
			ObjectU5BU5D_t2843939325* L_34 = L_33;
			SocketException_t3852068672 * L_35 = V_2;
			NullCheck(L_35);
			String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_35);
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, L_36);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_36);
			ObjectU5BU5D_t2843939325* L_37 = L_34;
			NullCheck(L_37);
			ArrayElementTypeCheck (L_37, _stringLiteral3452614528);
			(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral3452614528);
			ObjectU5BU5D_t2843939325* L_38 = L_37;
			SocketException_t3852068672 * L_39 = V_2;
			NullCheck(L_38);
			ArrayElementTypeCheck (L_38, L_39);
			(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_39);
			String_t* L_40 = String_Concat_m2971454694(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 1, L_40, /*hidden argument*/NULL);
		}

IL_00e9:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_00f6:
		{
			goto IL_0193;
		}
	} // end catch (depth: 1)

CATCH_00fc:
	{ // begin catch(System.Exception)
		{
			V_5 = ((Exception_t *)__exception_local);
			int32_t L_41 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_41) == ((int32_t)3)))
			{
				goto IL_0113;
			}
		}

IL_0108:
		{
			int32_t L_42 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			G_B14_0 = ((!(((uint32_t)L_42) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0114;
		}

IL_0113:
		{
			G_B14_0 = 0;
		}

IL_0114:
		{
			V_6 = (bool)G_B14_0;
			bool L_43 = V_6;
			if (!L_43)
			{
				goto IL_0190;
			}
		}

IL_011a:
		{
			bool L_44 = IPhotonSocket_ReportDebugOfLevel_m3414427787(__this, 1, /*hidden argument*/NULL);
			V_7 = L_44;
			bool L_45 = V_7;
			if (!L_45)
			{
				goto IL_0183;
			}
		}

IL_0128:
		{
			ObjectU5BU5D_t2843939325* L_46 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)8);
			ObjectU5BU5D_t2843939325* L_47 = L_46;
			NullCheck(L_47);
			ArrayElementTypeCheck (L_47, _stringLiteral2071980384);
			(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2071980384);
			ObjectU5BU5D_t2843939325* L_48 = L_47;
			int32_t L_49 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
			int32_t L_50 = L_49;
			RuntimeObject * L_51 = Box(PhotonSocketState_t2742032721_il2cpp_TypeInfo_var, &L_50);
			NullCheck(L_48);
			ArrayElementTypeCheck (L_48, L_51);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_51);
			ObjectU5BU5D_t2843939325* L_52 = L_48;
			NullCheck(L_52);
			ArrayElementTypeCheck (L_52, _stringLiteral788081930);
			(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral788081930);
			ObjectU5BU5D_t2843939325* L_53 = L_52;
			String_t* L_54 = IPhotonSocket_get_ServerAddress_m321374284(__this, /*hidden argument*/NULL);
			NullCheck(L_53);
			ArrayElementTypeCheck (L_53, L_54);
			(L_53)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_54);
			ObjectU5BU5D_t2843939325* L_55 = L_53;
			NullCheck(L_55);
			ArrayElementTypeCheck (L_55, _stringLiteral800449946);
			(L_55)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral800449946);
			ObjectU5BU5D_t2843939325* L_56 = L_55;
			Exception_t * L_57 = V_5;
			NullCheck(L_57);
			String_t* L_58 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_57);
			NullCheck(L_56);
			ArrayElementTypeCheck (L_56, L_58);
			(L_56)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_58);
			ObjectU5BU5D_t2843939325* L_59 = L_56;
			NullCheck(L_59);
			ArrayElementTypeCheck (L_59, _stringLiteral529615309);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral529615309);
			ObjectU5BU5D_t2843939325* L_60 = L_59;
			Exception_t * L_61 = V_5;
			NullCheck(L_60);
			ArrayElementTypeCheck (L_60, L_61);
			(L_60)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_61);
			String_t* L_62 = String_Concat_m2971454694(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m2947957953(__this, 1, L_62, /*hidden argument*/NULL);
		}

IL_0183:
		{
			IPhotonSocket_HandleException_m3202114139(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_0190:
		{
			goto IL_0193;
		}
	} // end catch (depth: 1)

IL_0193:
	{
	}

IL_0194:
	{
		int32_t L_63 = IPhotonSocket_get_State_m3838190543(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_63) == ((int32_t)2))? 1 : 0);
		bool L_64 = V_8;
		if (L_64)
		{
			goto IL_0012;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, __this);
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
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m1585703076 (StreamBuffer_t3827669789 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer__ctor_m1585703076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___size0;
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buf_3(L_1);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m417559151 (StreamBuffer_t3827669789 * __this, ByteU5BU5D_t4116647657* ___buf0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___buf0;
		__this->set_buf_3(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___buf0;
		NullCheck(L_1);
		__this->set_len_2((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))));
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* StreamBuffer_ToArray_m3109285386 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_ToArray_m3109285386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		int32_t L_0 = __this->get_len_2();
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = __this->get_buf_3();
		ByteU5BU5D_t4116647657* L_3 = V_0;
		int32_t L_4 = __this->get_len_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = V_0;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		ByteU5BU5D_t4116647657* L_6 = V_1;
		return L_6;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArrayFromPos()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* StreamBuffer_ToArrayFromPos_m549317868 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_ToArrayFromPos_m549317868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		int32_t L_0 = __this->get_len_2();
		int32_t L_1 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0);
		V_3 = L_4;
		goto IL_0044;
	}

IL_0024:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		ByteU5BU5D_t4116647657* L_7 = __this->get_buf_3();
		int32_t L_8 = __this->get_pos_1();
		ByteU5BU5D_t4116647657* L_9 = V_1;
		int32_t L_10 = V_0;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, 0, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_11 = V_1;
		V_3 = L_11;
		goto IL_0044;
	}

IL_0044:
	{
		ByteU5BU5D_t4116647657* L_12 = V_3;
		return L_12;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::Compact()
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_Compact_m3460914763 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = StreamBuffer_get_Length_m1616542868(__this, /*hidden argument*/NULL);
		int32_t L_1 = StreamBuffer_get_Position_m1534163681(__this, /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)))));
		int64_t L_2 = V_0;
		V_1 = (bool)((((int64_t)L_2) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = __this->get_buf_3();
		int32_t L_5 = StreamBuffer_get_Position_m1534163681(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = __this->get_buf_3();
		int64_t L_7 = V_0;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, (RuntimeArray *)(RuntimeArray *)L_6, 0, (((int32_t)((int32_t)L_7))), /*hidden argument*/NULL);
	}

IL_0036:
	{
		StreamBuffer_set_Position_m3199317582(__this, 0, /*hidden argument*/NULL);
		int64_t L_8 = V_0;
		StreamBuffer_SetLength_m2522285437(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* StreamBuffer_GetBuffer_m3307584100 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_buf_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBufferAndAdvance(System.Int32,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* StreamBuffer_GetBufferAndAdvance_m650897550 (StreamBuffer_t3827669789 * __this, int32_t ___length0, int32_t* ___offset1, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t* L_0 = ___offset1;
		int32_t L_1 = StreamBuffer_get_Position_m1534163681(__this, /*hidden argument*/NULL);
		*((int32_t*)(L_0)) = (int32_t)L_1;
		int32_t L_2 = StreamBuffer_get_Position_m1534163681(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___length0;
		StreamBuffer_set_Position_m3199317582(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = __this->get_buf_3();
		V_0 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		ByteU5BU5D_t4116647657* L_5 = V_0;
		return L_5;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Length_m1616542868 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Position()
extern "C" IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Position_m1534163681 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_set_Position_m3199317582 (StreamBuffer_t3827669789 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___value0;
		__this->set_pos_1(L_0);
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = __this->get_pos_1();
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = __this->get_pos_1();
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		StreamBuffer_CheckSize_m1370664956(__this, L_5, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Int64 ExitGames.Client.Photon.StreamBuffer::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" IL2CPP_METHOD_ATTR int64_t StreamBuffer_Seek_m2671349007 (StreamBuffer_t3827669789 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_Seek_m2671349007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int64_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___origin1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_0019:
	{
		int64_t L_2 = ___offset0;
		V_0 = (((int32_t)((int32_t)L_2)));
		goto IL_0041;
	}

IL_001e:
	{
		int32_t L_3 = __this->get_pos_1();
		int64_t L_4 = ___offset0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)L_4)))));
		goto IL_0041;
	}

IL_002a:
	{
		int32_t L_5 = __this->get_len_2();
		int64_t L_6 = ___offset0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)(((int32_t)((int32_t)L_6)))));
		goto IL_0041;
	}

IL_0036:
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, _stringLiteral1973328828, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, StreamBuffer_Seek_m2671349007_RuntimeMethod_var);
	}

IL_0041:
	{
		int32_t L_8 = V_0;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, _stringLiteral2890037872, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, StreamBuffer_Seek_m2671349007_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_len_2();
		V_3 = (bool)((((int32_t)L_11) > ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		ArgumentException_t132251570 * L_14 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_14, _stringLiteral1605998574, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, StreamBuffer_Seek_m2671349007_RuntimeMethod_var);
	}

IL_006e:
	{
		int32_t L_15 = V_0;
		__this->set_pos_1(L_15);
		int32_t L_16 = __this->get_pos_1();
		V_4 = (((int64_t)((int64_t)L_16)));
		goto IL_0080;
	}

IL_0080:
	{
		int64_t L_17 = V_4;
		return L_17;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_SetLength_m2522285437 (StreamBuffer_t3827669789 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int64_t L_0 = ___value0;
		__this->set_len_2((((int32_t)((int32_t)L_0))));
		int32_t L_1 = __this->get_len_2();
		StreamBuffer_CheckSize_m1370664956(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_pos_1();
		int32_t L_3 = __this->get_len_2();
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5 = __this->get_len_2();
		__this->set_pos_1(L_5);
	}

IL_0036:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::SetCapacityMinimum(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_SetCapacityMinimum_m807430420 (StreamBuffer_t3827669789 * __this, int32_t ___neededSize0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___neededSize0;
		StreamBuffer_CheckSize_m1370664956(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::Read(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t StreamBuffer_Read_m819620008 (StreamBuffer_t3827669789 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_len_2();
		int32_t L_1 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		int32_t L_4 = ___count2;
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		___count2 = L_7;
	}

IL_002c:
	{
		ByteU5BU5D_t4116647657* L_8 = __this->get_buf_3();
		int32_t L_9 = __this->get_pos_1();
		ByteU5BU5D_t4116647657* L_10 = ___buffer0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = ___count2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, L_9, (RuntimeArray *)(RuntimeArray *)L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_pos_1();
		int32_t L_14 = ___count2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
		int32_t L_15 = ___count2;
		V_2 = L_15;
		goto IL_0053;
	}

IL_0053:
	{
		int32_t L_16 = V_2;
		return L_16;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_Write_m17470745 (StreamBuffer_t3827669789 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___srcOffset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		StreamBuffer_CheckSize_m1370664956(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_len_2();
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_0;
		__this->set_len_2(L_6);
	}

IL_0028:
	{
		ByteU5BU5D_t4116647657* L_7 = ___buffer0;
		int32_t L_8 = ___srcOffset1;
		ByteU5BU5D_t4116647657* L_9 = __this->get_buf_3();
		int32_t L_10 = __this->get_pos_1();
		int32_t L_11 = ___count2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		__this->set_pos_1(L_12);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::ReadByte()
extern "C" IL2CPP_METHOD_ATTR int32_t StreamBuffer_ReadByte_m1584276604 (StreamBuffer_t3827669789 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = __this->get_len_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		V_1 = (-1);
		goto IL_0036;
	}

IL_001b:
	{
		ByteU5BU5D_t4116647657* L_3 = __this->get_buf_3();
		int32_t L_4 = __this->get_pos_1();
		V_2 = L_4;
		int32_t L_5 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_2;
		NullCheck(L_3);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteByte(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_WriteByte_m101811459 (StreamBuffer_t3827669789 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = __this->get_len_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = __this->get_pos_1();
		__this->set_len_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get_len_2();
		StreamBuffer_CheckSize_m1370664956(__this, L_4, /*hidden argument*/NULL);
	}

IL_0033:
	{
		ByteU5BU5D_t4116647657* L_5 = __this->get_buf_3();
		int32_t L_6 = __this->get_pos_1();
		V_1 = L_6;
		int32_t L_7 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_1;
		uint8_t L_9 = ___value0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_9);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteBytes(System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void StreamBuffer_WriteBytes_m2257929183 (StreamBuffer_t3827669789 * __this, uint8_t ___v00, uint8_t ___v11, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = V_0;
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		StreamBuffer_CheckSize_m1370664956(__this, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		ByteU5BU5D_t4116647657* L_6 = __this->get_buf_3();
		int32_t L_7 = __this->get_pos_1();
		V_2 = L_7;
		int32_t L_8 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_2;
		uint8_t L_10 = ___v00;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		ByteU5BU5D_t4116647657* L_11 = __this->get_buf_3();
		int32_t L_12 = __this->get_pos_1();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_2;
		uint8_t L_15 = ___v11;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_15);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.StreamBuffer::CheckSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool StreamBuffer_CheckSize_m1370664956 (StreamBuffer_t3827669789 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_CheckSize_m1370664956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = ___size0;
		ByteU5BU5D_t4116647657* L_1 = __this->get_buf_3();
		NullCheck(L_1);
		V_2 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_006a;
	}

IL_0018:
	{
		ByteU5BU5D_t4116647657* L_3 = __this->get_buf_3();
		NullCheck(L_3);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))));
		int32_t L_4 = V_0;
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		V_0 = 1;
	}

IL_002f:
	{
		goto IL_0037;
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2));
	}

IL_0037:
	{
		int32_t L_7 = ___size0;
		int32_t L_8 = V_0;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_10 = V_0;
		ByteU5BU5D_t4116647657* L_11 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_1 = L_11;
		ByteU5BU5D_t4116647657* L_12 = __this->get_buf_3();
		ByteU5BU5D_t4116647657* L_13 = V_1;
		ByteU5BU5D_t4116647657* L_14 = __this->get_buf_3();
		NullCheck(L_14);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_12, 0, (RuntimeArray *)(RuntimeArray *)L_13, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_15 = V_1;
		__this->set_buf_3(L_15);
		V_3 = (bool)1;
		goto IL_006a;
	}

IL_006a:
	{
		bool L_16 = V_3;
		return L_16;
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
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR List_1_t3349700990 * SupportClass_GetMethods_m639269240 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___attribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_GetMethods_m639269240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3349700990 * V_0 = NULL;
	MethodInfoU5BU5D_t2572182361* V_1 = NULL;
	bool V_2 = false;
	List_1_t3349700990 * V_3 = NULL;
	MethodInfoU5BU5D_t2572182361* V_4 = NULL;
	int32_t V_5 = 0;
	MethodInfo_t * V_6 = NULL;
	bool V_7 = false;
	int32_t G_B6_0 = 0;
	{
		List_1_t3349700990 * L_0 = (List_1_t3349700990 *)il2cpp_codegen_object_new(List_1_t3349700990_il2cpp_TypeInfo_var);
		List_1__ctor_m496368285(L_0, /*hidden argument*/List_1__ctor_m496368285_RuntimeMethod_var);
		V_0 = L_0;
		Type_t * L_1 = ___type0;
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t3349700990 * L_3 = V_0;
		V_3 = L_3;
		goto IL_0061;
	}

IL_0014:
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		MethodInfoU5BU5D_t2572182361* L_5 = VirtFuncInvoker1< MethodInfoU5BU5D_t2572182361*, int32_t >::Invoke(44 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_4, ((int32_t)52));
		V_1 = L_5;
		MethodInfoU5BU5D_t2572182361* L_6 = V_1;
		V_4 = L_6;
		V_5 = 0;
		goto IL_0055;
	}

IL_0026:
	{
		MethodInfoU5BU5D_t2572182361* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MethodInfo_t * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_6 = L_10;
		Type_t * L_11 = ___attribute1;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		MethodInfo_t * L_12 = V_6;
		Type_t * L_13 = ___attribute1;
		NullCheck(L_12);
		bool L_14 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_12, L_13, (bool)0);
		G_B6_0 = ((int32_t)(L_14));
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 1;
	}

IL_003d:
	{
		V_7 = (bool)G_B6_0;
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_004e;
		}
	}
	{
		List_1_t3349700990 * L_16 = V_0;
		MethodInfo_t * L_17 = V_6;
		NullCheck(L_16);
		List_1_Add_m919845895(L_16, L_17, /*hidden argument*/List_1_Add_m919845895_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_19 = V_5;
		MethodInfoU5BU5D_t2572182361* L_20 = V_4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		List_1_t3349700990 * L_21 = V_0;
		V_3 = L_21;
		goto IL_0061;
	}

IL_0061:
	{
		List_1_t3349700990 * L_22 = V_3;
		return L_22;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
extern "C" IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_m1042627442 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_GetTickCount_m1042627442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		IntegerMillisecondsDelegate_t651311252 * L_0 = ((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->get_IntegerMilliseconds_1();
		NullCheck(L_0);
		int32_t L_1 = IntegerMillisecondsDelegate_Invoke_m3991646450(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR uint8_t SupportClass_CallInBackground_m4010782055 (RuntimeObject * __this /* static, unused */, Func_1_t3822001908 * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_CallInBackground_m4010782055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Func_1_t3822001908 * L_0 = ___myThread0;
		int32_t L_1 = ___millisecondsInterval1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		uint8_t L_2 = SupportClass_StartBackgroundCalls_m2029470730(NULL /*static, unused*/, L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		uint8_t L_3 = V_0;
		return L_3;
	}
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m2029470730 (RuntimeObject * __this /* static, unused */, Func_1_t3822001908 * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_StartBackgroundCalls_m2029470730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t2492842391 * V_0 = NULL;
	Thread_t2300836069 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	{
		U3CU3Ec__DisplayClass6_0_t2492842391 * L_0 = (U3CU3Ec__DisplayClass6_0_t2492842391 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t2492842391_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m219761943(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t2492842391 * L_1 = V_0;
		int32_t L_2 = ___millisecondsInterval1;
		NullCheck(L_1);
		L_1->set_millisecondsInterval_0(L_2);
		U3CU3Ec__DisplayClass6_0_t2492842391 * L_3 = V_0;
		Func_1_t3822001908 * L_4 = ___myThread0;
		NullCheck(L_3);
		L_3->set_myThread_1(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		List_1_t3772910811 * L_5 = ((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->get_threadList_0();
		V_2 = (bool)((((RuntimeObject*)(List_1_t3772910811 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		List_1_t3772910811 * L_7 = (List_1_t3772910811 *)il2cpp_codegen_object_new(List_1_t3772910811_il2cpp_TypeInfo_var);
		List_1__ctor_m184824557(L_7, /*hidden argument*/List_1__ctor_m184824557_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->set_threadList_0(L_7);
	}

IL_002d:
	{
		U3CU3Ec__DisplayClass6_0_t2492842391 * L_8 = V_0;
		intptr_t L_9 = (intptr_t)U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m1096870055_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_10 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_10, L_8, L_9, /*hidden argument*/NULL);
		Thread_t2300836069 * L_11 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_11, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = ___taskName2;
		bool L_13 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		Thread_t2300836069 * L_15 = V_1;
		String_t* L_16 = ___taskName2;
		NullCheck(L_15);
		Thread_set_Name_m3537838048(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Thread_t2300836069 * L_17 = V_1;
		NullCheck(L_17);
		Thread_set_IsBackground_m3868016371(L_17, (bool)1, /*hidden argument*/NULL);
		Thread_t2300836069 * L_18 = V_1;
		NullCheck(L_18);
		Thread_Start_m2860771284(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		List_1_t3772910811 * L_19 = ((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->get_threadList_0();
		Thread_t2300836069 * L_20 = V_1;
		NullCheck(L_19);
		List_1_Add_m1133289729(L_19, L_20, /*hidden argument*/List_1_Add_m1133289729_RuntimeMethod_var);
		List_1_t3772910811 * L_21 = ((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->get_threadList_0();
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m3880499525(L_21, /*hidden argument*/List_1_get_Count_m3880499525_RuntimeMethod_var);
		V_4 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)))));
		goto IL_0082;
	}

IL_0082:
	{
		uint8_t L_23 = V_4;
		return L_23;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_m353758348 (RuntimeObject * __this /* static, unused */, Exception_t * ___throwable0, TextWriter_t3478189236 * ___stream1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TextWriter_t3478189236 * L_0 = ___stream1;
		V_0 = (bool)((!(((RuntimeObject*)(TextWriter_t3478189236 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		TextWriter_t3478189236 * L_2 = ___stream1;
		Exception_t * L_3 = ___throwable0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_2, L_4);
		TextWriter_t3478189236 * L_5 = ___stream1;
		Exception_t * L_6 = ___throwable0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_6);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_5, L_7);
		TextWriter_t3478189236 * L_8 = ___stream1;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_8);
		goto IL_0048;
	}

IL_002e:
	{
		Exception_t * L_9 = ___throwable0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		Debug_WriteLine_m3834261362(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Exception_t * L_11 = ___throwable0;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_11);
		Debug_WriteLine_m3834261362(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_m3074858457 (RuntimeObject * __this /* static, unused */, Exception_t * ___throwable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_WriteStackTrace_m3074858457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___throwable0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		SupportClass_WriteStackTrace_m353758348(NULL /*static, unused*/, L_0, (TextWriter_t3478189236 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m1908829707 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_DictionaryToString_m1908829707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		String_t* L_1 = SupportClass_DictionaryToString_m937902345(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m937902345 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_DictionaryToString_m937902345_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B12_0 = 0;
	{
		RuntimeObject* L_0 = ___dictionary0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_4 = _stringLiteral1202628576;
		goto IL_01d3;
	}

IL_0016:
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_Append_m1965104174(L_3, _stringLiteral3452614613, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___dictionary0;
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_5);
		V_5 = L_6;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0199;
		}

IL_003b:
		{
			RuntimeObject* L_7 = V_5;
			NullCheck(L_7);
			RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			V_6 = L_8;
			StringBuilder_t * L_9 = V_0;
			NullCheck(L_9);
			int32_t L_10 = StringBuilder_get_Length_m3238060835(L_9, /*hidden argument*/NULL);
			V_7 = (bool)((((int32_t)L_10) > ((int32_t)1))? 1 : 0);
			bool L_11 = V_7;
			if (!L_11)
			{
				goto IL_0062;
			}
		}

IL_0054:
		{
			StringBuilder_t * L_12 = V_0;
			NullCheck(L_12);
			StringBuilder_Append_m1965104174(L_12, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_0062:
		{
			RuntimeObject* L_13 = ___dictionary0;
			RuntimeObject * L_14 = V_6;
			NullCheck(L_13);
			RuntimeObject * L_15 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_13, L_14);
			V_8 = (bool)((((RuntimeObject*)(RuntimeObject *)L_15) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_16 = V_8;
			if (!L_16)
			{
				goto IL_0088;
			}
		}

IL_0073:
		{
			RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			V_1 = L_18;
			V_2 = _stringLiteral1202628576;
			goto IL_00a6;
		}

IL_0088:
		{
			RuntimeObject* L_19 = ___dictionary0;
			RuntimeObject * L_20 = V_6;
			NullCheck(L_19);
			RuntimeObject * L_21 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_19, L_20);
			NullCheck(L_21);
			Type_t * L_22 = Object_GetType_m88164663(L_21, /*hidden argument*/NULL);
			V_1 = L_22;
			RuntimeObject* L_23 = ___dictionary0;
			RuntimeObject * L_24 = V_6;
			NullCheck(L_23);
			RuntimeObject * L_25 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_23, L_24);
			NullCheck(L_25);
			String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
			V_2 = L_26;
		}

IL_00a6:
		{
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IDictionary_t1363984059_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			Type_t * L_29 = V_1;
			if ((((RuntimeObject*)(Type_t *)L_28) == ((RuntimeObject*)(Type_t *)L_29)))
			{
				goto IL_00c2;
			}
		}

IL_00b3:
		{
			RuntimeTypeHandle_t3027515415  L_30 = { reinterpret_cast<intptr_t> (Hashtable_t1048209202_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_31 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
			Type_t * L_32 = V_1;
			G_B12_0 = ((((RuntimeObject*)(Type_t *)L_31) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
			goto IL_00c3;
		}

IL_00c2:
		{
			G_B12_0 = 1;
		}

IL_00c3:
		{
			V_9 = (bool)G_B12_0;
			bool L_33 = V_9;
			if (!L_33)
			{
				goto IL_00de;
			}
		}

IL_00c9:
		{
			RuntimeObject* L_34 = ___dictionary0;
			RuntimeObject * L_35 = V_6;
			NullCheck(L_34);
			RuntimeObject * L_36 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_34, L_35);
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
			String_t* L_37 = SupportClass_DictionaryToString_m1908829707(NULL /*static, unused*/, ((RuntimeObject*)Castclass((RuntimeObject*)L_36, IDictionary_t1363984059_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_2 = L_37;
		}

IL_00de:
		{
			RuntimeTypeHandle_t3027515415  L_38 = { reinterpret_cast<intptr_t> (StringU5BU5D_t1281789340_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_39 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
			Type_t * L_40 = V_1;
			V_10 = (bool)((((RuntimeObject*)(Type_t *)L_39) == ((RuntimeObject*)(Type_t *)L_40))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_0115;
			}
		}

IL_00f1:
		{
			RuntimeObject* L_42 = ___dictionary0;
			RuntimeObject * L_43 = V_6;
			NullCheck(L_42);
			RuntimeObject * L_44 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_42, L_43);
			String_t* L_45 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3452614532, ((StringU5BU5D_t1281789340*)Castclass((RuntimeObject*)L_44, StringU5BU5D_t1281789340_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			String_t* L_46 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral64855482, L_45, /*hidden argument*/NULL);
			V_2 = L_46;
		}

IL_0115:
		{
			RuntimeTypeHandle_t3027515415  L_47 = { reinterpret_cast<intptr_t> (ByteU5BU5D_t4116647657_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_48 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
			Type_t * L_49 = V_1;
			V_11 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_49))? 1 : 0);
			bool L_50 = V_11;
			if (!L_50)
			{
				goto IL_0149;
			}
		}

IL_0128:
		{
			RuntimeObject* L_51 = ___dictionary0;
			RuntimeObject * L_52 = V_6;
			NullCheck(L_51);
			RuntimeObject * L_53 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_51, L_52);
			NullCheck(((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_53, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)));
			int32_t L_54 = (((int32_t)((int32_t)(((RuntimeArray *)((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_53, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var)))->max_length))));
			RuntimeObject * L_55 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_54);
			String_t* L_56 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1605499696, L_55, /*hidden argument*/NULL);
			V_2 = L_56;
		}

IL_0149:
		{
			bool L_57 = ___includeTypes1;
			V_12 = L_57;
			bool L_58 = V_12;
			if (!L_58)
			{
				goto IL_0187;
			}
		}

IL_0150:
		{
			StringBuilder_t * L_59 = V_0;
			ObjectU5BU5D_t2843939325* L_60 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t2843939325* L_61 = L_60;
			RuntimeObject * L_62 = V_6;
			NullCheck(L_62);
			Type_t * L_63 = Object_GetType_m88164663(L_62, /*hidden argument*/NULL);
			NullCheck(L_63);
			String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_63);
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, L_64);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_64);
			ObjectU5BU5D_t2843939325* L_65 = L_61;
			RuntimeObject * L_66 = V_6;
			NullCheck(L_65);
			ArrayElementTypeCheck (L_65, L_66);
			(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_66);
			ObjectU5BU5D_t2843939325* L_67 = L_65;
			Type_t * L_68 = V_1;
			NullCheck(L_68);
			String_t* L_69 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_68);
			NullCheck(L_67);
			ArrayElementTypeCheck (L_67, L_69);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_69);
			ObjectU5BU5D_t2843939325* L_70 = L_67;
			String_t* L_71 = V_2;
			NullCheck(L_70);
			ArrayElementTypeCheck (L_70, L_71);
			(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_71);
			NullCheck(L_59);
			StringBuilder_AppendFormat_m921870684(L_59, _stringLiteral675343421, L_70, /*hidden argument*/NULL);
			goto IL_0198;
		}

IL_0187:
		{
			StringBuilder_t * L_72 = V_0;
			RuntimeObject * L_73 = V_6;
			String_t* L_74 = V_2;
			NullCheck(L_72);
			StringBuilder_AppendFormat_m3255666490(L_72, _stringLiteral2131714090, L_73, L_74, /*hidden argument*/NULL);
		}

IL_0198:
		{
		}

IL_0199:
		{
			RuntimeObject* L_75 = V_5;
			NullCheck(L_75);
			bool L_76 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_75);
			if (L_76)
			{
				goto IL_003b;
			}
		}

IL_01a5:
		{
			IL2CPP_LEAVE(0x1BD, FINALLY_01a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01a7;
	}

FINALLY_01a7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_77 = V_5;
			V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_77, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_78 = V_13;
			if (!L_78)
			{
				goto IL_01bc;
			}
		}

IL_01b4:
		{
			RuntimeObject* L_79 = V_13;
			NullCheck(L_79);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_79);
		}

IL_01bc:
		{
			IL2CPP_END_FINALLY(423)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(423)
	{
		IL2CPP_JUMP_TBL(0x1BD, IL_01bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01bd:
	{
		StringBuilder_t * L_80 = V_0;
		NullCheck(L_80);
		StringBuilder_Append_m1965104174(L_80, _stringLiteral3452614611, /*hidden argument*/NULL);
		StringBuilder_t * L_81 = V_0;
		NullCheck(L_81);
		String_t* L_82 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_81);
		V_4 = L_82;
		goto IL_01d3;
	}

IL_01d3:
	{
		String_t* L_83 = V_4;
		return L_83;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_m472784792 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_ByteArrayToString_m472784792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_2;
		goto IL_001b;
	}

IL_0012:
	{
		ByteU5BU5D_t4116647657* L_3 = ___list0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		String_t* L_4 = BitConverter_ToString_m3464863163(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.UInt32[] ExitGames.Client.Photon.SupportClass::InitializeTable(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR UInt32U5BU5D_t2770800703* SupportClass_InitializeTable_m1028104517 (RuntimeObject * __this /* static, unused */, uint32_t ___polynomial0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_InitializeTable_m1028104517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t2770800703* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	UInt32U5BU5D_t2770800703* V_7 = NULL;
	{
		UInt32U5BU5D_t2770800703* L_0 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		V_1 = 0;
		goto IL_004c;
	}

IL_0010:
	{
		int32_t L_1 = V_1;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0039;
	}

IL_0017:
	{
		uint32_t L_2 = V_2;
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_4 = V_2;
		uint32_t L_5 = ___polynomial0;
		V_2 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>1))^(int32_t)L_5));
		goto IL_0034;
	}

IL_002e:
	{
		uint32_t L_6 = V_2;
		V_2 = ((int32_t)((uint32_t)L_6>>1));
	}

IL_0034:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_3;
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)8))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_10 = V_0;
		int32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_14 = V_1;
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_0010;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_16 = V_0;
		V_7 = L_16;
		goto IL_005f;
	}

IL_005f:
	{
		UInt32U5BU5D_t2770800703* L_17 = V_7;
		return L_17;
	}
}
// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t SupportClass_CalculateCrc_m1797984796 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_CalculateCrc_m1797984796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint32_t V_5 = 0;
	{
		V_0 = (-1);
		V_1 = ((int32_t)-306674912);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_0 = ((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->get_crcLookupTable_2();
		V_2 = (bool)((((RuntimeObject*)(UInt32U5BU5D_t2770800703*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_3 = SupportClass_InitializeTable_m1028104517(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->set_crcLookupTable_2(L_3);
	}

IL_0022:
	{
		V_3 = 0;
		goto IL_0042;
	}

IL_0026:
	{
		uint32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_5 = ((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->get_crcLookupTable_2();
		ByteU5BU5D_t4116647657* L_6 = ___buffer0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = V_0;
		NullCheck(L_5);
		int32_t L_11 = ((int32_t)((int32_t)L_9^(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
		uint32_t L_12 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>8))^(int32_t)L_12));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___length1;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_17 = V_0;
		V_5 = L_17;
		goto IL_0051;
	}

IL_0051:
	{
		uint32_t L_18 = V_5;
		return L_18;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SupportClass__cctor_m510827305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass__cctor_m510827305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t356392828_il2cpp_TypeInfo_var);
		U3CU3Ec_t356392828 * L_0 = ((U3CU3Ec_t356392828_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t356392828_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_1 = (intptr_t)U3CU3Ec_U3C_cctorU3Eb__20_0_m2150557480_RuntimeMethod_var;
		IntegerMillisecondsDelegate_t651311252 * L_2 = (IntegerMillisecondsDelegate_t651311252 *)il2cpp_codegen_object_new(IntegerMillisecondsDelegate_t651311252_il2cpp_TypeInfo_var);
		IntegerMillisecondsDelegate__ctor_m2384978958(L_2, L_0, L_1, /*hidden argument*/NULL);
		((SupportClass_t2974952451_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_t2974952451_il2cpp_TypeInfo_var))->set_IntegerMilliseconds_1(L_2);
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2224029212 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2224029212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t356392828 * L_0 = (U3CU3Ec_t356392828 *)il2cpp_codegen_object_new(U3CU3Ec_t356392828_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m794017737(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t356392828_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t356392828_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m794017737 (U3CU3Ec_t356392828 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass/<>c::<.cctor>b__20_0()
extern "C" IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__20_0_m2150557480 (U3CU3Ec_t356392828 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m219761943 (U3CU3Ec__DisplayClass6_0_t2492842391 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::<StartBackgroundCalls>b__0()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m1096870055 (U3CU3Ec__DisplayClass6_0_t2492842391 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m1096870055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		goto IL_0011;
	}

IL_0003:
	{
		int32_t L_0 = __this->get_millisecondsInterval_0();
		Thread_Sleep_m483098292(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		Func_1_t3822001908 * L_1 = __this->get_myThread_1();
		NullCheck(L_1);
		bool L_2 = Func_1_Invoke_m370346740(L_1, /*hidden argument*/Func_1_Invoke_m370346740_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0003;
		}
	}
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
extern "C"  int32_t DelegatePInvokeWrapper_IntegerMillisecondsDelegate_t651311252 (IntegerMillisecondsDelegate_t651311252 * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_m2384978958 (IntegerMillisecondsDelegate_t651311252 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m3991646450 (IntegerMillisecondsDelegate_t651311252 * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
				{
					// open
					{
						typedef int32_t (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
							else
								result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
					else
					{
						typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
			{
				// open
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
						else
							result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IntegerMillisecondsDelegate_BeginInvoke_m3749638383 (IntegerMillisecondsDelegate_t651311252 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_EndInvoke_m1110359074 (IntegerMillisecondsDelegate_t651311252 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::Next()
extern "C" IL2CPP_METHOD_ATTR int32_t ThreadSafeRandom_Next_m3420421965 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeRandom_Next_m3420421965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t108471755 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t1204416265_il2cpp_TypeInfo_var);
		Random_t108471755 * L_0 = ((ThreadSafeRandom_t1204416265_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1204416265_il2cpp_TypeInfo_var))->get__r_0();
		V_0 = L_0;
		Random_t108471755 * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t1204416265_il2cpp_TypeInfo_var);
		Random_t108471755 * L_2 = ((ThreadSafeRandom_t1204416265_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1204416265_il2cpp_TypeInfo_var))->get__r_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_2);
		V_1 = L_3;
		IL2CPP_LEAVE(0x24, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		Random_t108471755 * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ThreadSafeRandom__cctor_m3373245192 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeRandom__cctor_m3373245192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t108471755 * L_0 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_0, /*hidden argument*/NULL);
		((ThreadSafeRandom_t1204416265_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1204416265_il2cpp_TypeInfo_var))->set__r_0(L_0);
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
// System.Void ExitGames.Client.Photon.TPeer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TPeer__ctor_m3014112402 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer__ctor_m3014112402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t3962907151 * L_0 = (Queue_1_t3962907151 *)il2cpp_codegen_object_new(Queue_1_t3962907151_il2cpp_TypeInfo_var);
		Queue_1__ctor_m2913697457(L_0, ((int32_t)32), /*hidden argument*/Queue_1__ctor_m2913697457_RuntimeMethod_var);
		__this->set_incomingList_46(L_0);
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)5);
		ByteU5BU5D_t4116647657* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		__this->set_pingRequest_49(L_2);
		__this->set_DoFraming_53((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_t2956237011_il2cpp_TypeInfo_var);
		PeerBase__ctor_m2995409454(__this, /*hidden argument*/NULL);
		((PeerBase_t2956237011 *)__this)->set_TrafficPackageHeaderSize_42(0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
extern "C" IL2CPP_METHOD_ATTR void TPeer_InitPeerBase_m2646313747 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_InitPeerBase_m2646313747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_InitPeerBase_m1190391789(__this, /*hidden argument*/NULL);
		Queue_1_t3962907151 * L_0 = (Queue_1_t3962907151 *)il2cpp_codegen_object_new(Queue_1_t3962907151_il2cpp_TypeInfo_var);
		Queue_1__ctor_m2913697457(L_0, ((int32_t)32), /*hidden argument*/Queue_1__ctor_m2913697457_RuntimeMethod_var);
		__this->set_incomingList_46(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_1 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PeerBase_t2956237011 *)__this)->set_timestampOfLastReceive_21(L_1);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TPeer_Connect_m3943904030 (TPeer_t1497954812 * __this, String_t* ___serverAddress0, String_t* ___appID1, RuntimeObject * ___customData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_Connect_m3943904030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	TPeer_t1497954812 * G_B16_0 = NULL;
	TPeer_t1497954812 * G_B15_0 = NULL;
	ByteU5BU5D_t4116647657* G_B17_0 = NULL;
	TPeer_t1497954812 * G_B17_1 = NULL;
	{
		uint8_t L_0 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_2, 2, _stringLiteral3931093795);
		V_1 = (bool)0;
		goto IL_0140;
	}

IL_0028:
	{
		uint8_t L_3 = PeerBase_get_debugOut_m755103680(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_5 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_5, 5, _stringLiteral1058880636);
	}

IL_004c:
	{
		String_t* L_6 = ___serverAddress0;
		PeerBase_set_ServerAddress_m2509166174(__this, L_6, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(5 /* System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase() */, __this);
		List_1_t1004777235 * L_7 = (List_1_t1004777235 *)il2cpp_codegen_object_new(List_1_t1004777235_il2cpp_TypeInfo_var);
		List_1__ctor_m1532814905(L_7, /*hidden argument*/List_1__ctor_m1532814905_RuntimeMethod_var);
		__this->set_outgoingStream_47(L_7);
		uint8_t L_8 = ((PeerBase_t2956237011 *)__this)->get_usedTransportProtocol_2();
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_9 = ((PeerBase_t2956237011 *)__this)->get_usedTransportProtocol_2();
		G_B7_0 = ((((int32_t)L_9) == ((int32_t)5))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 1;
	}

IL_007b:
	{
		V_3 = (bool)G_B7_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_11 = ___serverAddress0;
		String_t* L_12 = ___appID1;
		RuntimeObject * L_13 = ___customData2;
		String_t* L_14 = PeerBase_PepareWebSocketUrl_m766621361(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		___serverAddress0 = L_14;
	}

IL_008c:
	{
		Type_t * L_15 = PeerBase_get_SocketImplementation_m2865771389(__this, /*hidden argument*/NULL);
		V_4 = (bool)((!(((RuntimeObject*)(Type_t *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00bf;
		}
	}
	{
		Type_t * L_17 = PeerBase_get_SocketImplementation_m2865771389(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_18 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, __this);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		RuntimeObject * L_20 = Activator_CreateInstance_m94526014(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		((PeerBase_t2956237011 *)__this)->set_PhotonSocket_3(((IPhotonSocket_t2066969247 *)CastclassClass((RuntimeObject*)L_20, IPhotonSocket_t2066969247_il2cpp_TypeInfo_var)));
		goto IL_00cd;
	}

IL_00bf:
	{
		SocketTcp_t182200829 * L_21 = (SocketTcp_t182200829 *)il2cpp_codegen_object_new(SocketTcp_t182200829_il2cpp_TypeInfo_var);
		SocketTcp__ctor_m3106271083(L_21, __this, /*hidden argument*/NULL);
		((PeerBase_t2956237011 *)__this)->set_PhotonSocket_3(L_21);
	}

IL_00cd:
	{
		IPhotonSocket_t2066969247 * L_22 = ((PeerBase_t2956237011 *)__this)->get_PhotonSocket_3();
		V_5 = (bool)((((RuntimeObject*)(IPhotonSocket_t2066969247 *)L_22) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00fe;
		}
	}
	{
		RuntimeObject* L_24 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		Type_t * L_25 = PeerBase_get_SocketImplementation_m2865771389(__this, /*hidden argument*/NULL);
		String_t* L_26 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1634808006, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_24, 1, L_26);
		V_1 = (bool)0;
		goto IL_0140;
	}

IL_00fe:
	{
		bool L_27 = __this->get_DoFraming_53();
		G_B15_0 = __this;
		if (L_27)
		{
			G_B16_0 = __this;
			goto IL_010e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPeer_t1497954812_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_28 = ((TPeer_t1497954812_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t1497954812_il2cpp_TypeInfo_var))->get_tcpMsgHead_51();
		G_B17_0 = L_28;
		G_B17_1 = G_B15_0;
		goto IL_0113;
	}

IL_010e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPeer_t1497954812_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_29 = ((TPeer_t1497954812_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t1497954812_il2cpp_TypeInfo_var))->get_tcpFramedMessageHead_50();
		G_B17_0 = L_29;
		G_B17_1 = G_B16_0;
	}

IL_0113:
	{
		NullCheck(G_B17_1);
		G_B17_1->set_messageHeader_52(G_B17_0);
		IPhotonSocket_t2066969247 * L_30 = ((PeerBase_t2956237011 *)__this)->get_PhotonSocket_3();
		NullCheck(L_30);
		bool L_31 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect() */, L_30);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_0135;
		}
	}
	{
		((PeerBase_t2956237011 *)__this)->set_peerConnectionState_5(1);
		V_1 = (bool)1;
		goto IL_0140;
	}

IL_0135:
	{
		((PeerBase_t2956237011 *)__this)->set_peerConnectionState_5(0);
		V_1 = (bool)0;
		goto IL_0140;
	}

IL_0140:
	{
		bool L_33 = V_1;
		return L_33;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::OnConnect()
extern "C" IL2CPP_METHOD_ATTR void TPeer_OnConnect_m3581061708 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_OnConnect_m3581061708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_0 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastPingResult_48(L_0);
		String_t* L_1 = PeerBase_get_ServerAddress_m2293059696(__this, /*hidden argument*/NULL);
		String_t* L_2 = ((PeerBase_t2956237011 *)__this)->get_AppId_26();
		RuntimeObject * L_3 = ((PeerBase_t2956237011 *)__this)->get_CustomInitData_25();
		ByteU5BU5D_t4116647657* L_4 = PeerBase_PrepareConnectData_m2278469355(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		TPeer_EnqueueInit_m592328192(__this, L_5, /*hidden argument*/NULL);
		VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PeerBase::SendOutgoingCommands() */, __this);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
extern "C" IL2CPP_METHOD_ATTR void TPeer_Disconnect_m2231374297 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_Disconnect_m2231374297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_1 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0047;
	}

IL_001c:
	{
		uint8_t L_3 = PeerBase_get_debugOut_m755103680(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_5 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_5, 5, _stringLiteral1806566695);
	}

IL_0040:
	{
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PeerBase::StopConnection() */, __this);
	}

IL_0047:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
extern "C" IL2CPP_METHOD_ATTR void TPeer_StopConnection_m2137277672 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_StopConnection_m2137277672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Queue_1_t3962907151 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		((PeerBase_t2956237011 *)__this)->set_peerConnectionState_5(4);
		IPhotonSocket_t2066969247 * L_0 = ((PeerBase_t2956237011 *)__this)->get_PhotonSocket_3();
		V_0 = (bool)((!(((RuntimeObject*)(IPhotonSocket_t2066969247 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IPhotonSocket_t2066969247 * L_2 = ((PeerBase_t2956237011 *)__this)->get_PhotonSocket_3();
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_2);
	}

IL_0023:
	{
		Queue_1_t3962907151 * L_3 = __this->get_incomingList_46();
		V_1 = L_3;
		Queue_1_t3962907151 * L_4 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		Queue_1_t3962907151 * L_5 = __this->get_incomingList_46();
		NullCheck(L_5);
		Queue_1_Clear_m3276543074(L_5, /*hidden argument*/Queue_1_Clear_m3276543074_RuntimeMethod_var);
		IL2CPP_LEAVE(0x49, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Queue_1_t3962907151 * L_6 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0049:
	{
		((PeerBase_t2956237011 *)__this)->set_peerConnectionState_5(0);
		PeerBase_EnqueueStatusCallback_m765575269(__this, ((int32_t)1025), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
extern "C" IL2CPP_METHOD_ATTR void TPeer_FetchServerTimestamp_m664560504 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_FetchServerTimestamp_m664560504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint8_t L_0 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		uint8_t L_2 = PeerBase_get_debugOut_m755103680(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_4 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		uint8_t L_5 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		uint8_t L_6 = L_5;
		RuntimeObject * L_7 = Box(ConnectionStateValue_t4213441778_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3287687826, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_4, 3, L_8);
	}

IL_0046:
	{
		RuntimeObject* L_9 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_9, ((int32_t)1030));
		goto IL_0067;
	}

IL_0059:
	{
		TPeer_SendPing_m232307456(__this, /*hidden argument*/NULL);
		((PeerBase_t2956237011 *)__this)->set_serverTimeOffsetIsAvailable_14((bool)0);
	}

IL_0067:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_m592328192 (TPeer_t1497954812 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_EnqueueInit_m592328192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_t3827669789 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		bool L_0 = __this->get_DoFraming_53();
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_00b7;
	}

IL_0014:
	{
		ByteU5BU5D_t4116647657* L_2 = ___data0;
		NullCheck(L_2);
		StreamBuffer_t3827669789 * L_3 = (StreamBuffer_t3827669789 *)il2cpp_codegen_object_new(StreamBuffer_t3827669789_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m1585703076(L_3, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), (int32_t)((int32_t)32))), /*hidden argument*/NULL);
		V_0 = L_3;
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)7);
		ByteU5BU5D_t4116647657* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)251));
		ByteU5BU5D_t4116647657* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		V_1 = L_6;
		V_2 = 1;
		ByteU5BU5D_t4116647657* L_7 = ___data0;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t1622296502_il2cpp_TypeInfo_var);
		Protocol_Serialize_m2793941309(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))), L_9, (int32_t*)(&V_2), /*hidden argument*/NULL);
		StreamBuffer_t3827669789 * L_10 = V_0;
		ByteU5BU5D_t4116647657* L_11 = V_1;
		ByteU5BU5D_t4116647657* L_12 = V_1;
		NullCheck(L_12);
		NullCheck(L_10);
		StreamBuffer_Write_m17470745(L_10, L_11, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), /*hidden argument*/NULL);
		StreamBuffer_t3827669789 * L_13 = V_0;
		ByteU5BU5D_t4116647657* L_14 = ___data0;
		ByteU5BU5D_t4116647657* L_15 = ___data0;
		NullCheck(L_15);
		NullCheck(L_13);
		StreamBuffer_Write_m17470745(L_13, L_14, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), /*hidden argument*/NULL);
		bool L_16 = PeerBase_get_TrafficStatsEnabled_m3426645147(__this, /*hidden argument*/NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		TrafficStats_t1302902347 * L_18 = PeerBase_get_TrafficStatsOutgoing_m3028454514(__this, /*hidden argument*/NULL);
		TrafficStats_t1302902347 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = TrafficStats_get_TotalPacketCount_m2954381143(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		NullCheck(L_19);
		TrafficStats_set_TotalPacketCount_m2373240368(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t1302902347 * L_22 = PeerBase_get_TrafficStatsOutgoing_m3028454514(__this, /*hidden argument*/NULL);
		TrafficStats_t1302902347 * L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24 = TrafficStats_get_TotalCommandsInPackets_m3796906114(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		int32_t L_25 = V_5;
		NullCheck(L_23);
		TrafficStats_set_TotalCommandsInPackets_m350749640(L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t1302902347 * L_26 = PeerBase_get_TrafficStatsOutgoing_m3028454514(__this, /*hidden argument*/NULL);
		StreamBuffer_t3827669789 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = StreamBuffer_get_Length_m1616542868(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		TrafficStats_CountControlCommand_m3783491252(L_26, L_28, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		StreamBuffer_t3827669789 * L_29 = V_0;
		TPeer_EnqueueMessageAsPayload_m1514707185(__this, 1, L_29, (uint8_t)0, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
extern "C" IL2CPP_METHOD_ATTR bool TPeer_DispatchIncomingCommands_m1581931628 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_DispatchIncomingCommands_m1581931628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MyAction_t2462891903 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	Queue_1_t2309151397 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Queue_1_t3962907151 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_1 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ((PeerBase_t2956237011 *)__this)->get_timestampOfLastReceive_21();
		int32_t L_3 = PeerBase_get_DisconnectTimeout_m603764922(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) > ((int32_t)L_3))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		PeerBase_EnqueueStatusCallback_m765575269(__this, ((int32_t)1040), /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)GetVirtualMethodInfo(__this, 8);
		MyAction_t2462891903 * L_6 = (MyAction_t2462891903 *)il2cpp_codegen_object_new(MyAction_t2462891903_il2cpp_TypeInfo_var);
		MyAction__ctor_m1999721389(L_6, __this, L_5, /*hidden argument*/NULL);
		PeerBase_EnqueueActionForDispatch_m1755888291(__this, L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		goto IL_0092;
	}

IL_0049:
	{
		Queue_1_t2309151397 * L_7 = ((PeerBase_t2956237011 *)__this)->get_ActionQueue_11();
		V_3 = L_7;
		Queue_1_t2309151397 * L_8 = V_3;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t2309151397 * L_9 = ((PeerBase_t2956237011 *)__this)->get_ActionQueue_11();
			NullCheck(L_9);
			int32_t L_10 = Queue_1_get_Count_m3416801760(L_9, /*hidden argument*/Queue_1_get_Count_m3416801760_RuntimeMethod_var);
			V_4 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_0073;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x97, FINALLY_0082);
		}

IL_0073:
		{
			Queue_1_t2309151397 * L_12 = ((PeerBase_t2956237011 *)__this)->get_ActionQueue_11();
			NullCheck(L_12);
			MyAction_t2462891903 * L_13 = Queue_1_Dequeue_m3140887159(L_12, /*hidden argument*/Queue_1_Dequeue_m3140887159_RuntimeMethod_var);
			V_0 = L_13;
			IL2CPP_LEAVE(0x8A, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Queue_1_t2309151397 * L_14 = V_3;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008a:
	{
		MyAction_t2462891903 * L_15 = V_0;
		NullCheck(L_15);
		MyAction_Invoke_m3640138146(L_15, /*hidden argument*/NULL);
	}

IL_0092:
	{
		V_5 = (bool)1;
		goto IL_0049;
	}

IL_0097:
	{
		Queue_1_t3962907151 * L_16 = __this->get_incomingList_46();
		V_6 = L_16;
		Queue_1_t3962907151 * L_17 = V_6;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_00a7:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t3962907151 * L_18 = __this->get_incomingList_46();
			NullCheck(L_18);
			int32_t L_19 = Queue_1_get_Count_m3906391565(L_18, /*hidden argument*/Queue_1_get_Count_m3906391565_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_20 = V_7;
			if (!L_20)
			{
				goto IL_00c5;
			}
		}

IL_00bf:
		{
			V_8 = (bool)0;
			IL2CPP_LEAVE(0xF8, FINALLY_00d4);
		}

IL_00c5:
		{
			Queue_1_t3962907151 * L_21 = __this->get_incomingList_46();
			NullCheck(L_21);
			ByteU5BU5D_t4116647657* L_22 = Queue_1_Dequeue_m3292979456(L_21, /*hidden argument*/Queue_1_Dequeue_m3292979456_RuntimeMethod_var);
			V_1 = L_22;
			IL2CPP_LEAVE(0xDD, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		Queue_1_t3962907151 * L_23 = V_6;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(212)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_JUMP_TBL(0xF8, IL_00f8)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00dd:
	{
		ByteU5BU5D_t4116647657* L_24 = V_1;
		NullCheck(L_24);
		((PeerBase_t2956237011 *)__this)->set_ByteCountCurrentDispatch_7(((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))), (int32_t)3)));
		ByteU5BU5D_t4116647657* L_25 = V_1;
		StreamBuffer_t3827669789 * L_26 = (StreamBuffer_t3827669789 *)il2cpp_codegen_object_new(StreamBuffer_t3827669789_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m417559151(L_26, L_25, /*hidden argument*/NULL);
		bool L_27 = VirtFuncInvoker1< bool, StreamBuffer_t3827669789 * >::Invoke(17 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_26);
		V_8 = L_27;
		goto IL_00f8;
	}

IL_00f8:
	{
		bool L_28 = V_8;
		return L_28;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
extern "C" IL2CPP_METHOD_ATTR bool TPeer_SendOutgoingCommands_m1793181074 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SendOutgoingCommands_m1793181074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	List_1_t1004777235 * V_4 = NULL;
	int32_t V_5 = 0;
	StreamBuffer_t3827669789 * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0102;
	}

IL_0016:
	{
		IPhotonSocket_t2066969247 * L_2 = ((PeerBase_t2956237011 *)__this)->get_PhotonSocket_3();
		NullCheck(L_2);
		bool L_3 = IPhotonSocket_get_Connected_m2854685997(L_2, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0102;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_5 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = ((PeerBase_t2956237011 *)__this)->get_timeBase_27();
		((PeerBase_t2956237011 *)__this)->set_timeInt_28(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		int32_t L_7 = ((PeerBase_t2956237011 *)__this)->get_timeInt_28();
		((PeerBase_t2956237011 *)__this)->set_timeLastSendOutgoing_32(L_7);
		uint8_t L_8 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0072;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_9 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_lastPingResult_48();
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		int32_t L_11 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)));
		int32_t L_12 = PeerBase_get_timePingInterval_m4137618370(__this, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_11) > ((int32_t)L_12))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B7_0 = 0;
	}

IL_0073:
	{
		V_3 = (bool)G_B7_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		TPeer_SendPing_m232307456(__this, /*hidden argument*/NULL);
	}

IL_0080:
	{
		List_1_t1004777235 * L_14 = __this->get_outgoingStream_47();
		V_4 = L_14;
		List_1_t1004777235 * L_15 = V_4;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			V_5 = 0;
			goto IL_00ca;
		}

IL_0096:
		{
			List_1_t1004777235 * L_16 = __this->get_outgoingStream_47();
			int32_t L_17 = V_5;
			NullCheck(L_16);
			StreamBuffer_t3827669789 * L_18 = List_1_get_Item_m1470117044(L_16, L_17, /*hidden argument*/List_1_get_Item_m1470117044_RuntimeMethod_var);
			V_6 = L_18;
			StreamBuffer_t3827669789 * L_19 = V_6;
			NullCheck(L_19);
			ByteU5BU5D_t4116647657* L_20 = StreamBuffer_GetBuffer_m3307584100(L_19, /*hidden argument*/NULL);
			StreamBuffer_t3827669789 * L_21 = V_6;
			NullCheck(L_21);
			int32_t L_22 = StreamBuffer_get_Length_m1616542868(L_21, /*hidden argument*/NULL);
			TPeer_SendData_m1400878091(__this, L_20, L_22, /*hidden argument*/NULL);
			StreamBuffer_t3827669789 * L_23 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(PeerBase_t2956237011_il2cpp_TypeInfo_var);
			PeerBase_MessageBufferPoolPut_m1808608170(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			int32_t L_24 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_00ca:
		{
			int32_t L_25 = V_5;
			List_1_t1004777235 * L_26 = __this->get_outgoingStream_47();
			NullCheck(L_26);
			int32_t L_27 = List_1_get_Count_m2693864399(L_26, /*hidden argument*/List_1_get_Count_m2693864399_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
			bool L_28 = V_7;
			if (L_28)
			{
				goto IL_0096;
			}
		}

IL_00df:
		{
			List_1_t1004777235 * L_29 = __this->get_outgoingStream_47();
			NullCheck(L_29);
			List_1_Clear_m3161676039(L_29, /*hidden argument*/List_1_Clear_m3161676039_RuntimeMethod_var);
			((PeerBase_t2956237011 *)__this)->set_outgoingCommandsInStream_35(0);
			IL2CPP_LEAVE(0xFE, FINALLY_00f5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f5;
	}

FINALLY_00f5:
	{ // begin finally (depth: 1)
		List_1_t1004777235 * L_30 = V_4;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(245)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(245)
	{
		IL2CPP_JUMP_TBL(0xFE, IL_00fe)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fe:
	{
		V_1 = (bool)0;
		goto IL_0102;
	}

IL_0102:
	{
		bool L_31 = V_1;
		return L_31;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
extern "C" IL2CPP_METHOD_ATTR bool TPeer_SendAcksOnly_m53483304 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SendAcksOnly_m53483304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		IPhotonSocket_t2066969247 * L_0 = ((PeerBase_t2956237011 *)__this)->get_PhotonSocket_3();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IPhotonSocket_t2066969247 * L_1 = ((PeerBase_t2956237011 *)__this)->get_PhotonSocket_3();
		NullCheck(L_1);
		bool L_2 = IPhotonSocket_get_Connected_m2854685997(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0066;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_4 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = ((PeerBase_t2956237011 *)__this)->get_timeBase_27();
		((PeerBase_t2956237011 *)__this)->set_timeInt_28(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)));
		uint8_t L_6 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_7 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_lastPingResult_48();
		int32_t L_9 = PeerBase_get_timePingInterval_m4137618370(__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))) > ((int32_t)L_9))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B8_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B8_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		TPeer_SendPing_m232307456(__this, /*hidden argument*/NULL);
	}

IL_0062:
	{
		V_1 = (bool)0;
		goto IL_0066;
	}

IL_0066:
	{
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,ExitGames.Client.Photon.SendOptions,ExitGames.Client.Photon.EgMessageType)
extern "C" IL2CPP_METHOD_ATTR bool TPeer_EnqueueOperation_m152825139 (TPeer_t1497954812 * __this, Dictionary_2_t1405253484 * ___parameters0, uint8_t ___opCode1, SendOptions_t967321410  ___sendParams2, uint8_t ___messageType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_EnqueueOperation_m152825139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_t3827669789 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		uint8_t L_0 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		uint8_t L_2 = PeerBase_get_debugOut_m755103680(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_4 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral103614924);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral103614924);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		uint8_t L_8 = ___opCode1;
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral2439391445);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2439391445);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		uint8_t L_13 = ((PeerBase_t2956237011 *)__this)->get_peerConnectionState_5();
		uint8_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ConnectionStateValue_t4213441778_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16 = String_Concat_m2971454694(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_4, 1, L_16);
	}

IL_0063:
	{
		RuntimeObject* L_17 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_17, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_012f;
	}

IL_007b:
	{
		SendOptions_t967321410  L_18 = ___sendParams2;
		uint8_t L_19 = L_18.get_Channel_4();
		uint8_t L_20 = PeerBase_get_ChannelCount_m3062422784(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0108;
		}
	}
	{
		uint8_t L_22 = PeerBase_get_debugOut_m755103680(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00f3;
		}
	}
	{
		RuntimeObject* L_24 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_25 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral3975347840);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3975347840);
		ObjectU5BU5D_t2843939325* L_27 = L_26;
		SendOptions_t967321410  L_28 = ___sendParams2;
		uint8_t L_29 = L_28.get_Channel_4();
		uint8_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_27;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral2587075820);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2587075820);
		ObjectU5BU5D_t2843939325* L_33 = L_32;
		uint8_t L_34 = PeerBase_get_ChannelCount_m3062422784(__this, /*hidden argument*/NULL);
		uint8_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_36);
		ObjectU5BU5D_t2843939325* L_37 = L_33;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral3450648455);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3450648455);
		String_t* L_38 = String_Concat_m2971454694(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_24, 1, L_38);
	}

IL_00f3:
	{
		RuntimeObject* L_39 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_39, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_012f;
	}

IL_0108:
	{
		uint8_t L_40 = ___opCode1;
		Dictionary_2_t1405253484 * L_41 = ___parameters0;
		uint8_t L_42 = ___messageType3;
		SendOptions_t967321410  L_43 = ___sendParams2;
		bool L_44 = L_43.get_Encrypt_3();
		StreamBuffer_t3827669789 * L_45 = VirtFuncInvoker4< StreamBuffer_t3827669789 *, uint8_t, Dictionary_2_t1405253484 *, uint8_t, bool >::Invoke(12 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_40, L_41, L_42, L_44);
		V_0 = L_45;
		SendOptions_t967321410  L_46 = ___sendParams2;
		int32_t L_47 = L_46.get_DeliveryMode_2();
		StreamBuffer_t3827669789 * L_48 = V_0;
		SendOptions_t967321410  L_49 = ___sendParams2;
		uint8_t L_50 = L_49.get_Channel_4();
		bool L_51 = TPeer_EnqueueMessageAsPayload_m1514707185(__this, L_47, L_48, L_50, /*hidden argument*/NULL);
		V_3 = L_51;
		goto IL_012f;
	}

IL_012f:
	{
		bool L_52 = V_3;
		return L_52;
	}
}
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR StreamBuffer_t3827669789 * TPeer_SerializeOperationToMessage_m1961794242 (TPeer_t1497954812 * __this, uint8_t ___opCode0, Dictionary_2_t1405253484 * ___parameters1, uint8_t ___messageType2, bool ___encrypt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SerializeOperationToMessage_m1961794242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_t3827669789 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	StreamBuffer_t3827669789 * V_9 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_t2956237011_il2cpp_TypeInfo_var);
		StreamBuffer_t3827669789 * L_0 = PeerBase_MessageBufferPoolGet_m506376142(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		StreamBuffer_t3827669789 * L_1 = V_0;
		NullCheck(L_1);
		StreamBuffer_SetLength_m2522285437(L_1, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		bool L_2 = ___encrypt3;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		StreamBuffer_t3827669789 * L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = __this->get_messageHeader_52();
		ByteU5BU5D_t4116647657* L_6 = __this->get_messageHeader_52();
		NullCheck(L_6);
		NullCheck(L_4);
		StreamBuffer_Write_m17470745(L_4, L_5, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), /*hidden argument*/NULL);
	}

IL_0031:
	{
		IProtocol_t1394662050 * L_7 = ((PeerBase_t2956237011 *)__this)->get_SerializationProtocol_1();
		StreamBuffer_t3827669789 * L_8 = V_0;
		uint8_t L_9 = ___opCode0;
		Dictionary_2_t1405253484 * L_10 = ___parameters1;
		NullCheck(L_7);
		VirtActionInvoker4< StreamBuffer_t3827669789 *, uint8_t, Dictionary_2_t1405253484 *, bool >::Invoke(10 /* System.Void ExitGames.Client.Photon.IProtocol::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_7, L_8, L_9, L_10, (bool)0);
		bool L_11 = ___encrypt3;
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeObject* L_13 = ((PeerBase_t2956237011 *)__this)->get_CryptoProvider_37();
		StreamBuffer_t3827669789 * L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_15 = StreamBuffer_GetBuffer_m3307584100(L_14, /*hidden argument*/NULL);
		StreamBuffer_t3827669789 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = StreamBuffer_get_Length_m1616542868(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_t4116647657* L_18 = InterfaceFuncInvoker3< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(2 /* System.Byte[] Photon.SocketServer.Security.ICryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32) */, ICryptoProvider_t1662250179_il2cpp_TypeInfo_var, L_13, L_15, 0, L_17);
		V_4 = L_18;
		StreamBuffer_t3827669789 * L_19 = V_0;
		NullCheck(L_19);
		StreamBuffer_SetLength_m2522285437(L_19, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		StreamBuffer_t3827669789 * L_20 = V_0;
		ByteU5BU5D_t4116647657* L_21 = __this->get_messageHeader_52();
		ByteU5BU5D_t4116647657* L_22 = __this->get_messageHeader_52();
		NullCheck(L_22);
		NullCheck(L_20);
		StreamBuffer_Write_m17470745(L_20, L_21, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), /*hidden argument*/NULL);
		StreamBuffer_t3827669789 * L_23 = V_0;
		ByteU5BU5D_t4116647657* L_24 = V_4;
		ByteU5BU5D_t4116647657* L_25 = V_4;
		NullCheck(L_25);
		NullCheck(L_23);
		StreamBuffer_Write_m17470745(L_23, L_24, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))), /*hidden argument*/NULL);
	}

IL_0090:
	{
		StreamBuffer_t3827669789 * L_26 = V_0;
		NullCheck(L_26);
		ByteU5BU5D_t4116647657* L_27 = StreamBuffer_GetBuffer_m3307584100(L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		uint8_t L_28 = ___messageType2;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00b3;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_30 = V_1;
		ByteU5BU5D_t4116647657* L_31 = __this->get_messageHeader_52();
		NullCheck(L_31);
		uint8_t L_32 = ___messageType2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length)))), (int32_t)1))), (uint8_t)L_32);
	}

IL_00b3:
	{
		bool L_33 = ___encrypt3;
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00dc;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_35 = V_1;
		ByteU5BU5D_t4116647657* L_36 = __this->get_messageHeader_52();
		NullCheck(L_36);
		ByteU5BU5D_t4116647657* L_37 = V_1;
		ByteU5BU5D_t4116647657* L_38 = __this->get_messageHeader_52();
		NullCheck(L_38);
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))), (int32_t)1));
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))), (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_40|(int32_t)((int32_t)128)))))));
	}

IL_00dc:
	{
		bool L_41 = __this->get_DoFraming_53();
		V_7 = L_41;
		bool L_42 = V_7;
		if (!L_42)
		{
			goto IL_00fc;
		}
	}
	{
		V_8 = 1;
		StreamBuffer_t3827669789 * L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = StreamBuffer_get_Length_m1616542868(L_43, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_45 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t1622296502_il2cpp_TypeInfo_var);
		Protocol_Serialize_m2793941309(NULL /*static, unused*/, L_44, L_45, (int32_t*)(&V_8), /*hidden argument*/NULL);
	}

IL_00fc:
	{
		StreamBuffer_t3827669789 * L_46 = V_0;
		V_9 = L_46;
		goto IL_0101;
	}

IL_0101:
	{
		StreamBuffer_t3827669789 * L_47 = V_9;
		return L_47;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_m1514707185 (TPeer_t1497954812 * __this, int32_t ___deliveryMode0, StreamBuffer_t3827669789 * ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_EnqueueMessageAsPayload_m1514707185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	List_1_t1004777235 * V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		StreamBuffer_t3827669789 * L_0 = ___opMessage1;
		V_1 = (bool)((((RuntimeObject*)(StreamBuffer_t3827669789 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0119;
	}

IL_0011:
	{
		bool L_2 = __this->get_DoFraming_53();
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		StreamBuffer_t3827669789 * L_4 = ___opMessage1;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = StreamBuffer_GetBuffer_m3307584100(L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		ByteU5BU5D_t4116647657* L_6 = V_4;
		uint8_t L_7 = ___channelId2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_7);
		int32_t L_8 = ___deliveryMode0;
		V_5 = L_8;
		int32_t L_9 = V_5;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0053;
			}
			case 3:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0045:
	{
		ByteU5BU5D_t4116647657* L_10 = V_4;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)0);
		goto IL_0073;
	}

IL_004c:
	{
		ByteU5BU5D_t4116647657* L_11 = V_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		goto IL_0073;
	}

IL_0053:
	{
		ByteU5BU5D_t4116647657* L_12 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)2);
		goto IL_0073;
	}

IL_005a:
	{
		ByteU5BU5D_t4116647657* L_13 = V_4;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)3);
		goto IL_0073;
	}

IL_0061:
	{
		int32_t L_14 = ___deliveryMode0;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(DeliveryMode_t90936453_il2cpp_TypeInfo_var, &L_15);
		ArgumentOutOfRangeException_t777629997 * L_17 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4164965325(L_17, _stringLiteral897590821, L_16, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, TPeer_EnqueueMessageAsPayload_m1514707185_RuntimeMethod_var);
	}

IL_0073:
	{
	}

IL_0074:
	{
		List_1_t1004777235 * L_18 = __this->get_outgoingStream_47();
		V_6 = L_18;
		List_1_t1004777235 * L_19 = V_6;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_0084:
	try
	{ // begin try (depth: 1)
		List_1_t1004777235 * L_20 = __this->get_outgoingStream_47();
		StreamBuffer_t3827669789 * L_21 = ___opMessage1;
		NullCheck(L_20);
		List_1_Add_m3964035183(L_20, L_21, /*hidden argument*/List_1_Add_m3964035183_RuntimeMethod_var);
		int32_t L_22 = ((PeerBase_t2956237011 *)__this)->get_outgoingCommandsInStream_35();
		((PeerBase_t2956237011 *)__this)->set_outgoingCommandsInStream_35(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		IL2CPP_LEAVE(0xAC, FINALLY_00a3);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		List_1_t1004777235 * L_23 = V_6;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ac:
	{
		StreamBuffer_t3827669789 * L_24 = ___opMessage1;
		NullCheck(L_24);
		int32_t L_25 = StreamBuffer_get_Length_m1616542868(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		int32_t L_26 = V_0;
		((PeerBase_t2956237011 *)__this)->set_ByteCountLastOperation_6(L_26);
		bool L_27 = PeerBase_get_TrafficStatsEnabled_m3426645147(__this, /*hidden argument*/NULL);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_29 = ___deliveryMode0;
		V_8 = L_29;
		int32_t L_30 = V_8;
		if (!L_30)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d0;
	}

IL_00d0:
	{
		int32_t L_31 = V_8;
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00f5;
	}

IL_00d7:
	{
		TrafficStats_t1302902347 * L_32 = PeerBase_get_TrafficStatsOutgoing_m3028454514(__this, /*hidden argument*/NULL);
		int32_t L_33 = V_0;
		NullCheck(L_32);
		TrafficStats_CountUnreliableOpCommand_m1368676294(L_32, L_33, /*hidden argument*/NULL);
		goto IL_0107;
	}

IL_00e6:
	{
		TrafficStats_t1302902347 * L_34 = PeerBase_get_TrafficStatsOutgoing_m3028454514(__this, /*hidden argument*/NULL);
		int32_t L_35 = V_0;
		NullCheck(L_34);
		TrafficStats_CountReliableOpCommand_m1486410076(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0107;
	}

IL_00f5:
	{
		int32_t L_36 = ___deliveryMode0;
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(DeliveryMode_t90936453_il2cpp_TypeInfo_var, &L_37);
		ArgumentOutOfRangeException_t777629997 * L_39 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4164965325(L_39, _stringLiteral897557957, L_38, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, NULL, TPeer_EnqueueMessageAsPayload_m1514707185_RuntimeMethod_var);
	}

IL_0107:
	{
		TrafficStatsGameLevel_t4013908777 * L_40 = PeerBase_get_TrafficStatsGameLevel_m3076803185(__this, /*hidden argument*/NULL);
		int32_t L_41 = V_0;
		NullCheck(L_40);
		TrafficStatsGameLevel_CountOperation_m1756829521(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0115:
	{
		V_2 = (bool)1;
		goto IL_0119;
	}

IL_0119:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
extern "C" IL2CPP_METHOD_ATTR void TPeer_SendPing_m232307456 (TPeer_t1497954812 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SendPing_m232307456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SendOptions_t967321410  V_2;
	memset(&V_2, 0, sizeof(V_2));
	SendOptions_t967321410  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_0 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastPingResult_48(L_0);
		bool L_1 = __this->get_DoFraming_53();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_3 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_3;
		il2cpp_codegen_initobj((&V_3), sizeof(SendOptions_t967321410 ));
		(&V_3)->set_DeliveryMode_2(1);
		SendOptions_t967321410  L_4 = V_3;
		V_2 = L_4;
		Dictionary_2_t1405253484 * L_5 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_5, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_6 = L_5;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		Dictionary_2_Add_m1883976453(L_6, (uint8_t)1, L_9, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonCodes_t543425440_il2cpp_TypeInfo_var);
		uint8_t L_10 = ((PhotonCodes_t543425440_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_t543425440_il2cpp_TypeInfo_var))->get_Ping_4();
		SendOptions_t967321410  L_11 = V_2;
		VirtFuncInvoker4< bool, Dictionary_2_t1405253484 *, uint8_t, SendOptions_t967321410 , uint8_t >::Invoke(11 /* System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,ExitGames.Client.Photon.SendOptions,ExitGames.Client.Photon.EgMessageType) */, __this, L_6, L_10, L_11, 6);
		goto IL_00a5;
	}

IL_0056:
	{
		V_4 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_12 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_13 = __this->get_pingRequest_49();
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t1622296502_il2cpp_TypeInfo_var);
		Protocol_Serialize_m2793941309(NULL /*static, unused*/, L_12, L_13, (int32_t*)(&V_4), /*hidden argument*/NULL);
		bool L_14 = PeerBase_get_TrafficStatsEnabled_m3426645147(__this, /*hidden argument*/NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_008f;
		}
	}
	{
		TrafficStats_t1302902347 * L_16 = PeerBase_get_TrafficStatsOutgoing_m3028454514(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_17 = __this->get_pingRequest_49();
		NullCheck(L_17);
		NullCheck(L_16);
		TrafficStats_CountControlCommand_m3783491252(L_16, (((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), /*hidden argument*/NULL);
	}

IL_008f:
	{
		ByteU5BU5D_t4116647657* L_18 = __this->get_pingRequest_49();
		ByteU5BU5D_t4116647657* L_19 = __this->get_pingRequest_49();
		NullCheck(L_19);
		TPeer_SendData_m1400878091(__this, L_18, (((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))), /*hidden argument*/NULL);
	}

IL_00a5:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TPeer_SendData_m1400878091 (TPeer_t1497954812 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SendData_m1400878091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			int64_t L_0 = ((PeerBase_t2956237011 *)__this)->get_bytesOut_23();
			int32_t L_1 = ___length1;
			((PeerBase_t2956237011 *)__this)->set_bytesOut_23(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)(((int64_t)((int64_t)L_1))))));
			bool L_2 = PeerBase_get_TrafficStatsEnabled_m3426645147(__this, /*hidden argument*/NULL);
			V_0 = L_2;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_004c;
			}
		}

IL_001b:
		{
			TrafficStats_t1302902347 * L_4 = PeerBase_get_TrafficStatsOutgoing_m3028454514(__this, /*hidden argument*/NULL);
			TrafficStats_t1302902347 * L_5 = L_4;
			NullCheck(L_5);
			int32_t L_6 = TrafficStats_get_TotalPacketCount_m2954381143(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			int32_t L_7 = V_1;
			NullCheck(L_5);
			TrafficStats_set_TotalPacketCount_m2373240368(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
			TrafficStats_t1302902347 * L_8 = PeerBase_get_TrafficStatsOutgoing_m3028454514(__this, /*hidden argument*/NULL);
			TrafficStats_t1302902347 * L_9 = L_8;
			NullCheck(L_9);
			int32_t L_10 = TrafficStats_get_TotalCommandsInPackets_m3796906114(L_9, /*hidden argument*/NULL);
			int32_t L_11 = ((PeerBase_t2956237011 *)__this)->get_outgoingCommandsInStream_35();
			NullCheck(L_9);
			TrafficStats_set_TotalCommandsInPackets_m350749640(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		}

IL_004c:
		{
			NetworkSimulationSet_t2000596048 * L_12 = PeerBase_get_NetworkSimulationSettings_m1440651547(__this, /*hidden argument*/NULL);
			NullCheck(L_12);
			bool L_13 = NetworkSimulationSet_get_IsSimulationEnabled_m2067533518(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0079;
			}
		}

IL_005b:
		{
			int32_t L_15 = ___length1;
			ByteU5BU5D_t4116647657* L_16 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_15);
			V_3 = L_16;
			ByteU5BU5D_t4116647657* L_17 = ___data0;
			ByteU5BU5D_t4116647657* L_18 = V_3;
			int32_t L_19 = ___length1;
			Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_17, 0, (RuntimeArray *)(RuntimeArray *)L_18, 0, L_19, /*hidden argument*/NULL);
			ByteU5BU5D_t4116647657* L_20 = V_3;
			PeerBase_SendNetworkSimulated_m151505705(__this, L_20, /*hidden argument*/NULL);
			goto IL_0089;
		}

IL_0079:
		{
			IPhotonSocket_t2066969247 * L_21 = ((PeerBase_t2956237011 *)__this)->get_PhotonSocket_3();
			ByteU5BU5D_t4116647657* L_22 = ___data0;
			int32_t L_23 = ___length1;
			NullCheck(L_21);
			VirtFuncInvoker2< int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(6 /* ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.IPhotonSocket::Send(System.Byte[],System.Int32) */, L_21, L_22, L_23);
		}

IL_0089:
		{
			goto IL_00c2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008c;
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)__exception_local);
			uint8_t L_24 = PeerBase_get_debugOut_m755103680(__this, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_25 = V_5;
			if (!L_25)
			{
				goto IL_00b7;
			}
		}

IL_00a1:
		{
			RuntimeObject* L_26 = PeerBase_get_Listener_m753086860(__this, /*hidden argument*/NULL);
			Exception_t * L_27 = V_4;
			NullCheck(L_27);
			String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
			NullCheck(L_26);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_26, 1, L_28);
		}

IL_00b7:
		{
			Exception_t * L_29 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
			SupportClass_WriteStackTrace_m3074858457(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
			goto IL_00c2;
		}
	} // end catch (depth: 1)

IL_00c2:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TPeer_ReceiveIncomingCommands_m3142297905 (TPeer_t1497954812 * __this, ByteU5BU5D_t4116647657* ___inbuff0, int32_t ___dataLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_ReceiveIncomingCommands_m3142297905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	Queue_1_t3962907151 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___inbuff0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_2 = PeerBase_get_debugOut_m755103680(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		PeerBase_EnqueueDebugReturn_m2353825928(__this, 1, _stringLiteral2094611839, /*hidden argument*/NULL);
	}

IL_0029:
	{
		goto IL_014d;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_4 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PeerBase_t2956237011 *)__this)->set_timestampOfLastReceive_21(L_4);
		int32_t L_5 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = ((PeerBase_t2956237011 *)__this)->get_timeBase_27();
		((PeerBase_t2956237011 *)__this)->set_timeInt_28(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		int64_t L_7 = ((PeerBase_t2956237011 *)__this)->get_bytesIn_24();
		int32_t L_8 = ___dataLength1;
		((PeerBase_t2956237011 *)__this)->set_bytesIn_24(((int64_t)il2cpp_codegen_add((int64_t)L_7, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)7))))))));
		bool L_9 = PeerBase_get_TrafficStatsEnabled_m3426645147(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0094;
		}
	}
	{
		TrafficStats_t1302902347 * L_11 = PeerBase_get_TrafficStatsIncoming_m3832710925(__this, /*hidden argument*/NULL);
		TrafficStats_t1302902347 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = TrafficStats_get_TotalPacketCount_m2954381143(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		TrafficStats_set_TotalPacketCount_m2373240368(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t1302902347 * L_15 = PeerBase_get_TrafficStatsIncoming_m3832710925(__this, /*hidden argument*/NULL);
		TrafficStats_t1302902347 * L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = TrafficStats_get_TotalCommandsInPackets_m3796906114(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		TrafficStats_set_TotalCommandsInPackets_m350749640(L_16, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0094:
	{
		ByteU5BU5D_t4116647657* L_19 = ___inbuff0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((((int32_t)L_21) == ((int32_t)((int32_t)243))))
		{
			goto IL_00aa;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_22 = ___inbuff0;
		NullCheck(L_22);
		int32_t L_23 = 0;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B9_0 = ((((int32_t)L_24) == ((int32_t)((int32_t)244)))? 1 : 0);
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B9_0 = 1;
	}

IL_00ab:
	{
		V_4 = (bool)G_B9_0;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_26 = ___dataLength1;
		ByteU5BU5D_t4116647657* L_27 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_26);
		V_5 = L_27;
		ByteU5BU5D_t4116647657* L_28 = ___inbuff0;
		ByteU5BU5D_t4116647657* L_29 = V_5;
		int32_t L_30 = ___dataLength1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_28, 0, (RuntimeArray *)(RuntimeArray *)L_29, 0, L_30, /*hidden argument*/NULL);
		Queue_1_t3962907151 * L_31 = __this->get_incomingList_46();
		V_6 = L_31;
		Queue_1_t3962907151 * L_32 = V_6;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
	}

IL_00d6:
	try
	{ // begin try (depth: 1)
		Queue_1_t3962907151 * L_33 = __this->get_incomingList_46();
		ByteU5BU5D_t4116647657* L_34 = V_5;
		NullCheck(L_33);
		Queue_1_Enqueue_m2809316599(L_33, L_34, /*hidden argument*/Queue_1_Enqueue_m2809316599_RuntimeMethod_var);
		IL2CPP_LEAVE(0xF1, FINALLY_00e8);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		Queue_1_t3962907151 * L_35 = V_6;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_JUMP_TBL(0xF1, IL_00f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f1:
	{
		goto IL_014d;
	}

IL_00f4:
	{
		ByteU5BU5D_t4116647657* L_36 = ___inbuff0;
		NullCheck(L_36);
		int32_t L_37 = 0;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_7 = (bool)((((int32_t)L_38) == ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_011f;
		}
	}
	{
		TrafficStats_t1302902347 * L_40 = PeerBase_get_TrafficStatsIncoming_m3832710925(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_41 = ___inbuff0;
		NullCheck(L_41);
		NullCheck(L_40);
		TrafficStats_CountControlCommand_m3783491252(L_40, (((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_42 = ___inbuff0;
		TPeer_ReadPingResult_m1294536143(__this, L_42, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_011f:
	{
		uint8_t L_43 = PeerBase_get_debugOut_m755103680(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_43) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_014d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_45 = ___inbuff0;
		NullCheck(L_45);
		int32_t L_46 = 0;
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		uint8_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1926357507, L_49, /*hidden argument*/NULL);
		PeerBase_EnqueueDebugReturn_m2353825928(__this, 1, L_50, /*hidden argument*/NULL);
	}

IL_014d:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m1294536143 (TPeer_t1497954812 * __this, ByteU5BU5D_t4116647657* ___inbuff0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_ReadPingResult_m1294536143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 1;
		ByteU5BU5D_t4116647657* L_0 = ___inbuff0;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t1622296502_il2cpp_TypeInfo_var);
		Protocol_Deserialize_m3416339765(NULL /*static, unused*/, (int32_t*)(&V_0), L_0, (int32_t*)(&V_2), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = ___inbuff0;
		Protocol_Deserialize_m3416339765(NULL /*static, unused*/, (int32_t*)(&V_1), L_1, (int32_t*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_2 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		((PeerBase_t2956237011 *)__this)->set_lastRoundTripTime_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		bool L_4 = ((PeerBase_t2956237011 *)__this)->get_serverTimeOffsetIsAvailable_14();
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_6 = ((PeerBase_t2956237011 *)__this)->get_lastRoundTripTime_17();
		((PeerBase_t2956237011 *)__this)->set_roundTripTime_15(L_6);
	}

IL_0045:
	{
		int32_t L_7 = ((PeerBase_t2956237011 *)__this)->get_lastRoundTripTime_17();
		PeerBase_UpdateRoundTripTimeAndVariance_m848396558(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = ((PeerBase_t2956237011 *)__this)->get_serverTimeOffsetIsAvailable_14();
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((PeerBase_t2956237011 *)__this)->get_lastRoundTripTime_17();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_12 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PeerBase_t2956237011 *)__this)->set_serverTimeOffset_13(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11>>(int32_t)1)))), (int32_t)L_12)));
		((PeerBase_t2956237011 *)__this)->set_serverTimeOffsetIsAvailable_14((bool)1);
	}

IL_0080:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
extern "C" IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m1267646657 (TPeer_t1497954812 * __this, OperationResponse_t423627973 * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_ReadPingResult_m1267646657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		OperationResponse_t423627973 * L_0 = ___operationResponse0;
		NullCheck(L_0);
		Dictionary_2_t1405253484 * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m390015880(L_1, (uint8_t)2, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_2, Int32_t2950945753_il2cpp_TypeInfo_var))));
		OperationResponse_t423627973 * L_3 = ___operationResponse0;
		NullCheck(L_3);
		Dictionary_2_t1405253484 * L_4 = L_3->get_Parameters_3();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m390015880(L_4, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_t2950945753_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_6 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		((PeerBase_t2956237011 *)__this)->set_lastRoundTripTime_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)));
		bool L_8 = ((PeerBase_t2956237011 *)__this)->get_serverTimeOffsetIsAvailable_14();
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = ((PeerBase_t2956237011 *)__this)->get_lastRoundTripTime_17();
		((PeerBase_t2956237011 *)__this)->set_roundTripTime_15(L_10);
	}

IL_004d:
	{
		int32_t L_11 = ((PeerBase_t2956237011 *)__this)->get_lastRoundTripTime_17();
		PeerBase_UpdateRoundTripTimeAndVariance_m848396558(__this, L_11, /*hidden argument*/NULL);
		bool L_12 = ((PeerBase_t2956237011 *)__this)->get_serverTimeOffsetIsAvailable_14();
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ((PeerBase_t2956237011 *)__this)->get_lastRoundTripTime_17();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_16 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PeerBase_t2956237011 *)__this)->set_serverTimeOffset_13(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)((int32_t)L_15>>(int32_t)1)))), (int32_t)L_16)));
		((PeerBase_t2956237011 *)__this)->set_serverTimeOffsetIsAvailable_14((bool)1);
	}

IL_0086:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TPeer__cctor_m1779985491 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer__cctor_m1779985491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5D_t4116647657* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255371____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((TPeer_t1497954812_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t1497954812_il2cpp_TypeInfo_var))->set_tcpFramedMessageHead_50(L_1);
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_t4116647657* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)243));
		ByteU5BU5D_t4116647657* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((TPeer_t1497954812_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t1497954812_il2cpp_TypeInfo_var))->set_tcpMsgHead_51(L_5);
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
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_m658012815 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPackageHeaderSizeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m331257984 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPackageHeaderSizeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_m482813742 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_m987114278 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m1577946692 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m3053853297 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_m1944708715 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m1327790089 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_m1849822883 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m3213444035 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m2954381143 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalPacketCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m2373240368 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalPacketCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_m3796906114 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalCommandsInPacketsU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_m350749640 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m4086795527 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandBytesU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_m3595092292 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandBytesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m1836998829 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandBytesU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m2214626654 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandBytesU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m1236928114 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandBytesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_m616938761 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_m3421439682 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandBytesU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_m2804408088 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandBytesU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats__ctor_m4059783573 (TrafficStats_t1302902347 * __this, int32_t ___packageHeaderSize0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___packageHeaderSize0;
		TrafficStats_set_PackageHeaderSize_m331257984(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_m936111460 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ReliableCommandBytes_m4086795527(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStats_get_UnreliableCommandBytes_m1836998829(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_FragmentCommandBytes_m1236928114(__this, /*hidden argument*/NULL);
		int32_t L_3 = TrafficStats_get_ControlCommandBytes_m3421439682(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2)), (int32_t)L_3));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_m1617082294 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_TotalCommandBytes_m936111460(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStats_get_TotalPacketCount_m2954381143(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_PackageHeaderSize_m658012815(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastAck_m1467759478 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastAckU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastReliableCommand_m4212534736 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_m3783491252 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ControlCommandBytes_m3421439682(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ControlCommandBytes_m2804408088(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_ControlCommandCount_m1849822883(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ControlCommandCount_m3213444035(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_m1486410076 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ReliableCommandBytes_m4086795527(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ReliableCommandBytes_m3595092292(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_ReliableCommandCount_m482813742(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ReliableCommandCount_m987114278(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m1368676294 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_UnreliableCommandBytes_m1836998829(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_UnreliableCommandBytes_m2214626654(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_UnreliableCommandCount_m1577946692(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_UnreliableCommandCount_m3053853297(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStats_CountFragmentOpCommand_m1828684655 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_FragmentCommandBytes_m1236928114(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_FragmentCommandBytes_m616938761(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_FragmentCommandCount_m1944708715(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_FragmentCommandCount_m1327790089(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TrafficStats_ToString_m4056329990 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStats_ToString_m4056329990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = TrafficStats_get_TotalPacketBytes_m1617082294(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		int32_t L_6 = TrafficStats_get_TotalCommandBytes_m936111460(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		int32_t L_10 = TrafficStats_get_TotalPacketCount_m2954381143(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		int32_t L_14 = TrafficStats_get_TotalCommandsInPackets_m3796906114(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1828021971, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
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
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m1289681601 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationByteCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_m2008944563 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationByteCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_m513992761 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_m2697293110 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_m955008509 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultByteCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m1659749561 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultByteCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m3450799483 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m1885535817 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m1406817691 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventByteCountU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m3221741268 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventByteCountU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m2850709180 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventCountU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m3647081563 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventCountU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m103005414 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestOpResponseCallbackU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m3663207651 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
extern "C" IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m1024426170 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m3362607995 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m648070515 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestEventCallbackU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m2349483848 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m4040460867 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestMessageCallbackU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_m3322487871 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestMessageCallbackU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_m2231256844 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestRawMessageCallbackU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_m2462990156 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
extern "C" IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m194029821 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestEventCallbackCodeU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_m3901604312 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m1934683369 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m2976413445 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3568762106 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m2113040343 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m2374164164 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2232252709 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m429271156 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m1164973423 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalMessageCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalMessageCount_m60277200 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationCount_m513992761(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStatsGameLevel_get_ResultCount_m3450799483(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_EventCount_m2850709180(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalIncomingMessageCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalIncomingMessageCount_m913378961 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_ResultCount_m3450799483(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStatsGameLevel_get_EventCount_m2850709180(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalOutgoingMessageCount()
extern "C" IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalOutgoingMessageCount_m1901280818 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationCount_m513992761(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_m1756829521 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___operationBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationByteCount_m1289681601(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___operationBytes0;
		TrafficStatsGameLevel_set_OperationByteCount_m2008944563(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_OperationCount_m513992761(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_OperationCount_m2697293110(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountResult_m308777854 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___resultBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_ResultByteCount_m955008509(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___resultBytes0;
		TrafficStatsGameLevel_set_ResultByteCount_m1659749561(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_ResultCount_m3450799483(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_ResultCount_m1885535817(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountEvent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountEvent_m1317155091 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___eventBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_EventByteCount_m1406817691(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___eventBytes0;
		TrafficStatsGameLevel_set_EventByteCount_m3221741268(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_EventCount_m2850709180(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_EventCount_m3647081563(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForResponseCallback(System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForResponseCallback_m3826204994 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m103005414(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestOpResponseCallback_m3663207651(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m3362607995(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForEventCallback(System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForEventCallback_m2944957167 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestEventCallback_m648070515(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestEventCallback_m2349483848(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestEventCallbackCode_m3901604312(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForMessageCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForMessageCallback_m3209978540 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestMessageCallback_m4040460867(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestMessageCallback_m3322487871(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForRawMessageCallback(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForRawMessageCallback_m2333130850 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestRawMessageCallback_m2231256844(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestRawMessageCallback_m2462990156(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::DispatchIncomingCommandsCalled()
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m524433314 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m524433314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastDispatchCall_0();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_2 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastDispatchCall_0();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m1934683369(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m2976413445(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m2374164164(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2232252709(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_10 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeOfLastDispatchCall_0(L_10);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::SendOutgoingCommandsCalled()
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_SendOutgoingCommandsCalled_m3439818030 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_SendOutgoingCommandsCalled_m3439818030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastSendCall_1();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_2 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastSendCall_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3568762106(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m2113040343(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m429271156(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m1164973423(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_10 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeOfLastSendCall_1(L_10);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToString_m1358013804 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_ToString_m1358013804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationByteCount_m1289681601(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = TrafficStatsGameLevel_get_ResultByteCount_m955008509(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = TrafficStatsGameLevel_get_EventByteCount_m1406817691(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral4110760290, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToStringVitalStats()
extern "C" IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToStringVitalStats_m2699597432 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_ToStringVitalStats_m2699597432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3568762106(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		int32_t L_6 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m1934683369(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		int32_t L_10 = TrafficStatsGameLevel_get_LongestEventCallback_m648070515(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		uint8_t L_14 = TrafficStatsGameLevel_get_LongestEventCallbackCode_m194029821(__this, /*hidden argument*/NULL);
		uint8_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_13;
		int32_t L_18 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m103005414(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_17;
		uint8_t L_22 = TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m1024426170(__this, /*hidden argument*/NULL);
		uint8_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		ObjectU5BU5D_t2843939325* L_25 = L_21;
		int32_t L_26 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m429271156(__this, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_25;
		int32_t L_30 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m2374164164(__this, /*hidden argument*/NULL);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_32);
		String_t* L_33 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral591816982, L_29, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0084;
	}

IL_0084:
	{
		String_t* L_34 = V_0;
		return L_34;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrafficStatsGameLevel__ctor_m2185191356 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
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
// System.Void ExitGames.Client.Photon.Version::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Version__cctor_m949376060 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__cctor_m949376060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_t4116647657* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255371____6DDAB634AD2B1CEB854EA2128C959D16CC29D6BF_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Version_t2916202802_StaticFields*)il2cpp_codegen_static_fields_for(Version_t2916202802_il2cpp_TypeInfo_var))->set_clientVersion_0(L_1);
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
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m2516099295 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m2516099295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		UInt32U5BU5D_t2770800703* L_0 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->set_data_1(L_0);
		__this->set_dataLength_2(1);
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m1240160733 (BigInteger_t956758543 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m1240160733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		UInt32U5BU5D_t2770800703* L_0 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->set_data_1(L_0);
		int64_t L_1 = ___value0;
		V_0 = L_1;
		__this->set_dataLength_2(0);
		goto IL_004f;
	}

IL_0027:
	{
		UInt32U5BU5D_t2770800703* L_2 = __this->get_data_1();
		int32_t L_3 = __this->get_dataLength_2();
		int64_t L_4 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_4&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		int64_t L_5 = ___value0;
		___value0 = ((int64_t)((int64_t)L_5>>(int32_t)((int32_t)32)));
		int32_t L_6 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
	}

IL_004f:
	{
		int64_t L_7 = ___value0;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8 = __this->get_dataLength_2();
		G_B5_0 = ((((int32_t)L_8) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B5_0 = 0;
	}

IL_005f:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_10 = V_0;
		V_2 = (bool)((((int64_t)L_10) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		int64_t L_12 = ___value0;
		if (L_12)
		{
			goto IL_0084;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_13 = __this->get_data_1();
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)69);
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B10_0 = ((!(((uint32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 1;
	}

IL_0085:
	{
		V_3 = (bool)G_B10_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		ArithmeticException_t4283546778 * L_17 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_17, _stringLiteral385363368, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, BigInteger__ctor_m1240160733_RuntimeMethod_var);
	}

IL_0094:
	{
		goto IL_00d5;
	}

IL_0097:
	{
		int64_t L_18 = V_0;
		V_4 = (bool)((((int64_t)L_18) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00d5;
		}
	}
	{
		int64_t L_20 = ___value0;
		if ((!(((uint64_t)L_20) == ((uint64_t)(((int64_t)((int64_t)(-1))))))))
		{
			goto IL_00c2;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_21 = __this->get_data_1();
		int32_t L_22 = __this->get_dataLength_2();
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B17_0 = ((((int32_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B17_0 = 1;
	}

IL_00c3:
	{
		V_5 = (bool)G_B17_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		ArithmeticException_t4283546778 * L_26 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_26, _stringLiteral3895168893, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, BigInteger__ctor_m1240160733_RuntimeMethod_var);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		int32_t L_27 = __this->get_dataLength_2();
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00eb;
		}
	}
	{
		__this->set_dataLength_2(1);
	}

IL_00eb:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m497354907 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___bi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m497354907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		UInt32U5BU5D_t2770800703* L_0 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->set_data_1(L_0);
		BigInteger_t956758543 * L_1 = ___bi0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_dataLength_2();
		__this->set_dataLength_2(L_2);
		V_0 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		UInt32U5BU5D_t2770800703* L_3 = __this->get_data_1();
		int32_t L_4 = V_0;
		BigInteger_t956758543 * L_5 = ___bi0;
		NullCheck(L_5);
		UInt32U5BU5D_t2770800703* L_6 = L_5->get_data_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_dataLength_2();
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m3579054046 (BigInteger_t956758543 * __this, ByteU5BU5D_t4116647657* ___inData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m3579054046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B18_0 = 0;
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inData0;
		NullCheck(L_0);
		__this->set_dataLength_2(((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))>>(int32_t)2)));
		ByteU5BU5D_t4116647657* L_1 = ___inData0;
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))&(int32_t)3));
		int32_t L_2 = V_0;
		V_1 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0036:
	{
		int32_t L_5 = __this->get_dataLength_2();
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ArithmeticException_t4283546778 * L_7 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_7, _stringLiteral762882209, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, BigInteger__ctor_m3579054046_RuntimeMethod_var);
	}

IL_004f:
	{
		UInt32U5BU5D_t2770800703* L_8 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->set_data_1(L_8);
		ByteU5BU5D_t4116647657* L_9 = ___inData0;
		NullCheck(L_9);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)1));
		V_4 = 0;
		goto IL_0099;
	}

IL_0067:
	{
		UInt32U5BU5D_t2770800703* L_10 = __this->get_data_1();
		int32_t L_11 = V_4;
		ByteU5BU5D_t4116647657* L_12 = ___inData0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_t4116647657* L_16 = ___inData0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)2));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_t4116647657* L_20 = ___inData0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_t4116647657* L_24 = ___inData0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_15<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_19<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_23<<(int32_t)8)))), (int32_t)L_27)));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)4));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_32 = V_0;
		V_6 = (bool)((((int32_t)L_32) == ((int32_t)1))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00c4;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_34 = __this->get_data_1();
		int32_t L_35 = __this->get_dataLength_2();
		ByteU5BU5D_t4116647657* L_36 = ___inData0;
		NullCheck(L_36);
		int32_t L_37 = 0;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1))), (uint32_t)L_38);
		goto IL_0111;
	}

IL_00c4:
	{
		int32_t L_39 = V_0;
		V_7 = (bool)((((int32_t)L_39) == ((int32_t)2))? 1 : 0);
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00e8;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_41 = __this->get_data_1();
		int32_t L_42 = __this->get_dataLength_2();
		ByteU5BU5D_t4116647657* L_43 = ___inData0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_t4116647657* L_46 = ___inData0;
		NullCheck(L_46);
		int32_t L_47 = 1;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1))), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_45<<(int32_t)8)), (int32_t)L_48)));
		goto IL_0111;
	}

IL_00e8:
	{
		int32_t L_49 = V_0;
		V_8 = (bool)((((int32_t)L_49) == ((int32_t)3))? 1 : 0);
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_0111;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_51 = __this->get_data_1();
		int32_t L_52 = __this->get_dataLength_2();
		ByteU5BU5D_t4116647657* L_53 = ___inData0;
		NullCheck(L_53);
		int32_t L_54 = 0;
		uint8_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_t4116647657* L_56 = ___inData0;
		NullCheck(L_56);
		int32_t L_57 = 1;
		uint8_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_t4116647657* L_59 = ___inData0;
		NullCheck(L_59);
		int32_t L_60 = 2;
		uint8_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1))), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_55<<(int32_t)((int32_t)16))), (int32_t)((int32_t)((int32_t)L_58<<(int32_t)8)))), (int32_t)L_61)));
	}

IL_0111:
	{
		goto IL_0121;
	}

IL_0113:
	{
		int32_t L_62 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)1)));
	}

IL_0121:
	{
		int32_t L_63 = __this->get_dataLength_2();
		if ((((int32_t)L_63) <= ((int32_t)1)))
		{
			goto IL_013e;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_64 = __this->get_data_1();
		int32_t L_65 = __this->get_dataLength_2();
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B18_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B18_0;
		bool L_68 = V_9;
		if (L_68)
		{
			goto IL_0113;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C" IL2CPP_METHOD_ATTR void BigInteger__ctor_m3091364386 (BigInteger_t956758543 * __this, UInt32U5BU5D_t2770800703* ___inData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m3091364386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		UInt32U5BU5D_t2770800703* L_0 = ___inData0;
		NullCheck(L_0);
		__this->set_dataLength_2((((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		int32_t L_1 = __this->get_dataLength_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		ArithmeticException_t4283546778 * L_3 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_3, _stringLiteral762882209, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, BigInteger__ctor_m3091364386_RuntimeMethod_var);
	}

IL_0031:
	{
		UInt32U5BU5D_t2770800703* L_4 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->set_data_1(L_4);
		int32_t L_5 = __this->get_dataLength_2();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		V_2 = 0;
		goto IL_005e;
	}

IL_004b:
	{
		UInt32U5BU5D_t2770800703* L_6 = __this->get_data_1();
		int32_t L_7 = V_2;
		UInt32U5BU5D_t2770800703* L_8 = ___inData0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_14 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0079;
	}

IL_006b:
	{
		int32_t L_16 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
	}

IL_0079:
	{
		int32_t L_17 = __this->get_dataLength_2();
		if ((((int32_t)L_17) <= ((int32_t)1)))
		{
			goto IL_0096;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_18 = __this->get_data_1();
		int32_t L_19 = __this->get_dataLength_2();
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B10_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B10_0 = 0;
	}

IL_0097:
	{
		V_4 = (bool)G_B10_0;
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Implicit_m1457317411 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Implicit_m1457317411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BigInteger_t956758543 * L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Implicit_m1456924192 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Implicit_m1456924192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	{
		int32_t L_0 = ___value0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_1, (((int64_t)((int64_t)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		BigInteger_t956758543 * L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Addition_m949304235 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Addition_m949304235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	BigInteger_t956758543 * V_9 = NULL;
	BigInteger_t956758543 * G_B2_0 = NULL;
	BigInteger_t956758543 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_t956758543 * G_B3_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = V_0;
		BigInteger_t956758543 * L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_dataLength_2();
		BigInteger_t956758543 * L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_dataLength_2();
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_t956758543 * L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_dataLength_2();
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_t956758543 * L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_dataLength_2();
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_dataLength_2(G_B3_0);
		V_1 = (((int64_t)((int64_t)0)));
		V_3 = 0;
		goto IL_0061;
	}

IL_0030:
	{
		BigInteger_t956758543 * L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t2770800703* L_11 = L_10->get_data_1();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_t956758543 * L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t2770800703* L_16 = L_15->get_data_1();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((uint64_t)L_14))), (int64_t)(((int64_t)((uint64_t)L_19))))), (int64_t)L_20));
		int64_t L_21 = V_4;
		V_1 = ((int64_t)((int64_t)L_21>>(int32_t)((int32_t)32)));
		BigInteger_t956758543 * L_22 = V_0;
		NullCheck(L_22);
		UInt32U5BU5D_t2770800703* L_23 = L_22->get_data_1();
		int32_t L_24 = V_3;
		int64_t L_25 = V_4;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_25&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_27 = V_3;
		BigInteger_t956758543 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_dataLength_2();
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_31 = V_1;
		if (!L_31)
		{
			goto IL_007f;
		}
	}
	{
		BigInteger_t956758543 * L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_dataLength_2();
		G_B9_0 = ((((int32_t)L_33) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0080;
	}

IL_007f:
	{
		G_B9_0 = 0;
	}

IL_0080:
	{
		V_6 = (bool)G_B9_0;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00a5;
		}
	}
	{
		BigInteger_t956758543 * L_35 = V_0;
		NullCheck(L_35);
		UInt32U5BU5D_t2770800703* L_36 = L_35->get_data_1();
		BigInteger_t956758543 * L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_dataLength_2();
		int64_t L_39 = V_1;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)(((int32_t)((uint32_t)L_39))));
		BigInteger_t956758543 * L_40 = V_0;
		BigInteger_t956758543 * L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_dataLength_2();
		NullCheck(L_41);
		L_41->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
	}

IL_00a5:
	{
		goto IL_00b5;
	}

IL_00a7:
	{
		BigInteger_t956758543 * L_43 = V_0;
		BigInteger_t956758543 * L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_dataLength_2();
		NullCheck(L_44);
		L_44->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)));
	}

IL_00b5:
	{
		BigInteger_t956758543 * L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_dataLength_2();
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		BigInteger_t956758543 * L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t2770800703* L_49 = L_48->get_data_1();
		BigInteger_t956758543 * L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_dataLength_2();
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B16_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B16_0 = 0;
	}

IL_00d3:
	{
		V_7 = (bool)G_B16_0;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_00a7;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_t956758543 * L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t2770800703* L_56 = L_55->get_data_1();
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_t956758543 * L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t2770800703* L_61 = L_60->get_data_1();
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)-2147483648LL)))) == ((uint32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)-2147483648LL)))))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_t956758543 * L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t2770800703* L_66 = L_65->get_data_1();
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_t956758543 * L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t2770800703* L_71 = L_70->get_data_1();
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B20_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&(int32_t)((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B20_0 = 0;
	}

IL_011e:
	{
		V_8 = (bool)G_B20_0;
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_012b;
		}
	}
	{
		ArithmeticException_t4283546778 * L_76 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m479063094(L_76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, NULL, BigInteger_op_Addition_m949304235_RuntimeMethod_var);
	}

IL_012b:
	{
		BigInteger_t956758543 * L_77 = V_0;
		V_9 = L_77;
		goto IL_0130;
	}

IL_0130:
	{
		BigInteger_t956758543 * L_78 = V_9;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Subtraction_m1996860654 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Subtraction_m1996860654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	BigInteger_t956758543 * V_12 = NULL;
	BigInteger_t956758543 * G_B2_0 = NULL;
	BigInteger_t956758543 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_t956758543 * G_B3_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B23_0 = 0;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = V_0;
		BigInteger_t956758543 * L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_dataLength_2();
		BigInteger_t956758543 * L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_dataLength_2();
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_t956758543 * L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_dataLength_2();
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_t956758543 * L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_dataLength_2();
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_dataLength_2(G_B3_0);
		V_1 = (((int64_t)((int64_t)0)));
		V_3 = 0;
		goto IL_006f;
	}

IL_0030:
	{
		BigInteger_t956758543 * L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t2770800703* L_11 = L_10->get_data_1();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_t956758543 * L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t2770800703* L_16 = L_15->get_data_1();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((uint64_t)L_14))), (int64_t)(((int64_t)((uint64_t)L_19))))), (int64_t)L_20));
		BigInteger_t956758543 * L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t2770800703* L_22 = L_21->get_data_1();
		int32_t L_23 = V_3;
		int64_t L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_24&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		int64_t L_25 = V_4;
		V_5 = (bool)((((int64_t)L_25) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0067;
		}
	}
	{
		V_1 = (((int64_t)((int64_t)1)));
		goto IL_006a;
	}

IL_0067:
	{
		V_1 = (((int64_t)((int64_t)0)));
	}

IL_006a:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_28 = V_3;
		BigInteger_t956758543 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_dataLength_2();
		V_6 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_32 = V_1;
		V_7 = (bool)((!(((uint64_t)L_32) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_t956758543 * L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_dataLength_2();
		V_8 = L_35;
		goto IL_00a4;
	}

IL_0094:
	{
		BigInteger_t956758543 * L_36 = V_0;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		int32_t L_38 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)(-1));
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00a4:
	{
		int32_t L_40 = V_8;
		V_9 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_41 = V_9;
		if (L_41)
		{
			goto IL_0094;
		}
	}
	{
		BigInteger_t956758543 * L_42 = V_0;
		NullCheck(L_42);
		L_42->set_dataLength_2(((int32_t)70));
	}

IL_00b9:
	{
		goto IL_00c9;
	}

IL_00bb:
	{
		BigInteger_t956758543 * L_43 = V_0;
		BigInteger_t956758543 * L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_dataLength_2();
		NullCheck(L_44);
		L_44->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)));
	}

IL_00c9:
	{
		BigInteger_t956758543 * L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_dataLength_2();
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		BigInteger_t956758543 * L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t2770800703* L_49 = L_48->get_data_1();
		BigInteger_t956758543 * L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_dataLength_2();
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B19_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B19_0 = 0;
	}

IL_00e7:
	{
		V_10 = (bool)G_B19_0;
		bool L_54 = V_10;
		if (L_54)
		{
			goto IL_00bb;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_t956758543 * L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t2770800703* L_56 = L_55->get_data_1();
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_t956758543 * L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t2770800703* L_61 = L_60->get_data_1();
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)-2147483648LL))))))
		{
			goto IL_0131;
		}
	}
	{
		BigInteger_t956758543 * L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t2770800703* L_66 = L_65->get_data_1();
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_t956758543 * L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t2770800703* L_71 = L_70->get_data_1();
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B23_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&(int32_t)((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0132;
	}

IL_0131:
	{
		G_B23_0 = 0;
	}

IL_0132:
	{
		V_11 = (bool)G_B23_0;
		bool L_75 = V_11;
		if (!L_75)
		{
			goto IL_013f;
		}
	}
	{
		ArithmeticException_t4283546778 * L_76 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m479063094(L_76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, NULL, BigInteger_op_Subtraction_m1996860654_RuntimeMethod_var);
	}

IL_013f:
	{
		BigInteger_t956758543 * L_77 = V_0;
		V_12 = L_77;
		goto IL_0144;
	}

IL_0144:
	{
		BigInteger_t956758543 * L_78 = V_12;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Multiply_m664707877 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Multiply_m664707877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	BigInteger_t956758543 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	BigInteger_t956758543 * V_20 = NULL;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B28_0 = 0;
	int32_t G_B33_0 = 0;
	{
		V_0 = ((int32_t)69);
		V_1 = (bool)0;
		V_2 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			BigInteger_t956758543 * L_0 = ___bi10;
			NullCheck(L_0);
			UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
			int32_t L_2 = V_0;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_5 = V_4;
			if (!L_5)
			{
				goto IL_002c;
			}
		}

IL_0020:
		{
			V_1 = (bool)1;
			BigInteger_t956758543 * L_6 = ___bi10;
			IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
			BigInteger_t956758543 * L_7 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			___bi10 = L_7;
		}

IL_002c:
		{
			BigInteger_t956758543 * L_8 = ___bi21;
			NullCheck(L_8);
			UInt32U5BU5D_t2770800703* L_9 = L_8->get_data_1();
			int32_t L_10 = V_0;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_004f;
			}
		}

IL_0043:
		{
			V_2 = (bool)1;
			BigInteger_t956758543 * L_14 = ___bi21;
			IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
			BigInteger_t956758543 * L_15 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			___bi21 = L_15;
		}

IL_004f:
		{
			goto IL_0057;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		goto IL_0057;
	} // end catch (depth: 1)

IL_0057:
	{
		BigInteger_t956758543 * L_16 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_16, /*hidden argument*/NULL);
		V_3 = L_16;
	}

IL_005d:
	try
	{ // begin try (depth: 1)
		{
			V_6 = 0;
			goto IL_010a;
		}

IL_0066:
		{
			BigInteger_t956758543 * L_17 = ___bi10;
			NullCheck(L_17);
			UInt32U5BU5D_t2770800703* L_18 = L_17->get_data_1();
			int32_t L_19 = V_6;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			V_8 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
			bool L_22 = V_8;
			if (!L_22)
			{
				goto IL_007e;
			}
		}

IL_0079:
		{
			goto IL_0104;
		}

IL_007e:
		{
			V_7 = (((int64_t)((int64_t)0)));
			V_9 = 0;
			int32_t L_23 = V_6;
			V_10 = L_23;
			goto IL_00d4;
		}

IL_008b:
		{
			BigInteger_t956758543 * L_24 = ___bi10;
			NullCheck(L_24);
			UInt32U5BU5D_t2770800703* L_25 = L_24->get_data_1();
			int32_t L_26 = V_6;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			BigInteger_t956758543 * L_29 = ___bi21;
			NullCheck(L_29);
			UInt32U5BU5D_t2770800703* L_30 = L_29->get_data_1();
			int32_t L_31 = V_9;
			NullCheck(L_30);
			int32_t L_32 = L_31;
			uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			BigInteger_t956758543 * L_34 = V_3;
			NullCheck(L_34);
			UInt32U5BU5D_t2770800703* L_35 = L_34->get_data_1();
			int32_t L_36 = V_10;
			NullCheck(L_35);
			int32_t L_37 = L_36;
			uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			uint64_t L_39 = V_7;
			V_11 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((uint64_t)L_28))), (int64_t)(((int64_t)((uint64_t)L_33))))), (int64_t)(((int64_t)((uint64_t)L_38))))), (int64_t)L_39));
			BigInteger_t956758543 * L_40 = V_3;
			NullCheck(L_40);
			UInt32U5BU5D_t2770800703* L_41 = L_40->get_data_1();
			int32_t L_42 = V_10;
			uint64_t L_43 = V_11;
			NullCheck(L_41);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_43&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
			uint64_t L_44 = V_11;
			V_7 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
			int32_t L_45 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
			int32_t L_46 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		}

IL_00d4:
		{
			int32_t L_47 = V_9;
			BigInteger_t956758543 * L_48 = ___bi21;
			NullCheck(L_48);
			int32_t L_49 = L_48->get_dataLength_2();
			V_12 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
			bool L_50 = V_12;
			if (L_50)
			{
				goto IL_008b;
			}
		}

IL_00e4:
		{
			uint64_t L_51 = V_7;
			V_13 = (bool)((!(((uint64_t)L_51) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
			bool L_52 = V_13;
			if (!L_52)
			{
				goto IL_0103;
			}
		}

IL_00f0:
		{
			BigInteger_t956758543 * L_53 = V_3;
			NullCheck(L_53);
			UInt32U5BU5D_t2770800703* L_54 = L_53->get_data_1();
			int32_t L_55 = V_6;
			BigInteger_t956758543 * L_56 = ___bi21;
			NullCheck(L_56);
			int32_t L_57 = L_56->get_dataLength_2();
			uint64_t L_58 = V_7;
			NullCheck(L_54);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_57))), (uint32_t)(((int32_t)((uint32_t)L_58))));
		}

IL_0103:
		{
		}

IL_0104:
		{
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_010a:
		{
			int32_t L_60 = V_6;
			BigInteger_t956758543 * L_61 = ___bi10;
			NullCheck(L_61);
			int32_t L_62 = L_61->get_dataLength_2();
			V_14 = (bool)((((int32_t)L_60) < ((int32_t)L_62))? 1 : 0);
			bool L_63 = V_14;
			if (L_63)
			{
				goto IL_0066;
			}
		}

IL_011d:
		{
			goto IL_012d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0120;
		throw e;
	}

CATCH_0120:
	{ // begin catch(System.Exception)
		ArithmeticException_t4283546778 * L_64 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_64, _stringLiteral265795232, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, NULL, BigInteger_op_Multiply_m664707877_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_012d:
	{
		BigInteger_t956758543 * L_65 = V_3;
		BigInteger_t956758543 * L_66 = ___bi10;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_dataLength_2();
		BigInteger_t956758543 * L_68 = ___bi21;
		NullCheck(L_68);
		int32_t L_69 = L_68->get_dataLength_2();
		NullCheck(L_65);
		L_65->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)L_69)));
		BigInteger_t956758543 * L_70 = V_3;
		NullCheck(L_70);
		int32_t L_71 = L_70->get_dataLength_2();
		V_15 = (bool)((((int32_t)L_71) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_72 = V_15;
		if (!L_72)
		{
			goto IL_0158;
		}
	}
	{
		BigInteger_t956758543 * L_73 = V_3;
		NullCheck(L_73);
		L_73->set_dataLength_2(((int32_t)70));
	}

IL_0158:
	{
		goto IL_0168;
	}

IL_015a:
	{
		BigInteger_t956758543 * L_74 = V_3;
		BigInteger_t956758543 * L_75 = L_74;
		NullCheck(L_75);
		int32_t L_76 = L_75->get_dataLength_2();
		NullCheck(L_75);
		L_75->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)1)));
	}

IL_0168:
	{
		BigInteger_t956758543 * L_77 = V_3;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_dataLength_2();
		if ((((int32_t)L_78) <= ((int32_t)1)))
		{
			goto IL_0185;
		}
	}
	{
		BigInteger_t956758543 * L_79 = V_3;
		NullCheck(L_79);
		UInt32U5BU5D_t2770800703* L_80 = L_79->get_data_1();
		BigInteger_t956758543 * L_81 = V_3;
		NullCheck(L_81);
		int32_t L_82 = L_81->get_dataLength_2();
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
		uint32_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		G_B28_0 = ((((int32_t)L_84) == ((int32_t)0))? 1 : 0);
		goto IL_0186;
	}

IL_0185:
	{
		G_B28_0 = 0;
	}

IL_0186:
	{
		V_16 = (bool)G_B28_0;
		bool L_85 = V_16;
		if (L_85)
		{
			goto IL_015a;
		}
	}
	{
		BigInteger_t956758543 * L_86 = V_3;
		NullCheck(L_86);
		UInt32U5BU5D_t2770800703* L_87 = L_86->get_data_1();
		int32_t L_88 = V_0;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_17 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_90&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_91 = V_17;
		if (!L_91)
		{
			goto IL_022d;
		}
	}
	{
		bool L_92 = V_1;
		bool L_93 = V_2;
		if ((((int32_t)L_92) == ((int32_t)L_93)))
		{
			goto IL_01bc;
		}
	}
	{
		BigInteger_t956758543 * L_94 = V_3;
		NullCheck(L_94);
		UInt32U5BU5D_t2770800703* L_95 = L_94->get_data_1();
		int32_t L_96 = V_0;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		G_B33_0 = ((((int32_t)L_98) == ((int32_t)((int32_t)-2147483648LL)))? 1 : 0);
		goto IL_01bd;
	}

IL_01bc:
	{
		G_B33_0 = 0;
	}

IL_01bd:
	{
		V_18 = (bool)G_B33_0;
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_0222;
		}
	}
	{
		BigInteger_t956758543 * L_100 = V_3;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_dataLength_2();
		V_19 = (bool)((((int32_t)L_101) == ((int32_t)1))? 1 : 0);
		bool L_102 = V_19;
		if (!L_102)
		{
			goto IL_01d8;
		}
	}
	{
		BigInteger_t956758543 * L_103 = V_3;
		V_20 = L_103;
		goto IL_0249;
	}

IL_01d8:
	{
		V_21 = (bool)1;
		V_22 = 0;
		goto IL_01fe;
	}

IL_01e1:
	{
		BigInteger_t956758543 * L_104 = V_3;
		NullCheck(L_104);
		UInt32U5BU5D_t2770800703* L_105 = L_104->get_data_1();
		int32_t L_106 = V_22;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		uint32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_23 = (bool)((!(((uint32_t)L_108) <= ((uint32_t)0)))? 1 : 0);
		bool L_109 = V_23;
		if (!L_109)
		{
			goto IL_01f7;
		}
	}
	{
		V_21 = (bool)0;
	}

IL_01f7:
	{
		int32_t L_110 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_01fe:
	{
		int32_t L_111 = V_22;
		BigInteger_t956758543 * L_112 = V_3;
		NullCheck(L_112);
		int32_t L_113 = L_112->get_dataLength_2();
		bool L_114 = V_21;
		V_24 = (bool)((int32_t)((int32_t)((((int32_t)L_111) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)1))))? 1 : 0)&(int32_t)L_114));
		bool L_115 = V_24;
		if (L_115)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_116 = V_21;
		V_25 = L_116;
		bool L_117 = V_25;
		if (!L_117)
		{
			goto IL_0220;
		}
	}
	{
		BigInteger_t956758543 * L_118 = V_3;
		V_20 = L_118;
		goto IL_0249;
	}

IL_0220:
	{
	}

IL_0222:
	{
		ArithmeticException_t4283546778 * L_119 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_119, _stringLiteral265795232, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_119, NULL, BigInteger_op_Multiply_m664707877_RuntimeMethod_var);
	}

IL_022d:
	{
		bool L_120 = V_1;
		bool L_121 = V_2;
		V_26 = (bool)((((int32_t)((((int32_t)L_120) == ((int32_t)L_121))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_122 = V_26;
		if (!L_122)
		{
			goto IL_0244;
		}
	}
	{
		BigInteger_t956758543 * L_123 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_124 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_123, /*hidden argument*/NULL);
		V_20 = L_124;
		goto IL_0249;
	}

IL_0244:
	{
		BigInteger_t956758543 * L_125 = V_3;
		V_20 = L_125;
		goto IL_0249;
	}

IL_0249:
	{
		BigInteger_t956758543 * L_126 = V_20;
		return L_126;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_LeftShift_m2731198774 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_LeftShift_m2731198774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	{
		BigInteger_t956758543 * L_0 = ___bi10;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m497354907(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_t956758543 * L_2 = V_0;
		BigInteger_t956758543 * L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t2770800703* L_4 = L_3->get_data_1();
		int32_t L_5 = ___shiftVal1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		int32_t L_6 = BigInteger_shiftLeft_m952412684(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_dataLength_2(L_6);
		BigInteger_t956758543 * L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		BigInteger_t956758543 * L_8 = V_1;
		return L_8;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t BigInteger_shiftLeft_m952412684 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = ((int32_t)32);
		UInt32U5BU5D_t2770800703* L_0 = ___buffer0;
		NullCheck(L_0);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		goto IL_000e;
	}

IL_000a:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_3 = ___buffer0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B5_0 = 0;
	}

IL_001d:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_3 = L_8;
		goto IL_00a2;
	}

IL_0025:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_0;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_12 = V_3;
		V_0 = L_12;
	}

IL_0032:
	{
		V_4 = (((int64_t)((int64_t)0)));
		V_6 = 0;
		goto IL_0067;
	}

IL_003b:
	{
		UInt32U5BU5D_t2770800703* L_13 = ___buffer0;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_0;
		V_7 = ((int64_t)((int64_t)(((int64_t)((uint64_t)L_16)))<<(int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)63)))));
		uint64_t L_18 = V_7;
		uint64_t L_19 = V_4;
		V_7 = ((int64_t)((int64_t)L_18|(int64_t)L_19));
		UInt32U5BU5D_t2770800703* L_20 = ___buffer0;
		int32_t L_21 = V_6;
		uint64_t L_22 = V_7;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_22&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		uint64_t L_23 = V_7;
		V_4 = ((int64_t)((uint64_t)L_23>>((int32_t)32)));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0067:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = V_1;
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_003b;
		}
	}
	{
		uint64_t L_28 = V_4;
		V_9 = (bool)((!(((uint64_t)L_28) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_30 = V_1;
		UInt32U5BU5D_t2770800703* L_31 = ___buffer0;
		NullCheck(L_31);
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))) > ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_009c;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_33 = ___buffer0;
		int32_t L_34 = V_1;
		uint64_t L_35 = V_4;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint32_t)(((int32_t)((uint32_t)L_35))));
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_009c:
	{
	}

IL_009d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38));
	}

IL_00a2:
	{
		int32_t L_39 = V_3;
		V_11 = (bool)((((int32_t)L_39) > ((int32_t)0))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_41 = V_1;
		V_12 = L_41;
		goto IL_00b4;
	}

IL_00b4:
	{
		int32_t L_42 = V_12;
		return L_42;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t BigInteger_shiftRight_m1897315128 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B19_0 = 0;
	{
		V_0 = ((int32_t)32);
		V_1 = 0;
		UInt32U5BU5D_t2770800703* L_0 = ___buffer0;
		NullCheck(L_0);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		goto IL_0010;
	}

IL_000c:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
	}

IL_0010:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_3 = ___buffer0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 0;
	}

IL_001f:
	{
		V_3 = (bool)G_B5_0;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_4 = L_8;
		goto IL_008c;
	}

IL_0028:
	{
		int32_t L_9 = V_4;
		int32_t L_10 = V_0;
		V_6 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = V_4;
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_13));
	}

IL_003e:
	{
		V_5 = (((int64_t)((int64_t)0)));
		int32_t L_14 = V_2;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		goto IL_0077;
	}

IL_0049:
	{
		UInt32U5BU5D_t2770800703* L_15 = ___buffer0;
		int32_t L_16 = V_7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_0;
		V_8 = ((int64_t)((uint64_t)(((int64_t)((uint64_t)L_18)))>>((int32_t)((int32_t)L_19&(int32_t)((int32_t)63)))));
		uint64_t L_20 = V_8;
		uint64_t L_21 = V_5;
		V_8 = ((int64_t)((int64_t)L_20|(int64_t)L_21));
		UInt32U5BU5D_t2770800703* L_22 = ___buffer0;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_1;
		V_5 = ((int64_t)((int64_t)(((int64_t)((uint64_t)L_25)))<<(int32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)63)))));
		UInt32U5BU5D_t2770800703* L_27 = ___buffer0;
		int32_t L_28 = V_7;
		uint64_t L_29 = V_8;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)(((int32_t)((uint32_t)L_29))));
		int32_t L_30 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_31 = V_7;
		V_9 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_9;
		if (L_32)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34));
	}

IL_008c:
	{
		int32_t L_35 = V_4;
		V_10 = (bool)((((int32_t)L_35) > ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_009d;
	}

IL_0099:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
	}

IL_009d:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) <= ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_39 = ___buffer0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B19_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B19_0 = 0;
	}

IL_00ac:
	{
		V_11 = (bool)G_B19_0;
		bool L_43 = V_11;
		if (L_43)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_44 = V_2;
		V_12 = L_44;
		goto IL_00b7;
	}

IL_00b7:
	{
		int32_t L_45 = V_12;
		return L_45;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_UnaryNegation_m3272019706 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_UnaryNegation_m3272019706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	BigInteger_t956758543 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		BigInteger_t956758543 * L_0 = ___bi10;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_dataLength_2();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		BigInteger_t956758543 * L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t2770800703* L_3 = L_2->get_data_1();
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_t956758543 * L_7 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_7, /*hidden argument*/NULL);
		V_5 = L_7;
		goto IL_010c;
	}

IL_002a:
	{
		BigInteger_t956758543 * L_8 = ___bi10;
		BigInteger_t956758543 * L_9 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m497354907(L_9, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		V_6 = 0;
		goto IL_004f;
	}

IL_0036:
	{
		BigInteger_t956758543 * L_10 = V_0;
		NullCheck(L_10);
		UInt32U5BU5D_t2770800703* L_11 = L_10->get_data_1();
		int32_t L_12 = V_6;
		BigInteger_t956758543 * L_13 = ___bi10;
		NullCheck(L_13);
		UInt32U5BU5D_t2770800703* L_14 = L_13->get_data_1();
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((~L_17)));
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_19 = V_6;
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = (((int64_t)((int64_t)1)));
		V_3 = 0;
		goto IL_0089;
	}

IL_0062:
	{
		BigInteger_t956758543 * L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t2770800703* L_22 = L_21->get_data_1();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = (((int64_t)((uint64_t)L_25)));
		int64_t L_26 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)(((int64_t)((int64_t)1)))));
		BigInteger_t956758543 * L_27 = V_0;
		NullCheck(L_27);
		UInt32U5BU5D_t2770800703* L_28 = L_27->get_data_1();
		int32_t L_29 = V_3;
		int64_t L_30 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_30&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		int64_t L_31 = V_1;
		V_2 = ((int64_t)((int64_t)L_31>>(int32_t)((int32_t)32)));
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0089:
	{
		int64_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_34 = V_3;
		G_B13_0 = ((((int32_t)L_34) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
	}

IL_0094:
	{
		V_8 = (bool)G_B13_0;
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0062;
		}
	}
	{
		BigInteger_t956758543 * L_36 = ___bi10;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)69);
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		BigInteger_t956758543 * L_40 = V_0;
		NullCheck(L_40);
		UInt32U5BU5D_t2770800703* L_41 = L_40->get_data_1();
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)69);
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_9 = (bool)((((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)-2147483648LL)))))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_00cb;
		}
	}
	{
		ArithmeticException_t4283546778 * L_45 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_45, _stringLiteral3910125420, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, NULL, BigInteger_op_UnaryNegation_m3272019706_RuntimeMethod_var);
	}

IL_00cb:
	{
		BigInteger_t956758543 * L_46 = V_0;
		NullCheck(L_46);
		L_46->set_dataLength_2(((int32_t)70));
		goto IL_00e3;
	}

IL_00d5:
	{
		BigInteger_t956758543 * L_47 = V_0;
		BigInteger_t956758543 * L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_dataLength_2();
		NullCheck(L_48);
		L_48->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)));
	}

IL_00e3:
	{
		BigInteger_t956758543 * L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_dataLength_2();
		if ((((int32_t)L_51) <= ((int32_t)1)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_t956758543 * L_52 = V_0;
		NullCheck(L_52);
		UInt32U5BU5D_t2770800703* L_53 = L_52->get_data_1();
		BigInteger_t956758543 * L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_dataLength_2();
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1));
		uint32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		G_B21_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B21_0 = 0;
	}

IL_0101:
	{
		V_10 = (bool)G_B21_0;
		bool L_58 = V_10;
		if (L_58)
		{
			goto IL_00d5;
		}
	}
	{
		BigInteger_t956758543 * L_59 = V_0;
		V_5 = L_59;
		goto IL_010c;
	}

IL_010c:
	{
		BigInteger_t956758543 * L_60 = V_5;
		return L_60;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m4107706715 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		BigInteger_t956758543 * L_0 = ___bi10;
		BigInteger_t956758543 * L_1 = ___bi21;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_Equals_m3600662586 (BigInteger_t956758543 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_Equals_m3600662586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((BigInteger_t956758543 *)CastclassClass((RuntimeObject*)L_0, BigInteger_t956758543_il2cpp_TypeInfo_var));
		int32_t L_1 = __this->get_dataLength_2();
		BigInteger_t956758543 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_dataLength_2();
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_004a;
	}

IL_0025:
	{
		UInt32U5BU5D_t2770800703* L_5 = __this->get_data_1();
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		BigInteger_t956758543 * L_9 = V_0;
		NullCheck(L_9);
		UInt32U5BU5D_t2770800703* L_10 = L_9->get_data_1();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0045:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = __this->get_dataLength_2();
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0025;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_005d;
	}

IL_005d:
	{
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_m1015205030 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m2988481195 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_t956758543 * L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_t956758543 * L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t2770800703* L_6 = L_5->get_data_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_t956758543 * L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t2770800703* L_12 = L_11->get_data_1();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_t956758543 * L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t2770800703* L_17 = L_16->get_data_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_t956758543 * L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_dataLength_2();
		BigInteger_t956758543 * L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_t956758543 * L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_dataLength_2();
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_t956758543 * L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_dataLength_2();
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_t956758543 * L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t2770800703* L_34 = L_33->get_data_1();
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_t956758543 * L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t2770800703* L_39 = L_38->get_data_1();
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_t956758543 * L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t2770800703* L_47 = L_46->get_data_1();
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_t956758543 * L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t2770800703* L_52 = L_51->get_data_1();
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) <= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m1529345678 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_t956758543 * L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_t956758543 * L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t2770800703* L_6 = L_5->get_data_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_t956758543 * L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t2770800703* L_12 = L_11->get_data_1();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_t956758543 * L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t2770800703* L_17 = L_16->get_data_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_t956758543 * L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_dataLength_2();
		BigInteger_t956758543 * L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_t956758543 * L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_dataLength_2();
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_t956758543 * L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_dataLength_2();
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_t956758543 * L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t2770800703* L_34 = L_33->get_data_1();
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_t956758543 * L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t2770800703* L_39 = L_38->get_data_1();
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_t956758543 * L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t2770800703* L_47 = L_46->get_data_1();
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_t956758543 * L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t2770800703* L_52 = L_51->get_data_1();
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) >= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m1973220735 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_GreaterThanOrEqual_m1973220735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BigInteger_t956758543 * L_0 = ___bi10;
		BigInteger_t956758543 * L_1 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_2 = BigInteger_op_Equality_m4107706715(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		BigInteger_t956758543 * L_3 = ___bi10;
		BigInteger_t956758543 * L_4 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_5 = BigInteger_op_GreaterThan_m2988481195(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR void BigInteger_multiByteDivide_m635723330 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, BigInteger_t956758543 * ___outQuotient2, BigInteger_t956758543 * ___outRemainder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_multiByteDivide_m635723330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t2770800703* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t2770800703* V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	UInt32U5BU5D_t2770800703* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	bool V_20 = false;
	BigInteger_t956758543 * V_21 = NULL;
	BigInteger_t956758543 * V_22 = NULL;
	BigInteger_t956758543 * V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	int32_t V_33 = 0;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B42_0 = 0;
	{
		UInt32U5BU5D_t2770800703* L_0 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = ___bi10;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_dataLength_2();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int32_t L_3 = V_1;
		UInt32U5BU5D_t2770800703* L_4 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		V_3 = ((int32_t)-2147483648LL);
		BigInteger_t956758543 * L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t2770800703* L_6 = L_5->get_data_1();
		BigInteger_t956758543 * L_7 = ___bi21;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_dataLength_2();
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		V_5 = 0;
		V_6 = 0;
		goto IL_0044;
	}

IL_0038:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		uint32_t L_12 = V_3;
		V_3 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0044:
	{
		uint32_t L_13 = V_3;
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_14 = V_4;
		uint32_t L_15 = V_3;
		G_B5_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_14 = (bool)G_B5_0;
		bool L_16 = V_14;
		if (L_16)
		{
			goto IL_0038;
		}
	}
	{
		V_15 = 0;
		goto IL_006f;
	}

IL_005c:
	{
		UInt32U5BU5D_t2770800703* L_17 = V_2;
		int32_t L_18 = V_15;
		BigInteger_t956758543 * L_19 = ___bi10;
		NullCheck(L_19);
		UInt32U5BU5D_t2770800703* L_20 = L_19->get_data_1();
		int32_t L_21 = V_15;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_23);
		int32_t L_24 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_25 = V_15;
		BigInteger_t956758543 * L_26 = ___bi10;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_dataLength_2();
		V_16 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_16;
		if (L_28)
		{
			goto IL_005c;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_29 = V_2;
		int32_t L_30 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_shiftLeft_m952412684(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_31 = ___bi21;
		int32_t L_32 = V_5;
		BigInteger_t956758543 * L_33 = BigInteger_op_LeftShift_m2731198774(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		___bi21 = L_33;
		int32_t L_34 = V_1;
		BigInteger_t956758543 * L_35 = ___bi21;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_dataLength_2();
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_36));
		int32_t L_37 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		BigInteger_t956758543 * L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t2770800703* L_39 = L_38->get_data_1();
		BigInteger_t956758543 * L_40 = ___bi21;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_dataLength_2();
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1));
		uint32_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_9 = (((int64_t)((uint64_t)L_43)));
		BigInteger_t956758543 * L_44 = ___bi21;
		NullCheck(L_44);
		UInt32U5BU5D_t2770800703* L_45 = L_44->get_data_1();
		BigInteger_t956758543 * L_46 = ___bi21;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_dataLength_2();
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)2));
		uint32_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_10 = (((int64_t)((uint64_t)L_49)));
		BigInteger_t956758543 * L_50 = ___bi21;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_dataLength_2();
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		int32_t L_52 = V_11;
		UInt32U5BU5D_t2770800703* L_53 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)L_52);
		V_12 = L_53;
		goto IL_0215;
	}

IL_00dd:
	{
		UInt32U5BU5D_t2770800703* L_54 = V_2;
		int32_t L_55 = V_8;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		UInt32U5BU5D_t2770800703* L_58 = V_2;
		int32_t L_59 = V_8;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_57)))<<(int32_t)((int32_t)32))), (int64_t)(((int64_t)((uint64_t)L_61)))));
		uint64_t L_62 = V_17;
		uint64_t L_63 = V_9;
		V_18 = ((int64_t)((uint64_t)(int64_t)L_62/(uint64_t)(int64_t)L_63));
		uint64_t L_64 = V_17;
		uint64_t L_65 = V_9;
		V_19 = ((int64_t)((uint64_t)(int64_t)L_64%(uint64_t)(int64_t)L_65));
		V_20 = (bool)0;
		goto IL_0158;
	}

IL_0103:
	{
		V_20 = (bool)1;
		uint64_t L_66 = V_18;
		if ((((int64_t)L_66) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_012a;
		}
	}
	{
		uint64_t L_67 = V_18;
		uint64_t L_68 = V_10;
		uint64_t L_69 = V_19;
		UInt32U5BU5D_t2770800703* L_70 = V_2;
		int32_t L_71 = V_8;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)2));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		G_B14_0 = ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_67, (int64_t)L_68))) <= ((uint64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_69<<(int32_t)((int32_t)32))), (int64_t)(((int64_t)((uint64_t)L_73))))))))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B14_0 = 1;
	}

IL_012b:
	{
		V_24 = (bool)G_B14_0;
		bool L_74 = V_24;
		if (!L_74)
		{
			goto IL_0157;
		}
	}
	{
		uint64_t L_75 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_75, (int64_t)(((int64_t)((int64_t)1)))));
		uint64_t L_76 = V_19;
		uint64_t L_77 = V_9;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, (int64_t)L_77));
		uint64_t L_78 = V_19;
		V_25 = (bool)((!(((uint64_t)L_78) >= ((uint64_t)((int64_t)4294967296LL))))? 1 : 0);
		bool L_79 = V_25;
		if (!L_79)
		{
			goto IL_0156;
		}
	}
	{
		V_20 = (bool)0;
	}

IL_0156:
	{
	}

IL_0157:
	{
	}

IL_0158:
	{
		bool L_80 = V_20;
		V_26 = (bool)((((int32_t)L_80) == ((int32_t)0))? 1 : 0);
		bool L_81 = V_26;
		if (L_81)
		{
			goto IL_0103;
		}
	}
	{
		V_27 = 0;
		goto IL_017a;
	}

IL_0168:
	{
		UInt32U5BU5D_t2770800703* L_82 = V_12;
		int32_t L_83 = V_27;
		UInt32U5BU5D_t2770800703* L_84 = V_2;
		int32_t L_85 = V_8;
		int32_t L_86 = V_27;
		NullCheck(L_84);
		int32_t L_87 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)L_86));
		uint32_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (uint32_t)L_88);
		int32_t L_89 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_017a:
	{
		int32_t L_90 = V_27;
		int32_t L_91 = V_11;
		V_28 = (bool)((((int32_t)L_90) < ((int32_t)L_91))? 1 : 0);
		bool L_92 = V_28;
		if (L_92)
		{
			goto IL_0168;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_93 = V_12;
		BigInteger_t956758543 * L_94 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m3091364386(L_94, L_93, /*hidden argument*/NULL);
		V_21 = L_94;
		BigInteger_t956758543 * L_95 = ___bi21;
		uint64_t L_96 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_97 = BigInteger_op_Implicit_m1457317411(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_98 = BigInteger_op_Multiply_m664707877(NULL /*static, unused*/, L_95, L_97, /*hidden argument*/NULL);
		V_22 = L_98;
		goto IL_01b3;
	}

IL_01a0:
	{
		uint64_t L_99 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_99, (int64_t)(((int64_t)((int64_t)1)))));
		BigInteger_t956758543 * L_100 = V_22;
		BigInteger_t956758543 * L_101 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_102 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_100, L_101, /*hidden argument*/NULL);
		V_22 = L_102;
	}

IL_01b3:
	{
		BigInteger_t956758543 * L_103 = V_22;
		BigInteger_t956758543 * L_104 = V_21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_105 = BigInteger_op_GreaterThan_m2988481195(NULL /*static, unused*/, L_103, L_104, /*hidden argument*/NULL);
		V_29 = L_105;
		bool L_106 = V_29;
		if (L_106)
		{
			goto IL_01a0;
		}
	}
	{
		BigInteger_t956758543 * L_107 = V_21;
		BigInteger_t956758543 * L_108 = V_22;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_109 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_107, L_108, /*hidden argument*/NULL);
		V_23 = L_109;
		V_30 = 0;
		goto IL_01f0;
	}

IL_01d2:
	{
		UInt32U5BU5D_t2770800703* L_110 = V_2;
		int32_t L_111 = V_8;
		int32_t L_112 = V_30;
		BigInteger_t956758543 * L_113 = V_23;
		NullCheck(L_113);
		UInt32U5BU5D_t2770800703* L_114 = L_113->get_data_1();
		BigInteger_t956758543 * L_115 = ___bi21;
		NullCheck(L_115);
		int32_t L_116 = L_115->get_dataLength_2();
		int32_t L_117 = V_30;
		NullCheck(L_114);
		int32_t L_118 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)L_117));
		uint32_t L_119 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_111, (int32_t)L_112))), (uint32_t)L_119);
		int32_t L_120 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
	}

IL_01f0:
	{
		int32_t L_121 = V_30;
		int32_t L_122 = V_11;
		V_31 = (bool)((((int32_t)L_121) < ((int32_t)L_122))? 1 : 0);
		bool L_123 = V_31;
		if (L_123)
		{
			goto IL_01d2;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_124 = V_0;
		int32_t L_125 = V_6;
		int32_t L_126 = L_125;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		uint64_t L_127 = V_18;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_126), (uint32_t)(((int32_t)((uint32_t)L_127))));
		int32_t L_128 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_128, (int32_t)1));
		int32_t L_129 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_129, (int32_t)1));
	}

IL_0215:
	{
		int32_t L_130 = V_7;
		V_32 = (bool)((((int32_t)L_130) > ((int32_t)0))? 1 : 0);
		bool L_131 = V_32;
		if (L_131)
		{
			goto IL_00dd;
		}
	}
	{
		BigInteger_t956758543 * L_132 = ___outQuotient2;
		int32_t L_133 = V_6;
		NullCheck(L_132);
		L_132->set_dataLength_2(L_133);
		V_13 = 0;
		BigInteger_t956758543 * L_134 = ___outQuotient2;
		NullCheck(L_134);
		int32_t L_135 = L_134->get_dataLength_2();
		V_33 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)1));
		goto IL_0253;
	}

IL_023a:
	{
		BigInteger_t956758543 * L_136 = ___outQuotient2;
		NullCheck(L_136);
		UInt32U5BU5D_t2770800703* L_137 = L_136->get_data_1();
		int32_t L_138 = V_13;
		UInt32U5BU5D_t2770800703* L_139 = V_0;
		int32_t L_140 = V_33;
		NullCheck(L_139);
		int32_t L_141 = L_140;
		uint32_t L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(L_138), (uint32_t)L_142);
		int32_t L_143 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_143, (int32_t)1));
		int32_t L_144 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
	}

IL_0253:
	{
		int32_t L_145 = V_33;
		V_34 = (bool)((((int32_t)((((int32_t)L_145) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_146 = V_34;
		if (L_146)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_0273;
	}

IL_0263:
	{
		BigInteger_t956758543 * L_147 = ___outQuotient2;
		NullCheck(L_147);
		UInt32U5BU5D_t2770800703* L_148 = L_147->get_data_1();
		int32_t L_149 = V_13;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (uint32_t)0);
		int32_t L_150 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1));
	}

IL_0273:
	{
		int32_t L_151 = V_13;
		V_35 = (bool)((((int32_t)L_151) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_152 = V_35;
		if (L_152)
		{
			goto IL_0263;
		}
	}
	{
		goto IL_028f;
	}

IL_0281:
	{
		BigInteger_t956758543 * L_153 = ___outQuotient2;
		BigInteger_t956758543 * L_154 = L_153;
		NullCheck(L_154);
		int32_t L_155 = L_154->get_dataLength_2();
		NullCheck(L_154);
		L_154->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)1)));
	}

IL_028f:
	{
		BigInteger_t956758543 * L_156 = ___outQuotient2;
		NullCheck(L_156);
		int32_t L_157 = L_156->get_dataLength_2();
		if ((((int32_t)L_157) <= ((int32_t)1)))
		{
			goto IL_02ac;
		}
	}
	{
		BigInteger_t956758543 * L_158 = ___outQuotient2;
		NullCheck(L_158);
		UInt32U5BU5D_t2770800703* L_159 = L_158->get_data_1();
		BigInteger_t956758543 * L_160 = ___outQuotient2;
		NullCheck(L_160);
		int32_t L_161 = L_160->get_dataLength_2();
		NullCheck(L_159);
		int32_t L_162 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)1));
		uint32_t L_163 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		G_B42_0 = ((((int32_t)L_163) == ((int32_t)0))? 1 : 0);
		goto IL_02ad;
	}

IL_02ac:
	{
		G_B42_0 = 0;
	}

IL_02ad:
	{
		V_36 = (bool)G_B42_0;
		bool L_164 = V_36;
		if (L_164)
		{
			goto IL_0281;
		}
	}
	{
		BigInteger_t956758543 * L_165 = ___outQuotient2;
		NullCheck(L_165);
		int32_t L_166 = L_165->get_dataLength_2();
		V_37 = (bool)((((int32_t)L_166) == ((int32_t)0))? 1 : 0);
		bool L_167 = V_37;
		if (!L_167)
		{
			goto IL_02c9;
		}
	}
	{
		BigInteger_t956758543 * L_168 = ___outQuotient2;
		NullCheck(L_168);
		L_168->set_dataLength_2(1);
	}

IL_02c9:
	{
		BigInteger_t956758543 * L_169 = ___outRemainder3;
		UInt32U5BU5D_t2770800703* L_170 = V_2;
		int32_t L_171 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		int32_t L_172 = BigInteger_shiftRight_m1897315128(NULL /*static, unused*/, L_170, L_171, /*hidden argument*/NULL);
		NullCheck(L_169);
		L_169->set_dataLength_2(L_172);
		V_13 = 0;
		goto IL_02ef;
	}

IL_02dc:
	{
		BigInteger_t956758543 * L_173 = ___outRemainder3;
		NullCheck(L_173);
		UInt32U5BU5D_t2770800703* L_174 = L_173->get_data_1();
		int32_t L_175 = V_13;
		UInt32U5BU5D_t2770800703* L_176 = V_2;
		int32_t L_177 = V_13;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		uint32_t L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(L_175), (uint32_t)L_179);
		int32_t L_180 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
	}

IL_02ef:
	{
		int32_t L_181 = V_13;
		BigInteger_t956758543 * L_182 = ___outRemainder3;
		NullCheck(L_182);
		int32_t L_183 = L_182->get_dataLength_2();
		V_38 = (bool)((((int32_t)L_181) < ((int32_t)L_183))? 1 : 0);
		bool L_184 = V_38;
		if (L_184)
		{
			goto IL_02dc;
		}
	}
	{
		goto IL_0311;
	}

IL_0301:
	{
		BigInteger_t956758543 * L_185 = ___outRemainder3;
		NullCheck(L_185);
		UInt32U5BU5D_t2770800703* L_186 = L_185->get_data_1();
		int32_t L_187 = V_13;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(L_187), (uint32_t)0);
		int32_t L_188 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)1));
	}

IL_0311:
	{
		int32_t L_189 = V_13;
		V_39 = (bool)((((int32_t)L_189) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_190 = V_39;
		if (L_190)
		{
			goto IL_0301;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR void BigInteger_singleByteDivide_m972382485 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, BigInteger_t956758543 * ___outQuotient2, BigInteger_t956758543 * ___outRemainder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_singleByteDivide_m972382485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t2770800703* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	{
		UInt32U5BU5D_t2770800703* L_0 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		V_0 = L_0;
		V_1 = 0;
		V_6 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		BigInteger_t956758543 * L_1 = ___outRemainder3;
		NullCheck(L_1);
		UInt32U5BU5D_t2770800703* L_2 = L_1->get_data_1();
		int32_t L_3 = V_6;
		BigInteger_t956758543 * L_4 = ___bi10;
		NullCheck(L_4);
		UInt32U5BU5D_t2770800703* L_5 = L_4->get_data_1();
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_8);
		int32_t L_9 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_6;
		V_7 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_11 = V_7;
		if (L_11)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_t956758543 * L_12 = ___outRemainder3;
		BigInteger_t956758543 * L_13 = ___bi10;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_dataLength_2();
		NullCheck(L_12);
		L_12->set_dataLength_2(L_14);
		goto IL_0050;
	}

IL_0042:
	{
		BigInteger_t956758543 * L_15 = ___outRemainder3;
		BigInteger_t956758543 * L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_dataLength_2();
		NullCheck(L_16);
		L_16->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
	}

IL_0050:
	{
		BigInteger_t956758543 * L_18 = ___outRemainder3;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_dataLength_2();
		if ((((int32_t)L_19) <= ((int32_t)1)))
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_t956758543 * L_20 = ___outRemainder3;
		NullCheck(L_20);
		UInt32U5BU5D_t2770800703* L_21 = L_20->get_data_1();
		BigInteger_t956758543 * L_22 = ___outRemainder3;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_dataLength_2();
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
		uint32_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		G_B8_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B8_0 = 0;
	}

IL_006e:
	{
		V_8 = (bool)G_B8_0;
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_0042;
		}
	}
	{
		BigInteger_t956758543 * L_27 = ___bi21;
		NullCheck(L_27);
		UInt32U5BU5D_t2770800703* L_28 = L_27->get_data_1();
		NullCheck(L_28);
		int32_t L_29 = 0;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_2 = (((int64_t)((uint64_t)L_30)));
		BigInteger_t956758543 * L_31 = ___outRemainder3;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_dataLength_2();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
		BigInteger_t956758543 * L_33 = ___outRemainder3;
		NullCheck(L_33);
		UInt32U5BU5D_t2770800703* L_34 = L_33->get_data_1();
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_4 = (((int64_t)((uint64_t)L_37)));
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_2;
		V_9 = (bool)((((int32_t)((!(((uint64_t)L_38) >= ((uint64_t)L_39)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00bf;
		}
	}
	{
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_2;
		V_10 = ((int64_t)((uint64_t)(int64_t)L_41/(uint64_t)(int64_t)L_42));
		UInt32U5BU5D_t2770800703* L_43 = V_0;
		int32_t L_44 = V_1;
		int32_t L_45 = L_44;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		uint64_t L_46 = V_10;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint32_t)(((int32_t)((uint32_t)L_46))));
		BigInteger_t956758543 * L_47 = ___outRemainder3;
		NullCheck(L_47);
		UInt32U5BU5D_t2770800703* L_48 = L_47->get_data_1();
		int32_t L_49 = V_3;
		uint64_t L_50 = V_4;
		uint64_t L_51 = V_2;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)(((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_50%(uint64_t)(int64_t)L_51))))));
	}

IL_00bf:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1));
		goto IL_010d;
	}

IL_00c5:
	{
		BigInteger_t956758543 * L_53 = ___outRemainder3;
		NullCheck(L_53);
		UInt32U5BU5D_t2770800703* L_54 = L_53->get_data_1();
		int32_t L_55 = V_3;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		BigInteger_t956758543 * L_58 = ___outRemainder3;
		NullCheck(L_58);
		UInt32U5BU5D_t2770800703* L_59 = L_58->get_data_1();
		int32_t L_60 = V_3;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_57)))<<(int32_t)((int32_t)32))), (int64_t)(((int64_t)((uint64_t)L_62)))));
		uint64_t L_63 = V_4;
		uint64_t L_64 = V_2;
		V_11 = ((int64_t)((uint64_t)(int64_t)L_63/(uint64_t)(int64_t)L_64));
		UInt32U5BU5D_t2770800703* L_65 = V_0;
		int32_t L_66 = V_1;
		int32_t L_67 = L_66;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		uint64_t L_68 = V_11;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint32_t)(((int32_t)((uint32_t)L_68))));
		BigInteger_t956758543 * L_69 = ___outRemainder3;
		NullCheck(L_69);
		UInt32U5BU5D_t2770800703* L_70 = L_69->get_data_1();
		int32_t L_71 = V_3;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1))), (uint32_t)0);
		BigInteger_t956758543 * L_72 = ___outRemainder3;
		NullCheck(L_72);
		UInt32U5BU5D_t2770800703* L_73 = L_72->get_data_1();
		int32_t L_74 = V_3;
		int32_t L_75 = L_74;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1));
		uint64_t L_76 = V_4;
		uint64_t L_77 = V_2;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (uint32_t)(((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_76%(uint64_t)(int64_t)L_77))))));
	}

IL_010d:
	{
		int32_t L_78 = V_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_78) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_12;
		if (L_79)
		{
			goto IL_00c5;
		}
	}
	{
		BigInteger_t956758543 * L_80 = ___outQuotient2;
		int32_t L_81 = V_1;
		NullCheck(L_80);
		L_80->set_dataLength_2(L_81);
		V_5 = 0;
		BigInteger_t956758543 * L_82 = ___outQuotient2;
		NullCheck(L_82);
		int32_t L_83 = L_82->get_dataLength_2();
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)1));
		goto IL_0149;
	}

IL_0130:
	{
		BigInteger_t956758543 * L_84 = ___outQuotient2;
		NullCheck(L_84);
		UInt32U5BU5D_t2770800703* L_85 = L_84->get_data_1();
		int32_t L_86 = V_5;
		UInt32U5BU5D_t2770800703* L_87 = V_0;
		int32_t L_88 = V_13;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (uint32_t)L_90);
		int32_t L_91 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)1));
		int32_t L_92 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
	}

IL_0149:
	{
		int32_t L_93 = V_13;
		V_14 = (bool)((((int32_t)((((int32_t)L_93) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_14;
		if (L_94)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_0169;
	}

IL_0159:
	{
		BigInteger_t956758543 * L_95 = ___outQuotient2;
		NullCheck(L_95);
		UInt32U5BU5D_t2770800703* L_96 = L_95->get_data_1();
		int32_t L_97 = V_5;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (uint32_t)0);
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
	}

IL_0169:
	{
		int32_t L_99 = V_5;
		V_15 = (bool)((((int32_t)L_99) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_100 = V_15;
		if (L_100)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_0185;
	}

IL_0177:
	{
		BigInteger_t956758543 * L_101 = ___outQuotient2;
		BigInteger_t956758543 * L_102 = L_101;
		NullCheck(L_102);
		int32_t L_103 = L_102->get_dataLength_2();
		NullCheck(L_102);
		L_102->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)1)));
	}

IL_0185:
	{
		BigInteger_t956758543 * L_104 = ___outQuotient2;
		NullCheck(L_104);
		int32_t L_105 = L_104->get_dataLength_2();
		if ((((int32_t)L_105) <= ((int32_t)1)))
		{
			goto IL_01a2;
		}
	}
	{
		BigInteger_t956758543 * L_106 = ___outQuotient2;
		NullCheck(L_106);
		UInt32U5BU5D_t2770800703* L_107 = L_106->get_data_1();
		BigInteger_t956758543 * L_108 = ___outQuotient2;
		NullCheck(L_108);
		int32_t L_109 = L_108->get_dataLength_2();
		NullCheck(L_107);
		int32_t L_110 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_109, (int32_t)1));
		uint32_t L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		G_B25_0 = ((((int32_t)L_111) == ((int32_t)0))? 1 : 0);
		goto IL_01a3;
	}

IL_01a2:
	{
		G_B25_0 = 0;
	}

IL_01a3:
	{
		V_16 = (bool)G_B25_0;
		bool L_112 = V_16;
		if (L_112)
		{
			goto IL_0177;
		}
	}
	{
		BigInteger_t956758543 * L_113 = ___outQuotient2;
		NullCheck(L_113);
		int32_t L_114 = L_113->get_dataLength_2();
		V_17 = (bool)((((int32_t)L_114) == ((int32_t)0))? 1 : 0);
		bool L_115 = V_17;
		if (!L_115)
		{
			goto IL_01bf;
		}
	}
	{
		BigInteger_t956758543 * L_116 = ___outQuotient2;
		NullCheck(L_116);
		L_116->set_dataLength_2(1);
	}

IL_01bf:
	{
		goto IL_01cf;
	}

IL_01c1:
	{
		BigInteger_t956758543 * L_117 = ___outRemainder3;
		BigInteger_t956758543 * L_118 = L_117;
		NullCheck(L_118);
		int32_t L_119 = L_118->get_dataLength_2();
		NullCheck(L_118);
		L_118->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_119, (int32_t)1)));
	}

IL_01cf:
	{
		BigInteger_t956758543 * L_120 = ___outRemainder3;
		NullCheck(L_120);
		int32_t L_121 = L_120->get_dataLength_2();
		if ((((int32_t)L_121) <= ((int32_t)1)))
		{
			goto IL_01ec;
		}
	}
	{
		BigInteger_t956758543 * L_122 = ___outRemainder3;
		NullCheck(L_122);
		UInt32U5BU5D_t2770800703* L_123 = L_122->get_data_1();
		BigInteger_t956758543 * L_124 = ___outRemainder3;
		NullCheck(L_124);
		int32_t L_125 = L_124->get_dataLength_2();
		NullCheck(L_123);
		int32_t L_126 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_125, (int32_t)1));
		uint32_t L_127 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		G_B33_0 = ((((int32_t)L_127) == ((int32_t)0))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B33_0 = 0;
	}

IL_01ed:
	{
		V_18 = (bool)G_B33_0;
		bool L_128 = V_18;
		if (L_128)
		{
			goto IL_01c1;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Division_m3347195961 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Division_m3347195961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	BigInteger_t956758543 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		V_4 = (bool)0;
		BigInteger_t956758543 * L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t2770800703* L_3 = L_2->get_data_1();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		BigInteger_t956758543 * L_8 = ___bi10;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_9 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		___bi10 = L_9;
		V_4 = (bool)1;
	}

IL_0039:
	{
		BigInteger_t956758543 * L_10 = ___bi21;
		NullCheck(L_10);
		UInt32U5BU5D_t2770800703* L_11 = L_10->get_data_1();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		BigInteger_t956758543 * L_16 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_17 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		___bi21 = L_17;
		V_3 = (bool)1;
	}

IL_005c:
	{
		BigInteger_t956758543 * L_18 = ___bi10;
		BigInteger_t956758543 * L_19 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_20 = BigInteger_op_LessThan_m1529345678(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		BigInteger_t956758543 * L_22 = V_0;
		V_8 = L_22;
		goto IL_00b2;
	}

IL_006f:
	{
		BigInteger_t956758543 * L_23 = ___bi21;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_dataLength_2();
		V_9 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_t956758543 * L_26 = ___bi10;
		BigInteger_t956758543 * L_27 = ___bi21;
		BigInteger_t956758543 * L_28 = V_0;
		BigInteger_t956758543 * L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m972382485(NULL /*static, unused*/, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_008b:
	{
		BigInteger_t956758543 * L_30 = ___bi10;
		BigInteger_t956758543 * L_31 = ___bi21;
		BigInteger_t956758543 * L_32 = V_0;
		BigInteger_t956758543 * L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m635723330(NULL /*static, unused*/, L_30, L_31, L_32, L_33, /*hidden argument*/NULL);
	}

IL_0095:
	{
		bool L_34 = V_4;
		bool L_35 = V_3;
		V_10 = (bool)((((int32_t)((((int32_t)L_34) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00ad;
		}
	}
	{
		BigInteger_t956758543 * L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_38 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		V_8 = L_38;
		goto IL_00b2;
	}

IL_00ad:
	{
		BigInteger_t956758543 * L_39 = V_0;
		V_8 = L_39;
		goto IL_00b2;
	}

IL_00b2:
	{
		BigInteger_t956758543 * L_40 = V_8;
		return L_40;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_op_Modulus_m2469490318 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Modulus_m2469490318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	BigInteger_t956758543 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = ___bi10;
		BigInteger_t956758543 * L_2 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m497354907(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		BigInteger_t956758543 * L_3 = ___bi10;
		NullCheck(L_3);
		UInt32U5BU5D_t2770800703* L_4 = L_3->get_data_1();
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		BigInteger_t956758543 * L_9 = ___bi10;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_10 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		___bi10 = L_10;
		V_3 = (bool)1;
	}

IL_0036:
	{
		BigInteger_t956758543 * L_11 = ___bi21;
		NullCheck(L_11);
		UInt32U5BU5D_t2770800703* L_12 = L_11->get_data_1();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		BigInteger_t956758543 * L_17 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_18 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		___bi21 = L_18;
	}

IL_0055:
	{
		BigInteger_t956758543 * L_19 = ___bi10;
		BigInteger_t956758543 * L_20 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_21 = BigInteger_op_LessThan_m1529345678(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		BigInteger_t956758543 * L_23 = V_1;
		V_7 = L_23;
		goto IL_00a4;
	}

IL_0068:
	{
		BigInteger_t956758543 * L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0084;
		}
	}
	{
		BigInteger_t956758543 * L_27 = ___bi10;
		BigInteger_t956758543 * L_28 = ___bi21;
		BigInteger_t956758543 * L_29 = V_0;
		BigInteger_t956758543 * L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m972382485(NULL /*static, unused*/, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_0084:
	{
		BigInteger_t956758543 * L_31 = ___bi10;
		BigInteger_t956758543 * L_32 = ___bi21;
		BigInteger_t956758543 * L_33 = V_0;
		BigInteger_t956758543 * L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m635723330(NULL /*static, unused*/, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
	}

IL_008e:
	{
		bool L_35 = V_3;
		V_9 = L_35;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_009f;
		}
	}
	{
		BigInteger_t956758543 * L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_38 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		goto IL_00a4;
	}

IL_009f:
	{
		BigInteger_t956758543 * L_39 = V_1;
		V_7 = L_39;
		goto IL_00a4;
	}

IL_00a4:
	{
		BigInteger_t956758543 * L_40 = V_7;
		return L_40;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m4163898541 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = BigInteger_ToString_m2781201991(__this, ((int32_t)10), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m2781201991 (BigInteger_t956758543 * __this, int32_t ___radix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_ToString_m2781201991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	BigInteger_t956758543 * V_2 = NULL;
	bool V_3 = false;
	BigInteger_t956758543 * V_4 = NULL;
	BigInteger_t956758543 * V_5 = NULL;
	BigInteger_t956758543 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Il2CppChar V_11 = 0x0;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0 = ___radix0;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___radix0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)((int32_t)36)))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		V_7 = (bool)G_B3_0;
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, _stringLiteral487777839, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, BigInteger_ToString_m2781201991_RuntimeMethod_var);
	}

IL_001e:
	{
		V_0 = _stringLiteral215727883;
		V_1 = _stringLiteral757602046;
		V_2 = __this;
		V_3 = (bool)0;
		BigInteger_t956758543 * L_4 = V_2;
		NullCheck(L_4);
		UInt32U5BU5D_t2770800703* L_5 = L_4->get_data_1();
		NullCheck(L_5);
		int32_t L_6 = ((int32_t)69);
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		V_3 = (bool)1;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		BigInteger_t956758543 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_10 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0059;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0054;
		throw e;
	}

CATCH_0054:
	{ // begin catch(System.Exception)
		goto IL_0059;
	} // end catch (depth: 1)

IL_0059:
	{
	}

IL_005a:
	{
		BigInteger_t956758543 * L_11 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_11, /*hidden argument*/NULL);
		V_4 = L_11;
		BigInteger_t956758543 * L_12 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_12, /*hidden argument*/NULL);
		V_5 = L_12;
		int32_t L_13 = ___radix0;
		BigInteger_t956758543 * L_14 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_14, (((int64_t)((int64_t)L_13))), /*hidden argument*/NULL);
		V_6 = L_14;
		BigInteger_t956758543 * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_dataLength_2();
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		BigInteger_t956758543 * L_17 = V_2;
		NullCheck(L_17);
		UInt32U5BU5D_t2770800703* L_18 = L_17->get_data_1();
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B13_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_9 = (bool)G_B13_0;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		V_1 = _stringLiteral3452614544;
		goto IL_013a;
	}

IL_0099:
	{
		goto IL_00fa;
	}

IL_009c:
	{
		BigInteger_t956758543 * L_22 = V_2;
		BigInteger_t956758543 * L_23 = V_6;
		BigInteger_t956758543 * L_24 = V_4;
		BigInteger_t956758543 * L_25 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m972382485(NULL /*static, unused*/, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_26 = V_5;
		NullCheck(L_26);
		UInt32U5BU5D_t2770800703* L_27 = L_26->get_data_1();
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_10 = (bool)((!(((uint32_t)L_29) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00d4;
		}
	}
	{
		BigInteger_t956758543 * L_31 = V_5;
		NullCheck(L_31);
		UInt32U5BU5D_t2770800703* L_32 = L_31->get_data_1();
		NullCheck(L_32);
		int32_t L_33 = 0;
		uint32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		uint32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = V_1;
		String_t* L_38 = String_Concat_m904156431(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		V_1 = L_38;
		goto IL_00f6;
	}

IL_00d4:
	{
		String_t* L_39 = V_0;
		BigInteger_t956758543 * L_40 = V_5;
		NullCheck(L_40);
		UInt32U5BU5D_t2770800703* L_41 = L_40->get_data_1();
		NullCheck(L_41);
		int32_t L_42 = 0;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		Il2CppChar L_44 = String_get_Chars_m2986988803(L_39, ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		V_11 = L_44;
		String_t* L_45 = Char_ToString_m3588025615((Il2CppChar*)(&V_11), /*hidden argument*/NULL);
		String_t* L_46 = V_1;
		String_t* L_47 = String_Concat_m3937257545(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		V_1 = L_47;
	}

IL_00f6:
	{
		BigInteger_t956758543 * L_48 = V_4;
		V_2 = L_48;
	}

IL_00fa:
	{
		BigInteger_t956758543 * L_49 = V_2;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_dataLength_2();
		if ((((int32_t)L_50) > ((int32_t)1)))
		{
			goto IL_011c;
		}
	}
	{
		BigInteger_t956758543 * L_51 = V_2;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_dataLength_2();
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_0119;
		}
	}
	{
		BigInteger_t956758543 * L_53 = V_2;
		NullCheck(L_53);
		UInt32U5BU5D_t2770800703* L_54 = L_53->get_data_1();
		NullCheck(L_54);
		int32_t L_55 = 0;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		G_B24_0 = ((!(((uint32_t)L_56) <= ((uint32_t)0)))? 1 : 0);
		goto IL_011a;
	}

IL_0119:
	{
		G_B24_0 = 0;
	}

IL_011a:
	{
		G_B26_0 = G_B24_0;
		goto IL_011d;
	}

IL_011c:
	{
		G_B26_0 = 1;
	}

IL_011d:
	{
		V_12 = (bool)G_B26_0;
		bool L_57 = V_12;
		if (L_57)
		{
			goto IL_009c;
		}
	}
	{
		bool L_58 = V_3;
		V_13 = L_58;
		bool L_59 = V_13;
		if (!L_59)
		{
			goto IL_0139;
		}
	}
	{
		String_t* L_60 = V_1;
		String_t* L_61 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614531, L_60, /*hidden argument*/NULL);
		V_1 = L_61;
	}

IL_0139:
	{
	}

IL_013a:
	{
		String_t* L_62 = V_1;
		V_14 = L_62;
		goto IL_013f;
	}

IL_013f:
	{
		String_t* L_63 = V_14;
		return L_63;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_ModPow_m1818331774 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___exp0, BigInteger_t956758543 * ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_ModPow_m1818331774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	bool V_2 = false;
	BigInteger_t956758543 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	BigInteger_t956758543 * V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B30_0 = 0;
	{
		BigInteger_t956758543 * L_0 = ___exp0;
		NullCheck(L_0);
		UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
		NullCheck(L_1);
		int32_t L_2 = ((int32_t)69);
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		ArithmeticException_t4283546778 * L_5 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_5, _stringLiteral1790208040, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, BigInteger_ModPow_m1818331774_RuntimeMethod_var);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_6 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_0 = L_6;
		V_2 = (bool)0;
		UInt32U5BU5D_t2770800703* L_7 = __this->get_data_1();
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)69);
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_11 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_12 = ___n1;
		BigInteger_t956758543 * L_13 = BigInteger_op_Modulus_m2469490318(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0058:
	{
		BigInteger_t956758543 * L_14 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_15 = BigInteger_op_Modulus_m2469490318(NULL /*static, unused*/, __this, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
	}

IL_0060:
	{
		BigInteger_t956758543 * L_16 = ___n1;
		NullCheck(L_16);
		UInt32U5BU5D_t2770800703* L_17 = L_16->get_data_1();
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)69);
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_9 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0080;
		}
	}
	{
		BigInteger_t956758543 * L_21 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_22 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		___n1 = L_22;
	}

IL_0080:
	{
		BigInteger_t956758543 * L_23 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_23, /*hidden argument*/NULL);
		V_3 = L_23;
		BigInteger_t956758543 * L_24 = ___n1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		V_4 = ((int32_t)((int32_t)L_25<<(int32_t)1));
		BigInteger_t956758543 * L_26 = V_3;
		NullCheck(L_26);
		UInt32U5BU5D_t2770800703* L_27 = L_26->get_data_1();
		int32_t L_28 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)1);
		BigInteger_t956758543 * L_29 = V_3;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		L_29->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		BigInteger_t956758543 * L_31 = V_3;
		BigInteger_t956758543 * L_32 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_33 = BigInteger_op_Division_m3347195961(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		BigInteger_t956758543 * L_34 = ___exp0;
		NullCheck(L_34);
		int32_t L_35 = BigInteger_bitCount_m3576967399(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		V_6 = 0;
		V_10 = 0;
		goto IL_017e;
	}

IL_00bf:
	{
		V_11 = 1;
		V_12 = 0;
		goto IL_0168;
	}

IL_00cb:
	{
		BigInteger_t956758543 * L_36 = ___exp0;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		int32_t L_38 = V_10;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		uint32_t L_41 = V_11;
		V_13 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_40&(int32_t)L_41))) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_00f1;
		}
	}
	{
		BigInteger_t956758543 * L_43 = V_0;
		BigInteger_t956758543 * L_44 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_45 = BigInteger_op_Multiply_m664707877(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_46 = ___n1;
		BigInteger_t956758543 * L_47 = V_3;
		BigInteger_t956758543 * L_48 = BigInteger_BarrettReduction_m2302199077(__this, L_45, L_46, L_47, /*hidden argument*/NULL);
		V_0 = L_48;
	}

IL_00f1:
	{
		uint32_t L_49 = V_11;
		V_11 = ((int32_t)((int32_t)L_49<<(int32_t)1));
		BigInteger_t956758543 * L_50 = V_1;
		BigInteger_t956758543 * L_51 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_52 = BigInteger_op_Multiply_m664707877(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_53 = ___n1;
		BigInteger_t956758543 * L_54 = V_3;
		BigInteger_t956758543 * L_55 = BigInteger_BarrettReduction_m2302199077(__this, L_52, L_53, L_54, /*hidden argument*/NULL);
		V_1 = L_55;
		BigInteger_t956758543 * L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_dataLength_2();
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_t956758543 * L_58 = V_1;
		NullCheck(L_58);
		UInt32U5BU5D_t2770800703* L_59 = L_58->get_data_1();
		NullCheck(L_59);
		int32_t L_60 = 0;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		G_B14_0 = ((((int32_t)L_61) == ((int32_t)1))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B14_0 = 0;
	}

IL_011e:
	{
		V_14 = (bool)G_B14_0;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_014d;
		}
	}
	{
		bool L_63 = V_2;
		if (!L_63)
		{
			goto IL_0137;
		}
	}
	{
		BigInteger_t956758543 * L_64 = ___exp0;
		NullCheck(L_64);
		UInt32U5BU5D_t2770800703* L_65 = L_64->get_data_1();
		NullCheck(L_65);
		int32_t L_66 = 0;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((!(((uint32_t)((int32_t)((int32_t)L_67&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0138;
	}

IL_0137:
	{
		G_B18_0 = 0;
	}

IL_0138:
	{
		V_15 = (bool)G_B18_0;
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_0148;
		}
	}
	{
		BigInteger_t956758543 * L_69 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_70 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		V_16 = L_70;
		goto IL_01b9;
	}

IL_0148:
	{
		BigInteger_t956758543 * L_71 = V_0;
		V_16 = L_71;
		goto IL_01b9;
	}

IL_014d:
	{
		int32_t L_72 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		int32_t L_73 = V_6;
		int32_t L_74 = V_5;
		V_17 = (bool)((((int32_t)L_73) == ((int32_t)L_74))? 1 : 0);
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0177;
	}

IL_0161:
	{
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0168:
	{
		int32_t L_77 = V_12;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_78 = V_18;
		if (L_78)
		{
			goto IL_00cb;
		}
	}

IL_0177:
	{
		int32_t L_79 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_017e:
	{
		int32_t L_80 = V_10;
		BigInteger_t956758543 * L_81 = ___exp0;
		NullCheck(L_81);
		int32_t L_82 = L_81->get_dataLength_2();
		V_19 = (bool)((((int32_t)L_80) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_19;
		if (L_83)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_84 = V_2;
		if (!L_84)
		{
			goto IL_01a3;
		}
	}
	{
		BigInteger_t956758543 * L_85 = ___exp0;
		NullCheck(L_85);
		UInt32U5BU5D_t2770800703* L_86 = L_85->get_data_1();
		NullCheck(L_86);
		int32_t L_87 = 0;
		uint32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		G_B30_0 = ((!(((uint32_t)((int32_t)((int32_t)L_88&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B30_0 = 0;
	}

IL_01a4:
	{
		V_20 = (bool)G_B30_0;
		bool L_89 = V_20;
		if (!L_89)
		{
			goto IL_01b4;
		}
	}
	{
		BigInteger_t956758543 * L_90 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_91 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_90, /*hidden argument*/NULL);
		V_16 = L_91;
		goto IL_01b9;
	}

IL_01b4:
	{
		BigInteger_t956758543 * L_92 = V_0;
		V_16 = L_92;
		goto IL_01b9;
	}

IL_01b9:
	{
		BigInteger_t956758543 * L_93 = V_16;
		return L_93;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_BarrettReduction_m2302199077 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___x0, BigInteger_t956758543 * ___n1, BigInteger_t956758543 * ___constant2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_BarrettReduction_m2302199077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BigInteger_t956758543 * V_3 = NULL;
	BigInteger_t956758543 * V_4 = NULL;
	BigInteger_t956758543 * V_5 = NULL;
	BigInteger_t956758543 * V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_t956758543 * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	uint64_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	BigInteger_t956758543 * V_30 = NULL;
	bool V_31 = false;
	BigInteger_t956758543 * V_32 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B35_0 = 0;
	{
		BigInteger_t956758543 * L_0 = ___n1;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_dataLength_2();
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int32_t L_3 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		BigInteger_t956758543 * L_4 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_4, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_2;
		V_9 = L_5;
		V_10 = 0;
		goto IL_003c;
	}

IL_001e:
	{
		BigInteger_t956758543 * L_6 = V_3;
		NullCheck(L_6);
		UInt32U5BU5D_t2770800703* L_7 = L_6->get_data_1();
		int32_t L_8 = V_10;
		BigInteger_t956758543 * L_9 = ___x0;
		NullCheck(L_9);
		UInt32U5BU5D_t2770800703* L_10 = L_9->get_data_1();
		int32_t L_11 = V_9;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_13);
		int32_t L_14 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_16 = V_9;
		BigInteger_t956758543 * L_17 = ___x0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_dataLength_2();
		V_11 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_11;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		BigInteger_t956758543 * L_20 = V_3;
		BigInteger_t956758543 * L_21 = ___x0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_dataLength_2();
		int32_t L_23 = V_2;
		NullCheck(L_20);
		L_20->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)));
		BigInteger_t956758543 * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		V_12 = (bool)((((int32_t)((((int32_t)L_25) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_0073;
		}
	}
	{
		BigInteger_t956758543 * L_27 = V_3;
		NullCheck(L_27);
		L_27->set_dataLength_2(1);
	}

IL_0073:
	{
		BigInteger_t956758543 * L_28 = V_3;
		BigInteger_t956758543 * L_29 = ___constant2;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_30 = BigInteger_op_Multiply_m664707877(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		BigInteger_t956758543 * L_31 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_31, /*hidden argument*/NULL);
		V_5 = L_31;
		int32_t L_32 = V_1;
		V_13 = L_32;
		V_14 = 0;
		goto IL_00ab;
	}

IL_008b:
	{
		BigInteger_t956758543 * L_33 = V_5;
		NullCheck(L_33);
		UInt32U5BU5D_t2770800703* L_34 = L_33->get_data_1();
		int32_t L_35 = V_14;
		BigInteger_t956758543 * L_36 = V_4;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		int32_t L_38 = V_13;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint32_t)L_40);
		int32_t L_41 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		int32_t L_42 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00ab:
	{
		int32_t L_43 = V_13;
		BigInteger_t956758543 * L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_dataLength_2();
		V_15 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_15;
		if (L_46)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_t956758543 * L_47 = V_5;
		BigInteger_t956758543 * L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_dataLength_2();
		int32_t L_50 = V_1;
		NullCheck(L_47);
		L_47->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50)));
		BigInteger_t956758543 * L_51 = V_5;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_dataLength_2();
		V_16 = (bool)((((int32_t)((((int32_t)L_52) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_16;
		if (!L_53)
		{
			goto IL_00e7;
		}
	}
	{
		BigInteger_t956758543 * L_54 = V_5;
		NullCheck(L_54);
		L_54->set_dataLength_2(1);
	}

IL_00e7:
	{
		BigInteger_t956758543 * L_55 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_55, /*hidden argument*/NULL);
		V_6 = L_55;
		BigInteger_t956758543 * L_56 = ___x0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_dataLength_2();
		int32_t L_58 = V_1;
		if ((((int32_t)L_57) > ((int32_t)L_58)))
		{
			goto IL_00ff;
		}
	}
	{
		BigInteger_t956758543 * L_59 = ___x0;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_dataLength_2();
		G_B13_0 = L_60;
		goto IL_0100;
	}

IL_00ff:
	{
		int32_t L_61 = V_1;
		G_B13_0 = L_61;
	}

IL_0100:
	{
		V_7 = G_B13_0;
		V_17 = 0;
		goto IL_0120;
	}

IL_0107:
	{
		BigInteger_t956758543 * L_62 = V_6;
		NullCheck(L_62);
		UInt32U5BU5D_t2770800703* L_63 = L_62->get_data_1();
		int32_t L_64 = V_17;
		BigInteger_t956758543 * L_65 = ___x0;
		NullCheck(L_65);
		UInt32U5BU5D_t2770800703* L_66 = L_65->get_data_1();
		int32_t L_67 = V_17;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_69);
		int32_t L_70 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0120:
	{
		int32_t L_71 = V_17;
		int32_t L_72 = V_7;
		V_18 = (bool)((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_18;
		if (L_73)
		{
			goto IL_0107;
		}
	}
	{
		BigInteger_t956758543 * L_74 = V_6;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		L_74->set_dataLength_2(L_75);
		BigInteger_t956758543 * L_76 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_76, /*hidden argument*/NULL);
		V_8 = L_76;
		V_19 = 0;
		goto IL_01ed;
	}

IL_0144:
	{
		BigInteger_t956758543 * L_77 = V_5;
		NullCheck(L_77);
		UInt32U5BU5D_t2770800703* L_78 = L_77->get_data_1();
		int32_t L_79 = V_19;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_22 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_22;
		if (!L_82)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01e7;
	}

IL_015d:
	{
		V_20 = (((int64_t)((int64_t)0)));
		int32_t L_83 = V_19;
		V_21 = L_83;
		V_23 = 0;
		goto IL_01b6;
	}

IL_016a:
	{
		BigInteger_t956758543 * L_84 = V_5;
		NullCheck(L_84);
		UInt32U5BU5D_t2770800703* L_85 = L_84->get_data_1();
		int32_t L_86 = V_19;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		BigInteger_t956758543 * L_89 = ___n1;
		NullCheck(L_89);
		UInt32U5BU5D_t2770800703* L_90 = L_89->get_data_1();
		int32_t L_91 = V_23;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		BigInteger_t956758543 * L_94 = V_8;
		NullCheck(L_94);
		UInt32U5BU5D_t2770800703* L_95 = L_94->get_data_1();
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint64_t L_99 = V_20;
		V_24 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((uint64_t)L_88))), (int64_t)(((int64_t)((uint64_t)L_93))))), (int64_t)(((int64_t)((uint64_t)L_98))))), (int64_t)L_99));
		BigInteger_t956758543 * L_100 = V_8;
		NullCheck(L_100);
		UInt32U5BU5D_t2770800703* L_101 = L_100->get_data_1();
		int32_t L_102 = V_21;
		uint64_t L_103 = V_24;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_103&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		uint64_t L_104 = V_24;
		V_20 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		int32_t L_105 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
		int32_t L_106 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_01b6:
	{
		int32_t L_107 = V_23;
		BigInteger_t956758543 * L_108 = ___n1;
		NullCheck(L_108);
		int32_t L_109 = L_108->get_dataLength_2();
		if ((((int32_t)L_107) >= ((int32_t)L_109)))
		{
			goto IL_01c7;
		}
	}
	{
		int32_t L_110 = V_21;
		int32_t L_111 = V_1;
		G_B24_0 = ((((int32_t)L_110) < ((int32_t)L_111))? 1 : 0);
		goto IL_01c8;
	}

IL_01c7:
	{
		G_B24_0 = 0;
	}

IL_01c8:
	{
		V_25 = (bool)G_B24_0;
		bool L_112 = V_25;
		if (L_112)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_113 = V_21;
		int32_t L_114 = V_1;
		V_26 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		bool L_115 = V_26;
		if (!L_115)
		{
			goto IL_01e6;
		}
	}
	{
		BigInteger_t956758543 * L_116 = V_8;
		NullCheck(L_116);
		UInt32U5BU5D_t2770800703* L_117 = L_116->get_data_1();
		int32_t L_118 = V_21;
		uint64_t L_119 = V_20;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint32_t)(((int32_t)((uint32_t)L_119))));
	}

IL_01e6:
	{
	}

IL_01e7:
	{
		int32_t L_120 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
	}

IL_01ed:
	{
		int32_t L_121 = V_19;
		BigInteger_t956758543 * L_122 = V_5;
		NullCheck(L_122);
		int32_t L_123 = L_122->get_dataLength_2();
		V_27 = (bool)((((int32_t)L_121) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_27;
		if (L_124)
		{
			goto IL_0144;
		}
	}
	{
		BigInteger_t956758543 * L_125 = V_8;
		int32_t L_126 = V_1;
		NullCheck(L_125);
		L_125->set_dataLength_2(L_126);
		goto IL_021a;
	}

IL_020b:
	{
		BigInteger_t956758543 * L_127 = V_8;
		BigInteger_t956758543 * L_128 = L_127;
		NullCheck(L_128);
		int32_t L_129 = L_128->get_dataLength_2();
		NullCheck(L_128);
		L_128->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_129, (int32_t)1)));
	}

IL_021a:
	{
		BigInteger_t956758543 * L_130 = V_8;
		NullCheck(L_130);
		int32_t L_131 = L_130->get_dataLength_2();
		if ((((int32_t)L_131) <= ((int32_t)1)))
		{
			goto IL_023a;
		}
	}
	{
		BigInteger_t956758543 * L_132 = V_8;
		NullCheck(L_132);
		UInt32U5BU5D_t2770800703* L_133 = L_132->get_data_1();
		BigInteger_t956758543 * L_134 = V_8;
		NullCheck(L_134);
		int32_t L_135 = L_134->get_dataLength_2();
		NullCheck(L_133);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)1));
		uint32_t L_137 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		G_B35_0 = ((((int32_t)L_137) == ((int32_t)0))? 1 : 0);
		goto IL_023b;
	}

IL_023a:
	{
		G_B35_0 = 0;
	}

IL_023b:
	{
		V_28 = (bool)G_B35_0;
		bool L_138 = V_28;
		if (L_138)
		{
			goto IL_020b;
		}
	}
	{
		BigInteger_t956758543 * L_139 = V_6;
		BigInteger_t956758543 * L_140 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_141 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_139, L_140, /*hidden argument*/NULL);
		V_6 = L_141;
		BigInteger_t956758543 * L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_t2770800703* L_143 = L_142->get_data_1();
		NullCheck(L_143);
		int32_t L_144 = ((int32_t)69);
		uint32_t L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		V_29 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_145&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_29;
		if (!L_146)
		{
			goto IL_028d;
		}
	}
	{
		BigInteger_t956758543 * L_147 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_147, /*hidden argument*/NULL);
		V_30 = L_147;
		BigInteger_t956758543 * L_148 = V_30;
		NullCheck(L_148);
		UInt32U5BU5D_t2770800703* L_149 = L_148->get_data_1();
		int32_t L_150 = V_1;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (uint32_t)1);
		BigInteger_t956758543 * L_151 = V_30;
		int32_t L_152 = V_1;
		NullCheck(L_151);
		L_151->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1)));
		BigInteger_t956758543 * L_153 = V_6;
		BigInteger_t956758543 * L_154 = V_30;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_155 = BigInteger_op_Addition_m949304235(NULL /*static, unused*/, L_153, L_154, /*hidden argument*/NULL);
		V_6 = L_155;
	}

IL_028d:
	{
		goto IL_0299;
	}

IL_028f:
	{
		BigInteger_t956758543 * L_156 = V_6;
		BigInteger_t956758543 * L_157 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_158 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_156, L_157, /*hidden argument*/NULL);
		V_6 = L_158;
	}

IL_0299:
	{
		BigInteger_t956758543 * L_159 = V_6;
		BigInteger_t956758543 * L_160 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_161 = BigInteger_op_GreaterThanOrEqual_m1973220735(NULL /*static, unused*/, L_159, L_160, /*hidden argument*/NULL);
		V_31 = L_161;
		bool L_162 = V_31;
		if (L_162)
		{
			goto IL_028f;
		}
	}
	{
		BigInteger_t956758543 * L_163 = V_6;
		V_32 = L_163;
		goto IL_02ad;
	}

IL_02ad:
	{
		BigInteger_t956758543 * L_164 = V_32;
		return L_164;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * BigInteger_GenerateRandom_m3242160242 (RuntimeObject * __this /* static, unused */, int32_t ___bits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_GenerateRandom_m3242160242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = V_0;
		int32_t L_2 = ___bits0;
		Random_t108471755 * L_3 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		BigInteger_genRandomBits_m2936729685(L_1, L_2, L_3, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		BigInteger_t956758543 * L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C" IL2CPP_METHOD_ATTR void BigInteger_genRandomBits_m2936729685 (BigInteger_t956758543 * __this, int32_t ___bits0, Random_t108471755 * ___rand1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_genRandomBits_m2936729685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	uint32_t V_9 = 0;
	bool V_10 = false;
	{
		int32_t L_0 = ___bits0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		int32_t L_1 = ___bits0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)));
		int32_t L_2 = V_1;
		V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		ArithmeticException_t4283546778 * L_7 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_7, _stringLiteral3686846028, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, BigInteger_genRandomBits_m2936729685_RuntimeMethod_var);
	}

IL_002a:
	{
		V_4 = 0;
		goto IL_004f;
	}

IL_002f:
	{
		UInt32U5BU5D_t2770800703* L_8 = __this->get_data_1();
		int32_t L_9 = V_4;
		Random_t108471755 * L_10 = ___rand1;
		NullCheck(L_10);
		double L_11 = VirtFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)(((int32_t)((uint32_t)((double)il2cpp_codegen_multiply((double)L_11, (double)(4294967296.0)))))));
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = V_0;
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_6 = L_16;
		goto IL_006f;
	}

IL_005f:
	{
		UInt32U5BU5D_t2770800703* L_17 = __this->get_data_1();
		int32_t L_18 = V_6;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)0);
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_20 = V_6;
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_22 = V_1;
		V_8 = (bool)((!(((uint32_t)L_22) <= ((uint32_t)0)))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_24 = V_1;
		V_9 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1))&(int32_t)((int32_t)31)))));
		UInt32U5BU5D_t2770800703* L_25 = __this->get_data_1();
		int32_t L_26 = V_0;
		NullCheck(L_25);
		uint32_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))));
		int32_t L_28 = *((uint32_t*)L_27);
		uint32_t L_29 = V_9;
		*((int32_t*)(L_27)) = (int32_t)((int32_t)((int32_t)L_28|(int32_t)L_29));
		int32_t L_30 = V_1;
		V_9 = ((int32_t)((uint32_t)(-1)>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_30))&(int32_t)((int32_t)31)))));
		UInt32U5BU5D_t2770800703* L_31 = __this->get_data_1();
		int32_t L_32 = V_0;
		NullCheck(L_31);
		uint32_t* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)))));
		int32_t L_34 = *((uint32_t*)L_33);
		uint32_t L_35 = V_9;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)L_34&(int32_t)L_35));
		goto IL_00dd;
	}

IL_00c6:
	{
		UInt32U5BU5D_t2770800703* L_36 = __this->get_data_1();
		int32_t L_37 = V_0;
		NullCheck(L_36);
		uint32_t* L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)))));
		int32_t L_39 = *((uint32_t*)L_38);
		*((int32_t*)(L_38)) = (int32_t)((int32_t)((int32_t)L_39|(int32_t)((int32_t)-2147483648LL)));
	}

IL_00dd:
	{
		int32_t L_40 = V_0;
		__this->set_dataLength_2(L_40);
		int32_t L_41 = __this->get_dataLength_2();
		V_10 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_00fa;
		}
	}
	{
		__this->set_dataLength_2(1);
	}

IL_00fa:
	{
		return;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C" IL2CPP_METHOD_ATTR int32_t BigInteger_bitCount_m3576967399 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		goto IL_0011;
	}

IL_0003:
	{
		int32_t L_0 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
	}

IL_0011:
	{
		int32_t L_1 = __this->get_dataLength_2();
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_2 = __this->get_data_1();
		int32_t L_3 = __this->get_dataLength_2();
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		V_3 = (bool)G_B5_0;
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0003;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_7 = __this->get_data_1();
		int32_t L_8 = __this->get_dataLength_2();
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		V_1 = ((int32_t)-2147483648LL);
		V_2 = ((int32_t)32);
		goto IL_0058;
	}

IL_004e:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		uint32_t L_12 = V_1;
		V_1 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_1;
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B11_0 = 0;
	}

IL_0065:
	{
		V_4 = (bool)G_B11_0;
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_17 = V_2;
		int32_t L_18 = __this->get_dataLength_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1))<<(int32_t)5))));
		int32_t L_19 = V_2;
		V_5 = L_19;
		goto IL_007d;
	}

IL_007d:
	{
		int32_t L_20 = V_5;
		return L_20;
	}
}
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BigInteger_GetBytes_m2793402501 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_GetBytes_m2793402501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_0 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_1 = BigInteger_op_Equality_m4107706715(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		V_5 = L_1;
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_3;
		goto IL_00c7;
	}

IL_0021:
	{
		int32_t L_4 = BigInteger_bitCount_m3576967399(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)((int32_t)L_5>>(int32_t)3));
		int32_t L_6 = V_0;
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)7))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_9 = V_1;
		ByteU5BU5D_t4116647657* L_10 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		int32_t L_11 = V_1;
		V_3 = ((int32_t)((int32_t)L_11&(int32_t)3));
		int32_t L_12 = V_3;
		V_8 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		V_3 = 4;
	}

IL_0057:
	{
		V_4 = 0;
		int32_t L_14 = __this->get_dataLength_2();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		goto IL_00b4;
	}

IL_0066:
	{
		UInt32U5BU5D_t2770800703* L_15 = __this->get_data_1();
		int32_t L_16 = V_9;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_10 = L_18;
		int32_t L_19 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		goto IL_0097;
	}

IL_0079:
	{
		ByteU5BU5D_t4116647657* L_20 = V_2;
		int32_t L_21 = V_4;
		int32_t L_22 = V_11;
		uint32_t L_23 = V_10;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)255)))))));
		uint32_t L_24 = V_10;
		V_10 = ((int32_t)((uint32_t)L_24>>8));
		int32_t L_25 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_26 = V_11;
		V_12 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_12;
		if (L_27)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		V_3 = 4;
		int32_t L_30 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
	}

IL_00b4:
	{
		int32_t L_31 = V_9;
		V_13 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_13;
		if (L_32)
		{
			goto IL_0066;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_33 = V_2;
		V_6 = L_33;
		goto IL_00c7;
	}

IL_00c7:
	{
		ByteU5BU5D_t4116647657* L_34 = V_6;
		return L_34;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
extern "C" IL2CPP_METHOD_ATTR void BigInteger__cctor_m3142840545 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__cctor_m3142840545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)303));
		Int32U5BU5D_t385246372* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255371____AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((BigInteger_t956758543_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t956758543_il2cpp_TypeInfo_var))->set_primesBelow2000_0(L_1);
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
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_m3020782632 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__ctor_m3020782632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OakleyGroups_t1704371988_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_0 = ((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->get_OakleyPrime768_1();
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m3579054046(L_1, L_0, /*hidden argument*/NULL);
		__this->set_prime_1(L_1);
		BigInteger_t956758543 * L_2 = DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682(__this, ((int32_t)160), /*hidden argument*/NULL);
		__this->set_secret_2(L_2);
		BigInteger_t956758543 * L_3 = DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876(__this, /*hidden argument*/NULL);
		__this->set_publicKey_3(L_3);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_m450787995 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___sharedSecretHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__ctor_m450787995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RijndaelManaged_t3586970409 * L_0 = (RijndaelManaged_t3586970409 *)il2cpp_codegen_object_new(RijndaelManaged_t3586970409_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_m1562735454(L_0, /*hidden argument*/NULL);
		__this->set_crypto_4(L_0);
		Rijndael_t2986313634 * L_1 = __this->get_crypto_4();
		ByteU5BU5D_t4116647657* L_2 = ___sharedSecretHash0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		Rijndael_t2986313634 * L_3 = __this->get_crypto_4();
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_3, L_4);
		Rijndael_t2986313634 * L_5 = __this->get_crypto_4();
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_5, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_get_PublicKey_m1675649082 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		BigInteger_t956758543 * L_0 = __this->get_publicKey_3();
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = BigInteger_GetBytes_m2793402501(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	SHA256_t3672283617 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t4116647657* L_0 = ___otherPartyPublicKey0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m3579054046(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_t956758543 * L_2 = V_0;
		BigInteger_t956758543 * L_3 = DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BigInteger_t956758543 * L_4 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = BigInteger_GetBytes_m2793402501(L_4, /*hidden argument*/NULL);
		__this->set_sharedKey_5(L_5);
		SHA256Managed_t955042874 * L_6 = (SHA256Managed_t955042874 *)il2cpp_codegen_object_new(SHA256Managed_t955042874_il2cpp_TypeInfo_var);
		SHA256Managed__ctor_m2170017447(L_6, /*hidden argument*/NULL);
		V_3 = L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SHA256_t3672283617 * L_7 = V_3;
		ByteU5BU5D_t4116647657* L_8 = __this->get_sharedKey_5();
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_9 = HashAlgorithm_ComputeHash_m2825542963(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		IL2CPP_LEAVE(0x3E, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			SHA256_t3672283617 * L_10 = V_3;
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0036:
		{
			SHA256_t3672283617 * L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		RijndaelManaged_t3586970409 * L_12 = (RijndaelManaged_t3586970409 *)il2cpp_codegen_object_new(RijndaelManaged_t3586970409_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_m1562735454(L_12, /*hidden argument*/NULL);
		__this->set_crypto_4(L_12);
		Rijndael_t2986313634 * L_13 = __this->get_crypto_4();
		ByteU5BU5D_t4116647657* L_14 = V_2;
		NullCheck(L_13);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_13, L_14);
		Rijndael_t2986313634 * L_15 = __this->get_crypto_4();
		ByteU5BU5D_t4116647657* L_16 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_15);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_15, L_16);
		Rijndael_t2986313634 * L_17 = __this->get_crypto_4();
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_17, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_Encrypt_m3205762831 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Encrypt_m3205762831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Rijndael_t2986313634 * L_0 = __this->get_crypto_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_6 = InterfaceFuncInvoker3< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x25, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		ByteU5BU5D_t4116647657* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_Decrypt_m2209477771 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Decrypt_m2209477771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Rijndael_t2986313634 * L_0 = __this->get_crypto_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_6 = InterfaceFuncInvoker3< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x25, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		ByteU5BU5D_t4116647657* L_9 = V_1;
		return L_9;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m1904765254 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Dispose_m1904765254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProvider_Dispose_m1853825749(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m1853825749 (DiffieHellmanCryptoProvider_t915317458 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_0 = ((DiffieHellmanCryptoProvider_t915317458_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var))->get_primeRoot_0();
		BigInteger_t956758543 * L_1 = __this->get_secret_2();
		BigInteger_t956758543 * L_2 = __this->get_prime_1();
		NullCheck(L_0);
		BigInteger_t956758543 * L_3 = BigInteger_ModPow_m1818331774(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		BigInteger_t956758543 * L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259 (DiffieHellmanCryptoProvider_t915317458 * __this, BigInteger_t956758543 * ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	BigInteger_t956758543 * V_0 = NULL;
	{
		BigInteger_t956758543 * L_0 = ___otherPartyPublicKey0;
		BigInteger_t956758543 * L_1 = __this->get_secret_2();
		BigInteger_t956758543 * L_2 = __this->get_prime_1();
		NullCheck(L_0);
		BigInteger_t956758543 * L_3 = BigInteger_ModPow_m1818331774(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		BigInteger_t956758543 * L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C" IL2CPP_METHOD_ATTR BigInteger_t956758543 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682 (DiffieHellmanCryptoProvider_t915317458 * __this, int32_t ___secretLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	bool V_1 = false;
	BigInteger_t956758543 * V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	{
		int32_t L_0 = ___secretLength0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_1 = BigInteger_GenerateRandom_m3242160242(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_t956758543 * L_2 = V_0;
		BigInteger_t956758543 * L_3 = __this->get_prime_1();
		BigInteger_t956758543 * L_4 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_5 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		bool L_6 = BigInteger_op_GreaterThanOrEqual_m1973220735(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		BigInteger_t956758543 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_8 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_9 = BigInteger_op_Equality_m4107706715(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 1;
	}

IL_0032:
	{
		V_1 = (bool)G_B4_0;
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0001;
		}
	}
	{
		BigInteger_t956758543 * L_11 = V_0;
		V_2 = L_11;
		goto IL_003a;
	}

IL_003a:
	{
		BigInteger_t956758543 * L_12 = V_2;
		return L_12;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C" IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__cctor_m2518077788 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__cctor_m2518077788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OakleyGroups_t1704371988_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->get_Generator_0();
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_1, (((int64_t)((int64_t)L_0))), /*hidden argument*/NULL);
		((DiffieHellmanCryptoProvider_t915317458_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var))->set_primeRoot_0(L_1);
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
// System.Void Photon.SocketServer.Security.OakleyGroups::.cctor()
extern "C" IL2CPP_METHOD_ATTR void OakleyGroups__cctor_m3563987568 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OakleyGroups__cctor_m3563987568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_Generator_0(((int32_t)22));
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		ByteU5BU5D_t4116647657* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255371____4989E5469B40416DC5AFB739C747E32B40CC5C77_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime768_1(L_1);
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_t4116647657* L_4 = L_3;
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255371____C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime1024_2(L_4);
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		ByteU5BU5D_t4116647657* L_7 = L_6;
		RuntimeFieldHandle_t1871169219  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255371____49ECABA9727A1AF0636082C467485A1A9A04B669_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime1536_3(L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

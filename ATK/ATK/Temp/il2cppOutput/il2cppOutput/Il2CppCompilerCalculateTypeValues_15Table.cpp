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


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t3670035800;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t1962629119;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t876121385;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.Queue
struct Queue_t3637523393;
// System.Collections.SortedList
struct SortedList_t2427694641;
// System.Collections.SortedList/KeyList
struct KeyList_t2666832342;
// System.Collections.SortedList/ValueList
struct ValueList_t3463191220;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t1452810305;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;




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
// System.Runtime.InteropServices.WindowsRuntime.IRestrictedErrorInfo
struct NOVTABLE IRestrictedErrorInfo_t1098496244 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_U24__Stripped0_GetErrorDetails_m1302933614() = 0;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_U24__Stripped1_GetReference_m3853920350() = 0;
};
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
#ifndef ARRAYLISTDEBUGVIEW_T1731101906_H
#define ARRAYLISTDEBUGVIEW_T1731101906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListDebugView
struct  ArrayListDebugView_t1731101906  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTDEBUGVIEW_T1731101906_H
#ifndef ARRAYLISTENUMERATORSIMPLE_T3980734488_H
#define ARRAYLISTENUMERATORSIMPLE_T3980734488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct  ArrayListEnumeratorSimple_t3980734488  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::list
	ArrayList_t2718874744 * ___list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::index
	int32_t ___index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::version
	int32_t ___version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::currentElement
	RuntimeObject * ___currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::isArrayList
	bool ___isArrayList_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t3980734488, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t3980734488, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t3980734488, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t3980734488, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}

	inline static int32_t get_offset_of_isArrayList_4() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t3980734488, ___isArrayList_4)); }
	inline bool get_isArrayList_4() const { return ___isArrayList_4; }
	inline bool* get_address_of_isArrayList_4() { return &___isArrayList_4; }
	inline void set_isArrayList_4(bool value)
	{
		___isArrayList_4 = value;
	}
};

struct ArrayListEnumeratorSimple_t3980734488_StaticFields
{
public:
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::dummyObject
	RuntimeObject * ___dummyObject_5;

public:
	inline static int32_t get_offset_of_dummyObject_5() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t3980734488_StaticFields, ___dummyObject_5)); }
	inline RuntimeObject * get_dummyObject_5() const { return ___dummyObject_5; }
	inline RuntimeObject ** get_address_of_dummyObject_5() { return &___dummyObject_5; }
	inline void set_dummyObject_5(RuntimeObject * value)
	{
		___dummyObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___dummyObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTENUMERATORSIMPLE_T3980734488_H
#ifndef CASEINSENSITIVECOMPARER_T3670035800_H
#define CASEINSENSITIVECOMPARER_T3670035800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_t3670035800  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::m_compareInfo
	CompareInfo_t1092934962 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t3670035800, ___m_compareInfo_0)); }
	inline CompareInfo_t1092934962 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t1092934962 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t1092934962 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct CaseInsensitiveComparer_t3670035800_StaticFields
{
public:
	// System.Collections.CaseInsensitiveComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveComparer::m_InvariantCaseInsensitiveComparer
	CaseInsensitiveComparer_t3670035800 * ___m_InvariantCaseInsensitiveComparer_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveComparer_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t3670035800_StaticFields, ___m_InvariantCaseInsensitiveComparer_1)); }
	inline CaseInsensitiveComparer_t3670035800 * get_m_InvariantCaseInsensitiveComparer_1() const { return ___m_InvariantCaseInsensitiveComparer_1; }
	inline CaseInsensitiveComparer_t3670035800 ** get_address_of_m_InvariantCaseInsensitiveComparer_1() { return &___m_InvariantCaseInsensitiveComparer_1; }
	inline void set_m_InvariantCaseInsensitiveComparer_1(CaseInsensitiveComparer_t3670035800 * value)
	{
		___m_InvariantCaseInsensitiveComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVECOMPARER_T3670035800_H
#ifndef CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#define CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t1962629119  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t3810425522 * ___m_text_0;

public:
	inline static int32_t get_offset_of_m_text_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1962629119, ___m_text_0)); }
	inline TextInfo_t3810425522 * get_m_text_0() const { return ___m_text_0; }
	inline TextInfo_t3810425522 ** get_address_of_m_text_0() { return &___m_text_0; }
	inline void set_m_text_0(TextInfo_t3810425522 * value)
	{
		___m_text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_0), value);
	}
};

struct CaseInsensitiveHashCodeProvider_t1962629119_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveHashCodeProvider::m_InvariantCaseInsensitiveHashCodeProvider
	CaseInsensitiveHashCodeProvider_t1962629119 * ___m_InvariantCaseInsensitiveHashCodeProvider_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1962629119_StaticFields, ___m_InvariantCaseInsensitiveHashCodeProvider_1)); }
	inline CaseInsensitiveHashCodeProvider_t1962629119 * get_m_InvariantCaseInsensitiveHashCodeProvider_1() const { return ___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline CaseInsensitiveHashCodeProvider_t1962629119 ** get_address_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return &___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline void set_m_InvariantCaseInsensitiveHashCodeProvider_1(CaseInsensitiveHashCodeProvider_t1962629119 * value)
	{
		___m_InvariantCaseInsensitiveHashCodeProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveHashCodeProvider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
#ifndef COMPARER_T1912461351_H
#define COMPARER_T1912461351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Comparer
struct  Comparer_t1912461351  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.Comparer::m_compareInfo
	CompareInfo_t1092934962 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(Comparer_t1912461351, ___m_compareInfo_0)); }
	inline CompareInfo_t1092934962 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t1092934962 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t1092934962 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct Comparer_t1912461351_StaticFields
{
public:
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t1912461351 * ___Default_1;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t1912461351 * ___DefaultInvariant_2;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(Comparer_t1912461351_StaticFields, ___Default_1)); }
	inline Comparer_t1912461351 * get_Default_1() const { return ___Default_1; }
	inline Comparer_t1912461351 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(Comparer_t1912461351 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_DefaultInvariant_2() { return static_cast<int32_t>(offsetof(Comparer_t1912461351_StaticFields, ___DefaultInvariant_2)); }
	inline Comparer_t1912461351 * get_DefaultInvariant_2() const { return ___DefaultInvariant_2; }
	inline Comparer_t1912461351 ** get_address_of_DefaultInvariant_2() { return &___DefaultInvariant_2; }
	inline void set_DefaultInvariant_2(Comparer_t1912461351 * value)
	{
		___DefaultInvariant_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultInvariant_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_T1912461351_H
#ifndef COMPATIBLECOMPARER_T2141825405_H
#define COMPATIBLECOMPARER_T2141825405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CompatibleComparer
struct  CompatibleComparer_t2141825405  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_1;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t2141825405, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t2141825405, ____hcp_1)); }
	inline RuntimeObject* get__hcp_1() const { return ____hcp_1; }
	inline RuntimeObject** get_address_of__hcp_1() { return &____hcp_1; }
	inline void set__hcp_1(RuntimeObject* value)
	{
		____hcp_1 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T2141825405_H
#ifndef COLLECTIONEXTENSIONS_T4236879312_H
#define COLLECTIONEXTENSIONS_T4236879312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.CollectionExtensions
struct  CollectionExtensions_t4236879312  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONEXTENSIONS_T4236879312_H
#ifndef DICTIONARYHASHHELPERS_T1017827097_H
#define DICTIONARYHASHHELPERS_T1017827097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.DictionaryHashHelpers
struct  DictionaryHashHelpers_t1017827097  : public RuntimeObject
{
public:

public:
};

struct DictionaryHashHelpers_t1017827097_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Generic.DictionaryHashHelpers::<SerializationInfoTable>k__BackingField
	ConditionalWeakTable_2_t1452810305 * ___U3CSerializationInfoTableU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSerializationInfoTableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DictionaryHashHelpers_t1017827097_StaticFields, ___U3CSerializationInfoTableU3Ek__BackingField_0)); }
	inline ConditionalWeakTable_2_t1452810305 * get_U3CSerializationInfoTableU3Ek__BackingField_0() const { return ___U3CSerializationInfoTableU3Ek__BackingField_0; }
	inline ConditionalWeakTable_2_t1452810305 ** get_address_of_U3CSerializationInfoTableU3Ek__BackingField_0() { return &___U3CSerializationInfoTableU3Ek__BackingField_0; }
	inline void set_U3CSerializationInfoTableU3Ek__BackingField_0(ConditionalWeakTable_2_t1452810305 * value)
	{
		___U3CSerializationInfoTableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSerializationInfoTableU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYHASHHELPERS_T1017827097_H
#ifndef EQUALITYCOMPARER_1_T3599036008_H
#define EQUALITYCOMPARER_1_T3599036008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct  EqualityComparer_1_t3599036008  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3599036008_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3599036008 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3599036008_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t3599036008 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t3599036008 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t3599036008 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T3599036008_H
#ifndef EQUALITYCOMPARER_1_T17223025_H
#define EQUALITYCOMPARER_1_T17223025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.String>
struct  EqualityComparer_1_t17223025  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t17223025_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t17223025 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t17223025_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t17223025 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t17223025 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t17223025 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T17223025_H
#ifndef INTROSPECTIVESORTUTILITIES_T3095012238_H
#define INTROSPECTIVESORTUTILITIES_T3095012238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.IntrospectiveSortUtilities
struct  IntrospectiveSortUtilities_t3095012238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTROSPECTIVESORTUTILITIES_T3095012238_H
#ifndef KEYVALUEPAIR_T1811715034_H
#define KEYVALUEPAIR_T1811715034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair
struct  KeyValuePair_t1811715034  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_T1811715034_H
#ifndef OBJECTEQUALITYCOMPARER_T1147032983_H
#define OBJECTEQUALITYCOMPARER_T1147032983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t1147032983  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t1147032983_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t1147032983 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t1147032983_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t1147032983 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t1147032983 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t1147032983 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEQUALITYCOMPARER_T1147032983_H
#ifndef HASHHELPERS_T3497540039_H
#define HASHHELPERS_T3497540039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.HashHelpers
struct  HashHelpers_t3497540039  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_t3497540039_StaticFields
{
public:
	// System.Int32[] System.Collections.HashHelpers::primes
	Int32U5BU5D_t385246372* ___primes_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::s_SerializationInfoTable
	ConditionalWeakTable_2_t1452810305 * ___s_SerializationInfoTable_1;

public:
	inline static int32_t get_offset_of_primes_0() { return static_cast<int32_t>(offsetof(HashHelpers_t3497540039_StaticFields, ___primes_0)); }
	inline Int32U5BU5D_t385246372* get_primes_0() const { return ___primes_0; }
	inline Int32U5BU5D_t385246372** get_address_of_primes_0() { return &___primes_0; }
	inline void set_primes_0(Int32U5BU5D_t385246372* value)
	{
		___primes_0 = value;
		Il2CppCodeGenWriteBarrier((&___primes_0), value);
	}

	inline static int32_t get_offset_of_s_SerializationInfoTable_1() { return static_cast<int32_t>(offsetof(HashHelpers_t3497540039_StaticFields, ___s_SerializationInfoTable_1)); }
	inline ConditionalWeakTable_2_t1452810305 * get_s_SerializationInfoTable_1() const { return ___s_SerializationInfoTable_1; }
	inline ConditionalWeakTable_2_t1452810305 ** get_address_of_s_SerializationInfoTable_1() { return &___s_SerializationInfoTable_1; }
	inline void set_s_SerializationInfoTable_1(ConditionalWeakTable_2_t1452810305 * value)
	{
		___s_SerializationInfoTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_SerializationInfoTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T3497540039_H
#ifndef HASHTABLEDEBUGVIEW_T2167705408_H
#define HASHTABLEDEBUGVIEW_T2167705408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableDebugView
struct  HashtableDebugView_t2167705408  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEDEBUGVIEW_T2167705408_H
#ifndef HASHTABLEENUMERATOR_T2698154232_H
#define HASHTABLEENUMERATOR_T2698154232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableEnumerator
struct  HashtableEnumerator_t2698154232  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::hashtable
	Hashtable_t1853889766 * ___hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::bucket
	int32_t ___bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::current
	bool ___current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::getObjectRetType
	int32_t ___getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentValue
	RuntimeObject * ___currentValue_6;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2698154232, ___hashtable_0)); }
	inline Hashtable_t1853889766 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t1853889766 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t1853889766 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}

	inline static int32_t get_offset_of_bucket_1() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2698154232, ___bucket_1)); }
	inline int32_t get_bucket_1() const { return ___bucket_1; }
	inline int32_t* get_address_of_bucket_1() { return &___bucket_1; }
	inline void set_bucket_1(int32_t value)
	{
		___bucket_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2698154232, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2698154232, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_4() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2698154232, ___getObjectRetType_4)); }
	inline int32_t get_getObjectRetType_4() const { return ___getObjectRetType_4; }
	inline int32_t* get_address_of_getObjectRetType_4() { return &___getObjectRetType_4; }
	inline void set_getObjectRetType_4(int32_t value)
	{
		___getObjectRetType_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2698154232, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t2698154232, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEENUMERATOR_T2698154232_H
#ifndef KEYCOLLECTION_T4104730440_H
#define KEYCOLLECTION_T4104730440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/KeyCollection
struct  KeyCollection_t4104730440  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t1853889766 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_t4104730440, ____hashtable_0)); }
	inline Hashtable_t1853889766 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t1853889766 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t1853889766 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T4104730440_H
#ifndef VALUECOLLECTION_T3278603860_H
#define VALUECOLLECTION_T3278603860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/ValueCollection
struct  ValueCollection_t3278603860  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_t1853889766 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3278603860, ____hashtable_0)); }
	inline Hashtable_t1853889766 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t1853889766 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t1853889766 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T3278603860_H
#ifndef LOWLEVELCOMPARER_T611013387_H
#define LOWLEVELCOMPARER_T611013387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.LowLevelComparer
struct  LowLevelComparer_t611013387  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_t611013387_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_t611013387 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_t611013387_StaticFields, ___Default_0)); }
	inline LowLevelComparer_t611013387 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_t611013387 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_t611013387 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELCOMPARER_T611013387_H
#ifndef QUEUE_T3637523393_H
#define QUEUE_T3637523393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t3637523393  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T3637523393_H
#ifndef QUEUEDEBUGVIEW_T2122186381_H
#define QUEUEDEBUGVIEW_T2122186381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueDebugView
struct  QueueDebugView_t2122186381  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEDEBUGVIEW_T2122186381_H
#ifndef QUEUEENUMERATOR_T4140714244_H
#define QUEUEENUMERATOR_T4140714244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t4140714244  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::_q
	Queue_t3637523393 * ____q_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Queue/QueueEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(QueueEnumerator_t4140714244, ____q_0)); }
	inline Queue_t3637523393 * get__q_0() const { return ____q_0; }
	inline Queue_t3637523393 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_t3637523393 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((&____q_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(QueueEnumerator_t4140714244, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(QueueEnumerator_t4140714244, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(QueueEnumerator_t4140714244, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEENUMERATOR_T4140714244_H
#ifndef READONLYCOLLECTIONBASE_T1836743899_H
#define READONLYCOLLECTIONBASE_T1836743899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t1836743899  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t1836743899, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T1836743899_H
#ifndef SORTEDLIST_T2427694641_H
#define SORTEDLIST_T2427694641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t2427694641  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_t2843939325* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_t2843939325* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t2666832342 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t3463191220 * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___keys_0)); }
	inline ObjectU5BU5D_t2843939325* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_t2843939325* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___keys_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___values_1)); }
	inline ObjectU5BU5D_t2843939325* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_t2843939325* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___keyList_5)); }
	inline KeyList_t2666832342 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t2666832342 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t2666832342 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((&___keyList_5), value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___valueList_6)); }
	inline ValueList_t3463191220 * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t3463191220 ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t3463191220 * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((&___valueList_6), value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_7), value);
	}
};

struct SortedList_t2427694641_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_t2843939325* ___emptyArray_8;

public:
	inline static int32_t get_offset_of_emptyArray_8() { return static_cast<int32_t>(offsetof(SortedList_t2427694641_StaticFields, ___emptyArray_8)); }
	inline ObjectU5BU5D_t2843939325* get_emptyArray_8() const { return ___emptyArray_8; }
	inline ObjectU5BU5D_t2843939325** get_address_of_emptyArray_8() { return &___emptyArray_8; }
	inline void set_emptyArray_8(ObjectU5BU5D_t2843939325* value)
	{
		___emptyArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T2427694641_H
#ifndef KEYLIST_T2666832342_H
#define KEYLIST_T2666832342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/KeyList
struct  KeyList_t2666832342  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/KeyList::sortedList
	SortedList_t2427694641 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(KeyList_t2666832342, ___sortedList_0)); }
	inline SortedList_t2427694641 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t2427694641 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t2427694641 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYLIST_T2666832342_H
#ifndef SORTEDLISTDEBUGVIEW_T3134224936_H
#define SORTEDLISTDEBUGVIEW_T3134224936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListDebugView
struct  SortedListDebugView_t3134224936  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTDEBUGVIEW_T3134224936_H
#ifndef SORTEDLISTENUMERATOR_T3759025924_H
#define SORTEDLISTENUMERATOR_T3759025924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListEnumerator
struct  SortedListEnumerator_t3759025924  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SortedListEnumerator::sortedList
	SortedList_t2427694641 * ___sortedList_0;
	// System.Object System.Collections.SortedList/SortedListEnumerator::key
	RuntimeObject * ___key_1;
	// System.Object System.Collections.SortedList/SortedListEnumerator::value
	RuntimeObject * ___value_2;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::index
	int32_t ___index_3;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::startIndex
	int32_t ___startIndex_4;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::endIndex
	int32_t ___endIndex_5;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::version
	int32_t ___version_6;
	// System.Boolean System.Collections.SortedList/SortedListEnumerator::current
	bool ___current_7;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::getObjectRetType
	int32_t ___getObjectRetType_8;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___sortedList_0)); }
	inline SortedList_t2427694641 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t2427694641 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t2427694641 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_startIndex_4() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___startIndex_4)); }
	inline int32_t get_startIndex_4() const { return ___startIndex_4; }
	inline int32_t* get_address_of_startIndex_4() { return &___startIndex_4; }
	inline void set_startIndex_4(int32_t value)
	{
		___startIndex_4 = value;
	}

	inline static int32_t get_offset_of_endIndex_5() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___endIndex_5)); }
	inline int32_t get_endIndex_5() const { return ___endIndex_5; }
	inline int32_t* get_address_of_endIndex_5() { return &___endIndex_5; }
	inline void set_endIndex_5(int32_t value)
	{
		___endIndex_5 = value;
	}

	inline static int32_t get_offset_of_version_6() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___version_6)); }
	inline int32_t get_version_6() const { return ___version_6; }
	inline int32_t* get_address_of_version_6() { return &___version_6; }
	inline void set_version_6(int32_t value)
	{
		___version_6 = value;
	}

	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___current_7)); }
	inline bool get_current_7() const { return ___current_7; }
	inline bool* get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(bool value)
	{
		___current_7 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_8() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3759025924, ___getObjectRetType_8)); }
	inline int32_t get_getObjectRetType_8() const { return ___getObjectRetType_8; }
	inline int32_t* get_address_of_getObjectRetType_8() { return &___getObjectRetType_8; }
	inline void set_getObjectRetType_8(int32_t value)
	{
		___getObjectRetType_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTENUMERATOR_T3759025924_H
#ifndef VALUELIST_T3463191220_H
#define VALUELIST_T3463191220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ValueList
struct  ValueList_t3463191220  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_t2427694641 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(ValueList_t3463191220, ___sortedList_0)); }
	inline SortedList_t2427694641 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t2427694641 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t2427694641 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUELIST_T3463191220_H
#ifndef STACK_T2329662280_H
#define STACK_T2329662280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2329662280  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2329662280_H
#ifndef STACKDEBUGVIEW_T1828800609_H
#define STACKDEBUGVIEW_T1828800609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackDebugView
struct  StackDebugView_t1828800609  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKDEBUGVIEW_T1828800609_H
#ifndef STACKENUMERATOR_T4272197527_H
#define STACKENUMERATOR_T4272197527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackEnumerator
struct  StackEnumerator_t4272197527  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/StackEnumerator::_stack
	Stack_t2329662280 * ____stack_0;
	// System.Int32 System.Collections.Stack/StackEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Stack/StackEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack/StackEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(StackEnumerator_t4272197527, ____stack_0)); }
	inline Stack_t2329662280 * get__stack_0() const { return ____stack_0; }
	inline Stack_t2329662280 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_t2329662280 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((&____stack_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(StackEnumerator_t4272197527, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(StackEnumerator_t4272197527, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(StackEnumerator_t4272197527, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKENUMERATOR_T4272197527_H
#ifndef EVENTSOURCE_T3890395371_H
#define EVENTSOURCE_T3890395371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EventSource
struct  EventSource_t3890395371  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.Tracing.EventSource::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventSource_t3890395371, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSOURCE_T3890395371_H
#ifndef UNSAFENATIVEMETHODS_T276217728_H
#define UNSAFENATIVEMETHODS_T276217728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.UnsafeNativeMethods
struct  UnsafeNativeMethods_t276217728  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFENATIVEMETHODS_T276217728_H
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
#ifndef ILISTWRAPPER_T1645329750_H
#define ILISTWRAPPER_T1645329750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/IListWrapper
struct  IListWrapper_t1645329750  : public ArrayList_t2718874744
{
public:
	// System.Collections.IList System.Collections.ArrayList/IListWrapper::_list
	RuntimeObject* ____list_6;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(IListWrapper_t1645329750, ____list_6)); }
	inline RuntimeObject* get__list_6() const { return ____list_6; }
	inline RuntimeObject** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(RuntimeObject* value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILISTWRAPPER_T1645329750_H
#ifndef READONLYARRAYLIST_T2954211616_H
#define READONLYARRAYLIST_T2954211616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ReadOnlyArrayList
struct  ReadOnlyArrayList_t2954211616  : public ArrayList_t2718874744
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t2718874744 * ____list_6;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(ReadOnlyArrayList_t2954211616, ____list_6)); }
	inline ArrayList_t2718874744 * get__list_6() const { return ____list_6; }
	inline ArrayList_t2718874744 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(ArrayList_t2718874744 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAYLIST_T2954211616_H
#ifndef CDSCOLLECTIONETWBCLPROVIDER_T1443474801_H
#define CDSCOLLECTIONETWBCLPROVIDER_T1443474801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct  CDSCollectionETWBCLProvider_t1443474801  : public EventSource_t3890395371
{
public:

public:
};

struct CDSCollectionETWBCLProvider_t1443474801_StaticFields
{
public:
	// System.Collections.Concurrent.CDSCollectionETWBCLProvider System.Collections.Concurrent.CDSCollectionETWBCLProvider::Log
	CDSCollectionETWBCLProvider_t1443474801 * ___Log_1;

public:
	inline static int32_t get_offset_of_Log_1() { return static_cast<int32_t>(offsetof(CDSCollectionETWBCLProvider_t1443474801_StaticFields, ___Log_1)); }
	inline CDSCollectionETWBCLProvider_t1443474801 * get_Log_1() const { return ___Log_1; }
	inline CDSCollectionETWBCLProvider_t1443474801 ** get_address_of_Log_1() { return &___Log_1; }
	inline void set_Log_1(CDSCollectionETWBCLProvider_t1443474801 * value)
	{
		___Log_1 = value;
		Il2CppCodeGenWriteBarrier((&___Log_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CDSCOLLECTIONETWBCLPROVIDER_T1443474801_H
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
#ifndef BYTEEQUALITYCOMPARER_T2579698736_H
#define BYTEEQUALITYCOMPARER_T2579698736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ByteEqualityComparer
struct  ByteEqualityComparer_t2579698736  : public EqualityComparer_1_t3599036008
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEEQUALITYCOMPARER_T2579698736_H
#ifndef NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T1082005352_H
#define NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T1082005352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.NonRandomizedStringEqualityComparer
struct  NonRandomizedStringEqualityComparer_t1082005352  : public EqualityComparer_1_t17223025
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T1082005352_H
#ifndef BUCKET_T758131704_H
#define BUCKET_T758131704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/bucket
struct  bucket_t758131704 
{
public:
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject * ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(bucket_t758131704, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_val_1() { return static_cast<int32_t>(offsetof(bucket_t758131704, ___val_1)); }
	inline RuntimeObject * get_val_1() const { return ___val_1; }
	inline RuntimeObject ** get_address_of_val_1() { return &___val_1; }
	inline void set_val_1(RuntimeObject * value)
	{
		___val_1 = value;
		Il2CppCodeGenWriteBarrier((&___val_1), value);
	}

	inline static int32_t get_offset_of_hash_coll_2() { return static_cast<int32_t>(offsetof(bucket_t758131704, ___hash_coll_2)); }
	inline int32_t get_hash_coll_2() const { return ___hash_coll_2; }
	inline int32_t* get_address_of_hash_coll_2() { return &___hash_coll_2; }
	inline void set_hash_coll_2(int32_t value)
	{
		___hash_coll_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t758131704_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t758131704_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
#endif // BUCKET_T758131704_H
#ifndef SYNCSORTEDLIST_T2519848360_H
#define SYNCSORTEDLIST_T2519848360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SyncSortedList
struct  SyncSortedList_t2519848360  : public SortedList_t2427694641
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SyncSortedList::_list
	SortedList_t2427694641 * ____list_9;
	// System.Object System.Collections.SortedList/SyncSortedList::_root
	RuntimeObject * ____root_10;

public:
	inline static int32_t get_offset_of__list_9() { return static_cast<int32_t>(offsetof(SyncSortedList_t2519848360, ____list_9)); }
	inline SortedList_t2427694641 * get__list_9() const { return ____list_9; }
	inline SortedList_t2427694641 ** get_address_of__list_9() { return &____list_9; }
	inline void set__list_9(SortedList_t2427694641 * value)
	{
		____list_9 = value;
		Il2CppCodeGenWriteBarrier((&____list_9), value);
	}

	inline static int32_t get_offset_of__root_10() { return static_cast<int32_t>(offsetof(SyncSortedList_t2519848360, ____root_10)); }
	inline RuntimeObject * get__root_10() const { return ____root_10; }
	inline RuntimeObject ** get_address_of__root_10() { return &____root_10; }
	inline void set__root_10(RuntimeObject * value)
	{
		____root_10 = value;
		Il2CppCodeGenWriteBarrier((&____root_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCSORTEDLIST_T2519848360_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef INSERTIONBEHAVIOR_T4747287_H
#define INSERTIONBEHAVIOR_T4747287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.InsertionBehavior
struct  InsertionBehavior_t4747287 
{
public:
	// System.Byte System.Collections.Generic.InsertionBehavior::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InsertionBehavior_t4747287, ___value___2)); }
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
#endif // INSERTIONBEHAVIOR_T4747287_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t876121385* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___buckets_10)); }
	inline bucketU5BU5D_t876121385* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_t876121385** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_t876121385* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_10), value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((&___keys_17), value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((&___values_18), value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_19), value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef WINDOWSRUNTIMEMARSHAL_T839832918_H
#define WINDOWSRUNTIMEMARSHAL_T839832918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal
struct  WindowsRuntimeMarshal_t839832918  : public RuntimeObject
{
public:

public:
};

struct WindowsRuntimeMarshal_t839832918_StaticFields
{
public:
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::s_haveBlueErrorApis
	bool ___s_haveBlueErrorApis_0;
	// System.Guid System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::s_iidIErrorInfo
	Guid_t  ___s_iidIErrorInfo_1;

public:
	inline static int32_t get_offset_of_s_haveBlueErrorApis_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeMarshal_t839832918_StaticFields, ___s_haveBlueErrorApis_0)); }
	inline bool get_s_haveBlueErrorApis_0() const { return ___s_haveBlueErrorApis_0; }
	inline bool* get_address_of_s_haveBlueErrorApis_0() { return &___s_haveBlueErrorApis_0; }
	inline void set_s_haveBlueErrorApis_0(bool value)
	{
		___s_haveBlueErrorApis_0 = value;
	}

	inline static int32_t get_offset_of_s_iidIErrorInfo_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeMarshal_t839832918_StaticFields, ___s_iidIErrorInfo_1)); }
	inline Guid_t  get_s_iidIErrorInfo_1() const { return ___s_iidIErrorInfo_1; }
	inline Guid_t * get_address_of_s_iidIErrorInfo_1() { return &___s_iidIErrorInfo_1; }
	inline void set_s_iidIErrorInfo_1(Guid_t  value)
	{
		___s_iidIErrorInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMEMARSHAL_T839832918_H
#ifndef SYNCHASHTABLE_T3569774773_H
#define SYNCHASHTABLE_T3569774773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t3569774773  : public Hashtable_t1853889766
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t1853889766 * ____table_21;

public:
	inline static int32_t get_offset_of__table_21() { return static_cast<int32_t>(offsetof(SyncHashtable_t3569774773, ____table_21)); }
	inline Hashtable_t1853889766 * get__table_21() const { return ____table_21; }
	inline Hashtable_t1853889766 ** get_address_of__table_21() { return &____table_21; }
	inline void set__table_21(Hashtable_t1853889766 * value)
	{
		____table_21 = value;
		Il2CppCodeGenWriteBarrier((&____table_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHASHTABLE_T3569774773_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { 0, sizeof(IRestrictedErrorInfo_t1098496244*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (WindowsRuntimeMarshal_t839832918), -1, sizeof(WindowsRuntimeMarshal_t839832918_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1502[2] = 
{
	WindowsRuntimeMarshal_t839832918_StaticFields::get_offset_of_s_haveBlueErrorApis_0(),
	WindowsRuntimeMarshal_t839832918_StaticFields::get_offset_of_s_iidIErrorInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (UnsafeNativeMethods_t276217728), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (DictionaryEntry_t3123975638)+ sizeof (RuntimeObject), sizeof(DictionaryEntry_t3123975638_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1504[2] = 
{
	DictionaryEntry_t3123975638::get_offset_of__key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DictionaryEntry_t3123975638::get_offset_of__value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (LowLevelComparer_t611013387), -1, sizeof(LowLevelComparer_t611013387_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1505[1] = 
{
	LowLevelComparer_t611013387_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (ArrayList_t2718874744), -1, sizeof(ArrayList_t2718874744_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1506[6] = 
{
	ArrayList_t2718874744::get_offset_of__items_0(),
	ArrayList_t2718874744::get_offset_of__size_1(),
	ArrayList_t2718874744::get_offset_of__version_2(),
	ArrayList_t2718874744::get_offset_of__syncRoot_3(),
	0,
	ArrayList_t2718874744_StaticFields::get_offset_of_emptyArray_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (IListWrapper_t1645329750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1507[1] = 
{
	IListWrapper_t1645329750::get_offset_of__list_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (ReadOnlyArrayList_t2954211616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1508[1] = 
{
	ReadOnlyArrayList_t2954211616::get_offset_of__list_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (ArrayListEnumeratorSimple_t3980734488), -1, sizeof(ArrayListEnumeratorSimple_t3980734488_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1509[6] = 
{
	ArrayListEnumeratorSimple_t3980734488::get_offset_of_list_0(),
	ArrayListEnumeratorSimple_t3980734488::get_offset_of_index_1(),
	ArrayListEnumeratorSimple_t3980734488::get_offset_of_version_2(),
	ArrayListEnumeratorSimple_t3980734488::get_offset_of_currentElement_3(),
	ArrayListEnumeratorSimple_t3980734488::get_offset_of_isArrayList_4(),
	ArrayListEnumeratorSimple_t3980734488_StaticFields::get_offset_of_dummyObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (ArrayListDebugView_t1731101906), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (CaseInsensitiveComparer_t3670035800), -1, sizeof(CaseInsensitiveComparer_t3670035800_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1511[2] = 
{
	CaseInsensitiveComparer_t3670035800::get_offset_of_m_compareInfo_0(),
	CaseInsensitiveComparer_t3670035800_StaticFields::get_offset_of_m_InvariantCaseInsensitiveComparer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (CaseInsensitiveHashCodeProvider_t1962629119), -1, sizeof(CaseInsensitiveHashCodeProvider_t1962629119_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1512[2] = 
{
	CaseInsensitiveHashCodeProvider_t1962629119::get_offset_of_m_text_0(),
	CaseInsensitiveHashCodeProvider_t1962629119_StaticFields::get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (CollectionBase_t2727926298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1513[1] = 
{
	CollectionBase_t2727926298::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (Comparer_t1912461351), -1, sizeof(Comparer_t1912461351_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1514[3] = 
{
	Comparer_t1912461351::get_offset_of_m_compareInfo_0(),
	Comparer_t1912461351_StaticFields::get_offset_of_Default_1(),
	Comparer_t1912461351_StaticFields::get_offset_of_DefaultInvariant_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (CompatibleComparer_t2141825405), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1515[2] = 
{
	CompatibleComparer_t2141825405::get_offset_of__comparer_0(),
	CompatibleComparer_t2141825405::get_offset_of__hcp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (Hashtable_t1853889766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1516[21] = 
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
	Hashtable_t1853889766::get_offset_of_buckets_10(),
	Hashtable_t1853889766::get_offset_of_count_11(),
	Hashtable_t1853889766::get_offset_of_occupancy_12(),
	Hashtable_t1853889766::get_offset_of_loadsize_13(),
	Hashtable_t1853889766::get_offset_of_loadFactor_14(),
	Hashtable_t1853889766::get_offset_of_version_15(),
	Hashtable_t1853889766::get_offset_of_isWriterInProgress_16(),
	Hashtable_t1853889766::get_offset_of_keys_17(),
	Hashtable_t1853889766::get_offset_of_values_18(),
	Hashtable_t1853889766::get_offset_of__keycomparer_19(),
	Hashtable_t1853889766::get_offset_of__syncRoot_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (bucket_t758131704)+ sizeof (RuntimeObject), sizeof(bucket_t758131704_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1517[3] = 
{
	bucket_t758131704::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t758131704::get_offset_of_val_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t758131704::get_offset_of_hash_coll_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (KeyCollection_t4104730440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1518[1] = 
{
	KeyCollection_t4104730440::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (ValueCollection_t3278603860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1519[1] = 
{
	ValueCollection_t3278603860::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (SyncHashtable_t3569774773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1520[1] = 
{
	SyncHashtable_t3569774773::get_offset_of__table_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (HashtableEnumerator_t2698154232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1521[7] = 
{
	HashtableEnumerator_t2698154232::get_offset_of_hashtable_0(),
	HashtableEnumerator_t2698154232::get_offset_of_bucket_1(),
	HashtableEnumerator_t2698154232::get_offset_of_version_2(),
	HashtableEnumerator_t2698154232::get_offset_of_current_3(),
	HashtableEnumerator_t2698154232::get_offset_of_getObjectRetType_4(),
	HashtableEnumerator_t2698154232::get_offset_of_currentKey_5(),
	HashtableEnumerator_t2698154232::get_offset_of_currentValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (HashtableDebugView_t2167705408), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (HashHelpers_t3497540039), -1, sizeof(HashHelpers_t3497540039_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1523[2] = 
{
	HashHelpers_t3497540039_StaticFields::get_offset_of_primes_0(),
	HashHelpers_t3497540039_StaticFields::get_offset_of_s_SerializationInfoTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (Queue_t3637523393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1535[9] = 
{
	Queue_t3637523393::get_offset_of__array_0(),
	Queue_t3637523393::get_offset_of__head_1(),
	Queue_t3637523393::get_offset_of__tail_2(),
	Queue_t3637523393::get_offset_of__size_3(),
	Queue_t3637523393::get_offset_of__growFactor_4(),
	Queue_t3637523393::get_offset_of__version_5(),
	Queue_t3637523393::get_offset_of__syncRoot_6(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (QueueEnumerator_t4140714244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1536[4] = 
{
	QueueEnumerator_t4140714244::get_offset_of__q_0(),
	QueueEnumerator_t4140714244::get_offset_of__index_1(),
	QueueEnumerator_t4140714244::get_offset_of__version_2(),
	QueueEnumerator_t4140714244::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (QueueDebugView_t2122186381), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (ReadOnlyCollectionBase_t1836743899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1538[1] = 
{
	ReadOnlyCollectionBase_t1836743899::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (SortedList_t2427694641), -1, sizeof(SortedList_t2427694641_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1539[9] = 
{
	SortedList_t2427694641::get_offset_of_keys_0(),
	SortedList_t2427694641::get_offset_of_values_1(),
	SortedList_t2427694641::get_offset_of__size_2(),
	SortedList_t2427694641::get_offset_of_version_3(),
	SortedList_t2427694641::get_offset_of_comparer_4(),
	SortedList_t2427694641::get_offset_of_keyList_5(),
	SortedList_t2427694641::get_offset_of_valueList_6(),
	SortedList_t2427694641::get_offset_of__syncRoot_7(),
	SortedList_t2427694641_StaticFields::get_offset_of_emptyArray_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (SyncSortedList_t2519848360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1540[2] = 
{
	SyncSortedList_t2519848360::get_offset_of__list_9(),
	SyncSortedList_t2519848360::get_offset_of__root_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (SortedListEnumerator_t3759025924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1541[9] = 
{
	SortedListEnumerator_t3759025924::get_offset_of_sortedList_0(),
	SortedListEnumerator_t3759025924::get_offset_of_key_1(),
	SortedListEnumerator_t3759025924::get_offset_of_value_2(),
	SortedListEnumerator_t3759025924::get_offset_of_index_3(),
	SortedListEnumerator_t3759025924::get_offset_of_startIndex_4(),
	SortedListEnumerator_t3759025924::get_offset_of_endIndex_5(),
	SortedListEnumerator_t3759025924::get_offset_of_version_6(),
	SortedListEnumerator_t3759025924::get_offset_of_current_7(),
	SortedListEnumerator_t3759025924::get_offset_of_getObjectRetType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (KeyList_t2666832342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1542[1] = 
{
	KeyList_t2666832342::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (ValueList_t3463191220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1543[1] = 
{
	ValueList_t3463191220::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (SortedListDebugView_t3134224936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (Stack_t2329662280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1545[4] = 
{
	Stack_t2329662280::get_offset_of__array_0(),
	Stack_t2329662280::get_offset_of__size_1(),
	Stack_t2329662280::get_offset_of__version_2(),
	Stack_t2329662280::get_offset_of__syncRoot_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (StackEnumerator_t4272197527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1546[4] = 
{
	StackEnumerator_t4272197527::get_offset_of__stack_0(),
	StackEnumerator_t4272197527::get_offset_of__index_1(),
	StackEnumerator_t4272197527::get_offset_of__version_2(),
	StackEnumerator_t4272197527::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (StackDebugView_t1828800609), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1549[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (CDSCollectionETWBCLProvider_t1443474801), -1, sizeof(CDSCollectionETWBCLProvider_t1443474801_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1550[1] = 
{
	CDSCollectionETWBCLProvider_t1443474801_StaticFields::get_offset_of_Log_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1551[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1552[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1553[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1554[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1555[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1557[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { sizeof (CollectionExtensions_t4236879312), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (KeyValuePair_t1811715034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1560[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (IntrospectiveSortUtilities_t3095012238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1563[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (InsertionBehavior_t4747287)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1564[4] = 
{
	InsertionBehavior_t4747287::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1565[14] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1566[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1567[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1568[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1569[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1570[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1571[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (DictionaryHashHelpers_t1017827097), -1, sizeof(DictionaryHashHelpers_t1017827097_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1572[1] = 
{
	DictionaryHashHelpers_t1017827097_StaticFields::get_offset_of_U3CSerializationInfoTableU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (NonRandomizedStringEqualityComparer_t1082005352), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (ObjectEqualityComparer_t1147032983), -1, sizeof(ObjectEqualityComparer_t1147032983_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1577[1] = 
{
	ObjectEqualityComparer_t1147032983_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1578[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1583[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (ByteEqualityComparer_t2579698736), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

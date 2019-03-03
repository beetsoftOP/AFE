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


// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_t2613167486;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1870286136;
// System.ComponentModel.Component
struct Component_t3620823400;
// System.ComponentModel.ComponentCollection
struct ComponentCollection_t1445440302;
// System.ComponentModel.Container
struct Container_t1808277744;
// System.ComponentModel.ContainerFilterService
struct ContainerFilterService_t3995528664;
// System.ComponentModel.CultureInfoConverter
struct CultureInfoConverter_t81550636;
// System.ComponentModel.Design.DesigntimeLicenseContext
struct DesigntimeLicenseContext_t2427359527;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t1025725751;
// System.ComponentModel.EventDescriptor[]
struct EventDescriptorU5BU5D_t1482016031;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t2424989506;
// System.ComponentModel.HandledEventArgs
struct HandledEventArgs_t3639267452;
// System.ComponentModel.IComponent
struct IComponent_t2320218252;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1654759486;
// System.ComponentModel.IExtenderProvider
struct IExtenderProvider_t3668760454;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.ComponentModel.ISite[]
struct ISiteU5BU5D_t2726343049;
// System.ComponentModel.LicenseContext
struct LicenseContext_t2141136407;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3244362832;
// System.ComponentModel.ReflectPropertyDescriptor
struct ReflectPropertyDescriptor_t3323763468;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t4007109994;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.BooleanSwitch
struct BooleanSwitch_t440064918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Diagnostics.TraceSwitch
struct TraceSwitch_t3738701686;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t1451753063;
// System.Resources.IResourceGroveler
struct IResourceGroveler_t2853541466;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t3305173715;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Version
struct Version_t3456873960;
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
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
#ifndef COMPMODSWITCHES_T2103356148_H
#define COMPMODSWITCHES_T2103356148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CompModSwitches
struct  CompModSwitches_t2103356148  : public RuntimeObject
{
public:

public:
};

struct CompModSwitches_t2103356148_StaticFields
{
public:
	// System.Diagnostics.BooleanSwitch modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CompModSwitches::commonDesignerServices
	BooleanSwitch_t440064918 * ___commonDesignerServices_0;
	// System.Diagnostics.TraceSwitch modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CompModSwitches::eventLog
	TraceSwitch_t3738701686 * ___eventLog_1;

public:
	inline static int32_t get_offset_of_commonDesignerServices_0() { return static_cast<int32_t>(offsetof(CompModSwitches_t2103356148_StaticFields, ___commonDesignerServices_0)); }
	inline BooleanSwitch_t440064918 * get_commonDesignerServices_0() const { return ___commonDesignerServices_0; }
	inline BooleanSwitch_t440064918 ** get_address_of_commonDesignerServices_0() { return &___commonDesignerServices_0; }
	inline void set_commonDesignerServices_0(BooleanSwitch_t440064918 * value)
	{
		___commonDesignerServices_0 = value;
		Il2CppCodeGenWriteBarrier((&___commonDesignerServices_0), value);
	}

	inline static int32_t get_offset_of_eventLog_1() { return static_cast<int32_t>(offsetof(CompModSwitches_t2103356148_StaticFields, ___eventLog_1)); }
	inline TraceSwitch_t3738701686 * get_eventLog_1() const { return ___eventLog_1; }
	inline TraceSwitch_t3738701686 ** get_address_of_eventLog_1() { return &___eventLog_1; }
	inline void set_eventLog_1(TraceSwitch_t3738701686 * value)
	{
		___eventLog_1 = value;
		Il2CppCodeGenWriteBarrier((&___eventLog_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPMODSWITCHES_T2103356148_H
#ifndef CONTAINER_T1808277744_H
#define CONTAINER_T1808277744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container
struct  Container_t1808277744  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite[] System.ComponentModel.Container::sites
	ISiteU5BU5D_t2726343049* ___sites_0;
	// System.Int32 System.ComponentModel.Container::siteCount
	int32_t ___siteCount_1;
	// System.ComponentModel.ComponentCollection System.ComponentModel.Container::components
	ComponentCollection_t1445440302 * ___components_2;
	// System.ComponentModel.ContainerFilterService System.ComponentModel.Container::filter
	ContainerFilterService_t3995528664 * ___filter_3;
	// System.Boolean System.ComponentModel.Container::checkedFilter
	bool ___checkedFilter_4;
	// System.Object System.ComponentModel.Container::syncObj
	RuntimeObject * ___syncObj_5;

public:
	inline static int32_t get_offset_of_sites_0() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___sites_0)); }
	inline ISiteU5BU5D_t2726343049* get_sites_0() const { return ___sites_0; }
	inline ISiteU5BU5D_t2726343049** get_address_of_sites_0() { return &___sites_0; }
	inline void set_sites_0(ISiteU5BU5D_t2726343049* value)
	{
		___sites_0 = value;
		Il2CppCodeGenWriteBarrier((&___sites_0), value);
	}

	inline static int32_t get_offset_of_siteCount_1() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___siteCount_1)); }
	inline int32_t get_siteCount_1() const { return ___siteCount_1; }
	inline int32_t* get_address_of_siteCount_1() { return &___siteCount_1; }
	inline void set_siteCount_1(int32_t value)
	{
		___siteCount_1 = value;
	}

	inline static int32_t get_offset_of_components_2() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___components_2)); }
	inline ComponentCollection_t1445440302 * get_components_2() const { return ___components_2; }
	inline ComponentCollection_t1445440302 ** get_address_of_components_2() { return &___components_2; }
	inline void set_components_2(ComponentCollection_t1445440302 * value)
	{
		___components_2 = value;
		Il2CppCodeGenWriteBarrier((&___components_2), value);
	}

	inline static int32_t get_offset_of_filter_3() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___filter_3)); }
	inline ContainerFilterService_t3995528664 * get_filter_3() const { return ___filter_3; }
	inline ContainerFilterService_t3995528664 ** get_address_of_filter_3() { return &___filter_3; }
	inline void set_filter_3(ContainerFilterService_t3995528664 * value)
	{
		___filter_3 = value;
		Il2CppCodeGenWriteBarrier((&___filter_3), value);
	}

	inline static int32_t get_offset_of_checkedFilter_4() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___checkedFilter_4)); }
	inline bool get_checkedFilter_4() const { return ___checkedFilter_4; }
	inline bool* get_address_of_checkedFilter_4() { return &___checkedFilter_4; }
	inline void set_checkedFilter_4(bool value)
	{
		___checkedFilter_4 = value;
	}

	inline static int32_t get_offset_of_syncObj_5() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___syncObj_5)); }
	inline RuntimeObject * get_syncObj_5() const { return ___syncObj_5; }
	inline RuntimeObject ** get_address_of_syncObj_5() { return &___syncObj_5; }
	inline void set_syncObj_5(RuntimeObject * value)
	{
		___syncObj_5 = value;
		Il2CppCodeGenWriteBarrier((&___syncObj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINER_T1808277744_H
#ifndef SITE_T1830816548_H
#define SITE_T1830816548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container/Site
struct  Site_t1830816548  : public RuntimeObject
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.Container/Site::component
	RuntimeObject* ___component_0;
	// System.ComponentModel.Container System.ComponentModel.Container/Site::container
	Container_t1808277744 * ___container_1;
	// System.String System.ComponentModel.Container/Site::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_component_0() { return static_cast<int32_t>(offsetof(Site_t1830816548, ___component_0)); }
	inline RuntimeObject* get_component_0() const { return ___component_0; }
	inline RuntimeObject** get_address_of_component_0() { return &___component_0; }
	inline void set_component_0(RuntimeObject* value)
	{
		___component_0 = value;
		Il2CppCodeGenWriteBarrier((&___component_0), value);
	}

	inline static int32_t get_offset_of_container_1() { return static_cast<int32_t>(offsetof(Site_t1830816548, ___container_1)); }
	inline Container_t1808277744 * get_container_1() const { return ___container_1; }
	inline Container_t1808277744 ** get_address_of_container_1() { return &___container_1; }
	inline void set_container_1(Container_t1808277744 * value)
	{
		___container_1 = value;
		Il2CppCodeGenWriteBarrier((&___container_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Site_t1830816548, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITE_T1830816548_H
#ifndef CONTAINERFILTERSERVICE_T3995528664_H
#define CONTAINERFILTERSERVICE_T3995528664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ContainerFilterService
struct  ContainerFilterService_t3995528664  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINERFILTERSERVICE_T3995528664_H
#ifndef CULTURECOMPARER_T2410242003_H
#define CULTURECOMPARER_T2410242003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureComparer
struct  CultureComparer_t2410242003  : public RuntimeObject
{
public:
	// System.ComponentModel.CultureInfoConverter System.ComponentModel.CultureInfoConverter/CultureComparer::converter
	CultureInfoConverter_t81550636 * ___converter_0;

public:
	inline static int32_t get_offset_of_converter_0() { return static_cast<int32_t>(offsetof(CultureComparer_t2410242003, ___converter_0)); }
	inline CultureInfoConverter_t81550636 * get_converter_0() const { return ___converter_0; }
	inline CultureInfoConverter_t81550636 ** get_address_of_converter_0() { return &___converter_0; }
	inline void set_converter_0(CultureInfoConverter_t81550636 * value)
	{
		___converter_0 = value;
		Il2CppCodeGenWriteBarrier((&___converter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURECOMPARER_T2410242003_H
#ifndef CULTUREINFOMAPPER_T253318472_H
#define CULTUREINFOMAPPER_T253318472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoMapper
struct  CultureInfoMapper_t253318472  : public RuntimeObject
{
public:

public:
};

struct CultureInfoMapper_t253318472_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CultureInfoConverter/CultureInfoMapper::cultureInfoNameMap
	Dictionary_2_t1632706988 * ___cultureInfoNameMap_0;

public:
	inline static int32_t get_offset_of_cultureInfoNameMap_0() { return static_cast<int32_t>(offsetof(CultureInfoMapper_t253318472_StaticFields, ___cultureInfoNameMap_0)); }
	inline Dictionary_2_t1632706988 * get_cultureInfoNameMap_0() const { return ___cultureInfoNameMap_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_cultureInfoNameMap_0() { return &___cultureInfoNameMap_0; }
	inline void set_cultureInfoNameMap_0(Dictionary_2_t1632706988 * value)
	{
		___cultureInfoNameMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___cultureInfoNameMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOMAPPER_T253318472_H
#ifndef CUSTOMTYPEDESCRIPTOR_T3093649079_H
#define CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t3093649079  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t3093649079, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifndef EVENTDESCRIPTORCOLLECTION_T2278158832_H
#define EVENTDESCRIPTORCOLLECTION_T2278158832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t2278158832  : public RuntimeObject
{
public:
	// System.ComponentModel.EventDescriptor[] System.ComponentModel.EventDescriptorCollection::events
	EventDescriptorU5BU5D_t1482016031* ___events_0;
	// System.String[] System.ComponentModel.EventDescriptorCollection::namedSort
	StringU5BU5D_t1281789340* ___namedSort_1;
	// System.Collections.IComparer System.ComponentModel.EventDescriptorCollection::comparer
	RuntimeObject* ___comparer_2;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::eventsOwned
	bool ___eventsOwned_3;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::needSort
	bool ___needSort_4;
	// System.Int32 System.ComponentModel.EventDescriptorCollection::eventCount
	int32_t ___eventCount_5;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::readOnly
	bool ___readOnly_6;

public:
	inline static int32_t get_offset_of_events_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___events_0)); }
	inline EventDescriptorU5BU5D_t1482016031* get_events_0() const { return ___events_0; }
	inline EventDescriptorU5BU5D_t1482016031** get_address_of_events_0() { return &___events_0; }
	inline void set_events_0(EventDescriptorU5BU5D_t1482016031* value)
	{
		___events_0 = value;
		Il2CppCodeGenWriteBarrier((&___events_0), value);
	}

	inline static int32_t get_offset_of_namedSort_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___namedSort_1)); }
	inline StringU5BU5D_t1281789340* get_namedSort_1() const { return ___namedSort_1; }
	inline StringU5BU5D_t1281789340** get_address_of_namedSort_1() { return &___namedSort_1; }
	inline void set_namedSort_1(StringU5BU5D_t1281789340* value)
	{
		___namedSort_1 = value;
		Il2CppCodeGenWriteBarrier((&___namedSort_1), value);
	}

	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___comparer_2)); }
	inline RuntimeObject* get_comparer_2() const { return ___comparer_2; }
	inline RuntimeObject** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(RuntimeObject* value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}

	inline static int32_t get_offset_of_eventsOwned_3() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___eventsOwned_3)); }
	inline bool get_eventsOwned_3() const { return ___eventsOwned_3; }
	inline bool* get_address_of_eventsOwned_3() { return &___eventsOwned_3; }
	inline void set_eventsOwned_3(bool value)
	{
		___eventsOwned_3 = value;
	}

	inline static int32_t get_offset_of_needSort_4() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___needSort_4)); }
	inline bool get_needSort_4() const { return ___needSort_4; }
	inline bool* get_address_of_needSort_4() { return &___needSort_4; }
	inline void set_needSort_4(bool value)
	{
		___needSort_4 = value;
	}

	inline static int32_t get_offset_of_eventCount_5() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___eventCount_5)); }
	inline int32_t get_eventCount_5() const { return ___eventCount_5; }
	inline int32_t* get_address_of_eventCount_5() { return &___eventCount_5; }
	inline void set_eventCount_5(int32_t value)
	{
		___eventCount_5 = value;
	}

	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}
};

struct EventDescriptorCollection_t2278158832_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t2278158832 * ___Empty_7;

public:
	inline static int32_t get_offset_of_Empty_7() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832_StaticFields, ___Empty_7)); }
	inline EventDescriptorCollection_t2278158832 * get_Empty_7() const { return ___Empty_7; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of_Empty_7() { return &___Empty_7; }
	inline void set_Empty_7(EventDescriptorCollection_t2278158832 * value)
	{
		___Empty_7 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T2278158832_H
#ifndef EVENTHANDLERLIST_T1108123056_H
#define EVENTHANDLERLIST_T1108123056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1108123056  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::head
	ListEntry_t2424989506 * ___head_0;
	// System.ComponentModel.Component System.ComponentModel.EventHandlerList::parent
	Component_t3620823400 * ___parent_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1108123056, ___head_0)); }
	inline ListEntry_t2424989506 * get_head_0() const { return ___head_0; }
	inline ListEntry_t2424989506 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(ListEntry_t2424989506 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1108123056, ___parent_1)); }
	inline Component_t3620823400 * get_parent_1() const { return ___parent_1; }
	inline Component_t3620823400 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Component_t3620823400 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1108123056_H
#ifndef LISTENTRY_T2424989506_H
#define LISTENTRY_T2424989506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList/ListEntry
struct  ListEntry_t2424989506  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList/ListEntry::next
	ListEntry_t2424989506 * ___next_0;
	// System.Object System.ComponentModel.EventHandlerList/ListEntry::key
	RuntimeObject * ___key_1;
	// System.Delegate System.ComponentModel.EventHandlerList/ListEntry::handler
	Delegate_t1188392813 * ___handler_2;

public:
	inline static int32_t get_offset_of_next_0() { return static_cast<int32_t>(offsetof(ListEntry_t2424989506, ___next_0)); }
	inline ListEntry_t2424989506 * get_next_0() const { return ___next_0; }
	inline ListEntry_t2424989506 ** get_address_of_next_0() { return &___next_0; }
	inline void set_next_0(ListEntry_t2424989506 * value)
	{
		___next_0 = value;
		Il2CppCodeGenWriteBarrier((&___next_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(ListEntry_t2424989506, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_handler_2() { return static_cast<int32_t>(offsetof(ListEntry_t2424989506, ___handler_2)); }
	inline Delegate_t1188392813 * get_handler_2() const { return ___handler_2; }
	inline Delegate_t1188392813 ** get_address_of_handler_2() { return &___handler_2; }
	inline void set_handler_2(Delegate_t1188392813 * value)
	{
		___handler_2 = value;
		Il2CppCodeGenWriteBarrier((&___handler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T2424989506_H
#ifndef INSTANCECREATIONEDITOR_T238900532_H
#define INSTANCECREATIONEDITOR_T238900532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstanceCreationEditor
struct  InstanceCreationEditor_t238900532  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCECREATIONEDITOR_T238900532_H
#ifndef INTSECURITY_T1973073266_H
#define INTSECURITY_T1973073266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.IntSecurity
struct  IntSecurity_t1973073266  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTSECURITY_T1973073266_H
#ifndef LICENSE_T2258946041_H
#define LICENSE_T2258946041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.License
struct  License_t2258946041  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSE_T2258946041_H
#ifndef LICENSECONTEXT_T2141136407_H
#define LICENSECONTEXT_T2141136407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t2141136407  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T2141136407_H
#ifndef LICENSEMANAGER_T19983147_H
#define LICENSEMANAGER_T19983147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t19983147  : public RuntimeObject
{
public:

public:
};

struct LicenseManager_t19983147_StaticFields
{
public:
	// System.Object System.ComponentModel.LicenseManager::selfLock
	RuntimeObject * ___selfLock_0;
	// System.ComponentModel.LicenseContext modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.LicenseManager::context
	LicenseContext_t2141136407 * ___context_1;
	// System.Object System.ComponentModel.LicenseManager::contextLockHolder
	RuntimeObject * ___contextLockHolder_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.LicenseManager::providers
	Hashtable_t1853889766 * ___providers_3;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.LicenseManager::providerInstances
	Hashtable_t1853889766 * ___providerInstances_4;
	// System.Object System.ComponentModel.LicenseManager::internalSyncObject
	RuntimeObject * ___internalSyncObject_5;

public:
	inline static int32_t get_offset_of_selfLock_0() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___selfLock_0)); }
	inline RuntimeObject * get_selfLock_0() const { return ___selfLock_0; }
	inline RuntimeObject ** get_address_of_selfLock_0() { return &___selfLock_0; }
	inline void set_selfLock_0(RuntimeObject * value)
	{
		___selfLock_0 = value;
		Il2CppCodeGenWriteBarrier((&___selfLock_0), value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___context_1)); }
	inline LicenseContext_t2141136407 * get_context_1() const { return ___context_1; }
	inline LicenseContext_t2141136407 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(LicenseContext_t2141136407 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_contextLockHolder_2() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___contextLockHolder_2)); }
	inline RuntimeObject * get_contextLockHolder_2() const { return ___contextLockHolder_2; }
	inline RuntimeObject ** get_address_of_contextLockHolder_2() { return &___contextLockHolder_2; }
	inline void set_contextLockHolder_2(RuntimeObject * value)
	{
		___contextLockHolder_2 = value;
		Il2CppCodeGenWriteBarrier((&___contextLockHolder_2), value);
	}

	inline static int32_t get_offset_of_providers_3() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___providers_3)); }
	inline Hashtable_t1853889766 * get_providers_3() const { return ___providers_3; }
	inline Hashtable_t1853889766 ** get_address_of_providers_3() { return &___providers_3; }
	inline void set_providers_3(Hashtable_t1853889766 * value)
	{
		___providers_3 = value;
		Il2CppCodeGenWriteBarrier((&___providers_3), value);
	}

	inline static int32_t get_offset_of_providerInstances_4() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___providerInstances_4)); }
	inline Hashtable_t1853889766 * get_providerInstances_4() const { return ___providerInstances_4; }
	inline Hashtable_t1853889766 ** get_address_of_providerInstances_4() { return &___providerInstances_4; }
	inline void set_providerInstances_4(Hashtable_t1853889766 * value)
	{
		___providerInstances_4 = value;
		Il2CppCodeGenWriteBarrier((&___providerInstances_4), value);
	}

	inline static int32_t get_offset_of_internalSyncObject_5() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___internalSyncObject_5)); }
	inline RuntimeObject * get_internalSyncObject_5() const { return ___internalSyncObject_5; }
	inline RuntimeObject ** get_address_of_internalSyncObject_5() { return &___internalSyncObject_5; }
	inline void set_internalSyncObject_5(RuntimeObject * value)
	{
		___internalSyncObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalSyncObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEMANAGER_T19983147_H
#ifndef LICENSEINTEROPHELPER_T4104616646_H
#define LICENSEINTEROPHELPER_T4104616646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager/LicenseInteropHelper
struct  LicenseInteropHelper_t4104616646  : public RuntimeObject
{
public:
	// System.ComponentModel.Design.DesigntimeLicenseContext System.ComponentModel.LicenseManager/LicenseInteropHelper::helperContext
	DesigntimeLicenseContext_t2427359527 * ___helperContext_4;
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager/LicenseInteropHelper::savedLicenseContext
	LicenseContext_t2141136407 * ___savedLicenseContext_5;
	// System.Type System.ComponentModel.LicenseManager/LicenseInteropHelper::savedType
	Type_t * ___savedType_6;

public:
	inline static int32_t get_offset_of_helperContext_4() { return static_cast<int32_t>(offsetof(LicenseInteropHelper_t4104616646, ___helperContext_4)); }
	inline DesigntimeLicenseContext_t2427359527 * get_helperContext_4() const { return ___helperContext_4; }
	inline DesigntimeLicenseContext_t2427359527 ** get_address_of_helperContext_4() { return &___helperContext_4; }
	inline void set_helperContext_4(DesigntimeLicenseContext_t2427359527 * value)
	{
		___helperContext_4 = value;
		Il2CppCodeGenWriteBarrier((&___helperContext_4), value);
	}

	inline static int32_t get_offset_of_savedLicenseContext_5() { return static_cast<int32_t>(offsetof(LicenseInteropHelper_t4104616646, ___savedLicenseContext_5)); }
	inline LicenseContext_t2141136407 * get_savedLicenseContext_5() const { return ___savedLicenseContext_5; }
	inline LicenseContext_t2141136407 ** get_address_of_savedLicenseContext_5() { return &___savedLicenseContext_5; }
	inline void set_savedLicenseContext_5(LicenseContext_t2141136407 * value)
	{
		___savedLicenseContext_5 = value;
		Il2CppCodeGenWriteBarrier((&___savedLicenseContext_5), value);
	}

	inline static int32_t get_offset_of_savedType_6() { return static_cast<int32_t>(offsetof(LicenseInteropHelper_t4104616646, ___savedType_6)); }
	inline Type_t * get_savedType_6() const { return ___savedType_6; }
	inline Type_t ** get_address_of_savedType_6() { return &___savedType_6; }
	inline void set_savedType_6(Type_t * value)
	{
		___savedType_6 = value;
		Il2CppCodeGenWriteBarrier((&___savedType_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEINTEROPHELPER_T4104616646_H
#ifndef LICENSEPROVIDER_T1830579869_H
#define LICENSEPROVIDER_T1830579869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProvider
struct  LicenseProvider_t1830579869  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDER_T1830579869_H
#ifndef MEMBERDESCRIPTOR_T3815403747_H
#define MEMBERDESCRIPTOR_T3815403747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3815403747  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.String System.ComponentModel.MemberDescriptor::displayName
	String_t* ___displayName_1;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_2;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_t4221220734 * ___attributeCollection_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t1575011174* ___attributes_4;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t1575011174* ___originalAttributes_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_6;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_7;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_8;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_9;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_10;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_11;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_1), value);
	}

	inline static int32_t get_offset_of_nameHash_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___nameHash_2)); }
	inline int32_t get_nameHash_2() const { return ___nameHash_2; }
	inline int32_t* get_address_of_nameHash_2() { return &___nameHash_2; }
	inline void set_nameHash_2(int32_t value)
	{
		___nameHash_2 = value;
	}

	inline static int32_t get_offset_of_attributeCollection_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attributeCollection_3)); }
	inline AttributeCollection_t4221220734 * get_attributeCollection_3() const { return ___attributeCollection_3; }
	inline AttributeCollection_t4221220734 ** get_address_of_attributeCollection_3() { return &___attributeCollection_3; }
	inline void set_attributeCollection_3(AttributeCollection_t4221220734 * value)
	{
		___attributeCollection_3 = value;
		Il2CppCodeGenWriteBarrier((&___attributeCollection_3), value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attributes_4)); }
	inline AttributeU5BU5D_t1575011174* get_attributes_4() const { return ___attributes_4; }
	inline AttributeU5BU5D_t1575011174** get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(AttributeU5BU5D_t1575011174* value)
	{
		___attributes_4 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_4), value);
	}

	inline static int32_t get_offset_of_originalAttributes_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___originalAttributes_5)); }
	inline AttributeU5BU5D_t1575011174* get_originalAttributes_5() const { return ___originalAttributes_5; }
	inline AttributeU5BU5D_t1575011174** get_address_of_originalAttributes_5() { return &___originalAttributes_5; }
	inline void set_originalAttributes_5(AttributeU5BU5D_t1575011174* value)
	{
		___originalAttributes_5 = value;
		Il2CppCodeGenWriteBarrier((&___originalAttributes_5), value);
	}

	inline static int32_t get_offset_of_attributesFiltered_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attributesFiltered_6)); }
	inline bool get_attributesFiltered_6() const { return ___attributesFiltered_6; }
	inline bool* get_address_of_attributesFiltered_6() { return &___attributesFiltered_6; }
	inline void set_attributesFiltered_6(bool value)
	{
		___attributesFiltered_6 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attributesFilled_7)); }
	inline bool get_attributesFilled_7() const { return ___attributesFilled_7; }
	inline bool* get_address_of_attributesFilled_7() { return &___attributesFilled_7; }
	inline void set_attributesFilled_7(bool value)
	{
		___attributesFilled_7 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___metadataVersion_8)); }
	inline int32_t get_metadataVersion_8() const { return ___metadataVersion_8; }
	inline int32_t* get_address_of_metadataVersion_8() { return &___metadataVersion_8; }
	inline void set_metadataVersion_8(int32_t value)
	{
		___metadataVersion_8 = value;
	}

	inline static int32_t get_offset_of_category_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___category_9)); }
	inline String_t* get_category_9() const { return ___category_9; }
	inline String_t** get_address_of_category_9() { return &___category_9; }
	inline void set_category_9(String_t* value)
	{
		___category_9 = value;
		Il2CppCodeGenWriteBarrier((&___category_9), value);
	}

	inline static int32_t get_offset_of_description_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___description_10)); }
	inline String_t* get_description_10() const { return ___description_10; }
	inline String_t** get_address_of_description_10() { return &___description_10; }
	inline void set_description_10(String_t* value)
	{
		___description_10 = value;
		Il2CppCodeGenWriteBarrier((&___description_10), value);
	}

	inline static int32_t get_offset_of_lockCookie_11() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___lockCookie_11)); }
	inline RuntimeObject * get_lockCookie_11() const { return ___lockCookie_11; }
	inline RuntimeObject ** get_address_of_lockCookie_11() { return &___lockCookie_11; }
	inline void set_lockCookie_11(RuntimeObject * value)
	{
		___lockCookie_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockCookie_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3815403747_H
#ifndef TYPEDESCRIPTIONPROVIDER_T3232077895_H
#define TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t3232077895  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t3232077895 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t4007109994 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3232077895, ____parent_0)); }
	inline TypeDescriptionProvider_t3232077895 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t3232077895 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t3232077895 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3232077895, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t4007109994 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t4007109994 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t4007109994 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&____emptyDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
#ifndef CANCELEVENTARGS_T1846056344_H
#define CANCELEVENTARGS_T1846056344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t1846056344  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t1846056344, ___cancel_1)); }
	inline bool get_cancel_1() const { return ___cancel_1; }
	inline bool* get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(bool value)
	{
		___cancel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELEVENTARGS_T1846056344_H
#ifndef COMPLEXBINDINGPROPERTIESATTRIBUTE_T270984817_H
#define COMPLEXBINDINGPROPERTIESATTRIBUTE_T270984817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComplexBindingPropertiesAttribute
struct  ComplexBindingPropertiesAttribute_t270984817  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.ComplexBindingPropertiesAttribute::dataSource
	String_t* ___dataSource_0;
	// System.String System.ComponentModel.ComplexBindingPropertiesAttribute::dataMember
	String_t* ___dataMember_1;

public:
	inline static int32_t get_offset_of_dataSource_0() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t270984817, ___dataSource_0)); }
	inline String_t* get_dataSource_0() const { return ___dataSource_0; }
	inline String_t** get_address_of_dataSource_0() { return &___dataSource_0; }
	inline void set_dataSource_0(String_t* value)
	{
		___dataSource_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSource_0), value);
	}

	inline static int32_t get_offset_of_dataMember_1() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t270984817, ___dataMember_1)); }
	inline String_t* get_dataMember_1() const { return ___dataMember_1; }
	inline String_t** get_address_of_dataMember_1() { return &___dataMember_1; }
	inline void set_dataMember_1(String_t* value)
	{
		___dataMember_1 = value;
		Il2CppCodeGenWriteBarrier((&___dataMember_1), value);
	}
};

struct ComplexBindingPropertiesAttribute_t270984817_StaticFields
{
public:
	// System.ComponentModel.ComplexBindingPropertiesAttribute System.ComponentModel.ComplexBindingPropertiesAttribute::Default
	ComplexBindingPropertiesAttribute_t270984817 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t270984817_StaticFields, ___Default_2)); }
	inline ComplexBindingPropertiesAttribute_t270984817 * get_Default_2() const { return ___Default_2; }
	inline ComplexBindingPropertiesAttribute_t270984817 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(ComplexBindingPropertiesAttribute_t270984817 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPLEXBINDINGPROPERTIESATTRIBUTE_T270984817_H
#ifndef COMPONENT_T3620823400_H
#define COMPONENT_T3620823400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3620823400  : public MarshalByRefObject_t2760389100
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t1108123056 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((&___site_2), value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___events_3)); }
	inline EventHandlerList_t1108123056 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t1108123056 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t1108123056 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((&___events_3), value);
	}
};

struct Component_t3620823400_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t3620823400_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventDisposed_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3620823400_H
#ifndef COMPONENTCOLLECTION_T1445440302_H
#define COMPONENTCOLLECTION_T1445440302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1445440302  : public ReadOnlyCollectionBase_t1836743899
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1445440302_H
#ifndef DATAERRORSCHANGEDEVENTARGS_T2405211543_H
#define DATAERRORSCHANGEDEVENTARGS_T2405211543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataErrorsChangedEventArgs
struct  DataErrorsChangedEventArgs_t2405211543  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.DataErrorsChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(DataErrorsChangedEventArgs_t2405211543, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAERRORSCHANGEDEVENTARGS_T2405211543_H
#ifndef DATAOBJECTATTRIBUTE_T2230598060_H
#define DATAOBJECTATTRIBUTE_T2230598060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectAttribute
struct  DataObjectAttribute_t2230598060  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DataObjectAttribute::_isDataObject
	bool ____isDataObject_3;

public:
	inline static int32_t get_offset_of__isDataObject_3() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t2230598060, ____isDataObject_3)); }
	inline bool get__isDataObject_3() const { return ____isDataObject_3; }
	inline bool* get_address_of__isDataObject_3() { return &____isDataObject_3; }
	inline void set__isDataObject_3(bool value)
	{
		____isDataObject_3 = value;
	}
};

struct DataObjectAttribute_t2230598060_StaticFields
{
public:
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::DataObject
	DataObjectAttribute_t2230598060 * ___DataObject_0;
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::NonDataObject
	DataObjectAttribute_t2230598060 * ___NonDataObject_1;
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::Default
	DataObjectAttribute_t2230598060 * ___Default_2;

public:
	inline static int32_t get_offset_of_DataObject_0() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t2230598060_StaticFields, ___DataObject_0)); }
	inline DataObjectAttribute_t2230598060 * get_DataObject_0() const { return ___DataObject_0; }
	inline DataObjectAttribute_t2230598060 ** get_address_of_DataObject_0() { return &___DataObject_0; }
	inline void set_DataObject_0(DataObjectAttribute_t2230598060 * value)
	{
		___DataObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___DataObject_0), value);
	}

	inline static int32_t get_offset_of_NonDataObject_1() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t2230598060_StaticFields, ___NonDataObject_1)); }
	inline DataObjectAttribute_t2230598060 * get_NonDataObject_1() const { return ___NonDataObject_1; }
	inline DataObjectAttribute_t2230598060 ** get_address_of_NonDataObject_1() { return &___NonDataObject_1; }
	inline void set_NonDataObject_1(DataObjectAttribute_t2230598060 * value)
	{
		___NonDataObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonDataObject_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t2230598060_StaticFields, ___Default_2)); }
	inline DataObjectAttribute_t2230598060 * get_Default_2() const { return ___Default_2; }
	inline DataObjectAttribute_t2230598060 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(DataObjectAttribute_t2230598060 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAOBJECTATTRIBUTE_T2230598060_H
#ifndef DATAOBJECTFIELDATTRIBUTE_T1968002332_H
#define DATAOBJECTFIELDATTRIBUTE_T1968002332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectFieldAttribute
struct  DataObjectFieldAttribute_t1968002332  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::_primaryKey
	bool ____primaryKey_0;
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::_isIdentity
	bool ____isIdentity_1;
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::_isNullable
	bool ____isNullable_2;
	// System.Int32 System.ComponentModel.DataObjectFieldAttribute::_length
	int32_t ____length_3;

public:
	inline static int32_t get_offset_of__primaryKey_0() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t1968002332, ____primaryKey_0)); }
	inline bool get__primaryKey_0() const { return ____primaryKey_0; }
	inline bool* get_address_of__primaryKey_0() { return &____primaryKey_0; }
	inline void set__primaryKey_0(bool value)
	{
		____primaryKey_0 = value;
	}

	inline static int32_t get_offset_of__isIdentity_1() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t1968002332, ____isIdentity_1)); }
	inline bool get__isIdentity_1() const { return ____isIdentity_1; }
	inline bool* get_address_of__isIdentity_1() { return &____isIdentity_1; }
	inline void set__isIdentity_1(bool value)
	{
		____isIdentity_1 = value;
	}

	inline static int32_t get_offset_of__isNullable_2() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t1968002332, ____isNullable_2)); }
	inline bool get__isNullable_2() const { return ____isNullable_2; }
	inline bool* get_address_of__isNullable_2() { return &____isNullable_2; }
	inline void set__isNullable_2(bool value)
	{
		____isNullable_2 = value;
	}

	inline static int32_t get_offset_of__length_3() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t1968002332, ____length_3)); }
	inline int32_t get__length_3() const { return ____length_3; }
	inline int32_t* get_address_of__length_3() { return &____length_3; }
	inline void set__length_3(int32_t value)
	{
		____length_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAOBJECTFIELDATTRIBUTE_T1968002332_H
#ifndef DEFAULTBINDINGPROPERTYATTRIBUTE_T2784669275_H
#define DEFAULTBINDINGPROPERTYATTRIBUTE_T2784669275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultBindingPropertyAttribute
struct  DefaultBindingPropertyAttribute_t2784669275  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultBindingPropertyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DefaultBindingPropertyAttribute_t2784669275, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

struct DefaultBindingPropertyAttribute_t2784669275_StaticFields
{
public:
	// System.ComponentModel.DefaultBindingPropertyAttribute System.ComponentModel.DefaultBindingPropertyAttribute::Default
	DefaultBindingPropertyAttribute_t2784669275 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultBindingPropertyAttribute_t2784669275_StaticFields, ___Default_1)); }
	inline DefaultBindingPropertyAttribute_t2784669275 * get_Default_1() const { return ___Default_1; }
	inline DefaultBindingPropertyAttribute_t2784669275 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultBindingPropertyAttribute_t2784669275 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTBINDINGPROPERTYATTRIBUTE_T2784669275_H
#ifndef DEFAULTEVENTATTRIBUTE_T3124666540_H
#define DEFAULTEVENTATTRIBUTE_T3124666540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3124666540  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3124666540, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

struct DefaultEventAttribute_t3124666540_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3124666540 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3124666540_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3124666540 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3124666540 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3124666540 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3124666540_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#define DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1952442862  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1952442862, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

struct DefaultPropertyAttribute_t1952442862_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1952442862 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1952442862_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1952442862 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1952442862 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1952442862 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#ifndef DEFAULTVALUEATTRIBUTE_T587583663_H
#define DEFAULTVALUEATTRIBUTE_T587583663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t587583663  : public Attribute_t861562559
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::value
	RuntimeObject * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t587583663, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T587583663_H
#ifndef DELEGATINGTYPEDESCRIPTIONPROVIDER_T4223743593_H
#define DELEGATINGTYPEDESCRIPTIONPROVIDER_T4223743593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DelegatingTypeDescriptionProvider
struct  DelegatingTypeDescriptionProvider_t4223743593  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.Type System.ComponentModel.DelegatingTypeDescriptionProvider::_type
	Type_t * ____type_2;

public:
	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(DelegatingTypeDescriptionProvider_t4223743593, ____type_2)); }
	inline Type_t * get__type_2() const { return ____type_2; }
	inline Type_t ** get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(Type_t * value)
	{
		____type_2 = value;
		Il2CppCodeGenWriteBarrier((&____type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATINGTYPEDESCRIPTIONPROVIDER_T4223743593_H
#ifndef DESCRIPTIONATTRIBUTE_T874390736_H
#define DESCRIPTIONATTRIBUTE_T874390736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t874390736  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}
};

struct DescriptionAttribute_t874390736_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t874390736 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_t874390736 * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_t874390736 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_t874390736 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T874390736_H
#ifndef DESIGNONLYATTRIBUTE_T1017827538_H
#define DESIGNONLYATTRIBUTE_T1017827538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t1017827538  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::isDesignOnly
	bool ___isDesignOnly_0;

public:
	inline static int32_t get_offset_of_isDesignOnly_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538, ___isDesignOnly_0)); }
	inline bool get_isDesignOnly_0() const { return ___isDesignOnly_0; }
	inline bool* get_address_of_isDesignOnly_0() { return &___isDesignOnly_0; }
	inline void set_isDesignOnly_0(bool value)
	{
		___isDesignOnly_0 = value;
	}
};

struct DesignOnlyAttribute_t1017827538_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t1017827538 * ___Yes_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t1017827538 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t1017827538 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___Yes_1)); }
	inline DesignOnlyAttribute_t1017827538 * get_Yes_1() const { return ___Yes_1; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(DesignOnlyAttribute_t1017827538 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t1017827538 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t1017827538 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___Default_3)); }
	inline DesignOnlyAttribute_t1017827538 * get_Default_3() const { return ___Default_3; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignOnlyAttribute_t1017827538 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T1017827538_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t2841844458  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t2841844458_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t2841844458 * ___Yes_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t2841844458 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t2841844458 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___Yes_1)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_Yes_1() const { return ___Yes_1; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___Default_3)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_Default_3() const { return ___Default_3; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#ifndef DESIGNERATTRIBUTE_T2079716647_H
#define DESIGNERATTRIBUTE_T2079716647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2079716647  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DesignerAttribute::designerTypeName
	String_t* ___designerTypeName_0;
	// System.String System.ComponentModel.DesignerAttribute::designerBaseTypeName
	String_t* ___designerBaseTypeName_1;
	// System.String System.ComponentModel.DesignerAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_designerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___designerTypeName_0)); }
	inline String_t* get_designerTypeName_0() const { return ___designerTypeName_0; }
	inline String_t** get_address_of_designerTypeName_0() { return &___designerTypeName_0; }
	inline void set_designerTypeName_0(String_t* value)
	{
		___designerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___designerTypeName_0), value);
	}

	inline static int32_t get_offset_of_designerBaseTypeName_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___designerBaseTypeName_1)); }
	inline String_t* get_designerBaseTypeName_1() const { return ___designerBaseTypeName_1; }
	inline String_t** get_address_of_designerBaseTypeName_1() { return &___designerBaseTypeName_1; }
	inline void set_designerBaseTypeName_1(String_t* value)
	{
		___designerBaseTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___designerBaseTypeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T2079716647_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#define DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t2912925731  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;
	// System.String System.ComponentModel.DesignerCategoryAttribute::typeId
	String_t* ___typeId_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_typeId_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731, ___typeId_1)); }
	inline String_t* get_typeId_1() const { return ___typeId_1; }
	inline String_t** get_address_of_typeId_1() { return &___typeId_1; }
	inline void set_typeId_1(String_t* value)
	{
		___typeId_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_1), value);
	}
};

struct DesignerCategoryAttribute_t2912925731_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t2912925731 * ___Component_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t2912925731 * ___Default_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t2912925731 * ___Form_4;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t2912925731 * ___Generic_5;

public:
	inline static int32_t get_offset_of_Component_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Component_2)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Component_2() const { return ___Component_2; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Component_2() { return &___Component_2; }
	inline void set_Component_2(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Component_2 = value;
		Il2CppCodeGenWriteBarrier((&___Component_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Default_3)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Default_3() const { return ___Default_3; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}

	inline static int32_t get_offset_of_Form_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Form_4)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Form_4() const { return ___Form_4; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Form_4() { return &___Form_4; }
	inline void set_Form_4(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Form_4 = value;
		Il2CppCodeGenWriteBarrier((&___Form_4), value);
	}

	inline static int32_t get_offset_of_Generic_5() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Generic_5)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Generic_5() const { return ___Generic_5; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Generic_5() { return &___Generic_5; }
	inline void set_Generic_5(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Generic_5 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#ifndef DISPLAYNAMEATTRIBUTE_T2074055386_H
#define DISPLAYNAMEATTRIBUTE_T2074055386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t2074055386  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::_displayName
	String_t* ____displayName_1;

public:
	inline static int32_t get_offset_of__displayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t2074055386, ____displayName_1)); }
	inline String_t* get__displayName_1() const { return ____displayName_1; }
	inline String_t** get_address_of__displayName_1() { return &____displayName_1; }
	inline void set__displayName_1(String_t* value)
	{
		____displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&____displayName_1), value);
	}
};

struct DisplayNameAttribute_t2074055386_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t2074055386 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t2074055386_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t2074055386 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t2074055386 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t2074055386 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T2074055386_H
#ifndef EDITORATTRIBUTE_T1332199665_H
#define EDITORATTRIBUTE_T1332199665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t1332199665  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.EditorAttribute::baseTypeName
	String_t* ___baseTypeName_0;
	// System.String System.ComponentModel.EditorAttribute::typeName
	String_t* ___typeName_1;
	// System.String System.ComponentModel.EditorAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_baseTypeName_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___baseTypeName_0)); }
	inline String_t* get_baseTypeName_0() const { return ___baseTypeName_0; }
	inline String_t** get_address_of_baseTypeName_0() { return &___baseTypeName_0; }
	inline void set_baseTypeName_0(String_t* value)
	{
		___baseTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseTypeName_0), value);
	}

	inline static int32_t get_offset_of_typeName_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___typeName_1)); }
	inline String_t* get_typeName_1() const { return ___typeName_1; }
	inline String_t** get_address_of_typeName_1() { return &___typeName_1; }
	inline void set_typeName_1(String_t* value)
	{
		___typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T1332199665_H
#ifndef EVENTDESCRIPTOR_T88602298_H
#define EVENTDESCRIPTOR_T88602298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t88602298  : public MemberDescriptor_t3815403747
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T88602298_H
#ifndef EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3771163592_H
#define EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3771163592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExtenderProvidedPropertyAttribute
struct  ExtenderProvidedPropertyAttribute_t3771163592  : public Attribute_t861562559
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ExtenderProvidedPropertyAttribute::extenderProperty
	PropertyDescriptor_t3244362832 * ___extenderProperty_0;
	// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::provider
	RuntimeObject* ___provider_1;
	// System.Type System.ComponentModel.ExtenderProvidedPropertyAttribute::receiverType
	Type_t * ___receiverType_2;

public:
	inline static int32_t get_offset_of_extenderProperty_0() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3771163592, ___extenderProperty_0)); }
	inline PropertyDescriptor_t3244362832 * get_extenderProperty_0() const { return ___extenderProperty_0; }
	inline PropertyDescriptor_t3244362832 ** get_address_of_extenderProperty_0() { return &___extenderProperty_0; }
	inline void set_extenderProperty_0(PropertyDescriptor_t3244362832 * value)
	{
		___extenderProperty_0 = value;
		Il2CppCodeGenWriteBarrier((&___extenderProperty_0), value);
	}

	inline static int32_t get_offset_of_provider_1() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3771163592, ___provider_1)); }
	inline RuntimeObject* get_provider_1() const { return ___provider_1; }
	inline RuntimeObject** get_address_of_provider_1() { return &___provider_1; }
	inline void set_provider_1(RuntimeObject* value)
	{
		___provider_1 = value;
		Il2CppCodeGenWriteBarrier((&___provider_1), value);
	}

	inline static int32_t get_offset_of_receiverType_2() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3771163592, ___receiverType_2)); }
	inline Type_t * get_receiverType_2() const { return ___receiverType_2; }
	inline Type_t ** get_address_of_receiverType_2() { return &___receiverType_2; }
	inline void set_receiverType_2(Type_t * value)
	{
		___receiverType_2 = value;
		Il2CppCodeGenWriteBarrier((&___receiverType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3771163592_H
#ifndef HANDLEDEVENTARGS_T3639267452_H
#define HANDLEDEVENTARGS_T3639267452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.HandledEventArgs
struct  HandledEventArgs_t3639267452  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.ComponentModel.HandledEventArgs::handled
	bool ___handled_1;

public:
	inline static int32_t get_offset_of_handled_1() { return static_cast<int32_t>(offsetof(HandledEventArgs_t3639267452, ___handled_1)); }
	inline bool get_handled_1() const { return ___handled_1; }
	inline bool* get_address_of_handled_1() { return &___handled_1; }
	inline void set_handled_1(bool value)
	{
		___handled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEDEVENTARGS_T3639267452_H
#ifndef IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#define IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ImmutableObjectAttribute
struct  ImmutableObjectAttribute_t2959712128  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ImmutableObjectAttribute::immutable
	bool ___immutable_3;

public:
	inline static int32_t get_offset_of_immutable_3() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128, ___immutable_3)); }
	inline bool get_immutable_3() const { return ___immutable_3; }
	inline bool* get_address_of_immutable_3() { return &___immutable_3; }
	inline void set_immutable_3(bool value)
	{
		___immutable_3 = value;
	}
};

struct ImmutableObjectAttribute_t2959712128_StaticFields
{
public:
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Yes
	ImmutableObjectAttribute_t2959712128 * ___Yes_0;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::No
	ImmutableObjectAttribute_t2959712128 * ___No_1;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Default
	ImmutableObjectAttribute_t2959712128 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___Yes_0)); }
	inline ImmutableObjectAttribute_t2959712128 * get_Yes_0() const { return ___Yes_0; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(ImmutableObjectAttribute_t2959712128 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___No_1)); }
	inline ImmutableObjectAttribute_t2959712128 * get_No_1() const { return ___No_1; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ImmutableObjectAttribute_t2959712128 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___Default_2)); }
	inline ImmutableObjectAttribute_t2959712128 * get_Default_2() const { return ___Default_2; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(ImmutableObjectAttribute_t2959712128 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#ifndef INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#define INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InitializationEventAttribute
struct  InitializationEventAttribute_t1076550734  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.InitializationEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(InitializationEventAttribute_t1076550734, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#ifndef INSTALLERTYPEATTRIBUTE_T3233088727_H
#define INSTALLERTYPEATTRIBUTE_T3233088727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstallerTypeAttribute
struct  InstallerTypeAttribute_t3233088727  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.InstallerTypeAttribute::_typeName
	String_t* ____typeName_0;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(InstallerTypeAttribute_t3233088727, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTALLERTYPEATTRIBUTE_T3233088727_H
#ifndef LICFILELICENSEPROVIDER_T3520472243_H
#define LICFILELICENSEPROVIDER_T3520472243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider
struct  LicFileLicenseProvider_t3520472243  : public LicenseProvider_t1830579869
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSEPROVIDER_T3520472243_H
#ifndef LICFILELICENSE_T2279240837_H
#define LICFILELICENSE_T2279240837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider/LicFileLicense
struct  LicFileLicense_t2279240837  : public License_t2258946041
{
public:
	// System.String System.ComponentModel.LicFileLicenseProvider/LicFileLicense::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t2279240837, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSE_T2279240837_H
#ifndef PROPERTYDESCRIPTOR_T3244362832_H
#define PROPERTYDESCRIPTOR_T3244362832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3244362832  : public MemberDescriptor_t3815403747
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2249118273 * ___converter_12;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::valueChangedHandlers
	Hashtable_t1853889766 * ___valueChangedHandlers_13;
	// System.Object[] System.ComponentModel.PropertyDescriptor::editors
	ObjectU5BU5D_t2843939325* ___editors_14;
	// System.Type[] System.ComponentModel.PropertyDescriptor::editorTypes
	TypeU5BU5D_t3940880105* ___editorTypes_15;
	// System.Int32 System.ComponentModel.PropertyDescriptor::editorCount
	int32_t ___editorCount_16;

public:
	inline static int32_t get_offset_of_converter_12() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___converter_12)); }
	inline TypeConverter_t2249118273 * get_converter_12() const { return ___converter_12; }
	inline TypeConverter_t2249118273 ** get_address_of_converter_12() { return &___converter_12; }
	inline void set_converter_12(TypeConverter_t2249118273 * value)
	{
		___converter_12 = value;
		Il2CppCodeGenWriteBarrier((&___converter_12), value);
	}

	inline static int32_t get_offset_of_valueChangedHandlers_13() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___valueChangedHandlers_13)); }
	inline Hashtable_t1853889766 * get_valueChangedHandlers_13() const { return ___valueChangedHandlers_13; }
	inline Hashtable_t1853889766 ** get_address_of_valueChangedHandlers_13() { return &___valueChangedHandlers_13; }
	inline void set_valueChangedHandlers_13(Hashtable_t1853889766 * value)
	{
		___valueChangedHandlers_13 = value;
		Il2CppCodeGenWriteBarrier((&___valueChangedHandlers_13), value);
	}

	inline static int32_t get_offset_of_editors_14() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___editors_14)); }
	inline ObjectU5BU5D_t2843939325* get_editors_14() const { return ___editors_14; }
	inline ObjectU5BU5D_t2843939325** get_address_of_editors_14() { return &___editors_14; }
	inline void set_editors_14(ObjectU5BU5D_t2843939325* value)
	{
		___editors_14 = value;
		Il2CppCodeGenWriteBarrier((&___editors_14), value);
	}

	inline static int32_t get_offset_of_editorTypes_15() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___editorTypes_15)); }
	inline TypeU5BU5D_t3940880105* get_editorTypes_15() const { return ___editorTypes_15; }
	inline TypeU5BU5D_t3940880105** get_address_of_editorTypes_15() { return &___editorTypes_15; }
	inline void set_editorTypes_15(TypeU5BU5D_t3940880105* value)
	{
		___editorTypes_15 = value;
		Il2CppCodeGenWriteBarrier((&___editorTypes_15), value);
	}

	inline static int32_t get_offset_of_editorCount_16() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___editorCount_16)); }
	inline int32_t get_editorCount_16() const { return ___editorCount_16; }
	inline int32_t* get_address_of_editorCount_16() { return &___editorCount_16; }
	inline void set_editorCount_16(int32_t value)
	{
		___editorCount_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3244362832_H
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
#ifndef COLLECTIONCHANGEACTION_T1145968582_H
#define COLLECTIONCHANGEACTION_T1145968582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t1145968582 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t1145968582, ___value___2)); }
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
#endif // COLLECTIONCHANGEACTION_T1145968582_H
#ifndef DATAOBJECTMETHODTYPE_T1401893077_H
#define DATAOBJECTMETHODTYPE_T1401893077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectMethodType
struct  DataObjectMethodType_t1401893077 
{
public:
	// System.Int32 System.ComponentModel.DataObjectMethodType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataObjectMethodType_t1401893077, ___value___2)); }
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
#endif // DATAOBJECTMETHODTYPE_T1401893077_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3481291396 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3481291396, ___value___2)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#ifndef DOWORKEVENTARGS_T1025725751_H
#define DOWORKEVENTARGS_T1025725751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t1025725751  : public CancelEventArgs_t1846056344
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_2;
	// System.Object System.ComponentModel.DoWorkEventArgs::argument
	RuntimeObject * ___argument_3;

public:
	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1025725751, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((&___result_2), value);
	}

	inline static int32_t get_offset_of_argument_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t1025725751, ___argument_3)); }
	inline RuntimeObject * get_argument_3() const { return ___argument_3; }
	inline RuntimeObject ** get_address_of_argument_3() { return &___argument_3; }
	inline void set_argument_3(RuntimeObject * value)
	{
		___argument_3 = value;
		Il2CppCodeGenWriteBarrier((&___argument_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTARGS_T1025725751_H
#ifndef EDITORBROWSABLESTATE_T2839071299_H
#define EDITORBROWSABLESTATE_T2839071299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t2839071299 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t2839071299, ___value___2)); }
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
#endif // EDITORBROWSABLESTATE_T2839071299_H
#ifndef EXTENDEDPROPERTYDESCRIPTOR_T1653099961_H
#define EXTENDEDPROPERTYDESCRIPTOR_T1653099961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExtendedPropertyDescriptor
struct  ExtendedPropertyDescriptor_t1653099961  : public PropertyDescriptor_t3244362832
{
public:
	// System.ComponentModel.ReflectPropertyDescriptor System.ComponentModel.ExtendedPropertyDescriptor::extenderInfo
	ReflectPropertyDescriptor_t3323763468 * ___extenderInfo_17;
	// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtendedPropertyDescriptor::provider
	RuntimeObject* ___provider_18;

public:
	inline static int32_t get_offset_of_extenderInfo_17() { return static_cast<int32_t>(offsetof(ExtendedPropertyDescriptor_t1653099961, ___extenderInfo_17)); }
	inline ReflectPropertyDescriptor_t3323763468 * get_extenderInfo_17() const { return ___extenderInfo_17; }
	inline ReflectPropertyDescriptor_t3323763468 ** get_address_of_extenderInfo_17() { return &___extenderInfo_17; }
	inline void set_extenderInfo_17(ReflectPropertyDescriptor_t3323763468 * value)
	{
		___extenderInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___extenderInfo_17), value);
	}

	inline static int32_t get_offset_of_provider_18() { return static_cast<int32_t>(offsetof(ExtendedPropertyDescriptor_t1653099961, ___provider_18)); }
	inline RuntimeObject* get_provider_18() const { return ___provider_18; }
	inline RuntimeObject** get_address_of_provider_18() { return &___provider_18; }
	inline void set_provider_18(RuntimeObject* value)
	{
		___provider_18 = value;
		Il2CppCodeGenWriteBarrier((&___provider_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDEDPROPERTYDESCRIPTOR_T1653099961_H
#ifndef LICENSEEXCEPTION_T2803495799_H
#define LICENSEEXCEPTION_T2803495799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseException
struct  LicenseException_t2803495799  : public SystemException_t176217640
{
public:
	// System.Type System.ComponentModel.LicenseException::type
	Type_t * ___type_17;
	// System.Object System.ComponentModel.LicenseException::instance
	RuntimeObject * ___instance_18;

public:
	inline static int32_t get_offset_of_type_17() { return static_cast<int32_t>(offsetof(LicenseException_t2803495799, ___type_17)); }
	inline Type_t * get_type_17() const { return ___type_17; }
	inline Type_t ** get_address_of_type_17() { return &___type_17; }
	inline void set_type_17(Type_t * value)
	{
		___type_17 = value;
		Il2CppCodeGenWriteBarrier((&___type_17), value);
	}

	inline static int32_t get_offset_of_instance_18() { return static_cast<int32_t>(offsetof(LicenseException_t2803495799, ___instance_18)); }
	inline RuntimeObject * get_instance_18() const { return ___instance_18; }
	inline RuntimeObject ** get_address_of_instance_18() { return &___instance_18; }
	inline void set_instance_18(RuntimeObject * value)
	{
		___instance_18 = value;
		Il2CppCodeGenWriteBarrier((&___instance_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEEXCEPTION_T2803495799_H
#ifndef LICENSEUSAGEMODE_T830309198_H
#define LICENSEUSAGEMODE_T830309198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseUsageMode
struct  LicenseUsageMode_t830309198 
{
public:
	// System.Int32 System.ComponentModel.LicenseUsageMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LicenseUsageMode_t830309198, ___value___2)); }
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
#endif // LICENSEUSAGEMODE_T830309198_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t2249118273_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t2249118273_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
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
#ifndef ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#define ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.UltimateResourceFallbackLocation
struct  UltimateResourceFallbackLocation_t690808888 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_t690808888, ___value___2)); }
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
#endif // ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef COLLECTIONCHANGEEVENTARGS_T1870286136_H
#define COLLECTIONCHANGEEVENTARGS_T1870286136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1870286136  : public EventArgs_t3591816995
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::action
	int32_t ___action_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::element
	RuntimeObject * ___element_2;

public:
	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1870286136, ___action_1)); }
	inline int32_t get_action_1() const { return ___action_1; }
	inline int32_t* get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(int32_t value)
	{
		___action_1 = value;
	}

	inline static int32_t get_offset_of_element_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1870286136, ___element_2)); }
	inline RuntimeObject * get_element_2() const { return ___element_2; }
	inline RuntimeObject ** get_address_of_element_2() { return &___element_2; }
	inline void set_element_2(RuntimeObject * value)
	{
		___element_2 = value;
		Il2CppCodeGenWriteBarrier((&___element_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T1870286136_H
#ifndef COLLECTIONCONVERTER_T3078846443_H
#define COLLECTIONCONVERTER_T3078846443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3078846443  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3078846443_H
#ifndef CULTUREINFOCONVERTER_T81550636_H
#define CULTUREINFOCONVERTER_T81550636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t81550636  : public TypeConverter_t2249118273
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::values
	StandardValuesCollection_t2184948248 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t81550636, ___values_2)); }
	inline StandardValuesCollection_t2184948248 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t2184948248 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T81550636_H
#ifndef DATAOBJECTMETHODATTRIBUTE_T1051675261_H
#define DATAOBJECTMETHODATTRIBUTE_T1051675261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectMethodAttribute
struct  DataObjectMethodAttribute_t1051675261  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DataObjectMethodAttribute::_isDefault
	bool ____isDefault_0;
	// System.ComponentModel.DataObjectMethodType System.ComponentModel.DataObjectMethodAttribute::_methodType
	int32_t ____methodType_1;

public:
	inline static int32_t get_offset_of__isDefault_0() { return static_cast<int32_t>(offsetof(DataObjectMethodAttribute_t1051675261, ____isDefault_0)); }
	inline bool get__isDefault_0() const { return ____isDefault_0; }
	inline bool* get_address_of__isDefault_0() { return &____isDefault_0; }
	inline void set__isDefault_0(bool value)
	{
		____isDefault_0 = value;
	}

	inline static int32_t get_offset_of__methodType_1() { return static_cast<int32_t>(offsetof(DataObjectMethodAttribute_t1051675261, ____methodType_1)); }
	inline int32_t get__methodType_1() const { return ____methodType_1; }
	inline int32_t* get_address_of__methodType_1() { return &____methodType_1; }
	inline void set__methodType_1(int32_t value)
	{
		____methodType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAOBJECTMETHODATTRIBUTE_T1051675261_H
#ifndef DATETIMECONVERTER_T2298802450_H
#define DATETIMECONVERTER_T2298802450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2298802450  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2298802450_H
#ifndef DATETIMEOFFSETCONVERTER_T45348356_H
#define DATETIMEOFFSETCONVERTER_T45348356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeOffsetConverter
struct  DateTimeOffsetConverter_t45348356  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSETCONVERTER_T45348356_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t4084246596  : public Attribute_t861562559
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_4;

public:
	inline static int32_t get_offset_of_visibility_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596, ___visibility_4)); }
	inline int32_t get_visibility_4() const { return ___visibility_4; }
	inline int32_t* get_address_of_visibility_4() { return &___visibility_4; }
	inline void set_visibility_4(int32_t value)
	{
		___visibility_4 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t4084246596_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Content_0;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Hidden_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Visible_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Default_3;

public:
	inline static int32_t get_offset_of_Content_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Content_0)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Content_0() const { return ___Content_0; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Content_0() { return &___Content_0; }
	inline void set_Content_0(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Content_0 = value;
		Il2CppCodeGenWriteBarrier((&___Content_0), value);
	}

	inline static int32_t get_offset_of_Hidden_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Hidden_1)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Hidden_1() const { return ___Hidden_1; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Hidden_1() { return &___Hidden_1; }
	inline void set_Hidden_1(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Hidden_1 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_1), value);
	}

	inline static int32_t get_offset_of_Visible_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Visible_2)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Visible_2() const { return ___Visible_2; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Visible_2() { return &___Visible_2; }
	inline void set_Visible_2(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Visible_2 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Default_3)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Default_3() const { return ___Default_3; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1475454531_H
#define EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1475454531  : public Attribute_t861562559
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;

public:
	inline static int32_t get_offset_of_browsableState_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1475454531, ___browsableState_0)); }
	inline int32_t get_browsableState_0() const { return ___browsableState_0; }
	inline int32_t* get_address_of_browsableState_0() { return &___browsableState_0; }
	inline void set_browsableState_0(int32_t value)
	{
		___browsableState_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifndef ENUMCONVERTER_T1688858217_H
#define ENUMCONVERTER_T1688858217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1688858217  : public TypeConverter_t2249118273
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_t2184948248 * ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___values_2)); }
	inline StandardValuesCollection_t2184948248 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t2184948248 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1688858217_H
#ifndef EXPANDABLEOBJECTCONVERTER_T420832579_H
#define EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t420832579  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifndef GUIDCONVERTER_T3396672461_H
#define GUIDCONVERTER_T3396672461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3396672461  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3396672461_H
#ifndef INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#define INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidAsynchronousStateException
struct  InvalidAsynchronousStateException_t1889442469  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#define INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t2634129013  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#ifndef CLRLICENSECONTEXT_T1891174193_H
#define CLRLICENSECONTEXT_T1891174193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager/LicenseInteropHelper/CLRLicenseContext
struct  CLRLicenseContext_t1891174193  : public LicenseContext_t2141136407
{
public:
	// System.ComponentModel.LicenseUsageMode System.ComponentModel.LicenseManager/LicenseInteropHelper/CLRLicenseContext::usageMode
	int32_t ___usageMode_0;
	// System.Type System.ComponentModel.LicenseManager/LicenseInteropHelper/CLRLicenseContext::type
	Type_t * ___type_1;
	// System.String System.ComponentModel.LicenseManager/LicenseInteropHelper/CLRLicenseContext::key
	String_t* ___key_2;

public:
	inline static int32_t get_offset_of_usageMode_0() { return static_cast<int32_t>(offsetof(CLRLicenseContext_t1891174193, ___usageMode_0)); }
	inline int32_t get_usageMode_0() const { return ___usageMode_0; }
	inline int32_t* get_address_of_usageMode_0() { return &___usageMode_0; }
	inline void set_usageMode_0(int32_t value)
	{
		___usageMode_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(CLRLicenseContext_t1891174193, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(CLRLicenseContext_t1891174193, ___key_2)); }
	inline String_t* get_key_2() const { return ___key_2; }
	inline String_t** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(String_t* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((&___key_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLRLICENSECONTEXT_T1891174193_H
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

struct ReferenceConverter_t1811933861_StaticFields
{
public:
	// System.String System.ComponentModel.ReferenceConverter::none
	String_t* ___none_2;

public:
	inline static int32_t get_offset_of_none_2() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861_StaticFields, ___none_2)); }
	inline String_t* get_none_2() const { return ___none_2; }
	inline String_t** get_address_of_none_2() { return &___none_2; }
	inline void set_none_2(String_t* value)
	{
		___none_2 = value;
		Il2CppCodeGenWriteBarrier((&___none_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
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
#ifndef RESOURCEMANAGER_T4037989559_H
#define RESOURCEMANAGER_T4037989559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t4037989559  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t1853889766 * ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_t2613167486 * ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t * ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t * ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t4157843068 * ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t3305173715 * ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_t3456873960 * ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t1451753063 * ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;

public:
	inline static int32_t get_offset_of_BaseNameField_0() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___BaseNameField_0)); }
	inline String_t* get_BaseNameField_0() const { return ___BaseNameField_0; }
	inline String_t** get_address_of_BaseNameField_0() { return &___BaseNameField_0; }
	inline void set_BaseNameField_0(String_t* value)
	{
		___BaseNameField_0 = value;
		Il2CppCodeGenWriteBarrier((&___BaseNameField_0), value);
	}

	inline static int32_t get_offset_of_ResourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___ResourceSets_1)); }
	inline Hashtable_t1853889766 * get_ResourceSets_1() const { return ___ResourceSets_1; }
	inline Hashtable_t1853889766 ** get_address_of_ResourceSets_1() { return &___ResourceSets_1; }
	inline void set_ResourceSets_1(Hashtable_t1853889766 * value)
	{
		___ResourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceSets_1), value);
	}

	inline static int32_t get_offset_of__resourceSets_2() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____resourceSets_2)); }
	inline Dictionary_2_t2613167486 * get__resourceSets_2() const { return ____resourceSets_2; }
	inline Dictionary_2_t2613167486 ** get_address_of__resourceSets_2() { return &____resourceSets_2; }
	inline void set__resourceSets_2(Dictionary_2_t2613167486 * value)
	{
		____resourceSets_2 = value;
		Il2CppCodeGenWriteBarrier((&____resourceSets_2), value);
	}

	inline static int32_t get_offset_of_moduleDir_3() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___moduleDir_3)); }
	inline String_t* get_moduleDir_3() const { return ___moduleDir_3; }
	inline String_t** get_address_of_moduleDir_3() { return &___moduleDir_3; }
	inline void set_moduleDir_3(String_t* value)
	{
		___moduleDir_3 = value;
		Il2CppCodeGenWriteBarrier((&___moduleDir_3), value);
	}

	inline static int32_t get_offset_of_MainAssembly_4() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___MainAssembly_4)); }
	inline Assembly_t * get_MainAssembly_4() const { return ___MainAssembly_4; }
	inline Assembly_t ** get_address_of_MainAssembly_4() { return &___MainAssembly_4; }
	inline void set_MainAssembly_4(Assembly_t * value)
	{
		___MainAssembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___MainAssembly_4), value);
	}

	inline static int32_t get_offset_of__locationInfo_5() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____locationInfo_5)); }
	inline Type_t * get__locationInfo_5() const { return ____locationInfo_5; }
	inline Type_t ** get_address_of__locationInfo_5() { return &____locationInfo_5; }
	inline void set__locationInfo_5(Type_t * value)
	{
		____locationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____locationInfo_5), value);
	}

	inline static int32_t get_offset_of__userResourceSet_6() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____userResourceSet_6)); }
	inline Type_t * get__userResourceSet_6() const { return ____userResourceSet_6; }
	inline Type_t ** get_address_of__userResourceSet_6() { return &____userResourceSet_6; }
	inline void set__userResourceSet_6(Type_t * value)
	{
		____userResourceSet_6 = value;
		Il2CppCodeGenWriteBarrier((&____userResourceSet_6), value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_7() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____neutralResourcesCulture_7)); }
	inline CultureInfo_t4157843068 * get__neutralResourcesCulture_7() const { return ____neutralResourcesCulture_7; }
	inline CultureInfo_t4157843068 ** get_address_of__neutralResourcesCulture_7() { return &____neutralResourcesCulture_7; }
	inline void set__neutralResourcesCulture_7(CultureInfo_t4157843068 * value)
	{
		____neutralResourcesCulture_7 = value;
		Il2CppCodeGenWriteBarrier((&____neutralResourcesCulture_7), value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_8() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____lastUsedResourceCache_8)); }
	inline CultureNameResourceSetPair_t3305173715 * get__lastUsedResourceCache_8() const { return ____lastUsedResourceCache_8; }
	inline CultureNameResourceSetPair_t3305173715 ** get_address_of__lastUsedResourceCache_8() { return &____lastUsedResourceCache_8; }
	inline void set__lastUsedResourceCache_8(CultureNameResourceSetPair_t3305173715 * value)
	{
		____lastUsedResourceCache_8 = value;
		Il2CppCodeGenWriteBarrier((&____lastUsedResourceCache_8), value);
	}

	inline static int32_t get_offset_of__ignoreCase_9() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____ignoreCase_9)); }
	inline bool get__ignoreCase_9() const { return ____ignoreCase_9; }
	inline bool* get_address_of__ignoreCase_9() { return &____ignoreCase_9; }
	inline void set__ignoreCase_9(bool value)
	{
		____ignoreCase_9 = value;
	}

	inline static int32_t get_offset_of_UseManifest_10() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___UseManifest_10)); }
	inline bool get_UseManifest_10() const { return ___UseManifest_10; }
	inline bool* get_address_of_UseManifest_10() { return &___UseManifest_10; }
	inline void set_UseManifest_10(bool value)
	{
		___UseManifest_10 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_11() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___UseSatelliteAssem_11)); }
	inline bool get_UseSatelliteAssem_11() const { return ___UseSatelliteAssem_11; }
	inline bool* get_address_of_UseSatelliteAssem_11() { return &___UseSatelliteAssem_11; }
	inline void set_UseSatelliteAssem_11(bool value)
	{
		___UseSatelliteAssem_11 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_12() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____fallbackLoc_12)); }
	inline int32_t get__fallbackLoc_12() const { return ____fallbackLoc_12; }
	inline int32_t* get_address_of__fallbackLoc_12() { return &____fallbackLoc_12; }
	inline void set__fallbackLoc_12(int32_t value)
	{
		____fallbackLoc_12 = value;
	}

	inline static int32_t get_offset_of__satelliteContractVersion_13() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____satelliteContractVersion_13)); }
	inline Version_t3456873960 * get__satelliteContractVersion_13() const { return ____satelliteContractVersion_13; }
	inline Version_t3456873960 ** get_address_of__satelliteContractVersion_13() { return &____satelliteContractVersion_13; }
	inline void set__satelliteContractVersion_13(Version_t3456873960 * value)
	{
		____satelliteContractVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&____satelliteContractVersion_13), value);
	}

	inline static int32_t get_offset_of__lookedForSatelliteContractVersion_14() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____lookedForSatelliteContractVersion_14)); }
	inline bool get__lookedForSatelliteContractVersion_14() const { return ____lookedForSatelliteContractVersion_14; }
	inline bool* get_address_of__lookedForSatelliteContractVersion_14() { return &____lookedForSatelliteContractVersion_14; }
	inline void set__lookedForSatelliteContractVersion_14(bool value)
	{
		____lookedForSatelliteContractVersion_14 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_15() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____callingAssembly_15)); }
	inline Assembly_t * get__callingAssembly_15() const { return ____callingAssembly_15; }
	inline Assembly_t ** get_address_of__callingAssembly_15() { return &____callingAssembly_15; }
	inline void set__callingAssembly_15(Assembly_t * value)
	{
		____callingAssembly_15 = value;
		Il2CppCodeGenWriteBarrier((&____callingAssembly_15), value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_16() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___m_callingAssembly_16)); }
	inline RuntimeAssembly_t1451753063 * get_m_callingAssembly_16() const { return ___m_callingAssembly_16; }
	inline RuntimeAssembly_t1451753063 ** get_address_of_m_callingAssembly_16() { return &___m_callingAssembly_16; }
	inline void set_m_callingAssembly_16(RuntimeAssembly_t1451753063 * value)
	{
		___m_callingAssembly_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_callingAssembly_16), value);
	}

	inline static int32_t get_offset_of_resourceGroveler_17() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceGroveler_17)); }
	inline RuntimeObject* get_resourceGroveler_17() const { return ___resourceGroveler_17; }
	inline RuntimeObject** get_address_of_resourceGroveler_17() { return &___resourceGroveler_17; }
	inline void set_resourceGroveler_17(RuntimeObject* value)
	{
		___resourceGroveler_17 = value;
		Il2CppCodeGenWriteBarrier((&___resourceGroveler_17), value);
	}
};

struct ResourceManager_t4037989559_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;

public:
	inline static int32_t get_offset_of_MagicNumber_18() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___MagicNumber_18)); }
	inline int32_t get_MagicNumber_18() const { return ___MagicNumber_18; }
	inline int32_t* get_address_of_MagicNumber_18() { return &___MagicNumber_18; }
	inline void set_MagicNumber_18(int32_t value)
	{
		___MagicNumber_18 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_19() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___HeaderVersionNumber_19)); }
	inline int32_t get_HeaderVersionNumber_19() const { return ___HeaderVersionNumber_19; }
	inline int32_t* get_address_of_HeaderVersionNumber_19() { return &___HeaderVersionNumber_19; }
	inline void set_HeaderVersionNumber_19(int32_t value)
	{
		___HeaderVersionNumber_19 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_20() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ____minResourceSet_20)); }
	inline Type_t * get__minResourceSet_20() const { return ____minResourceSet_20; }
	inline Type_t ** get_address_of__minResourceSet_20() { return &____minResourceSet_20; }
	inline void set__minResourceSet_20(Type_t * value)
	{
		____minResourceSet_20 = value;
		Il2CppCodeGenWriteBarrier((&____minResourceSet_20), value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_21() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___ResReaderTypeName_21)); }
	inline String_t* get_ResReaderTypeName_21() const { return ___ResReaderTypeName_21; }
	inline String_t** get_address_of_ResReaderTypeName_21() { return &___ResReaderTypeName_21; }
	inline void set_ResReaderTypeName_21(String_t* value)
	{
		___ResReaderTypeName_21 = value;
		Il2CppCodeGenWriteBarrier((&___ResReaderTypeName_21), value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_22() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___ResSetTypeName_22)); }
	inline String_t* get_ResSetTypeName_22() const { return ___ResSetTypeName_22; }
	inline String_t** get_address_of_ResSetTypeName_22() { return &___ResSetTypeName_22; }
	inline void set_ResSetTypeName_22(String_t* value)
	{
		___ResSetTypeName_22 = value;
		Il2CppCodeGenWriteBarrier((&___ResSetTypeName_22), value);
	}

	inline static int32_t get_offset_of_MscorlibName_23() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___MscorlibName_23)); }
	inline String_t* get_MscorlibName_23() const { return ___MscorlibName_23; }
	inline String_t** get_address_of_MscorlibName_23() { return &___MscorlibName_23; }
	inline void set_MscorlibName_23(String_t* value)
	{
		___MscorlibName_23 = value;
		Il2CppCodeGenWriteBarrier((&___MscorlibName_23), value);
	}

	inline static int32_t get_offset_of_DEBUG_24() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___DEBUG_24)); }
	inline int32_t get_DEBUG_24() const { return ___DEBUG_24; }
	inline int32_t* get_address_of_DEBUG_24() { return &___DEBUG_24; }
	inline void set_DEBUG_24(int32_t value)
	{
		___DEBUG_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T4037989559_H
#ifndef COLLECTIONCHANGEEVENTHANDLER_T2526189854_H
#define COLLECTIONCHANGEEVENTHANDLER_T2526189854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventHandler
struct  CollectionChangeEventHandler_t2526189854  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTHANDLER_T2526189854_H
#ifndef COMPONENTCONVERTER_T118941221_H
#define COMPONENTCONVERTER_T118941221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t118941221  : public ReferenceConverter_t1811933861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T118941221_H
#ifndef COMPONENTRESOURCEMANAGER_T580139915_H
#define COMPONENTRESOURCEMANAGER_T580139915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentResourceManager
struct  ComponentResourceManager_t580139915  : public ResourceManager_t4037989559
{
public:
	// System.Collections.Hashtable System.ComponentModel.ComponentResourceManager::_resourceSets
	Hashtable_t1853889766 * ____resourceSets_25;
	// System.Globalization.CultureInfo System.ComponentModel.ComponentResourceManager::_neutralResourcesCulture
	CultureInfo_t4157843068 * ____neutralResourcesCulture_26;

public:
	inline static int32_t get_offset_of__resourceSets_25() { return static_cast<int32_t>(offsetof(ComponentResourceManager_t580139915, ____resourceSets_25)); }
	inline Hashtable_t1853889766 * get__resourceSets_25() const { return ____resourceSets_25; }
	inline Hashtable_t1853889766 ** get_address_of__resourceSets_25() { return &____resourceSets_25; }
	inline void set__resourceSets_25(Hashtable_t1853889766 * value)
	{
		____resourceSets_25 = value;
		Il2CppCodeGenWriteBarrier((&____resourceSets_25), value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_26() { return static_cast<int32_t>(offsetof(ComponentResourceManager_t580139915, ____neutralResourcesCulture_26)); }
	inline CultureInfo_t4157843068 * get__neutralResourcesCulture_26() const { return ____neutralResourcesCulture_26; }
	inline CultureInfo_t4157843068 ** get_address_of__neutralResourcesCulture_26() { return &____neutralResourcesCulture_26; }
	inline void set__neutralResourcesCulture_26(CultureInfo_t4157843068 * value)
	{
		____neutralResourcesCulture_26 = value;
		Il2CppCodeGenWriteBarrier((&____neutralResourcesCulture_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTRESOURCEMANAGER_T580139915_H
#ifndef DECIMALCONVERTER_T3574141665_H
#define DECIMALCONVERTER_T3574141665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t3574141665  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T3574141665_H
#ifndef DOWORKEVENTHANDLER_T3704776641_H
#define DOWORKEVENTHANDLER_T3704776641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventHandler
struct  DoWorkEventHandler_t3704776641  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTHANDLER_T3704776641_H
#ifndef DOUBLECONVERTER_T805142290_H
#define DOUBLECONVERTER_T805142290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t805142290  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T805142290_H
#ifndef HANDLEDEVENTHANDLER_T3721706460_H
#define HANDLEDEVENTHANDLER_T3721706460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.HandledEventHandler
struct  HandledEventHandler_t3721706460  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEDEVENTHANDLER_T3721706460_H
#ifndef INT16CONVERTER_T1119562914_H
#define INT16CONVERTER_T1119562914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t1119562914  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T1119562914_H
#ifndef INT32CONVERTER_T677227065_H
#define INT32CONVERTER_T677227065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t677227065  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T677227065_H
#ifndef INT64CONVERTER_T1092099567_H
#define INT64CONVERTER_T1092099567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t1092099567  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T1092099567_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { sizeof (CollectionChangeAction_t1145968582)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2000[4] = 
{
	CollectionChangeAction_t1145968582::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { sizeof (CollectionChangeEventArgs_t1870286136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2001[2] = 
{
	CollectionChangeEventArgs_t1870286136::get_offset_of_action_1(),
	CollectionChangeEventArgs_t1870286136::get_offset_of_element_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { sizeof (CollectionChangeEventHandler_t2526189854), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { sizeof (CollectionConverter_t3078846443), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { sizeof (CompModSwitches_t2103356148), -1, sizeof(CompModSwitches_t2103356148_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2004[2] = 
{
	CompModSwitches_t2103356148_StaticFields::get_offset_of_commonDesignerServices_0(),
	CompModSwitches_t2103356148_StaticFields::get_offset_of_eventLog_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { sizeof (ComplexBindingPropertiesAttribute_t270984817), -1, sizeof(ComplexBindingPropertiesAttribute_t270984817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2005[3] = 
{
	ComplexBindingPropertiesAttribute_t270984817::get_offset_of_dataSource_0(),
	ComplexBindingPropertiesAttribute_t270984817::get_offset_of_dataMember_1(),
	ComplexBindingPropertiesAttribute_t270984817_StaticFields::get_offset_of_Default_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { sizeof (Component_t3620823400), -1, sizeof(Component_t3620823400_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2006[3] = 
{
	Component_t3620823400_StaticFields::get_offset_of_EventDisposed_1(),
	Component_t3620823400::get_offset_of_site_2(),
	Component_t3620823400::get_offset_of_events_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (ComponentCollection_t1445440302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (ComponentConverter_t118941221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { sizeof (ComponentResourceManager_t580139915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2009[2] = 
{
	ComponentResourceManager_t580139915::get_offset_of__resourceSets_25(),
	ComponentResourceManager_t580139915::get_offset_of__neutralResourcesCulture_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { sizeof (Container_t1808277744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2010[6] = 
{
	Container_t1808277744::get_offset_of_sites_0(),
	Container_t1808277744::get_offset_of_siteCount_1(),
	Container_t1808277744::get_offset_of_components_2(),
	Container_t1808277744::get_offset_of_filter_3(),
	Container_t1808277744::get_offset_of_checkedFilter_4(),
	Container_t1808277744::get_offset_of_syncObj_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { sizeof (Site_t1830816548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2011[3] = 
{
	Site_t1830816548::get_offset_of_component_0(),
	Site_t1830816548::get_offset_of_container_1(),
	Site_t1830816548::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { sizeof (ContainerFilterService_t3995528664), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { sizeof (CultureInfoConverter_t81550636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2013[1] = 
{
	CultureInfoConverter_t81550636::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2014 = { sizeof (CultureComparer_t2410242003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2014[1] = 
{
	CultureComparer_t2410242003::get_offset_of_converter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2015 = { sizeof (CultureInfoMapper_t253318472), -1, sizeof(CultureInfoMapper_t253318472_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2015[1] = 
{
	CultureInfoMapper_t253318472_StaticFields::get_offset_of_cultureInfoNameMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2016 = { sizeof (CustomTypeDescriptor_t3093649079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2016[1] = 
{
	CustomTypeDescriptor_t3093649079::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2017 = { sizeof (DataErrorsChangedEventArgs_t2405211543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2017[1] = 
{
	DataErrorsChangedEventArgs_t2405211543::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2018 = { sizeof (DataObjectAttribute_t2230598060), -1, sizeof(DataObjectAttribute_t2230598060_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2018[4] = 
{
	DataObjectAttribute_t2230598060_StaticFields::get_offset_of_DataObject_0(),
	DataObjectAttribute_t2230598060_StaticFields::get_offset_of_NonDataObject_1(),
	DataObjectAttribute_t2230598060_StaticFields::get_offset_of_Default_2(),
	DataObjectAttribute_t2230598060::get_offset_of__isDataObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2019 = { sizeof (DataObjectFieldAttribute_t1968002332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2019[4] = 
{
	DataObjectFieldAttribute_t1968002332::get_offset_of__primaryKey_0(),
	DataObjectFieldAttribute_t1968002332::get_offset_of__isIdentity_1(),
	DataObjectFieldAttribute_t1968002332::get_offset_of__isNullable_2(),
	DataObjectFieldAttribute_t1968002332::get_offset_of__length_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2020 = { sizeof (DataObjectMethodAttribute_t1051675261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2020[2] = 
{
	DataObjectMethodAttribute_t1051675261::get_offset_of__isDefault_0(),
	DataObjectMethodAttribute_t1051675261::get_offset_of__methodType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2021 = { sizeof (DataObjectMethodType_t1401893077)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2021[6] = 
{
	DataObjectMethodType_t1401893077::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2022 = { sizeof (DateTimeConverter_t2298802450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2023 = { sizeof (DateTimeOffsetConverter_t45348356), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2024 = { sizeof (DecimalConverter_t3574141665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2025 = { sizeof (DefaultBindingPropertyAttribute_t2784669275), -1, sizeof(DefaultBindingPropertyAttribute_t2784669275_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2025[2] = 
{
	DefaultBindingPropertyAttribute_t2784669275::get_offset_of_name_0(),
	DefaultBindingPropertyAttribute_t2784669275_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2026 = { sizeof (DefaultEventAttribute_t3124666540), -1, sizeof(DefaultEventAttribute_t3124666540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2026[2] = 
{
	DefaultEventAttribute_t3124666540::get_offset_of_name_0(),
	DefaultEventAttribute_t3124666540_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2027 = { sizeof (DefaultPropertyAttribute_t1952442862), -1, sizeof(DefaultPropertyAttribute_t1952442862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2027[2] = 
{
	DefaultPropertyAttribute_t1952442862::get_offset_of_name_0(),
	DefaultPropertyAttribute_t1952442862_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2028 = { sizeof (DefaultValueAttribute_t587583663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2028[1] = 
{
	DefaultValueAttribute_t587583663::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2029 = { sizeof (DelegatingTypeDescriptionProvider_t4223743593), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2029[1] = 
{
	DelegatingTypeDescriptionProvider_t4223743593::get_offset_of__type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2030 = { sizeof (DescriptionAttribute_t874390736), -1, sizeof(DescriptionAttribute_t874390736_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2030[2] = 
{
	DescriptionAttribute_t874390736_StaticFields::get_offset_of_Default_0(),
	DescriptionAttribute_t874390736::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2031 = { sizeof (DesignOnlyAttribute_t1017827538), -1, sizeof(DesignOnlyAttribute_t1017827538_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2031[4] = 
{
	DesignOnlyAttribute_t1017827538::get_offset_of_isDesignOnly_0(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_Yes_1(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2032 = { sizeof (DesignTimeVisibleAttribute_t2841844458), -1, sizeof(DesignTimeVisibleAttribute_t2841844458_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2032[4] = 
{
	DesignTimeVisibleAttribute_t2841844458::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_Yes_1(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2033 = { sizeof (DesignerAttribute_t2079716647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2033[3] = 
{
	DesignerAttribute_t2079716647::get_offset_of_designerTypeName_0(),
	DesignerAttribute_t2079716647::get_offset_of_designerBaseTypeName_1(),
	DesignerAttribute_t2079716647::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2034 = { sizeof (DesignerCategoryAttribute_t2912925731), -1, sizeof(DesignerCategoryAttribute_t2912925731_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2034[6] = 
{
	DesignerCategoryAttribute_t2912925731::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2912925731::get_offset_of_typeId_1(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Component_2(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Default_3(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Form_4(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Generic_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2035 = { sizeof (DesignerSerializationVisibility_t3481291396)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2035[4] = 
{
	DesignerSerializationVisibility_t3481291396::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2036 = { sizeof (DesignerSerializationVisibilityAttribute_t4084246596), -1, sizeof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2036[5] = 
{
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Content_0(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Hidden_1(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Visible_2(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Default_3(),
	DesignerSerializationVisibilityAttribute_t4084246596::get_offset_of_visibility_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2037 = { sizeof (DisplayNameAttribute_t2074055386), -1, sizeof(DisplayNameAttribute_t2074055386_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2037[2] = 
{
	DisplayNameAttribute_t2074055386_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t2074055386::get_offset_of__displayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2038 = { sizeof (DoWorkEventArgs_t1025725751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2038[2] = 
{
	DoWorkEventArgs_t1025725751::get_offset_of_result_2(),
	DoWorkEventArgs_t1025725751::get_offset_of_argument_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2039 = { sizeof (DoWorkEventHandler_t3704776641), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2040 = { sizeof (DoubleConverter_t805142290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2041 = { sizeof (EditorAttribute_t1332199665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2041[3] = 
{
	EditorAttribute_t1332199665::get_offset_of_baseTypeName_0(),
	EditorAttribute_t1332199665::get_offset_of_typeName_1(),
	EditorAttribute_t1332199665::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2042 = { sizeof (EditorBrowsableAttribute_t1475454531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2042[1] = 
{
	EditorBrowsableAttribute_t1475454531::get_offset_of_browsableState_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2043 = { sizeof (EditorBrowsableState_t2839071299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2043[4] = 
{
	EditorBrowsableState_t2839071299::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2044 = { sizeof (EnumConverter_t1688858217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2044[2] = 
{
	EnumConverter_t1688858217::get_offset_of_values_2(),
	EnumConverter_t1688858217::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2045 = { sizeof (EventDescriptor_t88602298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2046 = { sizeof (EventDescriptorCollection_t2278158832), -1, sizeof(EventDescriptorCollection_t2278158832_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2046[8] = 
{
	EventDescriptorCollection_t2278158832::get_offset_of_events_0(),
	EventDescriptorCollection_t2278158832::get_offset_of_namedSort_1(),
	EventDescriptorCollection_t2278158832::get_offset_of_comparer_2(),
	EventDescriptorCollection_t2278158832::get_offset_of_eventsOwned_3(),
	EventDescriptorCollection_t2278158832::get_offset_of_needSort_4(),
	EventDescriptorCollection_t2278158832::get_offset_of_eventCount_5(),
	EventDescriptorCollection_t2278158832::get_offset_of_readOnly_6(),
	EventDescriptorCollection_t2278158832_StaticFields::get_offset_of_Empty_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2047 = { sizeof (EventHandlerList_t1108123056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2047[2] = 
{
	EventHandlerList_t1108123056::get_offset_of_head_0(),
	EventHandlerList_t1108123056::get_offset_of_parent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2048 = { sizeof (ListEntry_t2424989506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2048[3] = 
{
	ListEntry_t2424989506::get_offset_of_next_0(),
	ListEntry_t2424989506::get_offset_of_key_1(),
	ListEntry_t2424989506::get_offset_of_handler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2049 = { sizeof (ExpandableObjectConverter_t420832579), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2050 = { sizeof (ExtendedPropertyDescriptor_t1653099961), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2050[2] = 
{
	ExtendedPropertyDescriptor_t1653099961::get_offset_of_extenderInfo_17(),
	ExtendedPropertyDescriptor_t1653099961::get_offset_of_provider_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2051 = { sizeof (ExtenderProvidedPropertyAttribute_t3771163592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2051[3] = 
{
	ExtenderProvidedPropertyAttribute_t3771163592::get_offset_of_extenderProperty_0(),
	ExtenderProvidedPropertyAttribute_t3771163592::get_offset_of_provider_1(),
	ExtenderProvidedPropertyAttribute_t3771163592::get_offset_of_receiverType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2052 = { sizeof (GuidConverter_t3396672461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2053 = { sizeof (HandledEventArgs_t3639267452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2053[1] = 
{
	HandledEventArgs_t3639267452::get_offset_of_handled_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2054 = { sizeof (HandledEventHandler_t3721706460), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2055 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2056 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2057 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2058 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2059 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2060 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2061 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2062 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2063 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2064 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2065 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2066 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2067 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2068 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2069 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2070 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2071 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2072 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2073 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2074 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2075 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2076 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2077 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2078 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2079 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2080 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2081 = { sizeof (ImmutableObjectAttribute_t2959712128), -1, sizeof(ImmutableObjectAttribute_t2959712128_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2081[4] = 
{
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_Yes_0(),
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_No_1(),
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_Default_2(),
	ImmutableObjectAttribute_t2959712128::get_offset_of_immutable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2082 = { sizeof (InitializationEventAttribute_t1076550734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2082[1] = 
{
	InitializationEventAttribute_t1076550734::get_offset_of_eventName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2083 = { sizeof (InstallerTypeAttribute_t3233088727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2083[1] = 
{
	InstallerTypeAttribute_t3233088727::get_offset_of__typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2084 = { sizeof (InstanceCreationEditor_t238900532), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2085 = { sizeof (Int16Converter_t1119562914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2086 = { sizeof (Int32Converter_t677227065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2087 = { sizeof (Int64Converter_t1092099567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2088 = { sizeof (IntSecurity_t1973073266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2089 = { sizeof (InvalidAsynchronousStateException_t1889442469), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2090 = { sizeof (InvalidEnumArgumentException_t2634129013), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2091 = { sizeof (LicFileLicenseProvider_t3520472243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2092 = { sizeof (LicFileLicense_t2279240837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2092[1] = 
{
	LicFileLicense_t2279240837::get_offset_of_key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2093 = { sizeof (License_t2258946041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2094 = { sizeof (LicenseContext_t2141136407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2095 = { sizeof (LicenseException_t2803495799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2095[2] = 
{
	LicenseException_t2803495799::get_offset_of_type_17(),
	LicenseException_t2803495799::get_offset_of_instance_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2096 = { sizeof (LicenseManager_t19983147), -1, sizeof(LicenseManager_t19983147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2096[6] = 
{
	LicenseManager_t19983147_StaticFields::get_offset_of_selfLock_0(),
	LicenseManager_t19983147_StaticFields::get_offset_of_context_1(),
	LicenseManager_t19983147_StaticFields::get_offset_of_contextLockHolder_2(),
	LicenseManager_t19983147_StaticFields::get_offset_of_providers_3(),
	LicenseManager_t19983147_StaticFields::get_offset_of_providerInstances_4(),
	LicenseManager_t19983147_StaticFields::get_offset_of_internalSyncObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2097 = { sizeof (LicenseInteropHelper_t4104616646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2097[7] = 
{
	0,
	0,
	0,
	0,
	LicenseInteropHelper_t4104616646::get_offset_of_helperContext_4(),
	LicenseInteropHelper_t4104616646::get_offset_of_savedLicenseContext_5(),
	LicenseInteropHelper_t4104616646::get_offset_of_savedType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2098 = { sizeof (CLRLicenseContext_t1891174193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2098[3] = 
{
	CLRLicenseContext_t1891174193::get_offset_of_usageMode_0(),
	CLRLicenseContext_t1891174193::get_offset_of_type_1(),
	CLRLicenseContext_t1891174193::get_offset_of_key_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2099 = { sizeof (LicenseProvider_t1830579869), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

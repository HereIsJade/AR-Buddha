﻿#include "il2cpp-config.h"

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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Uri
struct Uri_t19570940;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Net.ICredentials
struct ICredentials_t3855617113;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t2272681992;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t3718216671;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Text.RegularExpressions.MRUList
struct MRUList_t33178162;
// System.Text.RegularExpressions.MRUList/Node
struct Node_t1107172180;
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_t3470489975;
// System.Security.Cryptography.Oid
struct Oid_t3221867120;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.String
struct String_t;
// System.Security.Cryptography.OidCollection
struct OidCollection_t3790243618;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1656058977;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051957;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.UInt16[]
struct UInt16U5BU5D_t2527266722;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t463456204;
// System.Void
struct Void_t1841601450;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Stack
struct Stack_t1043988394;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t650873211;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t870392;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t452415348;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3690174926;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t238836340;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1671345504;
// System.Collections.BitArray
struct BitArray_t4180138994;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t4130821325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t1036078825;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t1827616978;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t3801731412;
// System.Text.RegularExpressions.IMachine
struct IMachine_t3406191350;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t939014605;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t368137076;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t290043810;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1108969367;
// Mono.Security.X509.X509Store
struct X509Store_t4028973563;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2051534610;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t633643314;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t2081831987;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t3452126517;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t830390908;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t528874471;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1617430119;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3255443744;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2896011011;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;




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
#ifndef WEBPROXY_T1169192840_H
#define WEBPROXY_T1169192840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebProxy
struct  WebProxy_t1169192840  : public RuntimeObject
{
public:
	// System.Uri System.Net.WebProxy::address
	Uri_t19570940 * ___address_0;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal_1;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t4252133567 * ___bypassList_2;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	RuntimeObject* ___credentials_3;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___address_0)); }
	inline Uri_t19570940 * get_address_0() const { return ___address_0; }
	inline Uri_t19570940 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(Uri_t19570940 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_bypassOnLocal_1() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___bypassOnLocal_1)); }
	inline bool get_bypassOnLocal_1() const { return ___bypassOnLocal_1; }
	inline bool* get_address_of_bypassOnLocal_1() { return &___bypassOnLocal_1; }
	inline void set_bypassOnLocal_1(bool value)
	{
		___bypassOnLocal_1 = value;
	}

	inline static int32_t get_offset_of_bypassList_2() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___bypassList_2)); }
	inline ArrayList_t4252133567 * get_bypassList_2() const { return ___bypassList_2; }
	inline ArrayList_t4252133567 ** get_address_of_bypassList_2() { return &___bypassList_2; }
	inline void set_bypassList_2(ArrayList_t4252133567 * value)
	{
		___bypassList_2 = value;
		Il2CppCodeGenWriteBarrier((&___bypassList_2), value);
	}

	inline static int32_t get_offset_of_credentials_3() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___credentials_3)); }
	inline RuntimeObject* get_credentials_3() const { return ___credentials_3; }
	inline RuntimeObject** get_address_of_credentials_3() { return &___credentials_3; }
	inline void set_credentials_3(RuntimeObject* value)
	{
		___credentials_3 = value;
		Il2CppCodeGenWriteBarrier((&___credentials_3), value);
	}

	inline static int32_t get_offset_of_useDefaultCredentials_4() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___useDefaultCredentials_4)); }
	inline bool get_useDefaultCredentials_4() const { return ___useDefaultCredentials_4; }
	inline bool* get_address_of_useDefaultCredentials_4() { return &___useDefaultCredentials_4; }
	inline void set_useDefaultCredentials_4(bool value)
	{
		___useDefaultCredentials_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPROXY_T1169192840_H
#ifndef GROUPCOLLECTION_T939014605_H
#define GROUPCOLLECTION_T939014605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.GroupCollection
struct  GroupCollection_t939014605  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::list
	GroupU5BU5D_t2272681992* ___list_0;
	// System.Int32 System.Text.RegularExpressions.GroupCollection::gap
	int32_t ___gap_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(GroupCollection_t939014605, ___list_0)); }
	inline GroupU5BU5D_t2272681992* get_list_0() const { return ___list_0; }
	inline GroupU5BU5D_t2272681992** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(GroupU5BU5D_t2272681992* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_gap_1() { return static_cast<int32_t>(offsetof(GroupCollection_t939014605, ___gap_1)); }
	inline int32_t get_gap_1() const { return ___gap_1; }
	inline int32_t* get_address_of_gap_1() { return &___gap_1; }
	inline void set_gap_1(int32_t value)
	{
		___gap_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUPCOLLECTION_T939014605_H
#ifndef MATCHCOLLECTION_T3718216671_H
#define MATCHCOLLECTION_T3718216671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection
struct  MatchCollection_t3718216671  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::current
	Match_t3164245899 * ___current_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::list
	ArrayList_t4252133567 * ___list_1;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(MatchCollection_t3718216671, ___current_0)); }
	inline Match_t3164245899 * get_current_0() const { return ___current_0; }
	inline Match_t3164245899 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Match_t3164245899 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier((&___current_0), value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(MatchCollection_t3718216671, ___list_1)); }
	inline ArrayList_t4252133567 * get_list_1() const { return ___list_1; }
	inline ArrayList_t4252133567 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t4252133567 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHCOLLECTION_T3718216671_H
#ifndef ENUMERATOR_T501456973_H
#define ENUMERATOR_T501456973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection/Enumerator
struct  Enumerator_t501456973  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection/Enumerator::index
	int32_t ___index_0;
	// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.MatchCollection/Enumerator::coll
	MatchCollection_t3718216671 * ___coll_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Enumerator_t501456973, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_coll_1() { return static_cast<int32_t>(offsetof(Enumerator_t501456973, ___coll_1)); }
	inline MatchCollection_t3718216671 * get_coll_1() const { return ___coll_1; }
	inline MatchCollection_t3718216671 ** get_address_of_coll_1() { return &___coll_1; }
	inline void set_coll_1(MatchCollection_t3718216671 * value)
	{
		___coll_1 = value;
		Il2CppCodeGenWriteBarrier((&___coll_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T501456973_H
#ifndef FACTORYCACHE_T2051534610_H
#define FACTORYCACHE_T2051534610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t2051534610  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t909839986 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t33178162 * ___mru_list_2;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(FactoryCache_t2051534610, ___capacity_0)); }
	inline int32_t get_capacity_0() const { return ___capacity_0; }
	inline int32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(int32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_factories_1() { return static_cast<int32_t>(offsetof(FactoryCache_t2051534610, ___factories_1)); }
	inline Hashtable_t909839986 * get_factories_1() const { return ___factories_1; }
	inline Hashtable_t909839986 ** get_address_of_factories_1() { return &___factories_1; }
	inline void set_factories_1(Hashtable_t909839986 * value)
	{
		___factories_1 = value;
		Il2CppCodeGenWriteBarrier((&___factories_1), value);
	}

	inline static int32_t get_offset_of_mru_list_2() { return static_cast<int32_t>(offsetof(FactoryCache_t2051534610, ___mru_list_2)); }
	inline MRUList_t33178162 * get_mru_list_2() const { return ___mru_list_2; }
	inline MRUList_t33178162 ** get_address_of_mru_list_2() { return &___mru_list_2; }
	inline void set_mru_list_2(MRUList_t33178162 * value)
	{
		___mru_list_2 = value;
		Il2CppCodeGenWriteBarrier((&___mru_list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORYCACHE_T2051534610_H
#ifndef MRULIST_T33178162_H
#define MRULIST_T33178162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList
struct  MRUList_t33178162  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::head
	Node_t1107172180 * ___head_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::tail
	Node_t1107172180 * ___tail_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(MRUList_t33178162, ___head_0)); }
	inline Node_t1107172180 * get_head_0() const { return ___head_0; }
	inline Node_t1107172180 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t1107172180 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(MRUList_t33178162, ___tail_1)); }
	inline Node_t1107172180 * get_tail_1() const { return ___tail_1; }
	inline Node_t1107172180 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t1107172180 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier((&___tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MRULIST_T33178162_H
#ifndef NODE_T1107172180_H
#define NODE_T1107172180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList/Node
struct  Node_t1107172180  : public RuntimeObject
{
public:
	// System.Object System.Text.RegularExpressions.MRUList/Node::value
	RuntimeObject * ___value_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::previous
	Node_t1107172180 * ___previous_1;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::next
	Node_t1107172180 * ___next_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Node_t1107172180, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(Node_t1107172180, ___previous_1)); }
	inline Node_t1107172180 * get_previous_1() const { return ___previous_1; }
	inline Node_t1107172180 ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(Node_t1107172180 * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier((&___previous_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(Node_t1107172180, ___next_2)); }
	inline Node_t1107172180 * get_next_2() const { return ___next_2; }
	inline Node_t1107172180 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(Node_t1107172180 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODE_T1107172180_H
#ifndef CAPTURECOLLECTION_T1671345504_H
#define CAPTURECOLLECTION_T1671345504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CaptureCollection
struct  CaptureCollection_t1671345504  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Capture[] System.Text.RegularExpressions.CaptureCollection::list
	CaptureU5BU5D_t3470489975* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CaptureCollection_t1671345504, ___list_0)); }
	inline CaptureU5BU5D_t3470489975* get_list_0() const { return ___list_0; }
	inline CaptureU5BU5D_t3470489975** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(CaptureU5BU5D_t3470489975* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURECOLLECTION_T1671345504_H
#ifndef ASNENCODEDDATA_T463456204_H
#define ASNENCODEDDATA_T463456204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedData
struct  AsnEncodedData_t463456204  : public RuntimeObject
{
public:
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t3221867120 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_t3397334013* ____raw_1;

public:
	inline static int32_t get_offset_of__oid_0() { return static_cast<int32_t>(offsetof(AsnEncodedData_t463456204, ____oid_0)); }
	inline Oid_t3221867120 * get__oid_0() const { return ____oid_0; }
	inline Oid_t3221867120 ** get_address_of__oid_0() { return &____oid_0; }
	inline void set__oid_0(Oid_t3221867120 * value)
	{
		____oid_0 = value;
		Il2CppCodeGenWriteBarrier((&____oid_0), value);
	}

	inline static int32_t get_offset_of__raw_1() { return static_cast<int32_t>(offsetof(AsnEncodedData_t463456204, ____raw_1)); }
	inline ByteU5BU5D_t3397334013* get__raw_1() const { return ____raw_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__raw_1() { return &____raw_1; }
	inline void set__raw_1(ByteU5BU5D_t3397334013* value)
	{
		____raw_1 = value;
		Il2CppCodeGenWriteBarrier((&____raw_1), value);
	}
};

struct AsnEncodedData_t463456204_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.AsnEncodedData::<>f__switch$mapA
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapA_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_2() { return static_cast<int32_t>(offsetof(AsnEncodedData_t463456204_StaticFields, ___U3CU3Ef__switchU24mapA_2)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapA_2() const { return ___U3CU3Ef__switchU24mapA_2; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapA_2() { return &___U3CU3Ef__switchU24mapA_2; }
	inline void set_U3CU3Ef__switchU24mapA_2(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapA_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNENCODEDDATA_T463456204_H
#ifndef OID_T3221867120_H
#define OID_T3221867120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Oid
struct  Oid_t3221867120  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Oid::_value
	String_t* ____value_0;
	// System.String System.Security.Cryptography.Oid::_name
	String_t* ____name_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(Oid_t3221867120, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(Oid_t3221867120, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier((&____name_1), value);
	}
};

struct Oid_t3221867120_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Oid::<>f__switch$map10
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map10_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_2() { return static_cast<int32_t>(offsetof(Oid_t3221867120_StaticFields, ___U3CU3Ef__switchU24map10_2)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map10_2() const { return ___U3CU3Ef__switchU24map10_2; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map10_2() { return &___U3CU3Ef__switchU24map10_2; }
	inline void set_U3CU3Ef__switchU24map10_2(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map10_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T3221867120_H
#ifndef OIDCOLLECTION_T3790243618_H
#define OIDCOLLECTION_T3790243618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidCollection
struct  OidCollection_t3790243618  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::_list
	ArrayList_t4252133567 * ____list_0;
	// System.Boolean System.Security.Cryptography.OidCollection::_readOnly
	bool ____readOnly_1;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(OidCollection_t3790243618, ____list_0)); }
	inline ArrayList_t4252133567 * get__list_0() const { return ____list_0; }
	inline ArrayList_t4252133567 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t4252133567 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}

	inline static int32_t get_offset_of__readOnly_1() { return static_cast<int32_t>(offsetof(OidCollection_t3790243618, ____readOnly_1)); }
	inline bool get__readOnly_1() const { return ____readOnly_1; }
	inline bool* get_address_of__readOnly_1() { return &____readOnly_1; }
	inline void set__readOnly_1(bool value)
	{
		____readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDCOLLECTION_T3790243618_H
#ifndef OIDENUMERATOR_T3674631724_H
#define OIDENUMERATOR_T3674631724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidEnumerator
struct  OidEnumerator_t3674631724  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::_collection
	OidCollection_t3790243618 * ____collection_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__collection_0() { return static_cast<int32_t>(offsetof(OidEnumerator_t3674631724, ____collection_0)); }
	inline OidCollection_t3790243618 * get__collection_0() const { return ____collection_0; }
	inline OidCollection_t3790243618 ** get_address_of__collection_0() { return &____collection_0; }
	inline void set__collection_0(OidCollection_t3790243618 * value)
	{
		____collection_0 = value;
		Il2CppCodeGenWriteBarrier((&____collection_0), value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(OidEnumerator_t3674631724, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDENUMERATOR_T3674631724_H
#ifndef BASEMACHINE_T4008011478_H
#define BASEMACHINE_T4008011478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.BaseMachine
struct  BaseMachine_t4008011478  : public RuntimeObject
{
public:
	// System.Boolean System.Text.RegularExpressions.BaseMachine::needs_groups_or_captures
	bool ___needs_groups_or_captures_0;

public:
	inline static int32_t get_offset_of_needs_groups_or_captures_0() { return static_cast<int32_t>(offsetof(BaseMachine_t4008011478, ___needs_groups_or_captures_0)); }
	inline bool get_needs_groups_or_captures_0() const { return ___needs_groups_or_captures_0; }
	inline bool* get_address_of_needs_groups_or_captures_0() { return &___needs_groups_or_captures_0; }
	inline void set_needs_groups_or_captures_0(bool value)
	{
		___needs_groups_or_captures_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMACHINE_T4008011478_H
#ifndef CAPTURE_T4157900610_H
#define CAPTURE_T4157900610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_t4157900610  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Capture::index
	int32_t ___index_0;
	// System.Int32 System.Text.RegularExpressions.Capture::length
	int32_t ___length_1;
	// System.String System.Text.RegularExpressions.Capture::text
	String_t* ___text_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Capture_t4157900610, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Capture_t4157900610, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Capture_t4157900610, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_T4157900610_H
#ifndef CATEGORYUTILS_T3840220623_H
#define CATEGORYUTILS_T3840220623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CategoryUtils
struct  CategoryUtils_t3840220623  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYUTILS_T3840220623_H
#ifndef EXPRESSION_T368137076_H
#define EXPRESSION_T368137076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Expression
struct  Expression_t368137076  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T368137076_H
#ifndef MARSHALBYREFOBJECT_T1285298191_H
#define MARSHALBYREFOBJECT_T1285298191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1285298191  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1656058977 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1285298191, ____identity_0)); }
	inline ServerIdentity_t1656058977 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1656058977 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1656058977 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1285298191_H
#ifndef X509CERTIFICATE_T283079845_H
#define X509CERTIFICATE_T283079845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t283079845  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t324051957 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t3397334013* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___x509_0)); }
	inline X509Certificate_t324051957 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t324051957 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t324051957 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t3397334013* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t3397334013* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t283079845, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T283079845_H
#ifndef COLLECTIONBASE_T1101587467_H
#define COLLECTIONBASE_T1101587467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t1101587467  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t4252133567 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t1101587467, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T1101587467_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef URIPARSER_T1012511323_H
#define URIPARSER_T1012511323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t1012511323  : public RuntimeObject
{
public:
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;

public:
	inline static int32_t get_offset_of_scheme_name_2() { return static_cast<int32_t>(offsetof(UriParser_t1012511323, ___scheme_name_2)); }
	inline String_t* get_scheme_name_2() const { return ___scheme_name_2; }
	inline String_t** get_address_of_scheme_name_2() { return &___scheme_name_2; }
	inline void set_scheme_name_2(String_t* value)
	{
		___scheme_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_name_2), value);
	}

	inline static int32_t get_offset_of_default_port_3() { return static_cast<int32_t>(offsetof(UriParser_t1012511323, ___default_port_3)); }
	inline int32_t get_default_port_3() const { return ___default_port_3; }
	inline int32_t* get_address_of_default_port_3() { return &___default_port_3; }
	inline void set_default_port_3(int32_t value)
	{
		___default_port_3 = value;
	}
};

struct UriParser_t1012511323_StaticFields
{
public:
	// System.Object System.UriParser::lock_object
	RuntimeObject * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t909839986 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t1803876613 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t1803876613 * ___auth_regex_5;

public:
	inline static int32_t get_offset_of_lock_object_0() { return static_cast<int32_t>(offsetof(UriParser_t1012511323_StaticFields, ___lock_object_0)); }
	inline RuntimeObject * get_lock_object_0() const { return ___lock_object_0; }
	inline RuntimeObject ** get_address_of_lock_object_0() { return &___lock_object_0; }
	inline void set_lock_object_0(RuntimeObject * value)
	{
		___lock_object_0 = value;
		Il2CppCodeGenWriteBarrier((&___lock_object_0), value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(UriParser_t1012511323_StaticFields, ___table_1)); }
	inline Hashtable_t909839986 * get_table_1() const { return ___table_1; }
	inline Hashtable_t909839986 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t909839986 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}

	inline static int32_t get_offset_of_uri_regex_4() { return static_cast<int32_t>(offsetof(UriParser_t1012511323_StaticFields, ___uri_regex_4)); }
	inline Regex_t1803876613 * get_uri_regex_4() const { return ___uri_regex_4; }
	inline Regex_t1803876613 ** get_address_of_uri_regex_4() { return &___uri_regex_4; }
	inline void set_uri_regex_4(Regex_t1803876613 * value)
	{
		___uri_regex_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_regex_4), value);
	}

	inline static int32_t get_offset_of_auth_regex_5() { return static_cast<int32_t>(offsetof(UriParser_t1012511323_StaticFields, ___auth_regex_5)); }
	inline Regex_t1803876613 * get_auth_regex_5() const { return ___auth_regex_5; }
	inline Regex_t1803876613 ** get_address_of_auth_regex_5() { return &___auth_regex_5; }
	inline void set_auth_regex_5(Regex_t1803876613 * value)
	{
		___auth_regex_5 = value;
		Il2CppCodeGenWriteBarrier((&___auth_regex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_T1012511323_H
#ifndef QUICKSEARCH_T1036078825_H
#define QUICKSEARCH_T1036078825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.QuickSearch
struct  QuickSearch_t1036078825  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.QuickSearch::str
	String_t* ___str_0;
	// System.Int32 System.Text.RegularExpressions.QuickSearch::len
	int32_t ___len_1;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::ignore
	bool ___ignore_2;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::reverse
	bool ___reverse_3;
	// System.Byte[] System.Text.RegularExpressions.QuickSearch::shift
	ByteU5BU5D_t3397334013* ___shift_4;
	// System.Collections.Hashtable System.Text.RegularExpressions.QuickSearch::shiftExtended
	Hashtable_t909839986 * ___shiftExtended_5;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(QuickSearch_t1036078825, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(QuickSearch_t1036078825, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(QuickSearch_t1036078825, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_reverse_3() { return static_cast<int32_t>(offsetof(QuickSearch_t1036078825, ___reverse_3)); }
	inline bool get_reverse_3() const { return ___reverse_3; }
	inline bool* get_address_of_reverse_3() { return &___reverse_3; }
	inline void set_reverse_3(bool value)
	{
		___reverse_3 = value;
	}

	inline static int32_t get_offset_of_shift_4() { return static_cast<int32_t>(offsetof(QuickSearch_t1036078825, ___shift_4)); }
	inline ByteU5BU5D_t3397334013* get_shift_4() const { return ___shift_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_shift_4() { return &___shift_4; }
	inline void set_shift_4(ByteU5BU5D_t3397334013* value)
	{
		___shift_4 = value;
		Il2CppCodeGenWriteBarrier((&___shift_4), value);
	}

	inline static int32_t get_offset_of_shiftExtended_5() { return static_cast<int32_t>(offsetof(QuickSearch_t1036078825, ___shiftExtended_5)); }
	inline Hashtable_t909839986 * get_shiftExtended_5() const { return ___shiftExtended_5; }
	inline Hashtable_t909839986 ** get_address_of_shiftExtended_5() { return &___shiftExtended_5; }
	inline void set_shiftExtended_5(Hashtable_t909839986 * value)
	{
		___shiftExtended_5 = value;
		Il2CppCodeGenWriteBarrier((&___shiftExtended_5), value);
	}
};

struct QuickSearch_t1036078825_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.QuickSearch::THRESHOLD
	int32_t ___THRESHOLD_6;

public:
	inline static int32_t get_offset_of_THRESHOLD_6() { return static_cast<int32_t>(offsetof(QuickSearch_t1036078825_StaticFields, ___THRESHOLD_6)); }
	inline int32_t get_THRESHOLD_6() const { return ___THRESHOLD_6; }
	inline int32_t* get_address_of_THRESHOLD_6() { return &___THRESHOLD_6; }
	inline void set_THRESHOLD_6(int32_t value)
	{
		___THRESHOLD_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUICKSEARCH_T1036078825_H
#ifndef LINKREF_T2090853131_H
#define LINKREF_T2090853131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkRef
struct  LinkRef_t2090853131  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKREF_T2090853131_H
#ifndef INTERPRETERFACTORY_T556462562_H
#define INTERPRETERFACTORY_T556462562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.InterpreterFactory
struct  InterpreterFactory_t556462562  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::mapping
	RuntimeObject* ___mapping_0;
	// System.UInt16[] System.Text.RegularExpressions.InterpreterFactory::pattern
	UInt16U5BU5D_t2527266722* ___pattern_1;
	// System.String[] System.Text.RegularExpressions.InterpreterFactory::namesMapping
	StringU5BU5D_t1642385972* ___namesMapping_2;
	// System.Int32 System.Text.RegularExpressions.InterpreterFactory::gap
	int32_t ___gap_3;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(InterpreterFactory_t556462562, ___mapping_0)); }
	inline RuntimeObject* get_mapping_0() const { return ___mapping_0; }
	inline RuntimeObject** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(RuntimeObject* value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_0), value);
	}

	inline static int32_t get_offset_of_pattern_1() { return static_cast<int32_t>(offsetof(InterpreterFactory_t556462562, ___pattern_1)); }
	inline UInt16U5BU5D_t2527266722* get_pattern_1() const { return ___pattern_1; }
	inline UInt16U5BU5D_t2527266722** get_address_of_pattern_1() { return &___pattern_1; }
	inline void set_pattern_1(UInt16U5BU5D_t2527266722* value)
	{
		___pattern_1 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_1), value);
	}

	inline static int32_t get_offset_of_namesMapping_2() { return static_cast<int32_t>(offsetof(InterpreterFactory_t556462562, ___namesMapping_2)); }
	inline StringU5BU5D_t1642385972* get_namesMapping_2() const { return ___namesMapping_2; }
	inline StringU5BU5D_t1642385972** get_address_of_namesMapping_2() { return &___namesMapping_2; }
	inline void set_namesMapping_2(StringU5BU5D_t1642385972* value)
	{
		___namesMapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___namesMapping_2), value);
	}

	inline static int32_t get_offset_of_gap_3() { return static_cast<int32_t>(offsetof(InterpreterFactory_t556462562, ___gap_3)); }
	inline int32_t get_gap_3() const { return ___gap_3; }
	inline int32_t* get_address_of_gap_3() { return &___gap_3; }
	inline void set_gap_3(int32_t value)
	{
		___gap_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETERFACTORY_T556462562_H
#ifndef PATTERNCOMPILER_T637049905_H
#define PATTERNCOMPILER_T637049905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler
struct  PatternCompiler_t637049905  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.PatternCompiler::pgm
	ArrayList_t4252133567 * ___pgm_0;

public:
	inline static int32_t get_offset_of_pgm_0() { return static_cast<int32_t>(offsetof(PatternCompiler_t637049905, ___pgm_0)); }
	inline ArrayList_t4252133567 * get_pgm_0() const { return ___pgm_0; }
	inline ArrayList_t4252133567 ** get_address_of_pgm_0() { return &___pgm_0; }
	inline void set_pgm_0(ArrayList_t4252133567 * value)
	{
		___pgm_0 = value;
		Il2CppCodeGenWriteBarrier((&___pgm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNCOMPILER_T637049905_H
#ifndef REPEATCONTEXT_T1827616978_H
#define REPEATCONTEXT_T1827616978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct  RepeatContext_t1827616978  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::start
	int32_t ___start_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::lazy
	bool ___lazy_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::expr_pc
	int32_t ___expr_pc_4;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::previous
	RepeatContext_t1827616978 * ___previous_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RepeatContext_t1827616978, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(RepeatContext_t1827616978, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(RepeatContext_t1827616978, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(RepeatContext_t1827616978, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}

	inline static int32_t get_offset_of_expr_pc_4() { return static_cast<int32_t>(offsetof(RepeatContext_t1827616978, ___expr_pc_4)); }
	inline int32_t get_expr_pc_4() const { return ___expr_pc_4; }
	inline int32_t* get_address_of_expr_pc_4() { return &___expr_pc_4; }
	inline void set_expr_pc_4(int32_t value)
	{
		___expr_pc_4 = value;
	}

	inline static int32_t get_offset_of_previous_5() { return static_cast<int32_t>(offsetof(RepeatContext_t1827616978, ___previous_5)); }
	inline RepeatContext_t1827616978 * get_previous_5() const { return ___previous_5; }
	inline RepeatContext_t1827616978 ** get_address_of_previous_5() { return &___previous_5; }
	inline void set_previous_5(RepeatContext_t1827616978 * value)
	{
		___previous_5 = value;
		Il2CppCodeGenWriteBarrier((&___previous_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(RepeatContext_t1827616978, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPEATCONTEXT_T1827616978_H
#ifndef INTERVALCOLLECTION_T4130821325_H
#define INTERVALCOLLECTION_T4130821325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection
struct  IntervalCollection_t4130821325  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.IntervalCollection::intervals
	ArrayList_t4252133567 * ___intervals_0;

public:
	inline static int32_t get_offset_of_intervals_0() { return static_cast<int32_t>(offsetof(IntervalCollection_t4130821325, ___intervals_0)); }
	inline ArrayList_t4252133567 * get_intervals_0() const { return ___intervals_0; }
	inline ArrayList_t4252133567 ** get_address_of_intervals_0() { return &___intervals_0; }
	inline void set_intervals_0(ArrayList_t4252133567 * value)
	{
		___intervals_0 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALCOLLECTION_T4130821325_H
#ifndef ENUMERATOR_T1928086041_H
#define ENUMERATOR_T1928086041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/Enumerator
struct  Enumerator_t1928086041  : public RuntimeObject
{
public:
	// System.Collections.IList System.Text.RegularExpressions.IntervalCollection/Enumerator::list
	RuntimeObject* ___list_0;
	// System.Int32 System.Text.RegularExpressions.IntervalCollection/Enumerator::ptr
	int32_t ___ptr_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1928086041, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Enumerator_t1928086041, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1928086041_H
#ifndef PARSER_T2756028923_H
#define PARSER_T2756028923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Parser
struct  Parser_t2756028923  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Parser::pattern
	String_t* ___pattern_0;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ptr
	int32_t ___ptr_1;
	// System.Collections.ArrayList System.Text.RegularExpressions.Syntax.Parser::caps
	ArrayList_t4252133567 * ___caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.Syntax.Parser::refs
	Hashtable_t909839986 * ___refs_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::num_groups
	int32_t ___num_groups_4;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::gap
	int32_t ___gap_5;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Parser_t2756028923, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Parser_t2756028923, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}

	inline static int32_t get_offset_of_caps_2() { return static_cast<int32_t>(offsetof(Parser_t2756028923, ___caps_2)); }
	inline ArrayList_t4252133567 * get_caps_2() const { return ___caps_2; }
	inline ArrayList_t4252133567 ** get_address_of_caps_2() { return &___caps_2; }
	inline void set_caps_2(ArrayList_t4252133567 * value)
	{
		___caps_2 = value;
		Il2CppCodeGenWriteBarrier((&___caps_2), value);
	}

	inline static int32_t get_offset_of_refs_3() { return static_cast<int32_t>(offsetof(Parser_t2756028923, ___refs_3)); }
	inline Hashtable_t909839986 * get_refs_3() const { return ___refs_3; }
	inline Hashtable_t909839986 ** get_address_of_refs_3() { return &___refs_3; }
	inline void set_refs_3(Hashtable_t909839986 * value)
	{
		___refs_3 = value;
		Il2CppCodeGenWriteBarrier((&___refs_3), value);
	}

	inline static int32_t get_offset_of_num_groups_4() { return static_cast<int32_t>(offsetof(Parser_t2756028923, ___num_groups_4)); }
	inline int32_t get_num_groups_4() const { return ___num_groups_4; }
	inline int32_t* get_address_of_num_groups_4() { return &___num_groups_4; }
	inline void set_num_groups_4(int32_t value)
	{
		___num_groups_4 = value;
	}

	inline static int32_t get_offset_of_gap_5() { return static_cast<int32_t>(offsetof(Parser_t2756028923, ___gap_5)); }
	inline int32_t get_gap_5() const { return ___gap_5; }
	inline int32_t* get_address_of_gap_5() { return &___gap_5; }
	inline void set_gap_5(int32_t value)
	{
		___gap_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T2756028923_H
#ifndef X509EXTENSIONCOLLECTION_T650873211_H
#define X509EXTENSIONCOLLECTION_T650873211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct  X509ExtensionCollection_t650873211  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ExtensionCollection::_list
	ArrayList_t4252133567 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t650873211, ____list_0)); }
	inline ArrayList_t4252133567 * get__list_0() const { return ____list_0; }
	inline ArrayList_t4252133567 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t4252133567 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T650873211_H
#ifndef X509EXTENSIONENUMERATOR_T3763443773_H
#define X509EXTENSIONENUMERATOR_T3763443773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct  X509ExtensionEnumerator_t3763443773  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509ExtensionEnumerator_t3763443773, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONENUMERATOR_T3763443773_H
#ifndef X509CERTIFICATE2ENUMERATOR_T2356134957_H
#define X509CERTIFICATE2ENUMERATOR_T2356134957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct  X509Certificate2Enumerator_t2356134957  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509Certificate2Enumerator_t2356134957, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2ENUMERATOR_T2356134957_H
#ifndef X509CERTIFICATEENUMERATOR_T1208230922_H
#define X509CERTIFICATEENUMERATOR_T1208230922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t1208230922  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t1208230922, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T1208230922_H
#ifndef X509CHAINELEMENTCOLLECTION_T2081831987_H
#define X509CHAINELEMENTCOLLECTION_T2081831987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct  X509ChainElementCollection_t2081831987  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ChainElementCollection::_list
	ArrayList_t4252133567 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(X509ChainElementCollection_t2081831987, ____list_0)); }
	inline ArrayList_t4252133567 * get__list_0() const { return ____list_0; }
	inline ArrayList_t4252133567 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t4252133567 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINELEMENTCOLLECTION_T2081831987_H
#ifndef PUBLICKEY_T870392_H
#define PUBLICKEY_T870392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t870392  : public RuntimeObject
{
public:
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t784058677 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t463456204 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t463456204 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t3221867120 * ____oid_3;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(PublicKey_t870392, ____key_0)); }
	inline AsymmetricAlgorithm_t784058677 * get__key_0() const { return ____key_0; }
	inline AsymmetricAlgorithm_t784058677 ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(AsymmetricAlgorithm_t784058677 * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__keyValue_1() { return static_cast<int32_t>(offsetof(PublicKey_t870392, ____keyValue_1)); }
	inline AsnEncodedData_t463456204 * get__keyValue_1() const { return ____keyValue_1; }
	inline AsnEncodedData_t463456204 ** get_address_of__keyValue_1() { return &____keyValue_1; }
	inline void set__keyValue_1(AsnEncodedData_t463456204 * value)
	{
		____keyValue_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyValue_1), value);
	}

	inline static int32_t get_offset_of__params_2() { return static_cast<int32_t>(offsetof(PublicKey_t870392, ____params_2)); }
	inline AsnEncodedData_t463456204 * get__params_2() const { return ____params_2; }
	inline AsnEncodedData_t463456204 ** get_address_of__params_2() { return &____params_2; }
	inline void set__params_2(AsnEncodedData_t463456204 * value)
	{
		____params_2 = value;
		Il2CppCodeGenWriteBarrier((&____params_2), value);
	}

	inline static int32_t get_offset_of__oid_3() { return static_cast<int32_t>(offsetof(PublicKey_t870392, ____oid_3)); }
	inline Oid_t3221867120 * get__oid_3() const { return ____oid_3; }
	inline Oid_t3221867120 ** get_address_of__oid_3() { return &____oid_3; }
	inline void set__oid_3(Oid_t3221867120 * value)
	{
		____oid_3 = value;
		Il2CppCodeGenWriteBarrier((&____oid_3), value);
	}
};

struct PublicKey_t870392_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map9
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map9_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_4() { return static_cast<int32_t>(offsetof(PublicKey_t870392_StaticFields, ___U3CU3Ef__switchU24map9_4)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map9_4() const { return ___U3CU3Ef__switchU24map9_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map9_4() { return &___U3CU3Ef__switchU24map9_4; }
	inline void set_U3CU3Ef__switchU24map9_4(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map9_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map9_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLICKEY_T870392_H
#ifndef X509CHAINELEMENTENUMERATOR_T3304975821_H
#define X509CHAINELEMENTENUMERATOR_T3304975821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct  X509ChainElementEnumerator_t3304975821  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509ChainElementEnumerator_t3304975821, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINELEMENTENUMERATOR_T3304975821_H
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef X509CERTIFICATECOLLECTION_T1197680765_H
#define X509CERTIFICATECOLLECTION_T1197680765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct  X509CertificateCollection_t1197680765  : public CollectionBase_t1101587467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T1197680765_H
#ifndef INTSTACK_T273560425_H
#define INTSTACK_T273560425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/IntStack
struct  IntStack_t273560425 
{
public:
	// System.Int32[] System.Text.RegularExpressions.Interpreter/IntStack::values
	Int32U5BU5D_t3030399641* ___values_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(IntStack_t273560425, ___values_0)); }
	inline Int32U5BU5D_t3030399641* get_values_0() const { return ___values_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(Int32U5BU5D_t3030399641* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(IntStack_t273560425, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t273560425_marshaled_pinvoke
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t273560425_marshaled_com
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
#endif // INTSTACK_T273560425_H
#ifndef MARK_T2724874473_H
#define MARK_T2724874473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Mark
struct  Mark_t2724874473 
{
public:
	// System.Int32 System.Text.RegularExpressions.Mark::Start
	int32_t ___Start_0;
	// System.Int32 System.Text.RegularExpressions.Mark::End
	int32_t ___End_1;
	// System.Int32 System.Text.RegularExpressions.Mark::Previous
	int32_t ___Previous_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(Mark_t2724874473, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(Mark_t2724874473, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(Mark_t2724874473, ___Previous_2)); }
	inline int32_t get_Previous_2() const { return ___Previous_2; }
	inline int32_t* get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(int32_t value)
	{
		___Previous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARK_T2724874473_H
#ifndef LINKSTACK_T954792760_H
#define LINKSTACK_T954792760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkStack
struct  LinkStack_t954792760  : public LinkRef_t2090853131
{
public:
	// System.Collections.Stack System.Text.RegularExpressions.LinkStack::stack
	Stack_t1043988394 * ___stack_0;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(LinkStack_t954792760, ___stack_0)); }
	inline Stack_t1043988394 * get_stack_0() const { return ___stack_0; }
	inline Stack_t1043988394 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t1043988394 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___stack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSTACK_T954792760_H
#ifndef LINK_T3337276394_H
#define LINK_T3337276394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
struct  Link_t3337276394 
{
public:
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::base_addr
	int32_t ___base_addr_0;
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::offset_addr
	int32_t ___offset_addr_1;

public:
	inline static int32_t get_offset_of_base_addr_0() { return static_cast<int32_t>(offsetof(Link_t3337276394, ___base_addr_0)); }
	inline int32_t get_base_addr_0() const { return ___base_addr_0; }
	inline int32_t* get_address_of_base_addr_0() { return &___base_addr_0; }
	inline void set_base_addr_0(int32_t value)
	{
		___base_addr_0 = value;
	}

	inline static int32_t get_offset_of_offset_addr_1() { return static_cast<int32_t>(offsetof(Link_t3337276394, ___offset_addr_1)); }
	inline int32_t get_offset_addr_1() const { return ___offset_addr_1; }
	inline int32_t* get_address_of_offset_addr_1() { return &___offset_addr_1; }
	inline void set_offset_addr_1(int32_t value)
	{
		___offset_addr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T3337276394_H
#ifndef X509CERTIFICATE2_T4056456767_H
#define X509CERTIFICATE2_T4056456767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct  X509Certificate2_t4056456767  : public X509Certificate_t283079845
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::_archived
	bool ____archived_5;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::_extensions
	X509ExtensionCollection_t650873211 * ____extensions_6;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::_name
	String_t* ____name_7;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::_serial
	String_t* ____serial_8;
	// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::_publicKey
	PublicKey_t870392 * ____publicKey_9;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::issuer_name
	X500DistinguishedName_t452415348 * ___issuer_name_10;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::subject_name
	X500DistinguishedName_t452415348 * ___subject_name_11;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::signature_algorithm
	Oid_t3221867120 * ___signature_algorithm_12;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::_cert
	X509Certificate_t324051958 * ____cert_13;

public:
	inline static int32_t get_offset_of__archived_5() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____archived_5)); }
	inline bool get__archived_5() const { return ____archived_5; }
	inline bool* get_address_of__archived_5() { return &____archived_5; }
	inline void set__archived_5(bool value)
	{
		____archived_5 = value;
	}

	inline static int32_t get_offset_of__extensions_6() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____extensions_6)); }
	inline X509ExtensionCollection_t650873211 * get__extensions_6() const { return ____extensions_6; }
	inline X509ExtensionCollection_t650873211 ** get_address_of__extensions_6() { return &____extensions_6; }
	inline void set__extensions_6(X509ExtensionCollection_t650873211 * value)
	{
		____extensions_6 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_6), value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((&____name_7), value);
	}

	inline static int32_t get_offset_of__serial_8() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____serial_8)); }
	inline String_t* get__serial_8() const { return ____serial_8; }
	inline String_t** get_address_of__serial_8() { return &____serial_8; }
	inline void set__serial_8(String_t* value)
	{
		____serial_8 = value;
		Il2CppCodeGenWriteBarrier((&____serial_8), value);
	}

	inline static int32_t get_offset_of__publicKey_9() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____publicKey_9)); }
	inline PublicKey_t870392 * get__publicKey_9() const { return ____publicKey_9; }
	inline PublicKey_t870392 ** get_address_of__publicKey_9() { return &____publicKey_9; }
	inline void set__publicKey_9(PublicKey_t870392 * value)
	{
		____publicKey_9 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_9), value);
	}

	inline static int32_t get_offset_of_issuer_name_10() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ___issuer_name_10)); }
	inline X500DistinguishedName_t452415348 * get_issuer_name_10() const { return ___issuer_name_10; }
	inline X500DistinguishedName_t452415348 ** get_address_of_issuer_name_10() { return &___issuer_name_10; }
	inline void set_issuer_name_10(X500DistinguishedName_t452415348 * value)
	{
		___issuer_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_10), value);
	}

	inline static int32_t get_offset_of_subject_name_11() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ___subject_name_11)); }
	inline X500DistinguishedName_t452415348 * get_subject_name_11() const { return ___subject_name_11; }
	inline X500DistinguishedName_t452415348 ** get_address_of_subject_name_11() { return &___subject_name_11; }
	inline void set_subject_name_11(X500DistinguishedName_t452415348 * value)
	{
		___subject_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_11), value);
	}

	inline static int32_t get_offset_of_signature_algorithm_12() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ___signature_algorithm_12)); }
	inline Oid_t3221867120 * get_signature_algorithm_12() const { return ___signature_algorithm_12; }
	inline Oid_t3221867120 ** get_address_of_signature_algorithm_12() { return &___signature_algorithm_12; }
	inline void set_signature_algorithm_12(Oid_t3221867120 * value)
	{
		___signature_algorithm_12 = value;
		Il2CppCodeGenWriteBarrier((&___signature_algorithm_12), value);
	}

	inline static int32_t get_offset_of__cert_13() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____cert_13)); }
	inline X509Certificate_t324051958 * get__cert_13() const { return ____cert_13; }
	inline X509Certificate_t324051958 ** get_address_of__cert_13() { return &____cert_13; }
	inline void set__cert_13(X509Certificate_t324051958 * value)
	{
		____cert_13 = value;
		Il2CppCodeGenWriteBarrier((&____cert_13), value);
	}
};

struct X509Certificate2_t4056456767_StaticFields
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::empty_error
	String_t* ___empty_error_14;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::commonName
	ByteU5BU5D_t3397334013* ___commonName_15;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::email
	ByteU5BU5D_t3397334013* ___email_16;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::signedData
	ByteU5BU5D_t3397334013* ___signedData_17;

public:
	inline static int32_t get_offset_of_empty_error_14() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767_StaticFields, ___empty_error_14)); }
	inline String_t* get_empty_error_14() const { return ___empty_error_14; }
	inline String_t** get_address_of_empty_error_14() { return &___empty_error_14; }
	inline void set_empty_error_14(String_t* value)
	{
		___empty_error_14 = value;
		Il2CppCodeGenWriteBarrier((&___empty_error_14), value);
	}

	inline static int32_t get_offset_of_commonName_15() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767_StaticFields, ___commonName_15)); }
	inline ByteU5BU5D_t3397334013* get_commonName_15() const { return ___commonName_15; }
	inline ByteU5BU5D_t3397334013** get_address_of_commonName_15() { return &___commonName_15; }
	inline void set_commonName_15(ByteU5BU5D_t3397334013* value)
	{
		___commonName_15 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_15), value);
	}

	inline static int32_t get_offset_of_email_16() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767_StaticFields, ___email_16)); }
	inline ByteU5BU5D_t3397334013* get_email_16() const { return ___email_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_email_16() { return &___email_16; }
	inline void set_email_16(ByteU5BU5D_t3397334013* value)
	{
		___email_16 = value;
		Il2CppCodeGenWriteBarrier((&___email_16), value);
	}

	inline static int32_t get_offset_of_signedData_17() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767_StaticFields, ___signedData_17)); }
	inline ByteU5BU5D_t3397334013* get_signedData_17() const { return ___signedData_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_signedData_17() { return &___signedData_17; }
	inline void set_signedData_17(ByteU5BU5D_t3397334013* value)
	{
		___signedData_17 = value;
		Il2CppCodeGenWriteBarrier((&___signedData_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2_T4056456767_H
#ifndef TIMESPAN_T3430258949_H
#define TIMESPAN_T3430258949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3430258949 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3430258949_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3430258949  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3430258949  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3430258949  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3430258949  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3430258949 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3430258949  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3430258949  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3430258949 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3430258949  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3430258949  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3430258949 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3430258949  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3430258949_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef X500DISTINGUISHEDNAME_T452415348_H
#define X500DISTINGUISHEDNAME_T452415348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct  X500DistinguishedName_t452415348  : public AsnEncodedData_t463456204
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::name
	String_t* ___name_3;

public:
	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(X500DistinguishedName_t452415348, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X500DISTINGUISHEDNAME_T452415348_H
#ifndef GENERICURIPARSER_T2599285286_H
#define GENERICURIPARSER_T2599285286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GenericUriParser
struct  GenericUriParser_t2599285286  : public UriParser_t1012511323
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICURIPARSER_T2599285286_H
#ifndef DEFAULTURIPARSER_T1591960796_H
#define DEFAULTURIPARSER_T1591960796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultUriParser
struct  DefaultUriParser_t1591960796  : public UriParser_t1012511323
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTURIPARSER_T1591960796_H
#ifndef REFERENCE_T1540574699_H
#define REFERENCE_T1540574699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t1540574699  : public Expression_t368137076
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t3690174926 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(Reference_t1540574699, ___group_0)); }
	inline CapturingGroup_t3690174926 * get_group_0() const { return ___group_0; }
	inline CapturingGroup_t3690174926 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(CapturingGroup_t3690174926 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Reference_t1540574699, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCE_T1540574699_H
#ifndef LITERAL_T2896011011_H
#define LITERAL_T2896011011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Literal
struct  Literal_t2896011011  : public Expression_t368137076
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Literal::str
	String_t* ___str_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Literal::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(Literal_t2896011011, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Literal_t2896011011, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LITERAL_T2896011011_H
#ifndef COMPOSITEEXPRESSION_T1921307915_H
#define COMPOSITEEXPRESSION_T1921307915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t1921307915  : public Expression_t368137076
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_t238836340 * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t1921307915, ___expressions_0)); }
	inline ExpressionCollection_t238836340 * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_t238836340 ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_t238836340 * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITEEXPRESSION_T1921307915_H
#ifndef EXPRESSIONCOLLECTION_T238836340_H
#define EXPRESSIONCOLLECTION_T238836340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct  ExpressionCollection_t238836340  : public CollectionBase_t1101587467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONCOLLECTION_T238836340_H
#ifndef INTERVAL_T2354235237_H
#define INTERVAL_T2354235237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interval
struct  Interval_t2354235237 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interval::low
	int32_t ___low_0;
	// System.Int32 System.Text.RegularExpressions.Interval::high
	int32_t ___high_1;
	// System.Boolean System.Text.RegularExpressions.Interval::contiguous
	bool ___contiguous_2;

public:
	inline static int32_t get_offset_of_low_0() { return static_cast<int32_t>(offsetof(Interval_t2354235237, ___low_0)); }
	inline int32_t get_low_0() const { return ___low_0; }
	inline int32_t* get_address_of_low_0() { return &___low_0; }
	inline void set_low_0(int32_t value)
	{
		___low_0 = value;
	}

	inline static int32_t get_offset_of_high_1() { return static_cast<int32_t>(offsetof(Interval_t2354235237, ___high_1)); }
	inline int32_t get_high_1() const { return ___high_1; }
	inline int32_t* get_address_of_high_1() { return &___high_1; }
	inline void set_high_1(int32_t value)
	{
		___high_1 = value;
	}

	inline static int32_t get_offset_of_contiguous_2() { return static_cast<int32_t>(offsetof(Interval_t2354235237, ___contiguous_2)); }
	inline bool get_contiguous_2() const { return ___contiguous_2; }
	inline bool* get_address_of_contiguous_2() { return &___contiguous_2; }
	inline void set_contiguous_2(bool value)
	{
		___contiguous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interval
struct Interval_t2354235237_marshaled_pinvoke
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interval
struct Interval_t2354235237_marshaled_com
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
#endif // INTERVAL_T2354235237_H
#ifndef GROUP_T3761430853_H
#define GROUP_T3761430853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t3761430853  : public Capture_t4157900610
{
public:
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t1671345504 * ___captures_5;

public:
	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(Group_t3761430853, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}

	inline static int32_t get_offset_of_captures_5() { return static_cast<int32_t>(offsetof(Group_t3761430853, ___captures_5)); }
	inline CaptureCollection_t1671345504 * get_captures_5() const { return ___captures_5; }
	inline CaptureCollection_t1671345504 ** get_address_of_captures_5() { return &___captures_5; }
	inline void set_captures_5(CaptureCollection_t1671345504 * value)
	{
		___captures_5 = value;
		Il2CppCodeGenWriteBarrier((&___captures_5), value);
	}
};

struct Group_t3761430853_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t3761430853 * ___Fail_3;

public:
	inline static int32_t get_offset_of_Fail_3() { return static_cast<int32_t>(offsetof(Group_t3761430853_StaticFields, ___Fail_3)); }
	inline Group_t3761430853 * get_Fail_3() const { return ___Fail_3; }
	inline Group_t3761430853 ** get_address_of_Fail_3() { return &___Fail_3; }
	inline void set_Fail_3(Group_t3761430853 * value)
	{
		___Fail_3 = value;
		Il2CppCodeGenWriteBarrier((&___Fail_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T3761430853_H
#ifndef X509EXTENSION_T1320896183_H
#define X509EXTENSION_T1320896183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Extension
struct  X509Extension_t1320896183  : public AsnEncodedData_t463456204
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_3;

public:
	inline static int32_t get_offset_of__critical_3() { return static_cast<int32_t>(offsetof(X509Extension_t1320896183, ____critical_3)); }
	inline bool get__critical_3() const { return ____critical_3; }
	inline bool* get_address_of__critical_3() { return &____critical_3; }
	inline void set__critical_3(bool value)
	{
		____critical_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T1320896183_H
#ifndef X509REVOCATIONMODE_T2065307963_H
#define X509REVOCATIONMODE_T2065307963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationMode
struct  X509RevocationMode_t2065307963 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509RevocationMode_t2065307963, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509REVOCATIONMODE_T2065307963_H
#ifndef AUTHENTICATIONLEVEL_T2424130044_H
#define AUTHENTICATIONLEVEL_T2424130044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t2424130044 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t2424130044, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONLEVEL_T2424130044_H
#ifndef X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T110301003_H
#define X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T110301003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
struct  X509SubjectKeyIdentifierHashAlgorithm_t110301003 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierHashAlgorithm_t110301003, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T110301003_H
#ifndef GROUP_T2558408851_H
#define GROUP_T2558408851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Group
struct  Group_t2558408851  : public CompositeExpression_t1921307915
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T2558408851_H
#ifndef STORELOCATION_T1570828128_H
#define STORELOCATION_T1570828128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreLocation
struct  StoreLocation_t1570828128 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StoreLocation_t1570828128, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORELOCATION_T1570828128_H
#ifndef X500DISTINGUISHEDNAMEFLAGS_T2005802885_H
#define X500DISTINGUISHEDNAMEFLAGS_T2005802885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
struct  X500DistinguishedNameFlags_t2005802885 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X500DistinguishedNameFlags_t2005802885, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X500DISTINGUISHEDNAMEFLAGS_T2005802885_H
#ifndef X509FINDTYPE_T3221716179_H
#define X509FINDTYPE_T3221716179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509FindType
struct  X509FindType_t3221716179 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509FindType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509FindType_t3221716179, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509FINDTYPE_T3221716179_H
#ifndef STORENAME_T2183514610_H
#define STORENAME_T2183514610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreName
struct  StoreName_t2183514610 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreName::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StoreName_t2183514610, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORENAME_T2183514610_H
#ifndef BACKSLASHNUMBER_T1461652789_H
#define BACKSLASHNUMBER_T1461652789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct  BackslashNumber_t1461652789  : public Reference_t1540574699
{
public:
	// System.String System.Text.RegularExpressions.Syntax.BackslashNumber::literal
	String_t* ___literal_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ecma
	bool ___ecma_3;

public:
	inline static int32_t get_offset_of_literal_2() { return static_cast<int32_t>(offsetof(BackslashNumber_t1461652789, ___literal_2)); }
	inline String_t* get_literal_2() const { return ___literal_2; }
	inline String_t** get_address_of_literal_2() { return &___literal_2; }
	inline void set_literal_2(String_t* value)
	{
		___literal_2 = value;
		Il2CppCodeGenWriteBarrier((&___literal_2), value);
	}

	inline static int32_t get_offset_of_ecma_3() { return static_cast<int32_t>(offsetof(BackslashNumber_t1461652789, ___ecma_3)); }
	inline bool get_ecma_3() const { return ___ecma_3; }
	inline bool* get_address_of_ecma_3() { return &___ecma_3; }
	inline void set_ecma_3(bool value)
	{
		___ecma_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKSLASHNUMBER_T1461652789_H
#ifndef X509NAMETYPE_T2669466891_H
#define X509NAMETYPE_T2669466891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509NameType
struct  X509NameType_t2669466891 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509NameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509NameType_t2669466891, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509NAMETYPE_T2669466891_H
#ifndef X509KEYUSAGEFLAGS_T2461349531_H
#define X509KEYUSAGEFLAGS_T2461349531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct  X509KeyUsageFlags_t2461349531 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyUsageFlags_t2461349531, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYUSAGEFLAGS_T2461349531_H
#ifndef ALTERNATION_T3506694545_H
#define ALTERNATION_T3506694545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Alternation
struct  Alternation_t3506694545  : public CompositeExpression_t1921307915
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALTERNATION_T3506694545_H
#ifndef X509REVOCATIONFLAG_T2166064554_H
#define X509REVOCATIONFLAG_T2166064554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationFlag
struct  X509RevocationFlag_t2166064554 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509RevocationFlag_t2166064554, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509REVOCATIONFLAG_T2166064554_H
#ifndef ASNDECODESTATUS_T1962003286_H
#define ASNDECODESTATUS_T1962003286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnDecodeStatus
struct  AsnDecodeStatus_t1962003286 
{
public:
	// System.Int32 System.Security.Cryptography.AsnDecodeStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AsnDecodeStatus_t1962003286, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNDECODESTATUS_T1962003286_H
#ifndef ASSERTION_T1490870658_H
#define ASSERTION_T1490870658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Assertion
struct  Assertion_t1490870658  : public CompositeExpression_t1921307915
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTION_T1490870658_H
#ifndef REPETITION_T3426306051_H
#define REPETITION_T3426306051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Repetition
struct  Repetition_t3426306051  : public CompositeExpression_t1921307915
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.Repetition::lazy
	bool ___lazy_3;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(Repetition_t3426306051, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(Repetition_t3426306051, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(Repetition_t3426306051, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPETITION_T3426306051_H
#ifndef X509VERIFICATIONFLAGS_T2169036324_H
#define X509VERIFICATIONFLAGS_T2169036324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct  X509VerificationFlags_t2169036324 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509VerificationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509VerificationFlags_t2169036324, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509VERIFICATIONFLAGS_T2169036324_H
#ifndef CHARACTERCLASS_T655244183_H
#define CHARACTERCLASS_T655244183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t655244183  : public Expression_t368137076
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t4180138994 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t4180138994 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t4130821325 * ___intervals_5;

public:
	inline static int32_t get_offset_of_negate_1() { return static_cast<int32_t>(offsetof(CharacterClass_t655244183, ___negate_1)); }
	inline bool get_negate_1() const { return ___negate_1; }
	inline bool* get_address_of_negate_1() { return &___negate_1; }
	inline void set_negate_1(bool value)
	{
		___negate_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(CharacterClass_t655244183, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_pos_cats_3() { return static_cast<int32_t>(offsetof(CharacterClass_t655244183, ___pos_cats_3)); }
	inline BitArray_t4180138994 * get_pos_cats_3() const { return ___pos_cats_3; }
	inline BitArray_t4180138994 ** get_address_of_pos_cats_3() { return &___pos_cats_3; }
	inline void set_pos_cats_3(BitArray_t4180138994 * value)
	{
		___pos_cats_3 = value;
		Il2CppCodeGenWriteBarrier((&___pos_cats_3), value);
	}

	inline static int32_t get_offset_of_neg_cats_4() { return static_cast<int32_t>(offsetof(CharacterClass_t655244183, ___neg_cats_4)); }
	inline BitArray_t4180138994 * get_neg_cats_4() const { return ___neg_cats_4; }
	inline BitArray_t4180138994 ** get_address_of_neg_cats_4() { return &___neg_cats_4; }
	inline void set_neg_cats_4(BitArray_t4180138994 * value)
	{
		___neg_cats_4 = value;
		Il2CppCodeGenWriteBarrier((&___neg_cats_4), value);
	}

	inline static int32_t get_offset_of_intervals_5() { return static_cast<int32_t>(offsetof(CharacterClass_t655244183, ___intervals_5)); }
	inline IntervalCollection_t4130821325 * get_intervals_5() const { return ___intervals_5; }
	inline IntervalCollection_t4130821325 ** get_address_of_intervals_5() { return &___intervals_5; }
	inline void set_intervals_5(IntervalCollection_t4130821325 * value)
	{
		___intervals_5 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_5), value);
	}
};

struct CharacterClass_t655244183_StaticFields
{
public:
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t2354235237  ___upper_case_characters_0;

public:
	inline static int32_t get_offset_of_upper_case_characters_0() { return static_cast<int32_t>(offsetof(CharacterClass_t655244183_StaticFields, ___upper_case_characters_0)); }
	inline Interval_t2354235237  get_upper_case_characters_0() const { return ___upper_case_characters_0; }
	inline Interval_t2354235237 * get_address_of_upper_case_characters_0() { return &___upper_case_characters_0; }
	inline void set_upper_case_characters_0(Interval_t2354235237  value)
	{
		___upper_case_characters_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCLASS_T655244183_H
#ifndef OPCODE_T586571952_H
#define OPCODE_T586571952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.OpCode
struct  OpCode_t586571952 
{
public:
	// System.UInt16 System.Text.RegularExpressions.OpCode::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCode_t586571952, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T586571952_H
#ifndef PATTERNLINKSTACK_T3979537293_H
#define PATTERNLINKSTACK_T3979537293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
struct  PatternLinkStack_t3979537293  : public LinkStack_t954792760
{
public:
	// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::link
	Link_t3337276394  ___link_1;

public:
	inline static int32_t get_offset_of_link_1() { return static_cast<int32_t>(offsetof(PatternLinkStack_t3979537293, ___link_1)); }
	inline Link_t3337276394  get_link_1() const { return ___link_1; }
	inline Link_t3337276394 * get_address_of_link_1() { return &___link_1; }
	inline void set_link_1(Link_t3337276394  value)
	{
		___link_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNLINKSTACK_T3979537293_H
#ifndef OPFLAGS_T378191910_H
#define OPFLAGS_T378191910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.OpFlags
struct  OpFlags_t378191910 
{
public:
	// System.UInt16 System.Text.RegularExpressions.OpFlags::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpFlags_t378191910, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPFLAGS_T378191910_H
#ifndef POSITION_T3781184359_H
#define POSITION_T3781184359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Position
struct  Position_t3781184359 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Position::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Position_t3781184359, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T3781184359_H
#ifndef CATEGORY_T1984577050_H
#define CATEGORY_T1984577050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Category
struct  Category_t1984577050 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Category::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Category_t1984577050, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORY_T1984577050_H
#ifndef DATETIMEKIND_T2186819611_H
#define DATETIMEKIND_T2186819611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2186819611 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2186819611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2186819611_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef REGEXOPTIONS_T2418259727_H
#define REGEXOPTIONS_T2418259727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t2418259727 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t2418259727, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T2418259727_H
#ifndef MODE_T2395763083_H
#define MODE_T2395763083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/Mode
struct  Mode_t2395763083 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t2395763083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T2395763083_H
#ifndef X509CERTIFICATE2COLLECTION_T1108969367_H
#define X509CERTIFICATE2COLLECTION_T1108969367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct  X509Certificate2Collection_t1108969367  : public X509CertificateCollection_t1197680765
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2COLLECTION_T1108969367_H
#ifndef X509CHAINSTATUSFLAGS_T480677120_H
#define X509CHAINSTATUSFLAGS_T480677120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t480677120 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t480677120, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINSTATUSFLAGS_T480677120_H
#ifndef INTERPRETER_T3731288230_H
#define INTERPRETER_T3731288230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter
struct  Interpreter_t3731288230  : public BaseMachine_t4008011478
{
public:
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t2527266722* ___program_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start_2;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end_4;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min_6;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t1036078825 * ___qs_7;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr_8;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t1827616978 * ___repeat_9;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t1827616978 * ___fast_10;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t273560425  ___stack_11;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t1827616978 * ___deep_12;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t3801731412* ___marks_13;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start_14;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end_15;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t3030399641* ___groups_16;

public:
	inline static int32_t get_offset_of_program_1() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___program_1)); }
	inline UInt16U5BU5D_t2527266722* get_program_1() const { return ___program_1; }
	inline UInt16U5BU5D_t2527266722** get_address_of_program_1() { return &___program_1; }
	inline void set_program_1(UInt16U5BU5D_t2527266722* value)
	{
		___program_1 = value;
		Il2CppCodeGenWriteBarrier((&___program_1), value);
	}

	inline static int32_t get_offset_of_program_start_2() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___program_start_2)); }
	inline int32_t get_program_start_2() const { return ___program_start_2; }
	inline int32_t* get_address_of_program_start_2() { return &___program_start_2; }
	inline void set_program_start_2(int32_t value)
	{
		___program_start_2 = value;
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}

	inline static int32_t get_offset_of_text_end_4() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___text_end_4)); }
	inline int32_t get_text_end_4() const { return ___text_end_4; }
	inline int32_t* get_address_of_text_end_4() { return &___text_end_4; }
	inline void set_text_end_4(int32_t value)
	{
		___text_end_4 = value;
	}

	inline static int32_t get_offset_of_group_count_5() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___group_count_5)); }
	inline int32_t get_group_count_5() const { return ___group_count_5; }
	inline int32_t* get_address_of_group_count_5() { return &___group_count_5; }
	inline void set_group_count_5(int32_t value)
	{
		___group_count_5 = value;
	}

	inline static int32_t get_offset_of_match_min_6() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___match_min_6)); }
	inline int32_t get_match_min_6() const { return ___match_min_6; }
	inline int32_t* get_address_of_match_min_6() { return &___match_min_6; }
	inline void set_match_min_6(int32_t value)
	{
		___match_min_6 = value;
	}

	inline static int32_t get_offset_of_qs_7() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___qs_7)); }
	inline QuickSearch_t1036078825 * get_qs_7() const { return ___qs_7; }
	inline QuickSearch_t1036078825 ** get_address_of_qs_7() { return &___qs_7; }
	inline void set_qs_7(QuickSearch_t1036078825 * value)
	{
		___qs_7 = value;
		Il2CppCodeGenWriteBarrier((&___qs_7), value);
	}

	inline static int32_t get_offset_of_scan_ptr_8() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___scan_ptr_8)); }
	inline int32_t get_scan_ptr_8() const { return ___scan_ptr_8; }
	inline int32_t* get_address_of_scan_ptr_8() { return &___scan_ptr_8; }
	inline void set_scan_ptr_8(int32_t value)
	{
		___scan_ptr_8 = value;
	}

	inline static int32_t get_offset_of_repeat_9() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___repeat_9)); }
	inline RepeatContext_t1827616978 * get_repeat_9() const { return ___repeat_9; }
	inline RepeatContext_t1827616978 ** get_address_of_repeat_9() { return &___repeat_9; }
	inline void set_repeat_9(RepeatContext_t1827616978 * value)
	{
		___repeat_9 = value;
		Il2CppCodeGenWriteBarrier((&___repeat_9), value);
	}

	inline static int32_t get_offset_of_fast_10() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___fast_10)); }
	inline RepeatContext_t1827616978 * get_fast_10() const { return ___fast_10; }
	inline RepeatContext_t1827616978 ** get_address_of_fast_10() { return &___fast_10; }
	inline void set_fast_10(RepeatContext_t1827616978 * value)
	{
		___fast_10 = value;
		Il2CppCodeGenWriteBarrier((&___fast_10), value);
	}

	inline static int32_t get_offset_of_stack_11() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___stack_11)); }
	inline IntStack_t273560425  get_stack_11() const { return ___stack_11; }
	inline IntStack_t273560425 * get_address_of_stack_11() { return &___stack_11; }
	inline void set_stack_11(IntStack_t273560425  value)
	{
		___stack_11 = value;
	}

	inline static int32_t get_offset_of_deep_12() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___deep_12)); }
	inline RepeatContext_t1827616978 * get_deep_12() const { return ___deep_12; }
	inline RepeatContext_t1827616978 ** get_address_of_deep_12() { return &___deep_12; }
	inline void set_deep_12(RepeatContext_t1827616978 * value)
	{
		___deep_12 = value;
		Il2CppCodeGenWriteBarrier((&___deep_12), value);
	}

	inline static int32_t get_offset_of_marks_13() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___marks_13)); }
	inline MarkU5BU5D_t3801731412* get_marks_13() const { return ___marks_13; }
	inline MarkU5BU5D_t3801731412** get_address_of_marks_13() { return &___marks_13; }
	inline void set_marks_13(MarkU5BU5D_t3801731412* value)
	{
		___marks_13 = value;
		Il2CppCodeGenWriteBarrier((&___marks_13), value);
	}

	inline static int32_t get_offset_of_mark_start_14() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___mark_start_14)); }
	inline int32_t get_mark_start_14() const { return ___mark_start_14; }
	inline int32_t* get_address_of_mark_start_14() { return &___mark_start_14; }
	inline void set_mark_start_14(int32_t value)
	{
		___mark_start_14 = value;
	}

	inline static int32_t get_offset_of_mark_end_15() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___mark_end_15)); }
	inline int32_t get_mark_end_15() const { return ___mark_end_15; }
	inline int32_t* get_address_of_mark_end_15() { return &___mark_end_15; }
	inline void set_mark_end_15(int32_t value)
	{
		___mark_end_15 = value;
	}

	inline static int32_t get_offset_of_groups_16() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___groups_16)); }
	inline Int32U5BU5D_t3030399641* get_groups_16() const { return ___groups_16; }
	inline Int32U5BU5D_t3030399641** get_address_of_groups_16() { return &___groups_16; }
	inline void set_groups_16(Int32U5BU5D_t3030399641* value)
	{
		___groups_16 = value;
		Il2CppCodeGenWriteBarrier((&___groups_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETER_T3731288230_H
#ifndef OPENFLAGS_T2370524385_H
#define OPENFLAGS_T2370524385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OpenFlags
struct  OpenFlags_t2370524385 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.OpenFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpenFlags_t2370524385, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPENFLAGS_T2370524385_H
#ifndef MATCH_T3164245899_H
#define MATCH_T3164245899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t3164245899  : public Group_t3761430853
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t1803876613 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	RuntimeObject* ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t939014605 * ___groups_9;

public:
	inline static int32_t get_offset_of_regex_6() { return static_cast<int32_t>(offsetof(Match_t3164245899, ___regex_6)); }
	inline Regex_t1803876613 * get_regex_6() const { return ___regex_6; }
	inline Regex_t1803876613 ** get_address_of_regex_6() { return &___regex_6; }
	inline void set_regex_6(Regex_t1803876613 * value)
	{
		___regex_6 = value;
		Il2CppCodeGenWriteBarrier((&___regex_6), value);
	}

	inline static int32_t get_offset_of_machine_7() { return static_cast<int32_t>(offsetof(Match_t3164245899, ___machine_7)); }
	inline RuntimeObject* get_machine_7() const { return ___machine_7; }
	inline RuntimeObject** get_address_of_machine_7() { return &___machine_7; }
	inline void set_machine_7(RuntimeObject* value)
	{
		___machine_7 = value;
		Il2CppCodeGenWriteBarrier((&___machine_7), value);
	}

	inline static int32_t get_offset_of_text_length_8() { return static_cast<int32_t>(offsetof(Match_t3164245899, ___text_length_8)); }
	inline int32_t get_text_length_8() const { return ___text_length_8; }
	inline int32_t* get_address_of_text_length_8() { return &___text_length_8; }
	inline void set_text_length_8(int32_t value)
	{
		___text_length_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(Match_t3164245899, ___groups_9)); }
	inline GroupCollection_t939014605 * get_groups_9() const { return ___groups_9; }
	inline GroupCollection_t939014605 ** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(GroupCollection_t939014605 * value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier((&___groups_9), value);
	}
};

struct Match_t3164245899_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t3164245899 * ___empty_10;

public:
	inline static int32_t get_offset_of_empty_10() { return static_cast<int32_t>(offsetof(Match_t3164245899_StaticFields, ___empty_10)); }
	inline Match_t3164245899 * get_empty_10() const { return ___empty_10; }
	inline Match_t3164245899 ** get_address_of_empty_10() { return &___empty_10; }
	inline void set_empty_10(Match_t3164245899 * value)
	{
		___empty_10 = value;
		Il2CppCodeGenWriteBarrier((&___empty_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T3164245899_H
#ifndef X509SUBJECTKEYIDENTIFIEREXTENSION_T2508879999_H
#define X509SUBJECTKEYIDENTIFIEREXTENSION_T2508879999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct  X509SubjectKeyIdentifierExtension_t2508879999  : public X509Extension_t1320896183
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_t3397334013* ____subjectKeyIdentifier_6;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__subjectKeyIdentifier_6() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t2508879999, ____subjectKeyIdentifier_6)); }
	inline ByteU5BU5D_t3397334013* get__subjectKeyIdentifier_6() const { return ____subjectKeyIdentifier_6; }
	inline ByteU5BU5D_t3397334013** get_address_of__subjectKeyIdentifier_6() { return &____subjectKeyIdentifier_6; }
	inline void set__subjectKeyIdentifier_6(ByteU5BU5D_t3397334013* value)
	{
		____subjectKeyIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((&____subjectKeyIdentifier_6), value);
	}

	inline static int32_t get_offset_of__ski_7() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t2508879999, ____ski_7)); }
	inline String_t* get__ski_7() const { return ____ski_7; }
	inline String_t** get_address_of__ski_7() { return &____ski_7; }
	inline void set__ski_7(String_t* value)
	{
		____ski_7 = value;
		Il2CppCodeGenWriteBarrier((&____ski_7), value);
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t2508879999, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509SUBJECTKEYIDENTIFIEREXTENSION_T2508879999_H
#ifndef ANCHORINFO_T1392970135_H
#define ANCHORINFO_T1392970135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct  AnchorInfo_t1392970135  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.AnchorInfo::expr
	Expression_t368137076 * ___expr_0;
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::pos
	uint16_t ___pos_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::offset
	int32_t ___offset_2;
	// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::str
	String_t* ___str_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::width
	int32_t ___width_4;
	// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::ignore
	bool ___ignore_5;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(AnchorInfo_t1392970135, ___expr_0)); }
	inline Expression_t368137076 * get_expr_0() const { return ___expr_0; }
	inline Expression_t368137076 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t368137076 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(AnchorInfo_t1392970135, ___pos_1)); }
	inline uint16_t get_pos_1() const { return ___pos_1; }
	inline uint16_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(uint16_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(AnchorInfo_t1392970135, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(AnchorInfo_t1392970135, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((&___str_3), value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AnchorInfo_t1392970135, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(AnchorInfo_t1392970135, ___ignore_5)); }
	inline bool get_ignore_5() const { return ___ignore_5; }
	inline bool* get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(bool value)
	{
		___ignore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORINFO_T1392970135_H
#ifndef WEBREQUEST_T1365124353_H
#define WEBREQUEST_T1365124353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1365124353  : public MarshalByRefObject_t1285298191
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1365124353, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1365124353_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t290043810 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1365124353_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t290043810 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t290043810 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t290043810 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1365124353_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1365124353_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1365124353_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T1365124353_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef DATETIME_T693205669_H
#define DATETIME_T693205669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t693205669 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3430258949  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___ticks_0)); }
	inline TimeSpan_t3430258949  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3430258949 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3430258949  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t693205669_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t693205669  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t693205669  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1642385972* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1642385972* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1642385972* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1642385972* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1642385972* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1642385972* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1642385972* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3030399641* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3030399641* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MaxValue_2)); }
	inline DateTime_t693205669  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t693205669 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t693205669  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MinValue_3)); }
	inline DateTime_t693205669  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t693205669 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t693205669  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1642385972* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1642385972* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1642385972* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1642385972* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1642385972* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1642385972* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1642385972* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1642385972* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1642385972* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1642385972* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1642385972* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1642385972** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1642385972* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1642385972* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1642385972** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1642385972* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3030399641* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3030399641** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3030399641* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3030399641* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3030399641** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3030399641* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T693205669_H
#ifndef X509STORE_T1617430119_H
#define X509STORE_T1617430119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Store
struct  X509Store_t1617430119  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Store::_name
	String_t* ____name_0;
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::_location
	int32_t ____location_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t1108969367 * ___list_2;
	// System.Security.Cryptography.X509Certificates.OpenFlags System.Security.Cryptography.X509Certificates.X509Store::_flags
	int32_t ____flags_3;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_t4028973563 * ___store_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(X509Store_t1617430119, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(X509Store_t1617430119, ____location_1)); }
	inline int32_t get__location_1() const { return ____location_1; }
	inline int32_t* get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(int32_t value)
	{
		____location_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(X509Store_t1617430119, ___list_2)); }
	inline X509Certificate2Collection_t1108969367 * get_list_2() const { return ___list_2; }
	inline X509Certificate2Collection_t1108969367 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(X509Certificate2Collection_t1108969367 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}

	inline static int32_t get_offset_of__flags_3() { return static_cast<int32_t>(offsetof(X509Store_t1617430119, ____flags_3)); }
	inline int32_t get__flags_3() const { return ____flags_3; }
	inline int32_t* get_address_of__flags_3() { return &____flags_3; }
	inline void set__flags_3(int32_t value)
	{
		____flags_3 = value;
	}

	inline static int32_t get_offset_of_store_4() { return static_cast<int32_t>(offsetof(X509Store_t1617430119, ___store_4)); }
	inline X509Store_t4028973563 * get_store_4() const { return ___store_4; }
	inline X509Store_t4028973563 ** get_address_of_store_4() { return &___store_4; }
	inline void set_store_4(X509Store_t4028973563 * value)
	{
		___store_4 = value;
		Il2CppCodeGenWriteBarrier((&___store_4), value);
	}
};

struct X509Store_t1617430119_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Store::<>f__switch$mapF
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapF_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_5() { return static_cast<int32_t>(offsetof(X509Store_t1617430119_StaticFields, ___U3CU3Ef__switchU24mapF_5)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapF_5() const { return ___U3CU3Ef__switchU24mapF_5; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapF_5() { return &___U3CU3Ef__switchU24mapF_5; }
	inline void set_U3CU3Ef__switchU24mapF_5(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapF_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T1617430119_H
#ifndef X509BASICCONSTRAINTSEXTENSION_T1562873317_H
#define X509BASICCONSTRAINTSEXTENSION_T1562873317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct  X509BasicConstraintsExtension_t1562873317  : public X509Extension_t1320896183
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_certificateAuthority
	bool ____certificateAuthority_6;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_hasPathLengthConstraint
	bool ____hasPathLengthConstraint_7;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_pathLengthConstraint
	int32_t ____pathLengthConstraint_8;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_status
	int32_t ____status_9;

public:
	inline static int32_t get_offset_of__certificateAuthority_6() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t1562873317, ____certificateAuthority_6)); }
	inline bool get__certificateAuthority_6() const { return ____certificateAuthority_6; }
	inline bool* get_address_of__certificateAuthority_6() { return &____certificateAuthority_6; }
	inline void set__certificateAuthority_6(bool value)
	{
		____certificateAuthority_6 = value;
	}

	inline static int32_t get_offset_of__hasPathLengthConstraint_7() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t1562873317, ____hasPathLengthConstraint_7)); }
	inline bool get__hasPathLengthConstraint_7() const { return ____hasPathLengthConstraint_7; }
	inline bool* get_address_of__hasPathLengthConstraint_7() { return &____hasPathLengthConstraint_7; }
	inline void set__hasPathLengthConstraint_7(bool value)
	{
		____hasPathLengthConstraint_7 = value;
	}

	inline static int32_t get_offset_of__pathLengthConstraint_8() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t1562873317, ____pathLengthConstraint_8)); }
	inline int32_t get__pathLengthConstraint_8() const { return ____pathLengthConstraint_8; }
	inline int32_t* get_address_of__pathLengthConstraint_8() { return &____pathLengthConstraint_8; }
	inline void set__pathLengthConstraint_8(int32_t value)
	{
		____pathLengthConstraint_8 = value;
	}

	inline static int32_t get_offset_of__status_9() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t1562873317, ____status_9)); }
	inline int32_t get__status_9() const { return ____status_9; }
	inline int32_t* get_address_of__status_9() { return &____status_9; }
	inline void set__status_9(int32_t value)
	{
		____status_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509BASICCONSTRAINTSEXTENSION_T1562873317_H
#ifndef X509ENHANCEDKEYUSAGEEXTENSION_T2099881051_H
#define X509ENHANCEDKEYUSAGEEXTENSION_T2099881051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t2099881051  : public X509Extension_t1320896183
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t3790243618 * ____enhKeyUsage_4;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_5;

public:
	inline static int32_t get_offset_of__enhKeyUsage_4() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051, ____enhKeyUsage_4)); }
	inline OidCollection_t3790243618 * get__enhKeyUsage_4() const { return ____enhKeyUsage_4; }
	inline OidCollection_t3790243618 ** get_address_of__enhKeyUsage_4() { return &____enhKeyUsage_4; }
	inline void set__enhKeyUsage_4(OidCollection_t3790243618 * value)
	{
		____enhKeyUsage_4 = value;
		Il2CppCodeGenWriteBarrier((&____enhKeyUsage_4), value);
	}

	inline static int32_t get_offset_of__status_5() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051, ____status_5)); }
	inline int32_t get__status_5() const { return ____status_5; }
	inline int32_t* get_address_of__status_5() { return &____status_5; }
	inline void set__status_5(int32_t value)
	{
		____status_5 = value;
	}
};

struct X509EnhancedKeyUsageExtension_t2099881051_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::<>f__switch$mapE
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapE_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_6() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051_StaticFields, ___U3CU3Ef__switchU24mapE_6)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapE_6() const { return ___U3CU3Ef__switchU24mapE_6; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapE_6() { return &___U3CU3Ef__switchU24mapE_6; }
	inline void set_U3CU3Ef__switchU24mapE_6(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapE_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509ENHANCEDKEYUSAGEEXTENSION_T2099881051_H
#ifndef REGEX_T1803876613_H
#define REGEX_T1803876613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t1803876613  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t1642385972* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t3030399641* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_group_names_5() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___group_names_5)); }
	inline StringU5BU5D_t1642385972* get_group_names_5() const { return ___group_names_5; }
	inline StringU5BU5D_t1642385972** get_address_of_group_names_5() { return &___group_names_5; }
	inline void set_group_names_5(StringU5BU5D_t1642385972* value)
	{
		___group_names_5 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_5), value);
	}

	inline static int32_t get_offset_of_group_numbers_6() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___group_numbers_6)); }
	inline Int32U5BU5D_t3030399641* get_group_numbers_6() const { return ___group_numbers_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_group_numbers_6() { return &___group_numbers_6; }
	inline void set_group_numbers_6(Int32U5BU5D_t3030399641* value)
	{
		___group_numbers_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_6), value);
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___pattern_7)); }
	inline String_t* get_pattern_7() const { return ___pattern_7; }
	inline String_t** get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(String_t* value)
	{
		___pattern_7 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_7), value);
	}

	inline static int32_t get_offset_of_roptions_8() { return static_cast<int32_t>(offsetof(Regex_t1803876613, ___roptions_8)); }
	inline int32_t get_roptions_8() const { return ___roptions_8; }
	inline int32_t* get_address_of_roptions_8() { return &___roptions_8; }
	inline void set_roptions_8(int32_t value)
	{
		___roptions_8 = value;
	}
};

struct Regex_t1803876613_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t2051534610 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t1803876613_StaticFields, ___cache_0)); }
	inline FactoryCache_t2051534610 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t2051534610 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t2051534610 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T1803876613_H
#ifndef X509CHAIN_T777637347_H
#define X509CHAIN_T777637347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Chain
struct  X509Chain_t777637347  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Chain::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509Chain::elements
	X509ChainElementCollection_t2081831987 * ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::policy
	X509ChainPolicy_t3452126517 * ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::status
	X509ChainStatusU5BU5D_t830390908* ___status_3;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509Chain::max_path_length
	int32_t ___max_path_length_5;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Chain::working_issuer_name
	X500DistinguishedName_t452415348 * ___working_issuer_name_6;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Chain::working_public_key
	AsymmetricAlgorithm_t784058677 * ___working_public_key_7;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509Chain::bce_restriction
	X509ChainElement_t528874471 * ___bce_restriction_8;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::roots
	X509Store_t1617430119 * ___roots_9;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::cas
	X509Store_t1617430119 * ___cas_10;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::collection
	X509Certificate2Collection_t1108969367 * ___collection_11;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___location_0)); }
	inline int32_t get_location_0() const { return ___location_0; }
	inline int32_t* get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(int32_t value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_elements_1() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___elements_1)); }
	inline X509ChainElementCollection_t2081831987 * get_elements_1() const { return ___elements_1; }
	inline X509ChainElementCollection_t2081831987 ** get_address_of_elements_1() { return &___elements_1; }
	inline void set_elements_1(X509ChainElementCollection_t2081831987 * value)
	{
		___elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___elements_1), value);
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___policy_2)); }
	inline X509ChainPolicy_t3452126517 * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_t3452126517 ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_t3452126517 * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier((&___policy_2), value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___status_3)); }
	inline X509ChainStatusU5BU5D_t830390908* get_status_3() const { return ___status_3; }
	inline X509ChainStatusU5BU5D_t830390908** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(X509ChainStatusU5BU5D_t830390908* value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier((&___status_3), value);
	}

	inline static int32_t get_offset_of_max_path_length_5() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___max_path_length_5)); }
	inline int32_t get_max_path_length_5() const { return ___max_path_length_5; }
	inline int32_t* get_address_of_max_path_length_5() { return &___max_path_length_5; }
	inline void set_max_path_length_5(int32_t value)
	{
		___max_path_length_5 = value;
	}

	inline static int32_t get_offset_of_working_issuer_name_6() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___working_issuer_name_6)); }
	inline X500DistinguishedName_t452415348 * get_working_issuer_name_6() const { return ___working_issuer_name_6; }
	inline X500DistinguishedName_t452415348 ** get_address_of_working_issuer_name_6() { return &___working_issuer_name_6; }
	inline void set_working_issuer_name_6(X500DistinguishedName_t452415348 * value)
	{
		___working_issuer_name_6 = value;
		Il2CppCodeGenWriteBarrier((&___working_issuer_name_6), value);
	}

	inline static int32_t get_offset_of_working_public_key_7() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___working_public_key_7)); }
	inline AsymmetricAlgorithm_t784058677 * get_working_public_key_7() const { return ___working_public_key_7; }
	inline AsymmetricAlgorithm_t784058677 ** get_address_of_working_public_key_7() { return &___working_public_key_7; }
	inline void set_working_public_key_7(AsymmetricAlgorithm_t784058677 * value)
	{
		___working_public_key_7 = value;
		Il2CppCodeGenWriteBarrier((&___working_public_key_7), value);
	}

	inline static int32_t get_offset_of_bce_restriction_8() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___bce_restriction_8)); }
	inline X509ChainElement_t528874471 * get_bce_restriction_8() const { return ___bce_restriction_8; }
	inline X509ChainElement_t528874471 ** get_address_of_bce_restriction_8() { return &___bce_restriction_8; }
	inline void set_bce_restriction_8(X509ChainElement_t528874471 * value)
	{
		___bce_restriction_8 = value;
		Il2CppCodeGenWriteBarrier((&___bce_restriction_8), value);
	}

	inline static int32_t get_offset_of_roots_9() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___roots_9)); }
	inline X509Store_t1617430119 * get_roots_9() const { return ___roots_9; }
	inline X509Store_t1617430119 ** get_address_of_roots_9() { return &___roots_9; }
	inline void set_roots_9(X509Store_t1617430119 * value)
	{
		___roots_9 = value;
		Il2CppCodeGenWriteBarrier((&___roots_9), value);
	}

	inline static int32_t get_offset_of_cas_10() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___cas_10)); }
	inline X509Store_t1617430119 * get_cas_10() const { return ___cas_10; }
	inline X509Store_t1617430119 ** get_address_of_cas_10() { return &___cas_10; }
	inline void set_cas_10(X509Store_t1617430119 * value)
	{
		___cas_10 = value;
		Il2CppCodeGenWriteBarrier((&___cas_10), value);
	}

	inline static int32_t get_offset_of_collection_11() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___collection_11)); }
	inline X509Certificate2Collection_t1108969367 * get_collection_11() const { return ___collection_11; }
	inline X509Certificate2Collection_t1108969367 ** get_address_of_collection_11() { return &___collection_11; }
	inline void set_collection_11(X509Certificate2Collection_t1108969367 * value)
	{
		___collection_11 = value;
		Il2CppCodeGenWriteBarrier((&___collection_11), value);
	}
};

struct X509Chain_t777637347_StaticFields
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::Empty
	X509ChainStatusU5BU5D_t830390908* ___Empty_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapB
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapB_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapC
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapC_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapD
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapD_14;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(X509Chain_t777637347_StaticFields, ___Empty_4)); }
	inline X509ChainStatusU5BU5D_t830390908* get_Empty_4() const { return ___Empty_4; }
	inline X509ChainStatusU5BU5D_t830390908** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(X509ChainStatusU5BU5D_t830390908* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_12() { return static_cast<int32_t>(offsetof(X509Chain_t777637347_StaticFields, ___U3CU3Ef__switchU24mapB_12)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapB_12() const { return ___U3CU3Ef__switchU24mapB_12; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapB_12() { return &___U3CU3Ef__switchU24mapB_12; }
	inline void set_U3CU3Ef__switchU24mapB_12(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapB_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapB_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_13() { return static_cast<int32_t>(offsetof(X509Chain_t777637347_StaticFields, ___U3CU3Ef__switchU24mapC_13)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapC_13() const { return ___U3CU3Ef__switchU24mapC_13; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapC_13() { return &___U3CU3Ef__switchU24mapC_13; }
	inline void set_U3CU3Ef__switchU24mapC_13(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapC_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_14() { return static_cast<int32_t>(offsetof(X509Chain_t777637347_StaticFields, ___U3CU3Ef__switchU24mapD_14)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapD_14() const { return ___U3CU3Ef__switchU24mapD_14; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapD_14() { return &___U3CU3Ef__switchU24mapD_14; }
	inline void set_U3CU3Ef__switchU24mapD_14(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapD_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapD_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T777637347_H
#ifndef X509CHAINELEMENT_T528874471_H
#define X509CHAINELEMENT_T528874471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElement
struct  X509ChainElement_t528874471  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::certificate
	X509Certificate2_t4056456767 * ___certificate_0;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainElement::status
	X509ChainStatusU5BU5D_t830390908* ___status_1;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainElement::info
	String_t* ___info_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainElement::compressed_status_flags
	int32_t ___compressed_status_flags_3;

public:
	inline static int32_t get_offset_of_certificate_0() { return static_cast<int32_t>(offsetof(X509ChainElement_t528874471, ___certificate_0)); }
	inline X509Certificate2_t4056456767 * get_certificate_0() const { return ___certificate_0; }
	inline X509Certificate2_t4056456767 ** get_address_of_certificate_0() { return &___certificate_0; }
	inline void set_certificate_0(X509Certificate2_t4056456767 * value)
	{
		___certificate_0 = value;
		Il2CppCodeGenWriteBarrier((&___certificate_0), value);
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(X509ChainElement_t528874471, ___status_1)); }
	inline X509ChainStatusU5BU5D_t830390908* get_status_1() const { return ___status_1; }
	inline X509ChainStatusU5BU5D_t830390908** get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(X509ChainStatusU5BU5D_t830390908* value)
	{
		___status_1 = value;
		Il2CppCodeGenWriteBarrier((&___status_1), value);
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(X509ChainElement_t528874471, ___info_2)); }
	inline String_t* get_info_2() const { return ___info_2; }
	inline String_t** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(String_t* value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((&___info_2), value);
	}

	inline static int32_t get_offset_of_compressed_status_flags_3() { return static_cast<int32_t>(offsetof(X509ChainElement_t528874471, ___compressed_status_flags_3)); }
	inline int32_t get_compressed_status_flags_3() const { return ___compressed_status_flags_3; }
	inline int32_t* get_address_of_compressed_status_flags_3() { return &___compressed_status_flags_3; }
	inline void set_compressed_status_flags_3(int32_t value)
	{
		___compressed_status_flags_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINELEMENT_T528874471_H
#ifndef X509CHAINSTATUS_T4278378721_H
#define X509CHAINSTATUS_T4278378721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t4278378721 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t4278378721, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t4278378721, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t4278378721_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t4278378721_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
#endif // X509CHAINSTATUS_T4278378721_H
#ifndef X509KEYUSAGEEXTENSION_T1038124237_H
#define X509KEYUSAGEEXTENSION_T1038124237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct  X509KeyUsageExtension_t1038124237  : public X509Extension_t1320896183
{
public:
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__keyUsages_7() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t1038124237, ____keyUsages_7)); }
	inline int32_t get__keyUsages_7() const { return ____keyUsages_7; }
	inline int32_t* get_address_of__keyUsages_7() { return &____keyUsages_7; }
	inline void set__keyUsages_7(int32_t value)
	{
		____keyUsages_7 = value;
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t1038124237, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYUSAGEEXTENSION_T1038124237_H
#ifndef POSITIONASSERTION_T2152361535_H
#define POSITIONASSERTION_T2152361535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct  PositionAssertion_t2152361535  : public Expression_t368137076
{
public:
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.PositionAssertion::pos
	uint16_t ___pos_0;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(PositionAssertion_t2152361535, ___pos_0)); }
	inline uint16_t get_pos_0() const { return ___pos_0; }
	inline uint16_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(uint16_t value)
	{
		___pos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASSERTION_T2152361535_H
#ifndef EXPRESSIONASSERTION_T3255443744_H
#define EXPRESSIONASSERTION_T3255443744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct  ExpressionAssertion_t3255443744  : public Assertion_t1490870658
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::reverse
	bool ___reverse_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::negate
	bool ___negate_2;

public:
	inline static int32_t get_offset_of_reverse_1() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t3255443744, ___reverse_1)); }
	inline bool get_reverse_1() const { return ___reverse_1; }
	inline bool* get_address_of_reverse_1() { return &___reverse_1; }
	inline void set_reverse_1(bool value)
	{
		___reverse_1 = value;
	}

	inline static int32_t get_offset_of_negate_2() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t3255443744, ___negate_2)); }
	inline bool get_negate_2() const { return ___negate_2; }
	inline bool* get_address_of_negate_2() { return &___negate_2; }
	inline void set_negate_2(bool value)
	{
		___negate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONASSERTION_T3255443744_H
#ifndef CAPTUREASSERTION_T196851652_H
#define CAPTUREASSERTION_T196851652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t196851652  : public Assertion_t1490870658
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t3255443744 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t3690174926 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t2896011011 * ___literal_3;

public:
	inline static int32_t get_offset_of_alternate_1() { return static_cast<int32_t>(offsetof(CaptureAssertion_t196851652, ___alternate_1)); }
	inline ExpressionAssertion_t3255443744 * get_alternate_1() const { return ___alternate_1; }
	inline ExpressionAssertion_t3255443744 ** get_address_of_alternate_1() { return &___alternate_1; }
	inline void set_alternate_1(ExpressionAssertion_t3255443744 * value)
	{
		___alternate_1 = value;
		Il2CppCodeGenWriteBarrier((&___alternate_1), value);
	}

	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(CaptureAssertion_t196851652, ___group_2)); }
	inline CapturingGroup_t3690174926 * get_group_2() const { return ___group_2; }
	inline CapturingGroup_t3690174926 ** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(CapturingGroup_t3690174926 * value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier((&___group_2), value);
	}

	inline static int32_t get_offset_of_literal_3() { return static_cast<int32_t>(offsetof(CaptureAssertion_t196851652, ___literal_3)); }
	inline Literal_t2896011011 * get_literal_3() const { return ___literal_3; }
	inline Literal_t2896011011 ** get_address_of_literal_3() { return &___literal_3; }
	inline void set_literal_3(Literal_t2896011011 * value)
	{
		___literal_3 = value;
		Il2CppCodeGenWriteBarrier((&___literal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREASSERTION_T196851652_H
#ifndef NONBACKTRACKINGGROUP_T607185170_H
#define NONBACKTRACKINGGROUP_T607185170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
struct  NonBacktrackingGroup_t607185170  : public Group_t2558408851
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONBACKTRACKINGGROUP_T607185170_H
#ifndef KEY_T655155419_H
#define KEY_T655155419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache/Key
struct  Key_t655155419  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.FactoryCache/Key::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.FactoryCache/Key::options
	int32_t ___options_1;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Key_t655155419, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(Key_t655155419, ___options_1)); }
	inline int32_t get_options_1() const { return ___options_1; }
	inline int32_t* get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(int32_t value)
	{
		___options_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T655155419_H
#ifndef CAPTURINGGROUP_T3690174926_H
#define CAPTURINGGROUP_T3690174926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct  CapturingGroup_t3690174926  : public Group_t2558408851
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::gid
	int32_t ___gid_1;
	// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(CapturingGroup_t3690174926, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CapturingGroup_t3690174926, ___name_2)); }
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
#endif // CAPTURINGGROUP_T3690174926_H
#ifndef REGULAREXPRESSION_T3083097024_H
#define REGULAREXPRESSION_T3083097024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.RegularExpression
struct  RegularExpression_t3083097024  : public Group_t2558408851
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.RegularExpression::group_count
	int32_t ___group_count_1;

public:
	inline static int32_t get_offset_of_group_count_1() { return static_cast<int32_t>(offsetof(RegularExpression_t3083097024, ___group_count_1)); }
	inline int32_t get_group_count_1() const { return ___group_count_1; }
	inline int32_t* get_address_of_group_count_1() { return &___group_count_1; }
	inline void set_group_count_1(int32_t value)
	{
		___group_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGULAREXPRESSION_T3083097024_H
#ifndef COSTDELEGATE_T1824458113_H
#define COSTDELEGATE_T1824458113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct  CostDelegate_t1824458113  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COSTDELEGATE_T1824458113_H
#ifndef X509CHAINPOLICY_T3452126517_H
#define X509CHAINPOLICY_T3452126517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct  X509ChainPolicy_t3452126517  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_t3790243618 * ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_t3790243618 * ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store
	X509Certificate2Collection_t1108969367 * ___store_2;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_4;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_t3430258949  ___timeout_5;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_6;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t693205669  ___vtime_7;

public:
	inline static int32_t get_offset_of_apps_0() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3452126517, ___apps_0)); }
	inline OidCollection_t3790243618 * get_apps_0() const { return ___apps_0; }
	inline OidCollection_t3790243618 ** get_address_of_apps_0() { return &___apps_0; }
	inline void set_apps_0(OidCollection_t3790243618 * value)
	{
		___apps_0 = value;
		Il2CppCodeGenWriteBarrier((&___apps_0), value);
	}

	inline static int32_t get_offset_of_cert_1() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3452126517, ___cert_1)); }
	inline OidCollection_t3790243618 * get_cert_1() const { return ___cert_1; }
	inline OidCollection_t3790243618 ** get_address_of_cert_1() { return &___cert_1; }
	inline void set_cert_1(OidCollection_t3790243618 * value)
	{
		___cert_1 = value;
		Il2CppCodeGenWriteBarrier((&___cert_1), value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3452126517, ___store_2)); }
	inline X509Certificate2Collection_t1108969367 * get_store_2() const { return ___store_2; }
	inline X509Certificate2Collection_t1108969367 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(X509Certificate2Collection_t1108969367 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_rflag_3() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3452126517, ___rflag_3)); }
	inline int32_t get_rflag_3() const { return ___rflag_3; }
	inline int32_t* get_address_of_rflag_3() { return &___rflag_3; }
	inline void set_rflag_3(int32_t value)
	{
		___rflag_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3452126517, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_timeout_5() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3452126517, ___timeout_5)); }
	inline TimeSpan_t3430258949  get_timeout_5() const { return ___timeout_5; }
	inline TimeSpan_t3430258949 * get_address_of_timeout_5() { return &___timeout_5; }
	inline void set_timeout_5(TimeSpan_t3430258949  value)
	{
		___timeout_5 = value;
	}

	inline static int32_t get_offset_of_vflags_6() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3452126517, ___vflags_6)); }
	inline int32_t get_vflags_6() const { return ___vflags_6; }
	inline int32_t* get_address_of_vflags_6() { return &___vflags_6; }
	inline void set_vflags_6(int32_t value)
	{
		___vflags_6 = value;
	}

	inline static int32_t get_offset_of_vtime_7() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3452126517, ___vtime_7)); }
	inline DateTime_t693205669  get_vtime_7() const { return ___vtime_7; }
	inline DateTime_t693205669 * get_address_of_vtime_7() { return &___vtime_7; }
	inline void set_vtime_7(DateTime_t693205669  value)
	{
		___vtime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINPOLICY_T3452126517_H
#ifndef BALANCINGGROUP_T3168604284_H
#define BALANCINGGROUP_T3168604284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct  BalancingGroup_t3168604284  : public CapturingGroup_t3690174926
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.BalancingGroup::balance
	CapturingGroup_t3690174926 * ___balance_3;

public:
	inline static int32_t get_offset_of_balance_3() { return static_cast<int32_t>(offsetof(BalancingGroup_t3168604284, ___balance_3)); }
	inline CapturingGroup_t3690174926 * get_balance_3() const { return ___balance_3; }
	inline CapturingGroup_t3690174926 ** get_address_of_balance_3() { return &___balance_3; }
	inline void set_balance_3(CapturingGroup_t3690174926 * value)
	{
		___balance_3 = value;
		Il2CppCodeGenWriteBarrier((&___balance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALANCINGGROUP_T3168604284_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (WebProxy_t1169192840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1100[5] = 
{
	WebProxy_t1169192840::get_offset_of_address_0(),
	WebProxy_t1169192840::get_offset_of_bypassOnLocal_1(),
	WebProxy_t1169192840::get_offset_of_bypassList_2(),
	WebProxy_t1169192840::get_offset_of_credentials_3(),
	WebProxy_t1169192840::get_offset_of_useDefaultCredentials_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { sizeof (WebRequest_t1365124353), -1, sizeof(WebRequest_t1365124353_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1101[5] = 
{
	WebRequest_t1365124353_StaticFields::get_offset_of_prefixes_1(),
	WebRequest_t1365124353_StaticFields::get_offset_of_isDefaultWebProxySet_2(),
	WebRequest_t1365124353_StaticFields::get_offset_of_defaultWebProxy_3(),
	WebRequest_t1365124353::get_offset_of_authentication_level_4(),
	WebRequest_t1365124353_StaticFields::get_offset_of_lockobj_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { sizeof (OpenFlags_t2370524385)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1102[6] = 
{
	OpenFlags_t2370524385::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { sizeof (PublicKey_t870392), -1, sizeof(PublicKey_t870392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1103[5] = 
{
	PublicKey_t870392::get_offset_of__key_0(),
	PublicKey_t870392::get_offset_of__keyValue_1(),
	PublicKey_t870392::get_offset_of__params_2(),
	PublicKey_t870392::get_offset_of__oid_3(),
	PublicKey_t870392_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { sizeof (StoreLocation_t1570828128)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1104[3] = 
{
	StoreLocation_t1570828128::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { sizeof (StoreName_t2183514610)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1105[9] = 
{
	StoreName_t2183514610::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { sizeof (X500DistinguishedName_t452415348), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1106[1] = 
{
	X500DistinguishedName_t452415348::get_offset_of_name_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { sizeof (X500DistinguishedNameFlags_t2005802885)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1107[11] = 
{
	X500DistinguishedNameFlags_t2005802885::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (X509BasicConstraintsExtension_t1562873317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1108[6] = 
{
	0,
	0,
	X509BasicConstraintsExtension_t1562873317::get_offset_of__certificateAuthority_6(),
	X509BasicConstraintsExtension_t1562873317::get_offset_of__hasPathLengthConstraint_7(),
	X509BasicConstraintsExtension_t1562873317::get_offset_of__pathLengthConstraint_8(),
	X509BasicConstraintsExtension_t1562873317::get_offset_of__status_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (X509Certificate2_t4056456767), -1, sizeof(X509Certificate2_t4056456767_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1109[13] = 
{
	X509Certificate2_t4056456767::get_offset_of__archived_5(),
	X509Certificate2_t4056456767::get_offset_of__extensions_6(),
	X509Certificate2_t4056456767::get_offset_of__name_7(),
	X509Certificate2_t4056456767::get_offset_of__serial_8(),
	X509Certificate2_t4056456767::get_offset_of__publicKey_9(),
	X509Certificate2_t4056456767::get_offset_of_issuer_name_10(),
	X509Certificate2_t4056456767::get_offset_of_subject_name_11(),
	X509Certificate2_t4056456767::get_offset_of_signature_algorithm_12(),
	X509Certificate2_t4056456767::get_offset_of__cert_13(),
	X509Certificate2_t4056456767_StaticFields::get_offset_of_empty_error_14(),
	X509Certificate2_t4056456767_StaticFields::get_offset_of_commonName_15(),
	X509Certificate2_t4056456767_StaticFields::get_offset_of_email_16(),
	X509Certificate2_t4056456767_StaticFields::get_offset_of_signedData_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (X509Certificate2Collection_t1108969367), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (X509Certificate2Enumerator_t2356134957), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1111[1] = 
{
	X509Certificate2Enumerator_t2356134957::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (X509CertificateCollection_t1197680765), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (X509CertificateEnumerator_t1208230922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1113[1] = 
{
	X509CertificateEnumerator_t1208230922::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (X509Chain_t777637347), -1, sizeof(X509Chain_t777637347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1114[15] = 
{
	X509Chain_t777637347::get_offset_of_location_0(),
	X509Chain_t777637347::get_offset_of_elements_1(),
	X509Chain_t777637347::get_offset_of_policy_2(),
	X509Chain_t777637347::get_offset_of_status_3(),
	X509Chain_t777637347_StaticFields::get_offset_of_Empty_4(),
	X509Chain_t777637347::get_offset_of_max_path_length_5(),
	X509Chain_t777637347::get_offset_of_working_issuer_name_6(),
	X509Chain_t777637347::get_offset_of_working_public_key_7(),
	X509Chain_t777637347::get_offset_of_bce_restriction_8(),
	X509Chain_t777637347::get_offset_of_roots_9(),
	X509Chain_t777637347::get_offset_of_cas_10(),
	X509Chain_t777637347::get_offset_of_collection_11(),
	X509Chain_t777637347_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_12(),
	X509Chain_t777637347_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_13(),
	X509Chain_t777637347_StaticFields::get_offset_of_U3CU3Ef__switchU24mapD_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (X509ChainElement_t528874471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1115[4] = 
{
	X509ChainElement_t528874471::get_offset_of_certificate_0(),
	X509ChainElement_t528874471::get_offset_of_status_1(),
	X509ChainElement_t528874471::get_offset_of_info_2(),
	X509ChainElement_t528874471::get_offset_of_compressed_status_flags_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (X509ChainElementCollection_t2081831987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[1] = 
{
	X509ChainElementCollection_t2081831987::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (X509ChainElementEnumerator_t3304975821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[1] = 
{
	X509ChainElementEnumerator_t3304975821::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (X509ChainPolicy_t3452126517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[8] = 
{
	X509ChainPolicy_t3452126517::get_offset_of_apps_0(),
	X509ChainPolicy_t3452126517::get_offset_of_cert_1(),
	X509ChainPolicy_t3452126517::get_offset_of_store_2(),
	X509ChainPolicy_t3452126517::get_offset_of_rflag_3(),
	X509ChainPolicy_t3452126517::get_offset_of_mode_4(),
	X509ChainPolicy_t3452126517::get_offset_of_timeout_5(),
	X509ChainPolicy_t3452126517::get_offset_of_vflags_6(),
	X509ChainPolicy_t3452126517::get_offset_of_vtime_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (X509ChainStatus_t4278378721)+ sizeof (RuntimeObject), sizeof(X509ChainStatus_t4278378721_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1119[2] = 
{
	X509ChainStatus_t4278378721::get_offset_of_status_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	X509ChainStatus_t4278378721::get_offset_of_info_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (X509ChainStatusFlags_t480677120)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1120[24] = 
{
	X509ChainStatusFlags_t480677120::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (X509EnhancedKeyUsageExtension_t2099881051), -1, sizeof(X509EnhancedKeyUsageExtension_t2099881051_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1121[3] = 
{
	X509EnhancedKeyUsageExtension_t2099881051::get_offset_of__enhKeyUsage_4(),
	X509EnhancedKeyUsageExtension_t2099881051::get_offset_of__status_5(),
	X509EnhancedKeyUsageExtension_t2099881051_StaticFields::get_offset_of_U3CU3Ef__switchU24mapE_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (X509Extension_t1320896183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[1] = 
{
	X509Extension_t1320896183::get_offset_of__critical_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { sizeof (X509ExtensionCollection_t650873211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1123[1] = 
{
	X509ExtensionCollection_t650873211::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { sizeof (X509ExtensionEnumerator_t3763443773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1124[1] = 
{
	X509ExtensionEnumerator_t3763443773::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { sizeof (X509FindType_t3221716179)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1125[16] = 
{
	X509FindType_t3221716179::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { sizeof (X509KeyUsageExtension_t1038124237), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1126[5] = 
{
	0,
	0,
	0,
	X509KeyUsageExtension_t1038124237::get_offset_of__keyUsages_7(),
	X509KeyUsageExtension_t1038124237::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { sizeof (X509KeyUsageFlags_t2461349531)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1127[11] = 
{
	X509KeyUsageFlags_t2461349531::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (X509NameType_t2669466891)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1128[7] = 
{
	X509NameType_t2669466891::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (X509RevocationFlag_t2166064554)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1129[4] = 
{
	X509RevocationFlag_t2166064554::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (X509RevocationMode_t2065307963)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1130[4] = 
{
	X509RevocationMode_t2065307963::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (X509Store_t1617430119), -1, sizeof(X509Store_t1617430119_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1131[6] = 
{
	X509Store_t1617430119::get_offset_of__name_0(),
	X509Store_t1617430119::get_offset_of__location_1(),
	X509Store_t1617430119::get_offset_of_list_2(),
	X509Store_t1617430119::get_offset_of__flags_3(),
	X509Store_t1617430119::get_offset_of_store_4(),
	X509Store_t1617430119_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (X509SubjectKeyIdentifierExtension_t2508879999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1132[5] = 
{
	0,
	0,
	X509SubjectKeyIdentifierExtension_t2508879999::get_offset_of__subjectKeyIdentifier_6(),
	X509SubjectKeyIdentifierExtension_t2508879999::get_offset_of__ski_7(),
	X509SubjectKeyIdentifierExtension_t2508879999::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (X509SubjectKeyIdentifierHashAlgorithm_t110301003)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1133[4] = 
{
	X509SubjectKeyIdentifierHashAlgorithm_t110301003::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (X509VerificationFlags_t2169036324)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1134[15] = 
{
	X509VerificationFlags_t2169036324::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (AsnDecodeStatus_t1962003286)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1135[7] = 
{
	AsnDecodeStatus_t1962003286::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (AsnEncodedData_t463456204), -1, sizeof(AsnEncodedData_t463456204_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1136[3] = 
{
	AsnEncodedData_t463456204::get_offset_of__oid_0(),
	AsnEncodedData_t463456204::get_offset_of__raw_1(),
	AsnEncodedData_t463456204_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (Oid_t3221867120), -1, sizeof(Oid_t3221867120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1137[3] = 
{
	Oid_t3221867120::get_offset_of__value_0(),
	Oid_t3221867120::get_offset_of__name_1(),
	Oid_t3221867120_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (OidCollection_t3790243618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1138[2] = 
{
	OidCollection_t3790243618::get_offset_of__list_0(),
	OidCollection_t3790243618::get_offset_of__readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (OidEnumerator_t3674631724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1139[2] = 
{
	OidEnumerator_t3674631724::get_offset_of__collection_0(),
	OidEnumerator_t3674631724::get_offset_of__position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (BaseMachine_t4008011478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1140[1] = 
{
	BaseMachine_t4008011478::get_offset_of_needs_groups_or_captures_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (Capture_t4157900610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1141[3] = 
{
	Capture_t4157900610::get_offset_of_index_0(),
	Capture_t4157900610::get_offset_of_length_1(),
	Capture_t4157900610::get_offset_of_text_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (CaptureCollection_t1671345504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1142[1] = 
{
	CaptureCollection_t1671345504::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (Group_t3761430853), -1, sizeof(Group_t3761430853_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1143[3] = 
{
	Group_t3761430853_StaticFields::get_offset_of_Fail_3(),
	Group_t3761430853::get_offset_of_success_4(),
	Group_t3761430853::get_offset_of_captures_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (GroupCollection_t939014605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1144[2] = 
{
	GroupCollection_t939014605::get_offset_of_list_0(),
	GroupCollection_t939014605::get_offset_of_gap_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (Match_t3164245899), -1, sizeof(Match_t3164245899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1145[5] = 
{
	Match_t3164245899::get_offset_of_regex_6(),
	Match_t3164245899::get_offset_of_machine_7(),
	Match_t3164245899::get_offset_of_text_length_8(),
	Match_t3164245899::get_offset_of_groups_9(),
	Match_t3164245899_StaticFields::get_offset_of_empty_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (MatchCollection_t3718216671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1146[2] = 
{
	MatchCollection_t3718216671::get_offset_of_current_0(),
	MatchCollection_t3718216671::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (Enumerator_t501456973), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1147[2] = 
{
	Enumerator_t501456973::get_offset_of_index_0(),
	Enumerator_t501456973::get_offset_of_coll_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (Regex_t1803876613), -1, sizeof(Regex_t1803876613_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1148[9] = 
{
	Regex_t1803876613_StaticFields::get_offset_of_cache_0(),
	Regex_t1803876613::get_offset_of_machineFactory_1(),
	Regex_t1803876613::get_offset_of_mapping_2(),
	Regex_t1803876613::get_offset_of_group_count_3(),
	Regex_t1803876613::get_offset_of_gap_4(),
	Regex_t1803876613::get_offset_of_group_names_5(),
	Regex_t1803876613::get_offset_of_group_numbers_6(),
	Regex_t1803876613::get_offset_of_pattern_7(),
	Regex_t1803876613::get_offset_of_roptions_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (RegexOptions_t2418259727)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1149[10] = 
{
	RegexOptions_t2418259727::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (OpCode_t586571952)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1150[26] = 
{
	OpCode_t586571952::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (OpFlags_t378191910)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1151[6] = 
{
	OpFlags_t378191910::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (Position_t3781184359)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1152[11] = 
{
	Position_t3781184359::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (FactoryCache_t2051534610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1155[3] = 
{
	FactoryCache_t2051534610::get_offset_of_capacity_0(),
	FactoryCache_t2051534610::get_offset_of_factories_1(),
	FactoryCache_t2051534610::get_offset_of_mru_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (Key_t655155419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1156[2] = 
{
	Key_t655155419::get_offset_of_pattern_0(),
	Key_t655155419::get_offset_of_options_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (MRUList_t33178162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1157[2] = 
{
	MRUList_t33178162::get_offset_of_head_0(),
	MRUList_t33178162::get_offset_of_tail_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (Node_t1107172180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1158[3] = 
{
	Node_t1107172180::get_offset_of_value_0(),
	Node_t1107172180::get_offset_of_previous_1(),
	Node_t1107172180::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (Category_t1984577050)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1159[146] = 
{
	Category_t1984577050::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (CategoryUtils_t3840220623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (LinkRef_t2090853131), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (InterpreterFactory_t556462562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1163[4] = 
{
	InterpreterFactory_t556462562::get_offset_of_mapping_0(),
	InterpreterFactory_t556462562::get_offset_of_pattern_1(),
	InterpreterFactory_t556462562::get_offset_of_namesMapping_2(),
	InterpreterFactory_t556462562::get_offset_of_gap_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (PatternCompiler_t637049905), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1164[1] = 
{
	PatternCompiler_t637049905::get_offset_of_pgm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (PatternLinkStack_t3979537293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1165[1] = 
{
	PatternLinkStack_t3979537293::get_offset_of_link_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (Link_t3337276394)+ sizeof (RuntimeObject), sizeof(Link_t3337276394 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1166[2] = 
{
	Link_t3337276394::get_offset_of_base_addr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Link_t3337276394::get_offset_of_offset_addr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { sizeof (LinkStack_t954792760), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1167[1] = 
{
	LinkStack_t954792760::get_offset_of_stack_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { sizeof (Mark_t2724874473)+ sizeof (RuntimeObject), sizeof(Mark_t2724874473 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1168[3] = 
{
	Mark_t2724874473::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t2724874473::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t2724874473::get_offset_of_Previous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { sizeof (Interpreter_t3731288230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1169[16] = 
{
	Interpreter_t3731288230::get_offset_of_program_1(),
	Interpreter_t3731288230::get_offset_of_program_start_2(),
	Interpreter_t3731288230::get_offset_of_text_3(),
	Interpreter_t3731288230::get_offset_of_text_end_4(),
	Interpreter_t3731288230::get_offset_of_group_count_5(),
	Interpreter_t3731288230::get_offset_of_match_min_6(),
	Interpreter_t3731288230::get_offset_of_qs_7(),
	Interpreter_t3731288230::get_offset_of_scan_ptr_8(),
	Interpreter_t3731288230::get_offset_of_repeat_9(),
	Interpreter_t3731288230::get_offset_of_fast_10(),
	Interpreter_t3731288230::get_offset_of_stack_11(),
	Interpreter_t3731288230::get_offset_of_deep_12(),
	Interpreter_t3731288230::get_offset_of_marks_13(),
	Interpreter_t3731288230::get_offset_of_mark_start_14(),
	Interpreter_t3731288230::get_offset_of_mark_end_15(),
	Interpreter_t3731288230::get_offset_of_groups_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { sizeof (IntStack_t273560425)+ sizeof (RuntimeObject), sizeof(IntStack_t273560425_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1170[2] = 
{
	IntStack_t273560425::get_offset_of_values_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntStack_t273560425::get_offset_of_count_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { sizeof (RepeatContext_t1827616978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1171[7] = 
{
	RepeatContext_t1827616978::get_offset_of_start_0(),
	RepeatContext_t1827616978::get_offset_of_min_1(),
	RepeatContext_t1827616978::get_offset_of_max_2(),
	RepeatContext_t1827616978::get_offset_of_lazy_3(),
	RepeatContext_t1827616978::get_offset_of_expr_pc_4(),
	RepeatContext_t1827616978::get_offset_of_previous_5(),
	RepeatContext_t1827616978::get_offset_of_count_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { sizeof (Mode_t2395763083)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1172[4] = 
{
	Mode_t2395763083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { sizeof (Interval_t2354235237)+ sizeof (RuntimeObject), sizeof(Interval_t2354235237_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1173[3] = 
{
	Interval_t2354235237::get_offset_of_low_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t2354235237::get_offset_of_high_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t2354235237::get_offset_of_contiguous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { sizeof (IntervalCollection_t4130821325), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1174[1] = 
{
	IntervalCollection_t4130821325::get_offset_of_intervals_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { sizeof (Enumerator_t1928086041), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1175[2] = 
{
	Enumerator_t1928086041::get_offset_of_list_0(),
	Enumerator_t1928086041::get_offset_of_ptr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (CostDelegate_t1824458113), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (Parser_t2756028923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1177[6] = 
{
	Parser_t2756028923::get_offset_of_pattern_0(),
	Parser_t2756028923::get_offset_of_ptr_1(),
	Parser_t2756028923::get_offset_of_caps_2(),
	Parser_t2756028923::get_offset_of_refs_3(),
	Parser_t2756028923::get_offset_of_num_groups_4(),
	Parser_t2756028923::get_offset_of_gap_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (QuickSearch_t1036078825), -1, sizeof(QuickSearch_t1036078825_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1178[7] = 
{
	QuickSearch_t1036078825::get_offset_of_str_0(),
	QuickSearch_t1036078825::get_offset_of_len_1(),
	QuickSearch_t1036078825::get_offset_of_ignore_2(),
	QuickSearch_t1036078825::get_offset_of_reverse_3(),
	QuickSearch_t1036078825::get_offset_of_shift_4(),
	QuickSearch_t1036078825::get_offset_of_shiftExtended_5(),
	QuickSearch_t1036078825_StaticFields::get_offset_of_THRESHOLD_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (ExpressionCollection_t238836340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (Expression_t368137076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (CompositeExpression_t1921307915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1181[1] = 
{
	CompositeExpression_t1921307915::get_offset_of_expressions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (Group_t2558408851), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (RegularExpression_t3083097024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1183[1] = 
{
	RegularExpression_t3083097024::get_offset_of_group_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (CapturingGroup_t3690174926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1184[2] = 
{
	CapturingGroup_t3690174926::get_offset_of_gid_1(),
	CapturingGroup_t3690174926::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (BalancingGroup_t3168604284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1185[1] = 
{
	BalancingGroup_t3168604284::get_offset_of_balance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (NonBacktrackingGroup_t607185170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (Repetition_t3426306051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1187[3] = 
{
	Repetition_t3426306051::get_offset_of_min_1(),
	Repetition_t3426306051::get_offset_of_max_2(),
	Repetition_t3426306051::get_offset_of_lazy_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (Assertion_t1490870658), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (CaptureAssertion_t196851652), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1189[3] = 
{
	CaptureAssertion_t196851652::get_offset_of_alternate_1(),
	CaptureAssertion_t196851652::get_offset_of_group_2(),
	CaptureAssertion_t196851652::get_offset_of_literal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (ExpressionAssertion_t3255443744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1190[2] = 
{
	ExpressionAssertion_t3255443744::get_offset_of_reverse_1(),
	ExpressionAssertion_t3255443744::get_offset_of_negate_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (Alternation_t3506694545), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (Literal_t2896011011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1192[2] = 
{
	Literal_t2896011011::get_offset_of_str_0(),
	Literal_t2896011011::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (PositionAssertion_t2152361535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1193[1] = 
{
	PositionAssertion_t2152361535::get_offset_of_pos_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (Reference_t1540574699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1194[2] = 
{
	Reference_t1540574699::get_offset_of_group_0(),
	Reference_t1540574699::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (BackslashNumber_t1461652789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1195[2] = 
{
	BackslashNumber_t1461652789::get_offset_of_literal_2(),
	BackslashNumber_t1461652789::get_offset_of_ecma_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (CharacterClass_t655244183), -1, sizeof(CharacterClass_t655244183_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1196[6] = 
{
	CharacterClass_t655244183_StaticFields::get_offset_of_upper_case_characters_0(),
	CharacterClass_t655244183::get_offset_of_negate_1(),
	CharacterClass_t655244183::get_offset_of_ignore_2(),
	CharacterClass_t655244183::get_offset_of_pos_cats_3(),
	CharacterClass_t655244183::get_offset_of_neg_cats_4(),
	CharacterClass_t655244183::get_offset_of_intervals_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (AnchorInfo_t1392970135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1197[6] = 
{
	AnchorInfo_t1392970135::get_offset_of_expr_0(),
	AnchorInfo_t1392970135::get_offset_of_pos_1(),
	AnchorInfo_t1392970135::get_offset_of_offset_2(),
	AnchorInfo_t1392970135::get_offset_of_str_3(),
	AnchorInfo_t1392970135::get_offset_of_width_4(),
	AnchorInfo_t1392970135::get_offset_of_ignore_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (DefaultUriParser_t1591960796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (GenericUriParser_t2599285286), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

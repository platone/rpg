#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// MessagingManager
struct MessagingManager_t1977471895;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessagingManager
struct  MessagingManager_t1977471895  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.Action> MessagingManager::subscribers
	List_1_t2595592884 * ___subscribers_3;

public:
	inline static int32_t get_offset_of_subscribers_3() { return static_cast<int32_t>(offsetof(MessagingManager_t1977471895, ___subscribers_3)); }
	inline List_1_t2595592884 * get_subscribers_3() const { return ___subscribers_3; }
	inline List_1_t2595592884 ** get_address_of_subscribers_3() { return &___subscribers_3; }
	inline void set_subscribers_3(List_1_t2595592884 * value)
	{
		___subscribers_3 = value;
		Il2CppCodeGenWriteBarrier(&___subscribers_3, value);
	}
};

struct MessagingManager_t1977471895_StaticFields
{
public:
	// MessagingManager MessagingManager::<Instance>k__BackingField
	MessagingManager_t1977471895 * ___U3CInstanceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MessagingManager_t1977471895_StaticFields, ___U3CInstanceU3Ek__BackingField_2)); }
	inline MessagingManager_t1977471895 * get_U3CInstanceU3Ek__BackingField_2() const { return ___U3CInstanceU3Ek__BackingField_2; }
	inline MessagingManager_t1977471895 ** get_address_of_U3CInstanceU3Ek__BackingField_2() { return &___U3CInstanceU3Ek__BackingField_2; }
	inline void set_U3CInstanceU3Ek__BackingField_2(MessagingManager_t1977471895 * value)
	{
		___U3CInstanceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

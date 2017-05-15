#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// ConversationEntry[]
struct ConversationEntryU5BU5D_t4031821434;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Conversation
struct  Conversation_t4277814359  : public ScriptableObject_t1975622470
{
public:
	// ConversationEntry[] Conversation::ConversationLines
	ConversationEntryU5BU5D_t4031821434* ___ConversationLines_2;

public:
	inline static int32_t get_offset_of_ConversationLines_2() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___ConversationLines_2)); }
	inline ConversationEntryU5BU5D_t4031821434* get_ConversationLines_2() const { return ___ConversationLines_2; }
	inline ConversationEntryU5BU5D_t4031821434** get_address_of_ConversationLines_2() { return &___ConversationLines_2; }
	inline void set_ConversationLines_2(ConversationEntryU5BU5D_t4031821434* value)
	{
		___ConversationLines_2 = value;
		Il2CppCodeGenWriteBarrier(&___ConversationLines_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

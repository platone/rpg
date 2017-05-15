#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Conversation[]
struct ConversationU5BU5D_t3226305646;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConversationComponent
struct  ConversationComponent_t1754832338  : public MonoBehaviour_t1158329972
{
public:
	// Conversation[] ConversationComponent::Conversations
	ConversationU5BU5D_t3226305646* ___Conversations_2;

public:
	inline static int32_t get_offset_of_Conversations_2() { return static_cast<int32_t>(offsetof(ConversationComponent_t1754832338, ___Conversations_2)); }
	inline ConversationU5BU5D_t3226305646* get_Conversations_2() const { return ___Conversations_2; }
	inline ConversationU5BU5D_t3226305646** get_address_of_Conversations_2() { return &___Conversations_2; }
	inline void set_Conversations_2(ConversationU5BU5D_t3226305646* value)
	{
		___Conversations_2 = value;
		Il2CppCodeGenWriteBarrier(&___Conversations_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

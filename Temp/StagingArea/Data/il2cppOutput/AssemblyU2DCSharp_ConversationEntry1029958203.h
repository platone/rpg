#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConversationEntry
struct  ConversationEntry_t1029958203  : public Il2CppObject
{
public:
	// System.String ConversationEntry::SpeakingCharacterName
	String_t* ___SpeakingCharacterName_0;
	// System.String ConversationEntry::ConversationText
	String_t* ___ConversationText_1;
	// UnityEngine.Sprite ConversationEntry::DisplayPic
	Sprite_t309593783 * ___DisplayPic_2;

public:
	inline static int32_t get_offset_of_SpeakingCharacterName_0() { return static_cast<int32_t>(offsetof(ConversationEntry_t1029958203, ___SpeakingCharacterName_0)); }
	inline String_t* get_SpeakingCharacterName_0() const { return ___SpeakingCharacterName_0; }
	inline String_t** get_address_of_SpeakingCharacterName_0() { return &___SpeakingCharacterName_0; }
	inline void set_SpeakingCharacterName_0(String_t* value)
	{
		___SpeakingCharacterName_0 = value;
		Il2CppCodeGenWriteBarrier(&___SpeakingCharacterName_0, value);
	}

	inline static int32_t get_offset_of_ConversationText_1() { return static_cast<int32_t>(offsetof(ConversationEntry_t1029958203, ___ConversationText_1)); }
	inline String_t* get_ConversationText_1() const { return ___ConversationText_1; }
	inline String_t** get_address_of_ConversationText_1() { return &___ConversationText_1; }
	inline void set_ConversationText_1(String_t* value)
	{
		___ConversationText_1 = value;
		Il2CppCodeGenWriteBarrier(&___ConversationText_1, value);
	}

	inline static int32_t get_offset_of_DisplayPic_2() { return static_cast<int32_t>(offsetof(ConversationEntry_t1029958203, ___DisplayPic_2)); }
	inline Sprite_t309593783 * get_DisplayPic_2() const { return ___DisplayPic_2; }
	inline Sprite_t309593783 ** get_address_of_DisplayPic_2() { return &___DisplayPic_2; }
	inline void set_DisplayPic_2(Sprite_t309593783 * value)
	{
		___DisplayPic_2 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayPic_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

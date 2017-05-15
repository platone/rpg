#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Singleton_1_gen4156455201.h"

// ConversationEntry
struct ConversationEntry_t1029958203;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConversationManager
struct  ConversationManager_t2980570814  : public Singleton_1_t4156455201
{
public:
	// System.Boolean ConversationManager::talking
	bool ___talking_5;
	// ConversationEntry ConversationManager::currentConversationLine
	ConversationEntry_t1029958203 * ___currentConversationLine_6;
	// UnityEngine.CanvasGroup ConversationManager::dialogBox
	CanvasGroup_t3296560743 * ___dialogBox_7;
	// UnityEngine.UI.Image ConversationManager::imageHolder
	Image_t2042527209 * ___imageHolder_8;
	// UnityEngine.UI.Text ConversationManager::textHolder
	Text_t356221433 * ___textHolder_9;

public:
	inline static int32_t get_offset_of_talking_5() { return static_cast<int32_t>(offsetof(ConversationManager_t2980570814, ___talking_5)); }
	inline bool get_talking_5() const { return ___talking_5; }
	inline bool* get_address_of_talking_5() { return &___talking_5; }
	inline void set_talking_5(bool value)
	{
		___talking_5 = value;
	}

	inline static int32_t get_offset_of_currentConversationLine_6() { return static_cast<int32_t>(offsetof(ConversationManager_t2980570814, ___currentConversationLine_6)); }
	inline ConversationEntry_t1029958203 * get_currentConversationLine_6() const { return ___currentConversationLine_6; }
	inline ConversationEntry_t1029958203 ** get_address_of_currentConversationLine_6() { return &___currentConversationLine_6; }
	inline void set_currentConversationLine_6(ConversationEntry_t1029958203 * value)
	{
		___currentConversationLine_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentConversationLine_6, value);
	}

	inline static int32_t get_offset_of_dialogBox_7() { return static_cast<int32_t>(offsetof(ConversationManager_t2980570814, ___dialogBox_7)); }
	inline CanvasGroup_t3296560743 * get_dialogBox_7() const { return ___dialogBox_7; }
	inline CanvasGroup_t3296560743 ** get_address_of_dialogBox_7() { return &___dialogBox_7; }
	inline void set_dialogBox_7(CanvasGroup_t3296560743 * value)
	{
		___dialogBox_7 = value;
		Il2CppCodeGenWriteBarrier(&___dialogBox_7, value);
	}

	inline static int32_t get_offset_of_imageHolder_8() { return static_cast<int32_t>(offsetof(ConversationManager_t2980570814, ___imageHolder_8)); }
	inline Image_t2042527209 * get_imageHolder_8() const { return ___imageHolder_8; }
	inline Image_t2042527209 ** get_address_of_imageHolder_8() { return &___imageHolder_8; }
	inline void set_imageHolder_8(Image_t2042527209 * value)
	{
		___imageHolder_8 = value;
		Il2CppCodeGenWriteBarrier(&___imageHolder_8, value);
	}

	inline static int32_t get_offset_of_textHolder_9() { return static_cast<int32_t>(offsetof(ConversationManager_t2980570814, ___textHolder_9)); }
	inline Text_t356221433 * get_textHolder_9() const { return ___textHolder_9; }
	inline Text_t356221433 ** get_address_of_textHolder_9() { return &___textHolder_9; }
	inline void set_textHolder_9(Text_t356221433 * value)
	{
		___textHolder_9 = value;
		Il2CppCodeGenWriteBarrier(&___textHolder_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

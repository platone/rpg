#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Npc
struct  Npc_t821575291  : public MonoBehaviour_t1158329972
{
public:
	// System.String Npc::Name
	String_t* ___Name_2;
	// System.Int32 Npc::Age
	int32_t ___Age_3;
	// System.String Npc::Faction
	String_t* ___Faction_4;
	// System.String Npc::Occupation
	String_t* ___Occupation_5;
	// System.Int32 Npc::Level
	int32_t ___Level_6;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Npc_t821575291, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_Age_3() { return static_cast<int32_t>(offsetof(Npc_t821575291, ___Age_3)); }
	inline int32_t get_Age_3() const { return ___Age_3; }
	inline int32_t* get_address_of_Age_3() { return &___Age_3; }
	inline void set_Age_3(int32_t value)
	{
		___Age_3 = value;
	}

	inline static int32_t get_offset_of_Faction_4() { return static_cast<int32_t>(offsetof(Npc_t821575291, ___Faction_4)); }
	inline String_t* get_Faction_4() const { return ___Faction_4; }
	inline String_t** get_address_of_Faction_4() { return &___Faction_4; }
	inline void set_Faction_4(String_t* value)
	{
		___Faction_4 = value;
		Il2CppCodeGenWriteBarrier(&___Faction_4, value);
	}

	inline static int32_t get_offset_of_Occupation_5() { return static_cast<int32_t>(offsetof(Npc_t821575291, ___Occupation_5)); }
	inline String_t* get_Occupation_5() const { return ___Occupation_5; }
	inline String_t** get_address_of_Occupation_5() { return &___Occupation_5; }
	inline void set_Occupation_5(String_t* value)
	{
		___Occupation_5 = value;
		Il2CppCodeGenWriteBarrier(&___Occupation_5, value);
	}

	inline static int32_t get_offset_of_Level_6() { return static_cast<int32_t>(offsetof(Npc_t821575291, ___Level_6)); }
	inline int32_t get_Level_6() const { return ___Level_6; }
	inline int32_t* get_address_of_Level_6() { return &___Level_6; }
	inline void set_Level_6(int32_t value)
	{
		___Level_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

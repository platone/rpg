#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Entity1452608177.h"

// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public Entity_t1452608177
{
public:
	// System.String[] Player::Inventory
	StringU5BU5D_t1642385972* ___Inventory_17;
	// System.String[] Player::Skills
	StringU5BU5D_t1642385972* ___Skills_18;
	// System.Int32 Player::Money
	int32_t ___Money_19;

public:
	inline static int32_t get_offset_of_Inventory_17() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___Inventory_17)); }
	inline StringU5BU5D_t1642385972* get_Inventory_17() const { return ___Inventory_17; }
	inline StringU5BU5D_t1642385972** get_address_of_Inventory_17() { return &___Inventory_17; }
	inline void set_Inventory_17(StringU5BU5D_t1642385972* value)
	{
		___Inventory_17 = value;
		Il2CppCodeGenWriteBarrier(&___Inventory_17, value);
	}

	inline static int32_t get_offset_of_Skills_18() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___Skills_18)); }
	inline StringU5BU5D_t1642385972* get_Skills_18() const { return ___Skills_18; }
	inline StringU5BU5D_t1642385972** get_address_of_Skills_18() { return &___Skills_18; }
	inline void set_Skills_18(StringU5BU5D_t1642385972* value)
	{
		___Skills_18 = value;
		Il2CppCodeGenWriteBarrier(&___Skills_18, value);
	}

	inline static int32_t get_offset_of_Money_19() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___Money_19)); }
	inline int32_t get_Money_19() const { return ___Money_19; }
	inline int32_t* get_address_of_Money_19() { return &___Money_19; }
	inline void set_Money_19(int32_t value)
	{
		___Money_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

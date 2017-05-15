#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowCamera
struct  FollowCamera_t821242602  : public MonoBehaviour_t1158329972
{
public:
	// System.Single FollowCamera::xOffset
	float ___xOffset_2;
	// System.Single FollowCamera::yOffset
	float ___yOffset_3;
	// UnityEngine.Transform FollowCamera::player
	Transform_t3275118058 * ___player_4;

public:
	inline static int32_t get_offset_of_xOffset_2() { return static_cast<int32_t>(offsetof(FollowCamera_t821242602, ___xOffset_2)); }
	inline float get_xOffset_2() const { return ___xOffset_2; }
	inline float* get_address_of_xOffset_2() { return &___xOffset_2; }
	inline void set_xOffset_2(float value)
	{
		___xOffset_2 = value;
	}

	inline static int32_t get_offset_of_yOffset_3() { return static_cast<int32_t>(offsetof(FollowCamera_t821242602, ___yOffset_3)); }
	inline float get_yOffset_3() const { return ___yOffset_3; }
	inline float* get_address_of_yOffset_3() { return &___yOffset_3; }
	inline void set_yOffset_3(float value)
	{
		___yOffset_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(FollowCamera_t821242602, ___player_4)); }
	inline Transform_t3275118058 * get_player_4() const { return ___player_4; }
	inline Transform_t3275118058 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_t3275118058 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

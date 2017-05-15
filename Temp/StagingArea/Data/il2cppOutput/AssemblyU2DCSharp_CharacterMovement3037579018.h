#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMovement
struct  CharacterMovement_t3037579018  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D CharacterMovement::PlayerRigidBody2D
	Rigidbody2D_t502193897 * ___PlayerRigidBody2D_2;
	// System.Single CharacterMovement::MovePlayerHorizontal
	float ___MovePlayerHorizontal_3;
	// System.Single CharacterMovement::MovePlayerVertical
	float ___MovePlayerVertical_4;
	// UnityEngine.Vector2 CharacterMovement::Movement
	Vector2_t2243707579  ___Movement_5;
	// UnityEngine.Animator CharacterMovement::PlayerAnim
	Animator_t69676727 * ___PlayerAnim_6;
	// UnityEngine.SpriteRenderer CharacterMovement::PlayerSpriteImage
	SpriteRenderer_t1209076198 * ___PlayerSpriteImage_7;
	// System.Single CharacterMovement::Speed
	float ___Speed_8;

public:
	inline static int32_t get_offset_of_PlayerRigidBody2D_2() { return static_cast<int32_t>(offsetof(CharacterMovement_t3037579018, ___PlayerRigidBody2D_2)); }
	inline Rigidbody2D_t502193897 * get_PlayerRigidBody2D_2() const { return ___PlayerRigidBody2D_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_PlayerRigidBody2D_2() { return &___PlayerRigidBody2D_2; }
	inline void set_PlayerRigidBody2D_2(Rigidbody2D_t502193897 * value)
	{
		___PlayerRigidBody2D_2 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerRigidBody2D_2, value);
	}

	inline static int32_t get_offset_of_MovePlayerHorizontal_3() { return static_cast<int32_t>(offsetof(CharacterMovement_t3037579018, ___MovePlayerHorizontal_3)); }
	inline float get_MovePlayerHorizontal_3() const { return ___MovePlayerHorizontal_3; }
	inline float* get_address_of_MovePlayerHorizontal_3() { return &___MovePlayerHorizontal_3; }
	inline void set_MovePlayerHorizontal_3(float value)
	{
		___MovePlayerHorizontal_3 = value;
	}

	inline static int32_t get_offset_of_MovePlayerVertical_4() { return static_cast<int32_t>(offsetof(CharacterMovement_t3037579018, ___MovePlayerVertical_4)); }
	inline float get_MovePlayerVertical_4() const { return ___MovePlayerVertical_4; }
	inline float* get_address_of_MovePlayerVertical_4() { return &___MovePlayerVertical_4; }
	inline void set_MovePlayerVertical_4(float value)
	{
		___MovePlayerVertical_4 = value;
	}

	inline static int32_t get_offset_of_Movement_5() { return static_cast<int32_t>(offsetof(CharacterMovement_t3037579018, ___Movement_5)); }
	inline Vector2_t2243707579  get_Movement_5() const { return ___Movement_5; }
	inline Vector2_t2243707579 * get_address_of_Movement_5() { return &___Movement_5; }
	inline void set_Movement_5(Vector2_t2243707579  value)
	{
		___Movement_5 = value;
	}

	inline static int32_t get_offset_of_PlayerAnim_6() { return static_cast<int32_t>(offsetof(CharacterMovement_t3037579018, ___PlayerAnim_6)); }
	inline Animator_t69676727 * get_PlayerAnim_6() const { return ___PlayerAnim_6; }
	inline Animator_t69676727 ** get_address_of_PlayerAnim_6() { return &___PlayerAnim_6; }
	inline void set_PlayerAnim_6(Animator_t69676727 * value)
	{
		___PlayerAnim_6 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerAnim_6, value);
	}

	inline static int32_t get_offset_of_PlayerSpriteImage_7() { return static_cast<int32_t>(offsetof(CharacterMovement_t3037579018, ___PlayerSpriteImage_7)); }
	inline SpriteRenderer_t1209076198 * get_PlayerSpriteImage_7() const { return ___PlayerSpriteImage_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_PlayerSpriteImage_7() { return &___PlayerSpriteImage_7; }
	inline void set_PlayerSpriteImage_7(SpriteRenderer_t1209076198 * value)
	{
		___PlayerSpriteImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerSpriteImage_7, value);
	}

	inline static int32_t get_offset_of_Speed_8() { return static_cast<int32_t>(offsetof(CharacterMovement_t3037579018, ___Speed_8)); }
	inline float get_Speed_8() const { return ___Speed_8; }
	inline float* get_address_of_Speed_8() { return &___Speed_8; }
	inline void set_Speed_8(float value)
	{
		___Speed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

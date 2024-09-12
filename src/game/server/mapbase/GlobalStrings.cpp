//========= Mapbase - https://github.com/mapbase-source/source-sdk-2013 ==================
//
// Purpose: See GlobalStrings.h for more information.
//
// $NoKeywords: $
//=============================================================================

#include "cbase.h"
#include "GlobalStrings.h"


// Global strings must be initially declared here.
// Be sure to sync them with the externs in GlobalStrings.h.

// -------------------------------------------------------------
// 
// Classnames
// 
// -------------------------------------------------------------

string_t gm_isz_class_Bullseye;

string_t gm_isz_class_PropPhysics;
string_t gm_isz_class_PropPhysicsOverride;
string_t gm_isz_class_FuncPhysbox;
string_t gm_isz_class_EnvFire;

// -------------------------------------------------------------

string_t gm_isz_name_player;
string_t gm_isz_name_activator;

// -------------------------------------------------------------

// -------------------------------------------------------------

// We know it hasn't been allocated yet
#define INITIALIZE_GLOBAL_STRING(string, text) string = AllocPooledString(text) //SetGlobalString(string, text)

void InitGlobalStrings()
{
	INITIALIZE_GLOBAL_STRING(gm_isz_class_Bullseye, "npc_bullseye");

	INITIALIZE_GLOBAL_STRING(gm_isz_class_PropPhysics, "prop_physics");
	INITIALIZE_GLOBAL_STRING(gm_isz_class_PropPhysicsOverride, "prop_physics_override");
	INITIALIZE_GLOBAL_STRING(gm_isz_class_FuncPhysbox, "func_physbox"); 
	INITIALIZE_GLOBAL_STRING(gm_isz_class_EnvFire, "env_fire");

	INITIALIZE_GLOBAL_STRING(gm_isz_name_player, "!player");
	INITIALIZE_GLOBAL_STRING(gm_isz_name_activator, "!activator");
}

// -------------------------------------------------------------




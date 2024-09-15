//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#include "cbase.h"
#include "gametrace.h"
#include "c_world.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

bool CGameTrace::DidHitWorld() const
{
	if(!GetClientWorldEntity())
		return false;
	return m_pEnt == GetClientWorldEntity();
}


bool CGameTrace::DidHitNonWorldEntity() const
{
	return m_pEnt != NULL && !DidHitWorld();
}


int CGameTrace::GetEntityIndex() const
{
	if ( m_pEnt )
		return m_pEnt->entindex();
	else
		return -1;
}


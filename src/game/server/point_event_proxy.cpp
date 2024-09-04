//========= Copyright � 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: An entity for creating instructor hints entirely with map logic
//
// $NoKeywords: $
//=============================================================================//

#include "cbase.h"
#include "baseentity.h"
#include "world.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
class CPointEventProxy : public CPointEntity
{
public:
	DECLARE_CLASS( CPointEventProxy, CPointEntity );
	DECLARE_MAPENTITY();

private:
	void InputGenerateEvent( inputdata_t &inputdata );
	
	string_t	m_iszEventName;
	bool		m_bActivatorAsUserID;
};


LINK_ENTITY_TO_CLASS( point_event_proxy, CPointEventProxy );

BEGIN_MAPENTITY( CPointEventProxy )

	DEFINE_KEYFIELD( m_iszEventName, FIELD_STRING, "EventName" ),
	DEFINE_KEYFIELD( m_bActivatorAsUserID, FIELD_BOOLEAN, "ActivatorAsUserID" ),
	
	DEFINE_INPUTFUNC( FIELD_VOID, "GenerateEvent", InputGenerateEvent ),

END_MAPENTITY()


//-----------------------------------------------------------------------------
// Purpose: Input handler for showing the message and/or playing the sound.
//-----------------------------------------------------------------------------
void CPointEventProxy::InputGenerateEvent( inputdata_t &inputdata )
{
	IGameEvent * event = gameeventmanager->CreateEvent( m_iszEventName.ToCStr() );
	if ( event )
	{
		CBasePlayer *pActivator = ToBasePlayer( inputdata.pActivator );

		if ( m_bActivatorAsUserID )
		{
			event->SetInt( "userid", ( pActivator ? pActivator->GetUserID() : 0 ) );
		}

		gameeventmanager->FireEvent( event );
	}
}

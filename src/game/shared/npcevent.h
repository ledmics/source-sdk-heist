//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//

#ifndef NPCEVENT_H
#define NPCEVENT_H
#pragma once

#include "eventlist.h"
#include "studio.h"

class CBaseAnimating;

struct animevent_t
{
private:
	Animevent event;
	int type;

public:
	const char		*options;
	float			cycle;
	float			eventtime;
	CBaseAnimating	*pSource;

	Animevent Event( void ) const
	{
		return event;
	}
	int Type( void ) const
	{
		return type;
	}
	void Event( Animevent nEvent, int nType )
	{
		event = nEvent;
		type = nType;
	}
};

#endif // NPCEVENT_H

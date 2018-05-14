#ifndef GRACZBOT_H
#define GRACZBOT_H

#include "stdafx.h"
#include "gracz.h"
\

class GraczBot :public Gracz
{
public:

	GraczBot(string nazwa) :Gracz(nazwa) {};
	virtual ~GraczBot() {};
	virtual int wybierzKarteDoWymiany();

};




#endif GRACZBOT_H

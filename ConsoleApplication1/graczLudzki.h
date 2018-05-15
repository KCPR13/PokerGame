#ifndef GRACZLUDZKI_H
#define GRACZLUDZKI_H

#include "stdafx.h"
#include <string>
#include "gracz.h"


class GraczLudzki:public Gracz
{
public:

	GraczLudzki(string nazwa) :Gracz(nazwa) {};
	virtual ~GraczLudzki() {};
	virtual int wybierzKarteDoWymiany();
	


};




#endif //GRACZLUDZKI_H


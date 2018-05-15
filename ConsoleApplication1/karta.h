#ifndef KARTA_H
#define KARTA_H

#include "stdafx.h"
#include "kolor.h"
#include "figura.h"

//Tutaj wyrzuca error 'Karta': 'class' type redefinition	

class Karta
{
public:
	Figura figura;
	Kolor kolor;
	void wypisz();
};

#endif // !KARTA_H




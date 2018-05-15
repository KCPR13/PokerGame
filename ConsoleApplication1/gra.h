#ifndef GRA_H
#define GRA_H

#include "stdafx.h"
#include <vector>
#include "karta.h"
#include "stan.h"
#include "gra.h"
#include "gracz.h"

class Gra
{
	Gracz* gracze[6];
	Stan stan;
	vector<Karta> karty;
	int iloscGraczy;
public:
	/*int obliczSileUkladuGracza(Gracz& gracz);*/
	void przygotujKarty();
	void rozdajKarty();
	/*void wypiszZwyciezce();
	void wymienKarty();
	void zmianaStanuGry(Stan stan);*/
	void dodajGracza( int numer);
	void pobierzLiczbeGraczy();
	void przygotujGraczy();
	void odkryjKarty();
	/*bool krok();*/
	
};


#endif  //GRA_H


#ifndef GRACZ_H
#define GRACZ_H
#include "stdafx.h"
#include <string>
#include <vector>
#include "karta.h"

using namespace std;

class Gracz
{
protected:
	vector<Karta> karty;
	string nazwa;
public:
	Gracz(string nazwa) : nazwa(nazwa) {};
	 virtual ~Gracz() {};
	 virtual int wybierzKarteDoWymiany()=0;
	 virtual vector<Karta> pokazKarty();
	 virtual void wezKarte(Karta k);
	 virtual Karta oddajKarte(int numer);
	 virtual string podajNazwe();
	 virtual int ileKart();
	 virtual void wypiszKarty();
};

#endif GRACZ_H


#include "stdafx.h"
#include <iostream>
#include "gracz.h"


using namespace std;

void Gracz::wezKarte(Karta k)
{
	karty.push_back(k);
}
Karta Gracz::oddajKarte(int numer)
{
	if (numer < 0 || numer >= ileKart())
	{
		throw exception();
	}
	Karta k = karty[numer];
	karty.erase(karty.begin() + numer);
	return k;
}
vector<Karta>  Gracz::pokazKarty()
{
	return karty;
}
int Gracz::ileKart()
{
	return karty.size();
}
void Gracz::wypiszKarty()
{
	for (int i = 0; i <ileKart(); i++)
	{
		karty[i].wypisz();
	}
}
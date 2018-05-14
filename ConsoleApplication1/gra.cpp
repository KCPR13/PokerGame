#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <chrono>
#include "graczLudzki.h"
#include "gra.h"
#include "karta.h"
#include "gracz.h"


using namespace std;

void Gra::pobierzLiczbeGraczy()
{
	do
	{
		cout << "Podaj liczbe graczy [1-6]:";
		cin >> iloscGraczy;
	} while (iloscGraczy < 1 || iloscGraczy>6);

}
void Gra::dodajGracza( int numer)
{
	string nazwa;
	cout << "Podaj nazwe gracza" << (numer + 1);
	cin >> nazwa;
	gracze[numer] = new GraczLudzki(nazwa);

}
void Gra::przygotujGraczy()
{
	pobierzLiczbeGraczy();
	for (size_t i = 0; i < iloscGraczy; i++)
	{
		dodajGracza(i);
	}
}
void Gra::odkryjKarty()
{
	for (size_t i = 0; i < iloscGraczy; i++)
	{
		cout << "Karty gracza" << (i + 1) << endl;
		gracze[i]->wypiszKarty();
		cout << endl;
	}
}

void Gra::przygotujKarty()
{
	for (size_t i = 0; i < 52; i++)
	{
		Karta k;
		k.kolor= (Kolor)(i / 13);
		k.figura = (Figura)(i % 13+1);
		karty.push_back(k);
	}
	
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	shuffle(karty.begin(), karty.end(), std::default_random_engine(seed));
}

void Gra::rozdajKarty()
{
	for (size_t z=0; z=0 <iloscGraczy ; z++)
	{
		for (size_t i = 0; i < 5; i++)
		{
			gracze[z]->wezKarte(karty[0]);
			karty.erase(karty.begin(),karty.begin()+0);
		}
	}
	
}






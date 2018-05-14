#include "stdafx.h"
#include <iostream>
#include "graczLudzki.h"



using namespace std;

int GraczLudzki::wybierzKarteDoWymiany()
{
	cout << "Wybierz karte do wymiany" << endl;
	wypiszKarty();
	int wybor;
	cin >> wybor;
	return wybor;
}
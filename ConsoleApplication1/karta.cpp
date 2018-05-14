#include "stdafx.h"
#include <iostream>
#include "karta.h"

 using namespace std;

 void Karta::wypisz()
 {
	 switch (Karta::figura)
	 {
	 case AS:
		 cout << "A";
		 break;
	 case DAMA:
		 cout << "D";
		 break;
	 case JOPEK:
		 cout << "J";
		 break;
	 case KROL:
		 cout << "K";
		 break;
	 default:
		 cout << figura;
		 break;
	 }
	 cout << " ";
 
	switch (Karta::kolor)
	{
	case KIER:
		cout <<"Kier";
		break;
	case KARO:
		cout <<"Karo";
		break;
	case PIK:
		cout <<"Pik";
		break;
	case TREFL:
		cout <<"Trefl";
		break;
	
	}
}
#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <cassert>
#include<exception>
#include "gra.h"

using namespace std;

int main()
{
	Gra *gra = new Gra();
	gra->przygotujGraczy();
	gra->przygotujKarty();
	gra->rozdajKarty();
	gra->odkryjKarty();
	
	delete gra;
	
	
	return 0;
}

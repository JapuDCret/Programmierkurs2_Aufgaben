#ifndef DREIRAD_H
#define DREIRAD_H

#include <string>
#include "Fahrzeug.h"

class Dreirad : Fahrzeug
{
	private:
		double preis;
		
	public:
		Dreirad(double _preis, int _baujahr) : preis(_preis), Fahrzeug(_baujahr) {};
		
		~Dreirad() {};
		
		std::string getBeschreibung();
		
		std::string getTyp();
};

#endif
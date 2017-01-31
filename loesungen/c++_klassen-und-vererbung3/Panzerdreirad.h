#ifndef PANZERDREIRAD_H
#define PANZERDREIRAD_H

#include <string>
#include "Panzer.h"
#include "Dreirad.h"

class Panzerdreirad : Panzer, Dreirad
{
	private:
		
	public:
		Panzerdreirad(std::string _name, double _preis, int _baujahr) : Panzer(_name, _baujahr), Dreirad(_preis, _baujahr) {};
		
		~Panzerdreirad() {};
		
		std::string getBeschreibung();
		
		std::string getTyp();
};

#endif
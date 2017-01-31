#ifndef PANZER_H
#define PANZER_H

#include <string>
#include "Fahrzeug.h"

class Panzer : Fahrzeug
{
	private:
		std::string name;
		
	public:
		Panzer(std::string _name, int _baujahr) : name(_name), Fahrzeug(_baujahr) {};
		
		~Panzer() {};
		
		std::string getBeschreibung();
		
		std::string getTyp();
};

#endif
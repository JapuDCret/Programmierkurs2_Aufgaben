#ifndef FAHRZEUG_H
#define FAHRZEUG_H

#include <string>

class Fahrzeug
{
	private:
		int baujahr;
		
	public:
		Fahrzeug(int _baujahr) : baujahr(_baujahr) {};
		
		~Fahrzeug() {};
		
		int inline getBaujahr() { return baujahr; };
		
		std::string virtual getBeschreibung() = 0;
		
		std::string getTyp();
};

#endif
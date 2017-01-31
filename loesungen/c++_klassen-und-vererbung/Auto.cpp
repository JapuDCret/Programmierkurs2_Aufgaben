#include "Auto.h"

// hier "std::string getBeschreibung()" implementieren
std::string Auto::getBeschreibung()
{
	std::string out = "Auto: name='" + name + "', baujahr=" + std::to_string(baujahr);
	
	return out;
}
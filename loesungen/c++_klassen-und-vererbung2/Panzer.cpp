#include "Panzer.h"

std::string Panzer::getBeschreibung()
{
	std::string out = "Panzer: name='" + name + "', baujahr=" + std::to_string(getBaujahr());
	
	return out;
}

std::string Panzer::getTyp()
{
	return "Panzer";
}
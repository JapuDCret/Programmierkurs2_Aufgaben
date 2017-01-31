#include "Dreirad.h"

std::string Dreirad::getBeschreibung()
{
	std::string out = "Dreirad: preis=" + std::to_string(preis) + "$, baujahr=" + std::to_string(getBaujahr());
	
	return out;
}

std::string Dreirad::getTyp()
{
	return "Dreirad";
}
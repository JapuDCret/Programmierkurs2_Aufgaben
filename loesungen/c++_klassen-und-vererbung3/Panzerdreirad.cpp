#include "Panzerdreirad.h"

std::string Panzerdreirad::getBeschreibung()
{
	std::string out = "Panzerdreirad: name='" + getName() + "', preis=" + std::to_string(getPreis()) + ", baujahr=" + std::to_string(getBaujahr());
	
	return out;
}

std::string Panzerdreirad::getTyp()
{
	return "Panzerdreirad";
}
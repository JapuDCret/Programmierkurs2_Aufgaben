#include <iostream>
#include "Panzerdreirad.h"

int main()
{
	Panzerdreirad* pd = new Panzerdreirad("Leopard 2", 59.99, 1979);
	
	std::cout << "Beschreibung: " << pd->getBeschreibung() << ", Typ: " << pd->getTyp() << std::endl;
	
	return 0;
}
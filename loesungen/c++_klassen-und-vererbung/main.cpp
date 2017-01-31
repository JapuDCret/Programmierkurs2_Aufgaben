#include <iostream>
#include "Auto.h"

int main()
{
	Auto* a1 = new Auto("Trabant 601", 1976);
	Auto* a2 = new Auto("Porsche 911", 1963);
	
	std::cout << a1->getBeschreibung() << std::endl;
	std::cout << a2->getBeschreibung() << std::endl;
	
	return 0;
}
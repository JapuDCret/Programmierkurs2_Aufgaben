#include <iostream>
#include "Fahrzeug.h"
#include "Dreirad.h"
#include "Panzer.h"

int main()
{
	Panzer* p = new Panzer("Leopard 2", 1979);
	Dreirad* d = new Dreirad(59.99, 2011);
	
	std::cout << "Beschreibung: " << p->getBeschreibung() << ", Typ: " << p->getTyp() << std::endl;
	std::cout << "Beschreibung: " << d->getBeschreibung() << ", Typ: " << d->getTyp() << std::endl;
	
	Fahrzeug* f1 = (Fahrzeug*) p;
	Fahrzeug* f2 = (Fahrzeug*) d;
	
	std::cout << "Beschreibung: " << f1->getBeschreibung() << ", Typ: " << f1->getTyp() << std::endl;
	std::cout << "Beschreibung: " << f2->getBeschreibung() << ", Typ: " << f2->getTyp() << std::endl;
	
	return 0;
}
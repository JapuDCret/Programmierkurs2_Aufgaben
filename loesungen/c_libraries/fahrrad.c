#include <stdio.h>
#include "fahrzeug.h"

Fahrrad new_fahrrad(char* bezeichnung, double preis)
{
	Fahrrad f = { bezeichnung,  preis };
	return f;
}

void print_fahrrad(Fahrrad f)
{
	printf("bezeichnung = %s, preis = %.2f", f.bezeichnung, f.preis);
}
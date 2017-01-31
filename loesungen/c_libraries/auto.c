#include <stdio.h>
#include "fahrzeug.h"

Auto new_auto(char* bezeichnung, int ps, double preis)
{
	Auto a = { bezeichnung, ps, preis };
	return a;
}

void print_auto(Auto a)
{
	printf("bezeichnung = %s, ps = %d, preis = %.2f", a.bezeichnung, a.ps, a.preis);
}
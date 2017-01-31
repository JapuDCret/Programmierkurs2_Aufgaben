#include <stdio.h>
#include "fahrzeug.h"
int main()
{
	Auto a = new_auto("Ford Fiesta", 42, 1337.0);
	Fahrrad f = new_fahrrad("Hollandrad", 420.0);
	
	printf("Auto a: ");
	print_auto(a);
	printf("\n");
	
	printf("Fahrrad f: ");
	print_fahrrad(f);
	printf("\n");
	
	return 0;
}
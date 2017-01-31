#ifndef FAHRZEUG_H_
#define FAHRZEUG_H_

typedef struct {
	char* bezeichnung;
	int ps;
	double preis;
} Auto;

Auto new_auto(char* bezeichnung, int ps, double preis);
void print_auto(Auto a);

typedef struct {
	char* bezeichnung;
	double preis;
} Fahrrad;

Fahrrad new_fahrrad(char* bezeichnung, double preis);
void print_fahrrad(Fahrrad f);

#endif
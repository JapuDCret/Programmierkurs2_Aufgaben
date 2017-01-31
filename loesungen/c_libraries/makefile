main: main.c fahrzeug.h fahrzeug.a
	gcc main.c -o main fahrzeug.a

fahrzeug.a: auto.o fahrrad.o
	ar rcs fahrzeug.a auto.o fahrrad.o

auto.o: auto.c
	gcc -c auto.c

fahrrad.o: fahrrad.c
	gcc -c fahrrad.c
	
clean:
	rm fahrrad.o auto.o fahrzeug.a main
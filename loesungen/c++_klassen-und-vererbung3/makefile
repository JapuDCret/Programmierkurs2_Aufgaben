main: main.cpp Panzerdreirad.h Panzerdreirad.o
	g++ main.cpp -o main Fahrzeug.o Dreirad.o Panzer.o -std=c++11

Panzerdreirad.o: Panzerdreirad.cpp Panzerdreirad.h Dreirad.o Dreirad.h Panzer.o Panzer.h
	g++ Panzerdreirad.cpp -c Dreirad.o Panzer.o -std=c++11

Dreirad.o: Dreirad.cpp Dreirad.h Fahrzeug.o
	g++ Dreirad.cpp -c Fahrzeug.o -std=c++11

Panzer.o: Panzer.cpp Panzer.h Fahrzeug.o
	g++ Panzer.cpp -c Fahrzeug.o -std=c++11

Fahrzeug.o: Fahrzeug.cpp Fahrzeug.h
	g++ Fahrzeug.cpp -c -std=c++11

clean:
	rm Fahrzeug.o Panzer.o Dreirad.o Panzerdreirad.o main
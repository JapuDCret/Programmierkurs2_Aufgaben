main: main.cpp Auto.h Auto.o
	g++ main.cpp -o main Auto.o -std=c++11

Auto.o: Auto.cpp Auto.h
	g++ Auto.cpp -c -std=c++11

clean:
	rm Auto.o main
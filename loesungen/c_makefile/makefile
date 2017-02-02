main: main.c summe.o summe.h
	gcc main.c -o main summe.o -std=c11

summe.o: summe.c summe.h
	gcc summe.c -c -std=c11

clean:
	rm summe.o main
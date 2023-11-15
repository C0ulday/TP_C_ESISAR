
all: pgcd.o main.o
	gcc -o compil main.o pgcd.o

clean:
	rm -f *.o
	rm -f compil

pgcd.o: pgcd.c pgcd.h
	gcc -c -D MISEAUPOINT pgcd.c -Wall -ansi -pedantic -o pgcd.o

main.o: main.c
	gcc -c main.c -Wall -ansi -pedantic -o main.o
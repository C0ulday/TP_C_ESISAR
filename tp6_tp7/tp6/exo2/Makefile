CC = gcc
LDFLAGS = -Wall -std=c99 -pedantic

all:prog

prog:main.o fonctions.o
	$(CC) -g -o prog fonctions.o main.o $(LDFLAGS)


main.o:main.c
	$(CC) -g -c main.c $(LDFLAGS) -o main.o



fonctions.o: fonctions.c fonctions.h
	$(CC) -g -c fonctions.c $(LDFLAGS) -o fonctions.o


clean:
	rm -f *.o prog
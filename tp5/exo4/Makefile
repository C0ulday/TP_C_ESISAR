CC = gcc
CDFLAGS = -Wall -std=c99 -pedantic



all: main.o listeTableau.o
	$(CC) -o liste main.o listeTableau.o
main.o: main.c
	$(CC) -c $< -o $@

listeTableau.o: listeTableau.c listeTableau.h
	$(CC) -c $< -o $@

clean:
	rm -f *.o liste
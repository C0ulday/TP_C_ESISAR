CC = gcc
CFLAGS = -Wall -std=c99 -pedantic



all: main.o listeTableau.o
	$(CC) -o liste main.o listeTableau.o 
main.o: main.c
	$(CC) -c $< -o $@ $(CFLAGS)

listeTableau.o: listeTableau.c listeTableau.h
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f *.o liste
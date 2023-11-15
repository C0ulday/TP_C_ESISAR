CC = gcc
LDFLAGS =  -Wall -std=c99 -pedantic

all : prog

prog: main.o fonctions.o
	$(CC) -o prog main.o fonctions.o $(LDFLAGS)

main.o: main.c
	$(CC) -c main.c $(LDFLAGS) -o main.o
	
fonctions.o: fonctions.h fonctions.c
	$(CC) -c fonctions.c $(LDFLAGS) -o fonctions.o

clean:
	rm -f *.o prog
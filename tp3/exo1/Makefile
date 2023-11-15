
CC = gcc
CFLAGS = -Wall -std=c99 -pedantic

all: prog

prog: main.o fonctions.o histo.o
	$(CC) -o prog main.o fonctions.o histo.o -lm

main.o: main.c
	$(CC) -c main.c $(CFLAGS) -o main.o

fonctions.o: fonctions.c fonctions.h
	$(CC) -c fonctions.c $(CFLAGS) -o fonctions.o

histo.o: histo.c histo.h
	$(CC) -c histo.c $(CFLAGS) -o histo.o

clean :
	rm -f *.o prog
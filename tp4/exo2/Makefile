CC = gcc
CFLAGS = -Wall -std=c99 -pedantic

all: prog

prog: main.o lib.o
	$(CC) -o prog main.o lib.o $(CFLAGS)

main.o : main.c
	$(CC) -g -c main.c -o main.o $(CFLAGS) 


lib.o : lib.c lib.h
	$(CC) -g -c lib.c -o lib.o $(CFLAGS)

clean : 
	rm -f *.o prog



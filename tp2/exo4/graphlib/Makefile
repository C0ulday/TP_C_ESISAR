CC = gcc
EXEC = graph
CFLAGS = -Wall -ansi -pedantic
LDFLAGS = -L/usr/X11R6/lib -lX11

all	:	main.o dessine.o graphlib.o 
	$(CC) main.o dessine.o graphlib.o -o $(EXEC) $(LDFLAGS)

main.o	:	main.c 
	$(CC) $(CFLAGS) -c main.c -o main.o

graphlib.o	:	graphlib.c graphlib.h
	$(CC) $(CFLAGS) -c graphlib.c -o graphlib.o

dessine.o	:	dessine.c dessine.h
	$(CC) $(CFLAGS) -c dessine.c -o dessine.o

clean	: 
	rm -f *.o $(EXEC)

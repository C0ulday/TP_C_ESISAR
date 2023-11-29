CC = gcc
CFLAGS = -Wall -std=c99 -pedantic
EXEC = myprog

all: main.o liste.o
	$(CC) $^ -o $(EXEC) $(CFLAGS)

main.o: main.c
	$(CC) -c $< -o $@ $(CFLAGS)

liste.o: liste.c liste.h
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f *.o $(EXEC)

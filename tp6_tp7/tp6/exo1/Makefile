CC = gcc
EXEC = myprog
CFLAGS = -Wall -std=c99 -pedantic

$(EXEC): main.o pile.o
	$(CC) -o $(EXEC) main.o pile.o

main.o: main.c
	$(CC) -g -c $< -o $@ $(CFLAGS)

pile.o: pile.c pile.h
	$(CC) -g -c $< -o $@ $(CFLAGS)

clean:
	rm -f *.o $(EXEC)

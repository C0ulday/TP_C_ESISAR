CC = gcc
EXEC = myprog
CFLAGS = -Wall -std=c99 -pedantic

$(EXEC): main.o poly.o
	$(CC) -o $(EXEC) main.o poly.o

main.o: main.c
	$(CC) -c $< -o $@ $(CFLAGS)

poly.o: poly.c poly.h
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f *.o $(EXEC)

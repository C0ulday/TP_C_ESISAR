CC = gcc
EXEC = fract
CFLAGS = -Wall -std=c99 -pedantic


all: $(EXEC)

$(EXEC): fractale.o main.o
	$(CC) -o $(EXEC) main.o fractale.o

main.o: main.c fractale.h
	$(CC) -c $< -o $@ $(CFLAGS)

fractale.o: fractale.c fractale.h
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f *.o $(EXEC)

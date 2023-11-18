CC = gcc
EXEC = myhanoi
CFLAGS = -Wall -std=c99 -pedantic


all: $(EXEC)

$(EXEC): main.o hanoi.o
	$(CC) -o $(EXEC) main.o hanoi.o

main.o: main.c
	$(CC) -c $< -o $@ $(CFLAGS)

hanoi.o: hanoi.c hanoi.h
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f *.o $(EXEC)
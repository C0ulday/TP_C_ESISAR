CC = gcc
CFLAGS = -Wall -std=c99 -pedantic
EXCEC = myprog


all: $(EXCEC)

$(EXCEC): main.o fractions.o
	$(CC) -o $(EXCEC) main.o fractions.o

main.o : main.c
	$(CC) -c $< -o $@ $(CFLAGS)

fractions.o : fractions.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean : 
	rm -f *.o $(EXCEC)

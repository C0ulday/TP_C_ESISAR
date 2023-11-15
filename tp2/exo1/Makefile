
all: jeu_multi.o main.o
	gcc -o jeu main.o jeu_multi.o

jeu_multi.o: jeu_multi.c jeu_multi.h
	gcc -c jeu_multi.c -Wall -ansi -pedantic -o jeu_multi.o

main.o: main.c
	gcc -c main.c -Wall -ansi -pedantic -o main.o


clean:
	rm -f *.o
	rm -f jeu
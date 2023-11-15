CC = gcc
CFLAGS = -Wall -ansi -pedantic

SRCS = fonctions.c jeu_multi.c
EXES = $(SRCS:.c=)

all	:	$(EXES)

%	:	%.c
	$(CC) $(CFLAGS) -o $@ $<

clean	:
	rm -f $(EXES)

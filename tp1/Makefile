# création de mes variables pour compil
CC = gcc

CFLAGS = -Wall -ansi -pedantic

SRCS = exo1_ver1.c exo1_ver2.c \
exo1_ver3.c exo2.c exo3_ver1.c exo3_ver2.c exo4.c

EXES = $(SRCS:.c=)


#compilation

all	:	$(EXES)

%	:	%.c
	$(CC) $(CFLAGS) -o $@ $<

clean	:
	rm -f $(EXES)

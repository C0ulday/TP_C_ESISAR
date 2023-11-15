#include <stdio.h>

int main(int argc, char * argv[]) {
    int i;
    printf("Nombre d'arguments : %d\n", argc);
    for(i = argc-1 ; i > 0 ; i--) {
        printf("%s\n", argv[i]);
        }
    return 0;
}

/*
    Ecris le nombre d'arguments entré (en dehors du nom du prog)

    et ecris de la fin au début, les arguments entrés ex.

    sita@BEAST:~/esisar/tps/cs/resolution/tp3$ ./test sita est là
    Nombre d'arguments : 4
    là
    est
    sita


*/
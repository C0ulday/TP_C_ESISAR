#include <stdio.h>

/*Compilation conditionnelle avec pgcd*/

int pgcd(int a, int b) {

    int r;
    
    while (b != 0) {

        /*Compilation conditionnelle*/
        #ifdef MISEAUPOINT
        printf("\nValeur courante de b =%d",b);
        #endif

        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

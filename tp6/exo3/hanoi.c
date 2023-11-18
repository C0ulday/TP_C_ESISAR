#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"


void Hanoi(int n, char tour1, char tour2 ,char tour3){

    printf("Tour d'Hanoi avec %d tour(s)\n",n);
    if(n==1){
        printf("%c --> %c\n",tour1,tour3);
    }
    else if(n >1){

        Hanoi(n-1,tour1,tour3,tour2); // je déplace les n-1 disques vers
        // la tour B par l'intermédiaire de la tour C 
        printf("%c --> %c\n",tour1,tour3); // je déplace le plus gros dique resté
        // en A directement vers C
        Hanoi(n-1,tour2,tour1,tour3); // Je ramène les n-1 disque de B  vers C
    }

}
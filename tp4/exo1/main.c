#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main(int argc, char* argv[]){

    int tab[N] ={0};
    int taille = lireDonnees(argv[1], tab);
    printf("%d\n",taille);
    afficherTableau(tab,taille);
    printf("\nTri à bulles\n");
    triABulles(tab,taille);
    enregistrementDonnes(argv[2],tab,taille);


    return 0;
}
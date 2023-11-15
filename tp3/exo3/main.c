#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main(void){


    int** matrice1 = creationMatrice(2,3);
    int** matrice2 = creationMatrice(3,2);

    remplirMatrice(matrice1,2,3);
    remplirMatrice(matrice2,3,2);

    //int **res = additionnerMatrices(matrice1,matrice2,2,3);
    printf("\nMatrices\n");
    affichageMatrice(matrice1,2,3);
    printf("\n");
    affichageMatrice(matrice2,3,2);

    int** Tres = transposeeMatrice(matrice1,2,3);
    printf("\nTransposée de matrice1\n");
    affichageMatrice(Tres,3,2);
    printf("\nProduit Matriciel\n");
    int** Pres = produitMatriciel(matrice1,2,3,matrice2,3,2);
    affichageMatrice(Pres,2,3);




    libererMatrice(matrice1,2,3);
    libererMatrice(matrice2,3,2);
    libererMatrice(Tres,3,2);
    libererMatrice(Pres,2,3);

    // Somme obtenue :
    /*
    
    1  0  4     + 2  -3  1 = 3 -3 5
    −1 2 -5       5   8  2   4 10 -3

    */

    return 0;
}
#include <stdio.h>
#include "fractale.h"


void dessineSierpinski(int taille){

    // dessin du carré à gauche 
    /*for(int i=0;i<taille/2;i++){
        for(int j =0; j<taille/2;j++){
            printf("* ");
        }
    printf("\n");
    }
    // dessin du reste de la figure c.a.d recatagle bas
    for(int i=0;i<taille/2;i++){
        for(int j =0; j<taille;j++){
            printf("* ");
        }
    printf("\n");
    }*/

}
void Fractale(int n, int taille){

    if(n==1){

        dessineSierpinski(taille);
    }
    else{
        Fractale(n-1,taille);
    }


}
#include <stdio.h>
#include "jeu_multi.h"

int main(void){
    int rep =0;
    int c;

    printf("Entrez 1 -> Mode sans points\nEntrez 2 -> Mode avec Points\n");

    while(scanf("%d",&rep) == 0 || (rep !=1 && rep !=2)){
        printf("Entrez 1 ou 2:\n");
        while( (c = getchar() != '\n') && c != EOF);
    }
    if(rep ==1){
        jeuMulti();
    }
    else{
        jeuMultiPoints();
    } 
    return 0;
}
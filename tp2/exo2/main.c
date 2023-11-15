#include <stdio.h>
#include "pgcd.h"

int main(){

    int a,b;
    int c;

    printf("Entrez un entier naturel a :");

    while(scanf("%d",&a) == 0){
        printf("Entrez un entier naturel :");
        while( (c = getchar() != '\n' ) && c != EOF);
    }

    printf("Entrez un autre entier naturel b :");

    while(scanf("%d",&b) == 0){
        printf("Entrez un entier naturel :");
        while( (c = getchar() != '\n' ) && c != EOF);
    }

    printf("\t---CALCUL DU PGCD DE %d et %d---\t",a,b);
    printf("\nLe pgcd est :%d\n",pgcd(a,b));

    return 0;
}
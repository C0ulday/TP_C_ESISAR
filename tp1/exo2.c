#include <stdio.h>

/*Année bissextile*/

int main(){

    int annee;
    scanf("%d", &annee);

    if( (annee % 4 == 0 && annee % 100!= 0) || (annee % 400 == 0)){
        printf("Bissextile\n");
    }
    else{
        printf("Non bissextile\n");
    }
    return 0;

}

/*Test 1 : année bissextile
Test 2 : année non bissextile
Test 3 : année divisible par 4 mais par 100
Test 4 : année divisible par 100 et aussi par 400*/
#include <stdio.h>

/*Somme des n premiers entiers*/

int main(){

    int n;
    int q;
    int somme =0;

    printf("Entrez un nombre : ");

    if(scanf("%d", &n) == 1){
        q = n;
        do{
            somme = somme + n;
            n = n - 1;
        }while(n!=0);
        
        printf("La somme des %d premiers entiers est %d \n", q, somme);
    }
    else{
        printf("Erreur de saisie");
    }


    return 0;
}
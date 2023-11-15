#include <stdio.h>
#include "jeu_multi.h"

/*Jeu de mutliplication*/

void jeuMulti(void){

    int n =0;
    int rep =0;
    int i =0;
    int c;

    printf("\t--- JEU MUTLTPLICATION ---\t\n");
    printf("Entrez un entier compris entre 2 et 9 :\n");

    /*Vérification de l'entrée de l'utilisateur */
    while( (scanf("%d",&n) == 0) || n <2 || n >9){
        printf("Réessayer,la valeur doit un entier compris entre 2 et 9 : \n");

        /*Vider le tampon d'entrée*/
        while ((c = getchar()) != '\n' && c != EOF){
            /*Ne fait rien, les caractères encore dans le buffer de scanf sont lus */
        }
    }

    printf("Valeur de n :\t %d",n);

    /*Table et réponses*/

    for(i = 1;i<=9;i++){

        printf("\n%d x %d =\t",i,n);
        while(scanf("%d",&rep) ==0){
            printf("Erreur, veuillez entrer un entier positif");
            printf("\n%d x %d =\t",i,n);

            /*Vider le tampon d'entrée*/
            while( (c = getchar() != '\n') && c != EOF);
        }
        if(rep != i*n){
            printf("Erreur ! %d x %d = %d et non %d !",i,n,i*n,rep);
            break;

        }
    }

}

void jeuMultiPoints(void){
    
    int n =0;
    int rep =0;
    int i =0;
    int erreur =0;
    int c;

    printf("\t--- JEU MUTLTPLICATION ---\t\n");
    printf("Entrez un entier compris entre 2 et 9 :\n");

    /*Vérification de l'entrée de l'utilisateur */
    while( (scanf("%d",&n) == 0) || n <2 || n >9){
        printf("Réessayer,la valeur doit un entier compris entre 2 et 9 : \n");

        /*Vider le tampon d'entrée*/
        while ((c = getchar() != '\n' ) && c != EOF){
          /*Ne fait rien, les caractères encore dans le buffer de scanf sont lus */
        }
    }

    printf("Valeur de n :\t %d",n);

    /*Table et réponses*/

    for(i = 1;i<=9;i++){

        printf("\n%d x %d =\t",i,n);
        while(scanf("%d",&rep) ==0){
            printf("Erreur, veuillez entrer un entier positif");
            printf("\n%d x %d =\t",i,n);

            /*Vider le tampon d'entrée*/
            while( (c = getchar() != '\n') && c != EOF);
        }
        if(rep != i*n){
            erreur++;
        }
    }
    if(erreur ==0){
        printf("Félicitations, vous connaisez votre table de mutliplication !\n");
    }
    else {
        printf("Vous avez fait %d erreurs ! \n",erreur);
    }
   

}


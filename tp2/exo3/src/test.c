#include <stdio.h>
#include "pgcd.h"
#include "ppcm.h"
#include "quotient.h"
#include "reste.h"
#include "test.h"
#include "valeur.h"

void testBiblio(void){

    int rep;
    int a,b,c;

    printf("\t---TEST BIBLIOTHEQUE---\t");
    printf("Entrez un nombre pour un test :\n"
    "1:pgcd\n"
    "2:ppcm\n"
    "3:quotient\n"
    "4:reste\n"
    "5:valeur absolue\n");

    scanf("%d",&rep);

    switch(rep){

        case 1:
            printf("\tPGCD\t\n");
            printf("Entrez deux entiers positifs:\n");
            while(scanf("%d\n%d",&a,&b) == 0){
                printf("Entrez deux entiers positifs:\n");
                while( (c = getchar() !='\n') && c !=EOF);
                
            }
            printf("Le PGCD de %d et %d est %d\n",a,b,pgcd(a,b));
            break;

        case 2:
            printf("\tPPCM\t\n");
            printf("Entrez deux entiers positifs:\n");
            while(scanf("%d\n%d",&a,&b) == 0){
                printf("Entrez deux entiers positifs:\n");
                while( (c = getchar() !='\n') && c !=EOF);
                
            }
            printf("Le PPCM de %d et %d est %d\n",a,b,ppcm(a,b));
            break;

        case 3:
            printf("\nQUOTIENT\t\n");
            printf("Entrez deux entiers positifs:\n");
            while(scanf("%d\n%d",&a,&b) == 0){
                printf("Entrez deux entiers positifs:\n");
                while( (c = getchar() !='\n') && c !=EOF);
                
            }
            if( (b==0 ) || (a ==0 && b==0)){
                printf("Division impossible !");
                break;}
            printf("Le quotient de %d et %d est %d\n",a,b,quotient(a,b));
            break;

        case 4:
            printf("\nRESTE\t\n");
            printf("Entrez deux entiers positifs:\n");
            while(scanf("%d\n%d",&a,&b) == 0){
                printf("Entrez deux entiers positifs:\n");
                while( (c = getchar() !='\n' ) && c !=EOF);
                
            }
            if( (b==0 ) || (a ==0 && b==0)){
                printf("Division impossible !");
                break;}
            printf("Le reste de %d et %d est %d\n",a,b,reste(a,b));
            break;

        case 5:
            printf("\nVALEUR ABSOLUE\t\n");
            printf("Entrez un entier positif:\n");
            while(scanf("%d\n",&a) == 0){
                printf("Entrez un entier positif:\n");
                while( (c = getchar() !='\n' ) && c !=EOF);
                
            }
            printf("La valeur absolue de %d est %d\n",a,valeurAbsolue(a));
            break;

        default:
            printf("Entrée invalide\n");
            break;

    }








}
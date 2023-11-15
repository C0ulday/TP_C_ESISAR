#include <stdio.h>

/*Appréciation switch*/


#define TB "Très bien !"        
#define B "Bien !"
#define AB "Assez-bien !"
#define P "Passable !"
#define I "Insuffisant !"


int main(){

    int note;
    printf("Entrez une note (nombre entier) entre [1;5]: ");

    if(scanf("%d",&note)==1){

        switch(note){
            case 5:
                printf(TB);
                break;
            case 4:
                printf(B);
                break;
            case 3:
                printf(AB);
                break;
            case 2:
                printf(P);
                break;
            case 1:
                printf(I);
                break;
            default:
                printf("Erreur d'entrée !\n");
        }
    }
    return 0;

}
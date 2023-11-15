/*Appréciation if imbriqués*/


#include <stdio.h>

#define TB "Très bien !"        
#define B "Bien !"
#define AB "Assez-bien !"
#define P "Passable !"
#define I "Insuffisant !"

int main(){

    int note;


    printf("Entrez une note (nombre entier) entre [1;5] :\n");

        
    if(scanf("%d",&note) ==1){

        printf("--> %d \n",note);
        if(note >= 1 && note <= 5){

            if(note == 5){
                printf(TB);

                if(note ==4){
                printf(B);}

                if(note ==3){
                printf(AB);}

                if(note ==2){
                printf(P);}

                if(note ==1){
                printf(I);}
            }
        }
        else {
                printf("Veuillez entrer un nombre entre 1 et 5 \n");
        }     

    }
    else{
        printf("Désolé ! Vous deviez entrer un entier ! \n");
    }

    return 0;
    
}
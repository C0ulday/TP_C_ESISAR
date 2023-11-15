#include <stdio.h>
#include <stdlib.h>




int lireDonnees(char nomFichier[], int T[]){

    FILE *fic;

    int nb;
    int i=0;

    fic = fopen(nomFichier,"r");
    if(fic ==NULL) perror("Ouverture impossible !");

    while(!feof(fic)){
        fscanf(fic,"%d",&nb);
        T[i] = nb;
        i++;
    }

    fclose(fic);

    return i;

}

void afficherTableau(int T[], int nb){

    for(int i=0; i<nb; i++){
        printf("T[%d] = %d\n",i,T[i]);
    }

}

void triABulles(int T[], int nb){

    //croissant
    int temp =0;
    for(int i=0;i<nb;i++){
        for(int j=0;j<i;j++){ //exclusion de l'élément le plus à droite car deja traité
            if(T[j]>T[j+1]){
                temp = T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
            }
        }
    }
    afficherTableau(T,nb);

}

void enregistrementDonnes(char fichier[], int T[], int nb){

    FILE* fic;
    fic = fopen(fichier,"w");

    if(fic ==NULL) perror("Accès fichier imposisble !");
    else{
        for(int i=0; i<nb; i++){
            fprintf(fic,"%d\t",T[i]);
        }
    }
    fclose(fic);
}
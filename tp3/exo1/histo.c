#include <stdio.h>
#include "histo.h"

void histoHori(float tab[], int n){

    for(int j=0;j<=18;j+=2){
        printf("[%3d ; %3d ] :",j,j+2);
        for(int i=0;i<n;i++){
            if(tab[i] >=j && tab[i] <=j+2){
                printf("\t*\t");
            }
        }
        printf("\n");
        printf("]%3d ; %3d ] :",j+2,j+4);
        for(int i=0;i<n;i++){
            if(tab[i] >=j+2 && tab[i] <=j+4){
                printf("\t*\t");
            }
        }
        j=j+2;
        printf("\n");
    }
  
}

void histoVerti(float notes[], int n){

        int i, j, max;
        int tableau [10]={0}; //Ce tableau va compter le nombre de notes dans chaque intervalle (10 intervalles)
        max = 0;

        for(j=0; j<10; j++){
            for (i=0; i<n; i++){
                if((notes[i]>(2*j))&&(notes[i]<=(2*(j+1)))){
                    tableau[j]++;
                }
            }
        }

        // on recherche le max de tous les intervalles
        for (i=0; i<10; i++){
		    if (tableau[i]>max) {
			max = tableau [i];
		    }
	    }

        for (i=max; i>0; i--) {
		printf("\t");
            for (j=0; j<10; j++) {
                if (tableau[j]>=i){
                    printf("*\t\t");
                } 
                else{
                    printf("\t\t"); //on décale jusqu'à l'intervalle correspondant
                }
		}
            printf("\n");
        }
        printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t [ 0; 2] \t ] 2; 4] \t ] 4; 6] \t ] 6; 8] \t ] 8; 10] \t ] 10; 12] \t ] 12; 14] \t ] 14; 16] \t ] 16; 18] \t ] 18; 20]\n");


}
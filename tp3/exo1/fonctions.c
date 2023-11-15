#include <stdio.h>
#include <math.h>
#include "fonctions.h"


void afficherNotes(float tab[] , int n){

    for(int i=0;i<n;i++){
        printf("%4d\t",i);
    }
    printf("\n");

    for(int i=0;i<n;i++){
        printf("%4.f\t",tab[i]);
    }
    printf("\n");


}

float minimumNote(float tab[], int n){

    float min = tab[0];
    for(int i=1;i<n;i++){
        if(tab[i]<min){
            min = tab[i];
        }
    }
    return min;

}

float maximumNote(float tab[], int n){

    float max =tab[0];

    for(int i=1;i<n;i++){
        if(tab[i]>max){
            max = tab[i];
        }
    }
    return max;
}

float calculMoyenne(float tab[], int n){

    float moy =0;
    for(int i=0;i<n;i++){
        moy = moy + tab[i];
    }
    return moy/n;
}

float calculeVariance(float tab[], int n){

    float som=0;
    float moy = calculMoyenne(tab,n);

    for(int i=0;i<n;i++){
        som = som + pow((tab[i] - moy),2);
    }
    return som/n;

}

float calculeEcartType(float tab[],int n){
    return sqrt(calculeVariance(tab,n));
}

int rechercheValeur(float tab[], int n, float note){
    
    int i =0;
    while( (i<n) && (tab[i] != note) ){
        i++;
    }
    if(i==n) return -1;
    else{
        return i;
    }

}


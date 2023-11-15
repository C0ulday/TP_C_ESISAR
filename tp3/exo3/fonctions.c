#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"


int** creationMatrice(int n, int m){

    int **mat = malloc(n*sizeof(int*));
    if (mat ==NULL) return NULL;

    for(int i=0;i<n;i++){
        mat[i] = (int *)malloc(m*sizeof(int));
        if(mat[i] ==NULL) return NULL;

    }
    //Initialisation
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat[i][j] =0;
        }
    }
    return mat;
}

void libererMatrice(int** mat,int n, int m){

    //libération de la ligne
    for(int i=0;i<n;i++){
        free(mat[i]);
    }
    //libération du tableau de pointeurs de ligne
    free(mat);

}

void remplirMatrice(int** mat, int n, int m){

    int valeur =0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("matrice[%d][%d] : ",i,j);
            scanf("%d",&valeur);
            mat[i][j] = valeur;
        }
    }
    printf("\n");

}


void affichageMatrice(int** mat, int n, int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d \t",mat[i][j]);
        }
        printf("\n");
    }

}

int** additionnerMatrices(int** mat1, int** mat2, int n, int m){

    int** res = creationMatrice(n,m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return res;
}

int** transposeeMatrice(int** mat, int n, int m){

    int** res = creationMatrice(m,n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j] = mat[j][i];
        }
    }
    return res;
}

int** produitMatriciel(int** mat1,int n1, int m1 ,int** mat2, int n2, int m2){

    int** res = creationMatrice(n1,m2);

    if(m1 != n2){
        printf("Désolée , produit impossible");
        return NULL;
    }

    else{
        for(int i=0; i<n1;i++){
            for(int j=0;j<m2;j++){
                for(int k=0;k<m1;k++){
                    res[i][j] += mat1[i][k]*mat2[k][j];
                }
                
            }
        }
        
    }
    return res;
}
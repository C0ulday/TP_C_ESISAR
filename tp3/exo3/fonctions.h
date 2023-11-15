#ifndef __FONCTIONS_H__
#define __FONCTIONS_H_

int** creationMatrice(int n, int m);
void libererMatrice(int** mat,int n, int m);
void remplirMatrice(int** mat, int n, int m);
void affichageMatrice(int** mat, int n, int m);
int** additionnerMatrices(int** mat1, int** mat2, int n, int m);
int** transposeeMatrice(int** mat, int n, int m);
int** produitMatriciel(int** mat1,int n1, int m1 ,int** mat2, int n2, int m2);

#endif
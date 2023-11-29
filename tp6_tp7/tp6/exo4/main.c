#include <stdio.h>


void dessinerSierpinski(int n, int x, int y, int taille) {

    if (n == 0){
        printf("Dessin d'un carré entier\n");
        for(int i=0;i<x+taille;i++){
            for(int j=0;j<y+taille;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    else{

        int newTaille = taille / 2;
        // dessins de 3 petits carrés bout à bout (sans celui de droite)
        dessinerSierpinski(n - 1, x, y, newTaille); // carré bas gauche
        dessinerSierpinski(n - 1, x + newTaille, y, newTaille); // bas carré droit
        dessinerSierpinski(n - 1, x + newTaille / 2, y + newTaille, newTaille); // carré haut gauche
    }
}

int main() {
 
    int niveau = 2; // Niveau de détail
    int taille = 10; // Taille initiale du triangle

    dessinerSierpinski(niveau, 0, 0, taille);

    return 0;
}

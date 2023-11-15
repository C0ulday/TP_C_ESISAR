#include <stdio.h>
#include <sys/unistd.h>
#include "dessine.h"
#include "graphlib.h"

void dessineCarre(int x, int y, int taille){
    /*Dessine un carré sur la pointe, à partir de coordonnées et d'une taille*/
    /*Tracé des 4 côtés du carré(on se base sur le graphique du TP)*/

    line(x, y, x + taille / 2, y - taille / 2); /* ligne du point(x,y) vers sommet droit*/
    line(x + taille / 2, y - taille / 2, x, y - taille); /*ligne sommet droit vers sommet sup*/
    line(x, y, x - taille / 2, y - taille / 2); /*ligne sommet inf vers sommet gauche*/
    line(x - taille / 2, y - taille / 2, x, y - taille); /*ligne sommet gauche vers sommet sup*/
    
}


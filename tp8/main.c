#include <stdio.h>
#include <stdlib.h>
#include "liste.h"


int main (int argc, char* argv[]){
	
	liste L = NULL; 	/* L contient l’adresse du premier élément de la liste */
	AjouterDebut(&L, 50);
	AjouterDebut(&L, 40);
	AjouterFin(&L, 60);
	insererElement(&L, 55);
	afficherListe(&L);

	supprElement(4, &L);
	afficherListe(&L);

	return 0;
}
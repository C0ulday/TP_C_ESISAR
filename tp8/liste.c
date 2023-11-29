#include <stdio.h>
#include <stdlib.h>
#include "liste.h"


liste* AjouterDebut(liste* l, int nombre)
{
	element *e = (element* ) malloc(sizeof(element));
	e->valeur = nombre;
	e->suivant = *l;
	*l = e;
	return l;
}


liste* AjouterFin(liste* l, int nombre)
{
	element *e = (element* ) malloc(sizeof(element));

	element *temp = *l;
	while (temp->suivant != NULL)
	{
		temp = temp->suivant;
	}

	e->valeur = nombre;
	e->suivant = temp->suivant;
	temp->suivant = e;
	return l;
}


liste* insererElement(liste* l, int nombre)
{
	element *e = (element* ) malloc(sizeof(element));

	element *temp = *l;
	element *prec = NULL;
	while (temp != NULL && temp->valeur <= nombre)
	{
		prec = temp;
		temp = temp->suivant;
	}

	e->valeur = nombre;
	e->suivant = temp;
	prec->suivant = e;
	return l;

}

void afficherListe(liste * l)
{
	element *temp = *l;
	while (temp != NULL)
	{
		printf ("%d ", temp->valeur);
		temp = temp->suivant;
	}
	printf("\n");
}

void supprElement(int nb, liste * l)
{
	int i = 0;
	element *temp = *l;
	element *prec = *l;
	while (temp != NULL && i < nb)
	{
		i++;
		if (nb == 1)		*l = temp->suivant;
		else if (i == nb) 	prec->suivant = temp->suivant;
		else 			prec = temp;
		temp = temp->suivant;
	}
	if (i < nb) printf ("Liste courte\n");
}

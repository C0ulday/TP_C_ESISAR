#ifndef  __LISTE_H__
#define __LISTE_H__



typedef struct element element;
struct element 
	{
		int valeur; /* valeur de l’élément */
		element* suivant; /* adresse du successeur */
	};

typedef element* liste;

liste* AjouterDebut(liste* l, int nombre);
liste* AjouterFin(liste* l, int nombre);

liste* insererElement(liste* l, int nombre);
void afficherListe(liste * l);
void supprElement(int nb, liste * l);



#endif // ! __LISTE_H__

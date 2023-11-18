/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
/* ioannis.parissis@grenoble-inp.fr                                  */
/* Sep 2012                                                          */
/*********************************************************************/
#include "listeTableau.h"


int elementLibre(liste l){
    /*Retourne un element libre du tableau
   (suivant = -1). On suppose qu'il y en a toujours un */
    

    int curseur =0;
    while(l[curseur].suivant !=-1 && (curseur < TAILLEMAX)){
      curseur++;
    }
    return curseur;

}

void creerListeVide(liste l){

/* Initialise le tableau de sorte que tous les elements soient libres (suivant = -1)
  sauf celui d'indice 0 suivant == 0*/
  int curseur =1;

  l[0].suivant = 0;

  while(curseur < TAILLEMAX){
    l[curseur].suivant =-1;
    curseur++;
  }
}

void insererElement(int x, liste l){

  /*en supposant l triée, insère x dans
  l, en maintenant l triée*/

  int curseur =0;
  int temp =0;
  int indice_vide=elementLibre(l);
  while( l[l[curseur].suivant].valeur <x){ // tant que je ne trouve pas
  // de valeur de la liste qui soit plus grande que x
    curseur++; // j'avance
  }
  // On l'a trouvé donc on par vers l'indice de l'élement juste avant lui c.a.d curseur
  // on va mettre x "entre les deux"

  temp = l[curseur].suivant; // j'enregistre bien l'indice de l'élement plus grand que x
  l[curseur].suivant = indice_vide; // désormais le dernier élement plus petit que x ne fait plus référence
  // à l'élement plus grand que x mais à l'indice d'une case vide de la liste
  l[indice_vide].suivant = temp; // maintenat la case vide fait référence à l'incide de la case plus grande que x
  l[indice_vide].valeur = x; // on oublie pas d'assigner x

}

void supprimerElement(int i, liste l){

  int compt =0;
  int indice=0;
  int indice_avant =0;
  do{
    indice_avant =indice;
    indice = l[indice].suivant;
    compt++; 
  }while(compt-1 !=i); // j'obtiens l'indice du tableau faisant 
  // référence au ième élément du tableau (je retire 1 car ça commence à partir de indice 0)
  // on a le schéma suivant :   x1 < i < x2 je dirige x1 vers x2

  l[indice_avant].suivant = l[indice].suivant;
  l[indice].suivant = -1; // je "vide" la case à supp


}

void afficherListe(liste l){

/* Affiche les elements de la liste dans l'ordre */

  int indice =l[0].suivant;
  
  while(indice !=0){
    printf("%d\n",l[indice].valeur);
    indice = l[indice].suivant;
    
  }
}



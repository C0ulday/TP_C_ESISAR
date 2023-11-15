#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int calcPile(char expression[]);

int calcPile(char expression[]) {

    pileInt maPile = creerPile();

    char *curseur = expression;
    int ope1, ope2,chiffre, res;


    while (*curseur != '\0') { // tant que pas fini expression
        if (*curseur >= '0' && *curseur <= '9') {
            // si on a affaire à un entier, convertissez-le de char à int
            chiffre = *curseur - '0';
            empiler(maPile, chiffre);
        } else if (*curseur == '*' || *curseur == '+' || *curseur == '-' || *curseur == '/') {
            // dès que je croise un opérateur, je dépile 2 entiers
            // pour l'opération
            ope2 = depiler(maPile);
            ope1 = depiler(maPile);

            switch (*curseur) {
                case '*':
                    res = ope1 * ope2;
                    break;
                case '+':
                    res = ope1 + ope2;
                    break;
                case '-':
                    res = ope1 - ope2;
                    break;
                case '/':
                    res = ope1 / ope2;
                    break;
            }

            empiler(maPile, res); // j'empile le résultat
        }
        curseur++; // j'oublie pas d'avancer mon curseur vers le caractère suivant
    }
    res = depiler(maPile); // résultat au sommet
    free(maPile);
    return res;
}


int main(int argc, char* argv[])
{

    if(argc <2){
        printf("Syntaxe : ./my prog expression\n");
        printf("ex. ./myprog 42+5*67-/\n");
        exit(1);
    }
    printf("%s\n",argv[1]);
    printf("%d\n",calcPile(argv[1]));



    return 0;


}

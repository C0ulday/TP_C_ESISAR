#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fractions.h"


int main(int argc, char* argv[]){

    Fraction f1;
    Fraction f2;
    char operation;

    printf("Avec le cas de la multiplication, échapper le caractère *:\n");
    printf("Ajouter un anti-slash : \\* sinon programme affichera\n");
    printf("Aucun choix de fait\n\n");

    if(argc <6){
        perror("Il manque des arguments pour lancer l'exécutable \nSynthaxe : f1_num f1_den opération f1_num f2_den");
        exit(0);
    }

    //Conversion vers entier
    // faire attenton au fait qu'on a
    // ex. argv[1] = "3\0"
    f1.num = argv[1][0] - '0';
    f1.den = argv[2][0] - '0';

    operation = argv[3][0];

    f2.num = argv[4][0] - '0';
    f2.den = argv[5][0] - '0';
    printf("%c\n",operation);



    
    
    switch(operation){
        
        case '+':
            addFraction(f1,f2);
            break;
        
              
        case '*':
            mulFraction(f1,f2);
            break;

        case '-':
            subFraction(f1,f2);
            break;
  
        case '/':
            divFraction(f1,f2);
            break;

        default:
            printf("Aucun choix de fait\n");
            break;
    }

    return 0;
}
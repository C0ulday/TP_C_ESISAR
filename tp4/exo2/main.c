#include <stdio.h>
#include "lib.h"


int main(int argc, char* argv[]){


    printf("%d\n",myStrlen(argv[1]));

    
    afficherEnHexadecimal(argv[1]);

    mettreEnMaj(argv[1]);
    mettreEnMin(argv[1]);
    transformerMinMaj(argv[2]);
    retournerMot(argv[2]);
    printf("%d",estPalindrome(argv[2]));


    return 0;
}
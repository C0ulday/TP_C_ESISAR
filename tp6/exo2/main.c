#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "fonctions.h"


int main(int argc, char ** argv){

    //printf("%d\n",recuFibo(6));
    //printf("%d\n",recuPgcd(420,540));
    char *text = argv[1];
    //printf("")
    printf("%d\n",recuEstPalindrome(text,0,strlen(text)-1));
    return 0;
}
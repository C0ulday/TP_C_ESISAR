#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"


int main(int argc, char* argv[]){

    if(argc < 4){
        printf("Pas assez d'agurments !\n Syntaxe ex. : ./hanoi A B C\n");
    }
    printf("Tour %c - Tour %c - Tour %c\n",argv[1][0],argv[2][0],argv[3][0]);
    Hanoi(4,argv[1][0],argv[2][0],argv[3][0]);


    return 0;
}

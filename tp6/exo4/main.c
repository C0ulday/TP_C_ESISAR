#include <stdio.h>
#include "fractale.h"


int main(int argc, char* argv[]){


    if(argc <2){
        printf("arguments insuffisants, ex. ./frat 5\n");
    }
    Fractale(argv[1][0]-'0',10);

    return 0;
}
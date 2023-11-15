#include <stdio.h>
#include <stdlib.h>
#include "poly.h"


int main(int argc, char* argv[]){


    Polynome p1 = {{2, 13}, {1, 5}, {-1, 0}};
    Polynome p2 = {{2, 13}, {-1, 0}}; 
    Polynome p;

    afficherPolynome(p1);
    afficherPolynome(p2);
    addPolynome(p1,p2,p);
    afficherPolynome(p);


    


    return 0;
}
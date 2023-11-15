#include <stdio.h>
#include "quotient.h"

int quotient(int a, int b){

    int q=0;

    while(a-b>=0){
        q++;
        a = a-b;
    }
    return q;
}
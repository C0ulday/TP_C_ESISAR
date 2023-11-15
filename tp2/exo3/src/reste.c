#include <stdio.h>
#include "quotient.h"
#include "reste.h"

int reste(int a, int b){

    return a - b*quotient(a,b);

}
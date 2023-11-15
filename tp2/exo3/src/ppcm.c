#include <stdio.h>
#include "ppcm.h"
#include "pgcd.h"
#include "valeur.h"

int ppcm(int a ,int b){

    return valeurAbsolue(a*b)/pgcd(a,b);
    
}
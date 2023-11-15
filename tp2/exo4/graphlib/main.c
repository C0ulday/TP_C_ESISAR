#include <stdio.h>
#include "graphlib.h"
#include "dessine.h"

int main(void){
    
    gr_inits_w(500,500,"Mon dessin");
    graph_nor();
    dessineCarre(50,5,3);
    cliquer();

    return 0;
}
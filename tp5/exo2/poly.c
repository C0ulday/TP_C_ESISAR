#include <stdio.h>
#include <stdlib.h>
#include "poly.h"


void addPolynome(Polynome p1, Polynome p2, Polynome p){

    int curs1, curs2, curs;
    curs1 = curs2 = curs =0;

    while( (p1[curs1].degre >=0) || (p2[curs2].degre >=0)){

        if(p1[curs1].degre == p2[curs2].degre){
            p[curs].degre = p1[curs1].degre;
            p[curs].coeff = p1[curs1].coeff + p2[curs2].coeff;
            curs1++;
            curs2++;
        }

        else if(p1[curs1].degre > p2[curs2].degre){

            p[curs].degre =p1[curs1].degre;
            p[curs].coeff =p1[curs1].coeff;
            curs1++;
        }
        else{
            p[curs].degre = p2[curs2].degre;
            p[curs].coeff = p2[curs2].coeff;
            curs2++;

        }
        curs++;

    }
    if(p1[curs1].degre <0){
        while(p2[curs2].degre >=0){
            p[curs].degre = p2[curs2].degre;
            p[curs].coeff = p2[curs2].coeff;
            curs++;
            curs2++;
        }
    }
    else{
        while(p1[curs1].degre >=0){
            p[curs].degre = p1[curs1].degre;
            p[curs].coeff = p1[curs1].coeff;
            curs++;
            curs1++;
        }
    }

    p[curs].degre =-1;
    p[curs].coeff = 0;
   
}

void afficherPolynome(Polynome p){

    printf("\nAffichage Polynôme\n");
    for(int i=0;p[i].degre >0;i++){
        printf("{%2.f,%d}\t",p[i].coeff,p[i].degre);
    }
    printf("\n");
}

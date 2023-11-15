#include <stdio.h>
#include <stdlib.h>
#include "fractions.h"


int pgcd(int a, int b){

    int temp;

    if( b== 0) return a;

    while(b !=0){
        temp =b;
        b=a%b;
        a=temp;
    }
    return a;
    
}

void addFraction(Fraction f1, Fraction f2){

    Fraction f;
    int PGCD;

    if(f1.den == f2.den){

        f.num = ( f1.num + f2.num );
        f.den = f1.den;
    }

    else{
        f.num = ( f1.num*f2.den ) + (f2.num *f1.den);
        f.den = f1.den*f2.den;
    }


    PGCD = pgcd(f.num,f.den);
    f.num = f.num/PGCD;
    f.den = f.den/PGCD;

    printf("%d/%d + %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,f.num,f.den);

}


void subFraction(Fraction f1, Fraction f2){

    Fraction f;
    int PGCD;

    if(f1.den == f2.den){

        f.num = ( f1.num - f2.num );
        f.den = f1.den;
    }

    else{
        f.num = ( f1.num*f2.den ) - (f2.num *f1.den);
        f.den = f1.den*f2.den;
    }


    PGCD = pgcd(f.num,f.den);
    f.num = f.num/PGCD;
    f.den = f.den/PGCD;

    printf("%d/%d - %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,f.num,f.den);

}

void mulFraction(Fraction f1, Fraction f2){

    Fraction f;
    int PGCD;

   
    f.num = f1.num*f2.num;
    f.den = f1.den*f2.den;
    
    PGCD = pgcd(f.num,f.den);
    f.num = f.num/PGCD;
    f.den = f.den/PGCD;

    printf("%d/%d * %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,f.num,f.den);

}

void divFraction(Fraction f1, Fraction f2){

    Fraction f;
    int PGCD;

   
    f.num = f1.num*f2.den;
    f.den = f1.den*f2.num;
    
    PGCD = pgcd(f.num,f.den);
    f.num = f.num/PGCD;
    f.den = f.den/PGCD;

    printf("%d/%d / %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,f.num,f.den);

}


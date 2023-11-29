#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fonctions.h"


int recuFibo(int n){

    int u0 =0;
    int u1 =1;

    if(n==0) return u0;
    else if(n==1) return u1;
    else{
        return recuFibo(n-1) + recuFibo(n-2);
    }
}

int recuPgcd(int a, int b){

    if(a==b) return a;
    if(a==0 ) return b;
    else if(b==0) return a;
    else{
        return recuPgcd(b,a%b);
    }

}

bool recuEstPalindrome(char palindrome[], int debut, int fin){

    bool estPalindrome = true;

    if(debut >= fin) return true;

    if(palindrome[debut] != palindrome[fin]){
        estPalindrome = false;
    } 
    
    else{
        estPalindrome = recuEstPalindrome(palindrome,debut+1,fin-1);
    } 
    return estPalindrome;

   

}


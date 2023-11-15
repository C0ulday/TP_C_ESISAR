#include <stdio.h>

/*Mode intérative*/


int fibonacci(int n){

    int i,a = 0;
    int b = 1;
    int temp;

    if(n ==0) return 0;
    else if (n ==1) return 1;

    for(i =2;i<=n;i++){

        temp = b;
        b = a + b;
        a = temp;
        
    }
    return b;
}

int pgcd(int a, int b) {
    
    int r;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}


int factorielle(int n){

    int temp =1;
    int i;

    if(n ==0) return 1;

    for(i=2; i<=n;i++){
        temp= temp *i;
    }
    return temp;

}

int factorielleBis(int m){

    int fact =1;
    int n=1;

    while(fact <=m){
        n++;
        fact = fact *n;
    }
    return n;

}


int main(void){

    int choix;
    int n;
    int a, b;

    printf("Choisissez une opération :\n");
    printf("1. Suite de Fibonacci\n");
    printf("2. PGCD (Plus Grand Commun Diviseur)\n");
    printf("3. Factorielle\n");
    printf("4. Factorielle Bis\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("Entrez la valeur de n pour Fibonacci : ");
            scanf("%d", &n);
            printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
            break;
        case 2:
            printf("Entrez deux entiers pour calculer le PGCD : ");
            scanf("%d %d", &a, &b);
            printf("PGCD(%d, %d) = %d\n", a, b, pgcd(a, b));
            break;
        case 3:
            printf("Entrez un entier pour calculer la factorielle : ");
            scanf("%d", &n);
            printf("Factorielle(%d) = %d\n", n, factorielle(n));
            break;
        case 4:
            printf("Entrez un entier pour calculer la factorielle bis : ");
            scanf("%d", &n);
            printf("FactorielleBis(%d) = %d\n", n, factorielleBis(n));
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;



}
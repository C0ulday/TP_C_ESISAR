#include <stdio.h>

int main() {

    int i, j, k, l; /*création de variables*/
    i = j = k = l = 0; /*initialisation à 0*/

    while(i < 9) {
        printf("i++ = %d, ++j = %d, k-- = %d, --l = %d\n",i++, ++j, k--, --l);
    }
    /*

    i = i +1
    k = k -1
    l = l -1

    i incremente jusqu'à atteindre 9
     
    */
    printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l); /* Valeur finale des variables*/
    
    return 0;
}
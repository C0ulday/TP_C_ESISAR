#include <stdio.h>
#include <stdlib.h>
#include "lib.h"




int myStrlen(char mot[]){

    int i=0;
    while(mot[i]!= '\0'){
        i++;
    }
    return i; // sans caractere '\0'
}

char* myStrcpy(char* destination, char* Acopier){

    if(destination ==NULL || Acopier ==NULL) perror("Emplacement(s) non defini(s)");
    int i=0;
    //on vide la chaine destination au cas où elle contient
    // quelque chose
    destination[0] = '\0';

   
    while(Acopier[i] != '\0'){
        destination[i] = Acopier[i];
        i++;
    }
    destination[i] = '\0';
    return destination;
}

void afficherEnHexadecimal(char mot[]){

    int i=0;
    while(mot[i] != '\0'){
        printf("%x\t",mot[i]);
        i++;
    }
    printf("\n");
}


void afficherEnDecimal(char mot[]){

    int i=0;
    while(mot[i] != '\0'){
        printf("%d\t",mot[i]);
        i++;
    }
    printf("\n");
}

void mettreEnMaj(char mot[]){

    for(int i=0; mot[i] != '\0'; i++){
        if( (mot[i] >= 'a') && (mot[i] <= 'z') ){
            mot[i] = mot[i] - 'a' + 'A';
        }
    }
    printf("%s\n",mot);
}

void mettreEnMin(char mot[]){

    for(int i=0; mot[i] != '\0'; i++){
        if( (mot[i] >= 'A') && (mot[i] <= 'Z') ){
            mot[i] = mot[i] - 'A' + 'a';
        }
    }
    printf("%s\n",mot);
}

void transformerMinMaj(char mot[]){

    for(int i=0; mot[i] != '\0'; i++){
        if( (mot[i] >= 'A') && (mot[i] <= 'Z') ){
            mot[i] = mot[i] - 'A' + 'a';
        }
        else if((mot[i] >= 'a') && (mot[i] <= 'z')){
            mot[i] = mot[i] - 'a' + 'A';
        }
    }
    printf("%s\n",mot);
    
}

void retournerMot(char mot[]){

    int taille = myStrlen(mot);
    int debut =0;
    int fin = taille-1;
    char temp;

    while(debut < fin){
        temp = mot[debut];
        mot[debut] = mot[fin];
        mot[fin] = temp;
        debut++;
        fin--;
    }
    printf("Mot retourné : %s\n",mot);
}

int rechercheCaractereG (char* mot, char lettre){	
	int i = 0;
	while (mot[i] != '\0' && mot[i] != lettre)		
	{
		i++;
	}
	return i+1;
}

int rechercheCaractereD(char* mot, char lettre){	

	int taille = myStrlen(mot);
	int i = 0;
	while (mot[i] != '\0' && mot[taille-i-1] != lettre)		
	{
		i++;
	}
	return (i+1);
}

int estPalindrome(char mot[]){

    int taille = myStrlen(mot);
    int debut = 0;
    int fin = taille-1;

    if(taille <= 1){
        return 0;
    }
    while( (debut < fin)){
        if(mot[debut] != mot[fin]){
            return -1;
        }
    debut++;
    fin--;
    }

    return 0;
}

int comparerChaine(char* mot1, char* mot2){
    
    //chaine meme taille
	int taille = myStrlen(mot1);
	for (int i = 0; i <= taille; i++){
        if (mot1[i] != mot2[i]){
            return 0;
        }
    }		
	return 1;
}
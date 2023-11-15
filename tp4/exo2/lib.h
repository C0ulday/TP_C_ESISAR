#ifndef  __LIB_H__
#define __LIB_H__

int myStrlen(char mot[]);
char* myStrcpy(char* destination, char* Acopier);
void afficherEnHexadecimal(char mot[]);
void mettreEnMaj(char mot[]);
void mettreEnMin(char mot[]);
void transformerMinMaj(char mot[]);
void retournerMot(char mot[]);
int rechercheCaractereG (char* mot, char lettre);
int rechercheCaractereD(char* mot, char lettre);
int estPalindrome(char mot[]);
int comparerChaine(char* mot1, char* mot2);

#endif 
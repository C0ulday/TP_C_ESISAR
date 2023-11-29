#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "hanoi.h"


int main(int argc, char* argv[]){

    if(argc < 4){
        printf("Pas assez d'agurments !\n Syntaxe ex. : ./hanoi A B C\n");
    }

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *fenetre;
    SDL_Renderer *rendu;
    SDL_CreateWindowAndRenderer(800, 300, 0, &fenetre, &rendu);

    int nombreDeDisques;
    printf("Entrez le nombre de disques : ");
    scanf("%d", &nombreDeDisques);

    Hanoi_graph(rendu, nombreDeDisques, 200, 400, 600);

    return 0;

}


#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "hanoi.h"


int main(int argc, char* argv[]){

    if(argc < 4){
        printf("Pas assez d'agurments !\n Syntaxe ex. : ./hanoi A B C\n");
    }
    printf("Tour %c - Tour %c - Tour %c\n",argv[1][0],argv[2][0],argv[3][0]);
    Hanoi(4,argv[1][0],argv[2][0],argv[3][0]);

    /*SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *fenetre;
    SDL_Renderer *rendu;
    SDL_CreateWindowAndRenderer(800, 300, 0, &fenetre, &rendu);

    int nombreDeDisques;
    printf("Entrez le nombre de disques : ");
    scanf("%d", &nombreDeDisques);

    Hanoi_graph(rendu, nombreDeDisques, 200, 400, 600);

    return 0;*/



    return 0;
}


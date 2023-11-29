#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "hanoi.h"



// essaie graphique
void Hanoi_graph(SDL_Renderer* renderer,int n, int tour1, int tour2, int tour3){

    // Dessiner les poteaux initiaux
    dessinerPoteau(renderer, 200);
    dessinerPoteau(renderer, 400);
    dessinerPoteau(renderer, 600);

    if(n>0){
        
        Hanoi_graph(renderer, n - 1, tour1, tour2, tour3);

        // Déplacer le disque de tour 1 à tour 3
        dessinerDisque(renderer, tour1, 100 - n * 20, n * 40);
        SDL_RenderPresent(renderer);
        SDL_Delay(1000);  // délai de visualisation
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        Hanoi_graph(renderer, n - 1, tour2, tour1, tour3);
    }



}

void dessinerPoteau(SDL_Renderer *renderer, int x){
    SDL_Rect poteau = {x - 10, 100, 20, 200};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &poteau);
}

void dessinerDisque(SDL_Renderer *renderer, int x, int y, int largeur){
    SDL_Rect disque = {x - largeur / 2, y, largeur, 20};
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &disque);
}
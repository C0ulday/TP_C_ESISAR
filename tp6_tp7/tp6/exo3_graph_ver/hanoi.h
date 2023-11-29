#ifndef __HANOI_C__
#define __HANOI_C__


void dessinerPoteau(SDL_Renderer *renderer, int x);
void dessinerDisque(SDL_Renderer *renderer, int x, int y, int largeur);
void Hanoi_graph(SDL_Renderer* renderer,int n, int tour1, int tour2, int tour3);
#endif
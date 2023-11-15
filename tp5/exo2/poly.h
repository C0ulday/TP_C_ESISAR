#ifndef __POLY_H__
#define __POLY_H__

#define NBMAX 100

typedef struct {
    float coeff ;/* coefficient du terme */
    int degre ; /* degré du terme */
} Terme ;

typedef Terme Polynome[NBMAX];
void addPolynome(Polynome p1, Polynome p2, Polynome p);
void afficherPolynome(Polynome p);


#endif 

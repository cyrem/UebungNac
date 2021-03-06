/*
 * Funktion2D.h
 *
 *  Created on: 18.11.2014
 *      Author: mat
 */

#ifndef FUNKTION2D_H_
#define FUNKTION2D_H_

#include "Vektor2D.h"

class Funktion2D {
public:
    Funktion2D();
//    Funktion2D(int m, int n);
//    Funktion2D(Vektor2D &a);

    float operator() (Vektor2D &vec);
    virtual ~Funktion2D();
};

float minimieren2D(Funktion2D f, Vektor2D start,float step,float tol, float ftol);
float gradient2D(Funktion2D f,Vektor2D start);



#endif /* FUNKTION2D_H_ */



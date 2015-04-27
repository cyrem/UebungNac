/*
 * Funktion2D.cpp
 *
 *  Created on: 18.11.2014
 *      Author: mat
 */

#include "Funktion2D.h"
#include <cmath>
#include <iostream>

using namespace std;

//Funktion2D::Funktion2D(int m, int n) :
//        Vektor2D::Vektor2D(2, 1) {
//    this->m_Element[0] = m;
//    this->m_Element[1] = n;
//}
//Funktion2D::Funktion2D(Vektor2D &a) :
//        Vektor2D::Vektor2D(a.getSpalten(), a.getZeilen()) {
//    a.kopiereIn(*this);
//}

Funktion2D::Funktion2D() {
}
Funktion2D::~Funktion2D() {
}

float Funktion2D::operator()(Vektor2D &vec) {
    Vektor2D addV(1, 0);
    Vektor2D zwischErg(0, 0);
    (vec + addV).kopiereIn(zwischErg);

    return (sin(zwischErg.betrag()) / zwischErg.betrag()) * -1;

}

float minimieren2D(Funktion2D f, Vektor2D start, float step, float tol = 0.05,
        float ftol = 0.05) {
    float S = (f(start)) * step;


    cout << "S: "<<S << endl;

    if (fabs(S) < ftol || fabs(start.betrag()) < tol) {
        return S;
    } else {
        Vektor2D zwischerg(0, 0);
        (start * S).kopiereIn(zwischerg);
        zwischerg.addiere(start);
        return minimieren2D(f, zwischerg, step);
    }

}

float gradient2D(Funktion2D f, Vektor2D start) {
    return minimieren2D(f, start, 0.9);
}


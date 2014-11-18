/*
 * Funktion2D.cpp
 *
 *  Created on: 18.11.2014
 *      Author: mat
 */

#include "Funktion2D.h"
#include <cmath>

//Funktion2D::Funktion2D(int m, int n) :
//        Vektor2D::Vektor2D(2, 1) {
//    this->m_Element[0] = m;
//    this->m_Element[1] = n;
//}
//Funktion2D::Funktion2D(Vektor2D &a) :
//        Vektor2D::Vektor2D(a.getSpalten(), a.getZeilen()) {
//    a.kopiereIn(*this);
//}


Funktion2D::Funktion2D() {}
Funktion2D::~Funktion2D() {}

float Funktion2D::operator()(Vektor2D &vec) {
    Vektor2D addV(1, 0);
    Vektor2D zwischErg(0, 0);
    (vec + addV).kopiereIn(zwischErg);

    return (sin(zwischErg.betrag()) / zwischErg.betrag()) * -1;

}

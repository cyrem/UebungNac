/*
 * Vektor.cpp
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */
#include <cmath>
#include <limits>
#include <iostream>
#include "Vektor.h"

#ifndef PI
#define PI 3.14159265359
#endif

using namespace std;
Vektor::Vektor(int m, int n) :
        Matrix(m, n) {
}

Vektor::~Vektor() {
    // TODO Auto-generated destructor stub
}

float Vektor::betrag() const{
    return sqrt(Vektor::skalarProdukt(*this));
}
float Vektor::skalarProdukt(const Vektor &v) const {

    if (this->m_spalten != v.m_spalten || this->m_zeilen != v.m_zeilen) {
        return std::numeric_limits<float>::quiet_NaN();
    } else {
        float val = 0.0;
        for (int i = 0; i < this->m_spalten * this->m_zeilen; i++) {
            val += (this->m_Element[i] * v.m_Element[i]);
        }
        return val;
    }

}
void Vektor::skalarMult(const int &x) const {
    for (int i = 0; i < this->m_spalten * this->m_zeilen; i++) {
        this->m_Element[i] *= x;
    }
}

bool Vektor::elementsEqual() const {
    float vergl = this->m_Element[0];
    for (int i = 0; i < this->m_spalten * this->m_zeilen; i++) {
        if (vergl != this->m_Element[i])
            return false;
    }
    return true;
}

float Vektor::winkel(const Vektor &v) const {

 float erg = (this->skalarProdukt(v) / (this->betrag() * v.betrag()));
    return acos(erg)* (180 / PI);

}

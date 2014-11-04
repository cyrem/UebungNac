/*
 * Vektor2D.cpp
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */
#include <iostream>
#include "Matrix.h"
#include "Vektor2D.h"

using namespace std;

Vektor2D::Vektor2D(int m, int n) :
        Vektor::Vektor(2, 1) {
    this->m_Element[0] = m;
    this->m_Element[1] = n;
}
Vektor2D::Vektor2D(Vektor2D &a) :
        Vektor::Vektor(a.getSpalten(), a.getZeilen()) {
    a.kopiereIn(*this);
}

Vektor2D::~Vektor2D() {
}

void Vektor2D::addiere(const Vektor2D &v) {
    int anz = this->m_zeilen * this->m_spalten;
    for (int i = 0; i < anz; i++) {
        this->m_Element[i] += v.m_Element[i];
    }
}

void Vektor2D::subtrahiere(const Vektor2D &v) {
    int anz = this->m_zeilen * this->m_spalten;
    for (int i = 0; i < anz; i++) {
        this->m_Element[i] -= v.m_Element[i];
    }
}

void Vektor2D::kopiereIn(Vektor2D &v) {
    int anz = this->m_zeilen * this->m_spalten;

    for (int i = 0; i < anz; i++) {
        v.m_Element[i] = this->m_Element[i];
    }
}

void Vektor2D::tausche(Vektor2D &b) {
    Vektor2D temp(this->m_spalten, this->m_zeilen);

    this->kopiereIn(temp);
    b.kopiereIn(*this);
    temp.kopiereIn(b);

}
void Vektor2D::ausgabe()const {
    cout << "Vektor2D" << endl;
    Matrix::ausgabe();
}

//##################################

void operator+(Vektor2D &t, Vektor2D &v) {
    int anz = t.getZeilen() * t.getZeilen();
    float asdf = t.getElemente();
    float asdf2 = v.getElemente();
    for (int i = 0; i < anz; i++) {
//        asdf[i] += asdf2[i];
    }

}

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

void tausche(Vektor2D* a, Vektor2D* b) {
    Vektor2D temp(2, 1);

    a->kopiereIn(temp);
    b->kopiereIn(*a);
    temp.kopiereIn(*b);
}

Vektor2D::Vektor2D() :
        Vektor(2, 1) {
//    this->m_Element[0] = 0;
//    this->m_Element[1] = 0;
    cout << "vektor2d constructor" << endl;
}

Vektor2D::Vektor2D(int m, int n) :
        Vektor(2, 1) {
    this->m_Element[0] = m;
    this->m_Element[1] = n;

    cout << "vektor2d constructor" << endl;
}
Vektor2D::Vektor2D(Vektor2D &a) :
        Vektor::Vektor(a.getSpalten(), a.getZeilen()) {
    a.kopiereIn(*this);
}

Vektor2D::Vektor2D(const Vektor2D &b):
    Vektor::Vektor(b.getSpalten(), b.getZeilen()) {
        b.kopiereIn(*this);
}

Vektor2D::~Vektor2D() {
    cout << "vektor2d decons" << endl;
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

void Vektor2D::kopiereIn(Vektor2D &v) const {
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
void Vektor2D::ausgabe() const {
    cout << "Vektor2D" << endl;
    Matrix::ausgabe();
}

//##################################

//Vektor2D operator+(Vektor2D t, Vektor2D v){
//    Vektor2D ergebnis(t.getSpalten(), t.getZeilen());
//
//        if (t.getZeilen() == v.getZeilen() && t.getSpalten() == v.getSpalten()) {
//            t.kopiereIn(ergebnis);
//            ergebnis.addiere(v);;
//          return  ergebnis;
//        }
//        return ergebnis;
//
//}

Vektor2D operator+(Vektor2D &t, Vektor2D &v) {
    Vektor2D ergebnis(t.getSpalten(), t.getZeilen());

    if (t.getZeilen() == v.getZeilen() && t.getSpalten() == v.getSpalten()) {
        t.kopiereIn(ergebnis);
        ergebnis.addiere(v);
        ;
        return ergebnis;
    }
    return ergebnis;
}

Vektor2D operator*(Vektor2D &vec, float skalar) {
    Vektor2D ergebnis(vec.getSpalten(), vec.getZeilen());
    vec.kopiereIn(ergebnis);
    ergebnis.skalarMult(skalar);
    return ergebnis;
}

Vektor2D operator*(float skalar, Vektor2D &vec) {
    Vektor2D ergebnis(vec.getSpalten(), vec.getZeilen());
    vec.kopiereIn(ergebnis);
    ergebnis.skalarMult(skalar);
    return ergebnis;
}


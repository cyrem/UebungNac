/*
 * myVektor2D.cpp
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */
#include "myMatrix.h"
#include "myVektor2D.h"
#include <iostream>

using namespace std;

myVektor2D::myVektor2D(int m, int n) :
        myVektor::myVektor(2, 1) {
    this->m_Element[0] = m;
    this->m_Element[1] = n;

}
myVektor2D::~myVektor2D() {
}

void myVektor2D::addiere(myVektor2D &v) {
    int anz = this->m_zeilen * this->m_spalten;
    for (int i = 0; i < anz; i++) {
        this->m_Element[i] += v.m_Element[i];
    }
}

void myVektor2D::subtrahiere(myVektor2D &v) {
    int anz = this->m_zeilen * this->m_spalten;
    for (int i = 0; i < anz; i++) {
        this->m_Element[i] -= v.m_Element[i];
    }
}

void myVektor2D::kopiereIn(myVektor2D &v) {
    int anz = this->m_zeilen * this->m_spalten;

    for (int i = 0; i < anz; i++) {
        v.m_Element[i] = this->m_Element[i];
    }
}

void myVektor2D::tausche(myVektor2D &b) {
    myVektor2D temp(this->m_spalten, this->m_zeilen);

    this->kopiereIn(temp);
    b.kopiereIn(*this);
    temp.kopiereIn(b);

}
void myVektor2D::ausgabe() {
    cout << "myVektor2D" << endl;
    myMatrix::ausgabe();
}

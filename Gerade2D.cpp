/*
 * Gerade2D.cpp
 *
 *  Created on: 21.10.2014
 *      Author: mat
 */

#include <iostream>
#include "Gerade2D.h"

using namespace std;

Gerade2D::Gerade2D(Vektor2D n, Vektor2D m = Vektor2D(0,0)) :
        m_Normale(n), m_Aufpunkt(m) {
}

Gerade2D::~Gerade2D() {
    // TODO Auto-generated destructor stub
}

float Gerade2D::gerichteterAbstand(Vektor2D &x) const {
    Vektor2D zwischErg(0, 0);

    x.kopiereIn(zwischErg);
    zwischErg.subtrahiere(this->m_Aufpunkt);
    float erg = zwischErg.skalarProdukt(this->m_Normale);
    return erg / this->m_Normale.betrag();
}

bool Gerade2D::aufGerade(Vektor2D &x) const {
    Vektor2D zwischErg(0, 0);

    x.kopiereIn(zwischErg);
    zwischErg.subtrahiere(this->m_Aufpunkt);

    float erg = zwischErg.skalarProdukt(this->m_Normale);
    if (erg == 0)
        return true;

    return false;
}


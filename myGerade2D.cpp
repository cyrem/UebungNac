/*
 * myGerade2D.cpp
 *
 *  Created on: 21.10.2014
 *      Author: mat
 */

#include "myGerade2D.h"
#include <iostream>
using namespace std;


myGerade2D::myGerade2D(myVektor2D a, myVektor2D b) :
        m_Normale(0, 0), m_Aufpunkt(0, 0) {

    a.kopiereIn(&this->m_Normale);
    b.kopiereIn(&this->m_Aufpunkt);


    cout << "myGerade:" << endl;
    a.ausgabe();
    b.ausgabe();

}

myGerade2D::~myGerade2D() {
    // TODO Auto-generated destructor stub
}

float myGerade2D::gerichteterAbstand(myVektor2D x) {

    myVektor2D zwischErg(0, 0);

    x.kopiereIn(&zwischErg);
    zwischErg.subtrahiere(&this->m_Aufpunkt);
    return zwischErg.skalarProdukt(&this->m_Normale)/this->m_Normale.betrag();

}

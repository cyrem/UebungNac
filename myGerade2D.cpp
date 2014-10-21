/*
 * myGerade2D.cpp
 *
 *  Created on: 21.10.2014
 *      Author: mat
 */

#include "myGerade2D.h"

myGerade2D::myGerade2D(myVektor2D a, myVektor2D b) :
		m_Normale(a.getSpalten(),a.getZeilen()),
		m_Aufpunkt(b.getSpalten(),b.getZeilen()) {

	a.kopiereIn(&this->m_Normale);
	b.kopiereIn(&this->m_Aufpunkt);

}

myGerade2D::~myGerade2D() {
	// TODO Auto-generated destructor stub
}

float myGerade2D::gerichteterAbstand(myVektor2D x){

myVektor2D zwischErg(0,0);

x.kopiereIn(&zwischErg);
zwischErg.subtrahiere(&this->m_Aufpunkt);


}

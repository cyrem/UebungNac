/*
 * myVektor.cpp
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */
#include <cmath>
#include "myVektor.h"


myVektor::myVektor() {
}

myVektor::~myVektor() {
	// TODO Auto-generated destructor stub
}

float myVektor::betrag() {
	float val = 0.0;
	for (int i = 0; i < this->m_spalten * this->m_zeilen; i++) {
		val += pow(this->m_Element[i], 2);
	}

	return sqrt(val);
}

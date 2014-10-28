/*
 * myVektor.cpp
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */
#include <cmath>
#include "myVektor.h"
#include <limits>
#include <iostream>

#ifndef PI
#define PI 3.14159265359
#endif

using namespace std;
myVektor::myVektor(int m, int n):myMatrix::myMatrix(m,n){}

myVektor::~myVektor() {
	// TODO Auto-generated destructor stub
}

float myVektor::betrag() {
	return sqrt(myVektor::skalarProdukt(*this));
}
float myVektor::skalarProdukt(myVektor &v) {

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
void myVektor::skalarMult(int &x){
	for (int i = 0; i < this->m_spalten * this->m_zeilen; i++) {
			this->m_Element[i] *= x;
		}
}

float myVektor::winkel(myVektor &v) {
cout << (this->skalarProdukt(v) / (this->betrag() * v.betrag())) << endl;
	return acos((this->skalarProdukt(v) / (this->betrag() * v.betrag())))* (180/PI);

}

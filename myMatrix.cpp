/*
 * myMatrix.cpp
 *
 *  Created on: 07.10.2014
 *      Author: mat
 */

#include "myMatrix.h"
#include <iostream>

int	myMatrix::counter =0;

using namespace std;

myMatrix::myMatrix() :
		m_zeilen(1), m_spalten(2) {
	for (int i = 0; i < this->m_zeilen * this->m_spalten; i++) {
		this->m_Element[i] = 0.0;
	}

	myMatrix::counter++;
}

myMatrix::~myMatrix() {


	myMatrix::counter--;
//	cout << "Matrix wird zerstört" << endl;
//	this->ausgabe();
}

void myMatrix::ausgabe() {
	for (int i = 0; i < this->m_zeilen * this->m_spalten; i++) {
		cout << this->m_Element[i] << endl;
	}
}
void myMatrix::getCounter() {

	cout << "anzahl instanzen: " << myMatrix::counter << endl;
}

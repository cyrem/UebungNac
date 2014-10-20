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


myVektor2D::myVektor2D() {
}

myVektor2D::myVektor2D(int a, int b) {
	this->m_Element[0] = a;
	this->m_Element[1] = b;
}
myVektor2D::~myVektor2D() {
	// TODO Auto-generated destructor stub
}

void myVektor2D::addiere(myVektor2D *v) {
	this->m_Element[0] += v->m_Element[0];
	this->m_Element[1] += v->m_Element[1];
}
void myVektor2D::kopiereIn(myVektor2D *v) {
	v->m_Element[0] = this->m_Element[0];
	v->m_Element[1] = this->m_Element[1];
}

void tausche(myVektor2D *a, myVektor2D *b) {
	myVektor2D temp;

	a->kopiereIn(&temp);
	b->kopiereIn(a);
	temp.kopiereIn(b);

}
void myVektor2D::ausgabe(){
	cout << "myVektor2D" << endl;
	myMatrix::ausgabe();
}

/*
 * Matrix.cpp
 *
 *  Created on: 07.10.2014
 *      Author: mat
 */

#include <iostream>
#include "Matrix.h"

int Matrix::counter = 0;

using namespace std;

Matrix::Matrix(int m, int n) :
		m_zeilen(m), m_spalten(n) {
	int anz = this->m_zeilen * this->m_spalten;
	this->m_Element = new float[anz];

	for (int i = 0; i < anz; i++) {
		this->m_Element[i] = 0.0;
	}

	Matrix::counter++;
	cout << "matrix constructor"<<endl;
}

Matrix::~Matrix() {

	Matrix::counter--;
	cout << "Matrix wird zerstört" << endl;
	delete[] m_Element;
//	this->ausgabe();
}

void Matrix::ausgabe()const {
	for (int i = 0; i < this->m_zeilen * this->m_spalten; i++) {
		cout << this->m_Element[i] << endl;
	}
}
void Matrix::getCounter() {

	cout << "anzahl instanzen: " << Matrix::counter << endl;
}
int Matrix::getSpalten() const {
	return this->m_spalten;
}
 int Matrix::getZeilen() const{
	return this->m_zeilen;
}

float &Matrix::getElemente(){
    return *this->m_Element;
}

const float &Matrix::getElemente() const{
    return *this->m_Element;
}






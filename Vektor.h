/*
 * Vektor.h
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */

#ifndef VEKTOR_H_
#define VEKTOR_H_

#include "Matrix.h"

class Vektor: public Matrix {
public:
	Vektor(int m, int n);
	virtual ~Vektor();
	float betrag()const ;
	float skalarProdukt(const Vektor &v)const;
	float winkel(const Vektor &v)const;
	void skalarMult(const int &x)const ;
	bool elementsEqual()const;

};

#endif /* VEKTOR_H_ */

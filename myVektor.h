/*
 * myVektor.h
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */

#ifndef MYVEKTOR_H_
#define MYVEKTOR_H_

#include "myMatrix.h"

class myVektor: public myMatrix {
public:
	myVektor(int m, int n);
	virtual ~myVektor();
	float betrag();
	float skalarProdukt(myVektor &v);
	float winkel(myVektor &v);
	void skalarMult(int &x);
};

#endif /* MYVEKTOR_H_ */

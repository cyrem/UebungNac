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
	myVektor();
	virtual ~myVektor();
	float betrag();
};

#endif /* MYVEKTOR_H_ */

/*
 * myGerade2D.h
 *
 *  Created on: 21.10.2014
 *      Author: mat
 */

#ifndef MYGERADE2D_H_
#define MYGERADE2D_H_
#include "myVektor2D.h"



class myGerade2D {
public:
	myVektor2D m_Normale;
	myVektor2D m_Aufpunkt;

	myGerade2D(myVektor2D a, myVektor2D b);
	virtual ~myGerade2D();
	float gerichteterAbstand(myVektor2D x);
};

#endif /* MYGERADE2D_H_ */

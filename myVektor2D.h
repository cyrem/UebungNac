/*
 * myVektor2D.h
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */

#ifndef MYVEKTOR2D_H_
#define MYVEKTOR2D_H_

#include "myVektor.h"


class myVektor2D: public myVektor {
public:
	myVektor2D();
	myVektor2D(int a, int b);
	virtual ~myVektor2D();
	void addiere(myVektor2D *v);
	void kopiereIn(myVektor2D *v);
	void ausgabe();

};
void tausche (myVektor2D *a, myVektor2D *b);



#endif /* MYVEKTOR2D_H_ */

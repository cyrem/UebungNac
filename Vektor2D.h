/*
 * Vektor2D.h
 *
 *  Created on: 09.10.2014
 *      Author: mat
 */

#ifndef VEKTOR2D_H_
#define VEKTOR2D_H_

#include "Vektor.h"


class Vektor2D: public Vektor {
public:
	Vektor2D(int m, int n);
    Vektor2D(Vektor2D &a);

	virtual ~Vektor2D();
	void addiere(const Vektor2D &v);
	void kopiereIn(Vektor2D &v);
	void ausgabe()const;
	void tausche (Vektor2D &b);
	void subtrahiere(const Vektor2D &v);

};



#endif /* VEKTOR2D_H_ */

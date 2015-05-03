/*
 * Gerade2D.h
 *
 *  Created on: 21.10.2014
 *      Author: mat
 */

#ifndef GERADE2D_H_
#define GERADE2D_H_
#include "Vektor2D.h"

class Gerade2D {
public:
	Vektor2D m_Normale;
	Vektor2D m_Aufpunkt;

	Gerade2D(Vektor2D n, Vektor2D m);
	virtual ~Gerade2D();
	float gerichteterAbstand(Vektor2D &x) const;
	bool aufGerade(Vektor2D &x) const;
};

#endif /* GERADE2D_H_ */

/*
 * myMatrix.h
 *
 *  Created on: 07.10.2014
 *      Author: mat
 */

#ifndef MYMATRIX_H_
#define MYMATRIX_H_

class myMatrix {
protected:
	int m_zeilen;
	int m_spalten;
	float m_Element[2];

public:
	myMatrix();
	virtual ~myMatrix();
	void ausgabe();

};

#endif /* MYMATRIX_H_ */

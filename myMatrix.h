/*
 * myMatrix.h
 *
 *  Created on: 07.10.2014
 *      Author: mat
 */

#ifndef MYMATRIX_H_
#define MYMATRIX_H_


class myMatrix {

private:
	static int counter;
protected:
	int m_zeilen;
	int m_spalten;
	float* m_Element;

public:
	myMatrix(int m, int n);
	virtual ~myMatrix();
	virtual void ausgabe();
	static void getCounter();
	int getSpalten();
	int getZeilen();


};

#endif /* MYMATRIX_H_ */

/*
 * main.cpp
 *
 *  Created on: 07.10.2014
 *      Author: mat
 */
//#include "myMatrix.h"
#include "myVektor.h"
#include "myVektor2D.h"
#include <iostream>

using namespace std;
int main(int argc, char* argv[]) {

	myVektor2D a(3, 1);
//	myVektor2D b(1, 2);
//	myVektor2D c;

//	myVektor2D *z;
//	myVektor2D *w;
//
//	z = new myVektor2D(-3,1);
//	w = new myVektor2D;

	myVektor2D z(-3, 1);
//	myVektor2D w;
//	myVektor2D u(1, 2);

//	c.addiere(a);
//	b.addiere(c);

//	a.addiere(&z);
//	a.ausgabe();
//	w.addiere(&z);
//	w.ausgabe();
//	w.addiere(&b);
//	w.ausgabe();

// u.kopiereIn(&w);
// u.kopiereIn(&a);
//
// w.ausgabe();
// a.ausgabe();

	z.ausgabe();
	a.ausgabe();

	tausche(&z, &a);

	z.ausgabe();
	a.ausgabe();

	return 0;

}


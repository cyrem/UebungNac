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

myVektor2D** varr = new myVektor2D*[2];

varr[0] = new myVektor2D(2,3);
varr[1] = new myVektor2D(-2,1);

varr[0]->addiere(varr[1]);
varr[0]->ausgabe();

delete varr[0];
delete varr[1];
delete[] varr;


myMatrix::getCounter();







	return 0;

}


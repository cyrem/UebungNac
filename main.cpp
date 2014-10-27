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
#include "myGerade2D.h"

using namespace std;
int main(int argc, char* argv[]) {

//myVektor2D* varr[3];// = new myVektor2D[3];

myVektor2D varr1(-3,-4);// = new myVektor2D[3];
myVektor2D varr2(0,0);// = new myVektor2D[3];
myVektor2D varr3(4,3);// = new myVektor2D[3];


myGerade2D asdf(varr1,varr2);
//myGerade2D asdf(myVektor2D(-3,-4),myVektor2D(0,0));
cout << "adsfh" << endl;
cout << asdf.gerichteterAbstand(varr3)<< endl;

//delete[] varr;


myMatrix::getCounter();



	return 0;

}


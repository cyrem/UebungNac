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


	{
	myVektor2D v(1,2), w(3,4);
	myMatrix M;
	myMatrix* Mpointer;

	M=v;
	Mpointer = &v;
	std::cout << "Ausgabe von M und mit Mpointer" << std::endl;
	M.ausgabe();
	Mpointer->ausgabe();
	v.addiere(&w);
	std::cout << "Ausgabe von v nach Addieren" << std::endl;
	v.ausgabe();
	std::cout << "Ausgabe von M/Mpointer nach Add." << std::endl;
	M.ausgabe();
	Mpointer->ausgabe();

}
	myMatrix::getCounter();
	return 0;

}


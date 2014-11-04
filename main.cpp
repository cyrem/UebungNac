/*
 * main.cpp
 *
 *  Created on: 07.10.2014
 *      Author: mat
 */
//#include "Matrix.h"
#include <iostream>

#include "Gerade2D.h"
#include "Vektor.h"
#include "Vektor2D.h"

using namespace std;
int main(int argc, char* argv[]) {


//Vektor2D* varr[3];// = new Vektor2D[3];

    Vektor2D varr1(-3, -4); // = new Vektor2D[3];
    Vektor2D varr2(0, 0); // = new Vektor2D[3];
    Vektor2D varr3(4, 3); // = new Vektor2D[3];

    Vektor2D varr4(1, 1); // = new Vektor2D[3];
    Vektor2D varr5(-1, 1); // = new Vektor2D[3];




    cout << Gerade2D(varr4).aufGerade(varr5)<< endl;

//    varr3 + varr1;
//    varr3.ausgabe();
//
//    Gerade2D asdf(varr1);
//    cout << "adsfh" << endl;
//    cout << asdf.gerichteterAbstand(varr3) << endl;
//
//    Matrix::getCounter();

    return 0;

}


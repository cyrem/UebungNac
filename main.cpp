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
#include "Funktion2D.h"

using namespace std;
int main(int argc, char* argv[]) {
////aufgabenblatt 2
//    Vektor2D a(3, 1);
//    Vektor2D b(1, 2);
//    Vektor2D c(0, 0);
//    c.addiere(a);
//    b.addiere(c);
//
//    //aufgabenblatt 3
//    Vektor2D *z = new Vektor2D(-3, 1);
//    Vektor2D *w = new Vektor2D(0, 0);
//
//    a.addiere(*z);
//    a.ausgabe();
//    w->addiere(*z);
//    w->addiere(b);
//    w->ausgabe();
//
//    Matrix::getCounter();
//
//    Vektor2D u(1, 2);
//    u.kopiereIn(*w);
//    u.kopiereIn(a);
//
//    w->ausgabe();
//    a.ausgabe();
//
//    void tausche(Vektor2D *a, Vektor2D *b);
//
//    tausche(z, &a);

//    Vektor2D **varr = new Vektor2D*[3];
//
//    varr[0] = new Vektor2D(-3, -4);
//    varr[1] = new Vektor2D(0, 0);
//    varr[2] = new Vektor2D(4, 3);
//
//    delete varr[0];
//    delete varr[1];
//    delete varr[2];

    Vektor2D *varr = new Vektor2D[3];

//    varr[0] = new Vektor2D(-3, -4);
//    varr[1] = new Vektor2D(0, 0);
//    varr[2] = new Vektor2D(4, 3);

    delete[] varr;

    Matrix::getCounter();

//    Vektor2D varr4(4, 0); // = new Vektor2D[3];
//    Vektor2D varr5(-1, 1); // = new Vektor2D[3];
//
//    Vektor2D erg(0, 0);
//    erg = varr4 + varr5;
//
//    Funktion2D asdf;
//
//    cout <<"meine " << gradient2D(asdf,varr4)<< endl;

//    cout << Gerade2D(varr4).aufGerade(varr5) << endl;

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


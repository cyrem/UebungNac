/*
 * Matrix.h
 *
 *  Created on: 07.10.2014
 *      Author: mat
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {

private:
    static int counter;
protected:
    int m_zeilen;
    int m_spalten;
    float* m_Element;

public:
    Matrix(int m, int n);
    Matrix(Matrix const & m);
    virtual ~Matrix();
    virtual void ausgabe() const;
    static void getCounter();
    int getSpalten() const;
    int getZeilen() const;
    float &getElemente();
    const float &getElemente() const;
    float operator()(int i,int j);

    Matrix& operator=(Matrix const &o);

};

#endif /* MATRIX_H_ */

//
// Created by Giorgio Murad on 30/11/2025.
//

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex {
public:
    double a, b;    // The real (a) and imaginary (b) values of the complex number

    Complex();
    Complex(double a, double b);
    void setReal(double a);
    void setImaginary(double b);
    double getReal();
    double getImaginary();
    void add(const Complex& c);
    void subtract(const Complex& c);
    void multiply(const Complex& c);
    void divide(const Complex& c);
    Complex& operator+(const Complex& c);
    Complex& operator-(const Complex& c);
    Complex& operator*(const Complex& c);
    Complex& operator/(const Complex& c);
    double operator~() const;
    friend ostream& operator<<(ostream& out, const Complex& c);
};



#endif //COMPLEX_H

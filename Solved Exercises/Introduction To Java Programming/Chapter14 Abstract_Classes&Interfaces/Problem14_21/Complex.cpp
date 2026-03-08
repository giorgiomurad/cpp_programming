//
// Created by Giorgio Murad on 30/11/2025.
//

#include "Complex.h"

// No-arg constructor that creates a default complex number
Complex::Complex() {

    setReal(1);
    setImaginary(1);
}

// Constructor that creates a complex number with the given real and imaginary values
Complex::Complex(double a, double b) {

    setReal(a);
    setImaginary(b);
}

// Function that sets the value of the real number of the equation
void Complex::setReal(double a) {

    this->a = a;
}

// Function that sets the value of the imaginary number of the equation
void Complex::setImaginary(double b) {

    this->b = b;
}

// Function that returns the real value of the equation
double Complex::getReal() {

    return a;
}

// Function that returns the imaginary value of the equation
double Complex::getImaginary() {

    return b;
}

// Function that adds the second complex equation to this complex equation
void Complex::add(const Complex &c) {

    a += c.a;
    b += c.b;
}

// Function that subtracts the second complex equation to this complex equation
void Complex::subtract(const Complex &c) {

    a -= c.a;
    b -= c.b;
}

// Function that multiplies the second complex equation to this complex equation
void Complex::multiply(const Complex &c) {

    a *= c.a;
    b *= c.b;
}

// Function that divides this complex equation by the second complex equation
void Complex::divide(const Complex &c) {

    a /= c.a;
    b /= c.b;
}

// Operator function that adds two complex equations, forms a new equation, and returns it
Complex& Complex::operator+(const Complex& c) {
    double tempA, tempB;

    tempA = a + c.a;
    tempB = b + c.b;

    return * new Complex(tempA, tempB);
}

// Operator function that subtracts two complex equations, forms a new equation, and returns it
Complex& Complex::operator-(const Complex &c) {
    double tempA, tempB;

    tempA = a - c.a;
    tempB = b - c.b;

    return * new Complex(tempA, tempB);
}

// Operator function that multiplies two complex equations, forms a new equation, and returns it
Complex& Complex::operator*(const Complex &c) {
    double tempA, tempB;

    tempA = a * c.a;
    tempB = b * c.b;

    return * new Complex(tempA, tempB);
}

// Operator function that divides two complex equations, forms a new equation, and returns it
Complex& Complex::operator/(const Complex &c) {
    double tempA, tempB;

    tempA = a / c.a;
    tempB = b / c.b;

    return * new Complex(tempA, tempB);
}

// Operator function that returns the absolute value of this complex equation
double Complex::operator~() const {
    double abs;

    abs = this->a + this->b;
    return abs;
}

// Operator function that outputs the complex equation
ostream& operator<<(ostream &os, const Complex &c) {

    os << c.a << " + " << c.b << "i" << endl;
    return os;
}
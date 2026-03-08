// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Abstract Classes & Interfaces
//
// Problem 14.21 : Design a class called Complex that represents a complex number in the
//                 form of a + bi where 'a' is known as the real part of the complex number,
//                 and 'b' is known as the imaginary part of the complex number. Implement the
//                 class methods 'add', 'subtract', 'divide', 'multiply', and 'abs' for absolute,
//                 and override the toString method to return a representation of the complex
//                 number.
//
//                ( The toString method in Java is the overridden output operator method in C++ )
//                ( In C++, it's also possible to implement the add, subtract, multiply, and    )
//                ( divide as overridden operator methods for +, -, *, and /.                   )
//                (                                                                             )
//                ( To display the absolute value of an equation in C++, we can use the '~'     )
//                ( operator.                                                                   )
//
//                 Write a test program that prompts the user to enter two complex numbers, and
//                 displays the result of their addition, subtraction, and division.
//
//
// Author : Giorgio Murad

#include <iostream>

#include "Complex.h"

using namespace std;

int main() {
    // Initializing the two complex equations
    Complex *complex1 = new Complex(5, 8);
    Complex *complex2 = new Complex(3, 4);


    // Displaying the two complex equations
    cout << "Complex Equation 1: " << *complex1;
    cout << "Complex Equation 2: " << *complex2;
    cout << endl;

    // Displaying the absolute value of each of the two complex equations
    cout << "Absolute 1: " << abs(~*complex1) << endl;
    cout << "Absolute 2: " << abs(~*complex2) << endl;
    cout << endl;

    // Displaying the addition, subtraction, multiplication, and division of these two complex equations
    cout << "Addition: " << *complex1 + *complex2;
    cout << "Subtraction: " << *complex1 - *complex2;
    cout << "Multiplication: " << *complex1 * *complex2;
    cout << "Division: " << *complex1 / *complex2;

    return 0;
}
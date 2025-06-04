// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 3 : Selections
//
// Problem 3.1 : Write a program that that solves a quadratic equation.
//               The formula of a quadratic equation is ax^2 + bx + c = 0.
//               The program should first compute the discriminant whose formula is b^2 - 4ac.
//               If the discriminant is positive, the program should display the two roots.
//               If the discriminant is zero, the program should display one root.
//               And if the discriminant is negative, the equation would have no root.
//
//               The program should prompt the user to input values for a, b, and c to proceed.
//               In the case of two roots, the formulas to compute each root are:
//
//               r1 = (-b + (b^2 - 4ac)^0.5)/2a         r2 = (-b - (b^2 - 4ac)^0.5)/2a
//
//
// Author : Giorgio Murad
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double a, b, c;     // Double values given by the user
    double delta;       // Delta of the equation
    double r1, r2;      // Root values computed by the system
    
    
    cout << "For a quadratic equation, enter the values of a, b, and c:" << endl;
    cin >> a >> b >> c;
    
    delta = b*b - 4*a*c;
    if (a == 0) {
        cout << "The equation has no root." << endl;
    } else {
        r1 = (-b + pow(delta, 0.5))/2*a;
        r2 = (-b - pow(delta, 0.5))/2*a;
        
        if (delta == 0) {
            cout << "The equation only has one root." << endl << "Root = " << r1;
        } else {
            cout << "The equation has two roots." <<
            endl << "Root 1 = " << r1 <<
            endl << "Root 2 = " << r2 <<
            endl;
        }
    }
    
    return 0;
}

// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 3 : Selections
//
// Problem 3.3 : Write a program that uses Cramer's rule to solve the following linear equation:
//
//                  ax + by = e
//                  cx + dy = f
//
//               where  x = (ed - bf)/(ad - bc)
//               and    y = (af - ec)/(ad - bc).
//               The program should prompt the user to enter the values of a, b, c, d, e, and f, and display the
//               values of x and y.
//               Condition: If ad - bc = 0, the program should report that the equation has no solution.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;
int main() {
    double a, b, c, d, e, f;        // Double values given by the user
    double x, y;                    // X and Y values computed by the system
    
    
    // Prompting the user to enter the values of a, b, c, d, e, and f
    cout << "Welcome to solving the Cramer's Rule equation." <<
    endl << "Enter the values of a, b, c, d, e, and f:" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    
    // Displaying the equation
    cout << endl << endl <<
    a << "x + " << b << "y = " << e << endl <<
    c << "x + " << d << "y = " << f << endl;
    
    // Getting the values of x and y if the denominator is not zero
    double den = a*d - b*c;
    if(den != 0) {
        x = (e*d - b*f)/den;
        y = (a*f - e*c)/den;
        
        // Displaying the solution
        cout << "X = " << x <<
        endl << "Y = " << y << endl;
    } else {
        
        cout << "The equation has no solution." << endl;
    }
    
    return 0;
}

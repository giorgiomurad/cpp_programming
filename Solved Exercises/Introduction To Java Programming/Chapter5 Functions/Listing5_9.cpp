// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Listing 5.9 : Write a program that prompts the user to enter two numbers, and
//               prints the largest number.
//               Write a method that can find the maximum number between 2 numbers,
//               and returns it.
//               The user should be able to either enter two integers, or two decimal
//               numbers.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

double maximum(double a, double b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int ni1, ni2;       // Two integer values to be given by the user
    double nd1, nd2;    // Two double values to be given by the user
    
    
    // Asking the user to enter two integer values
    cout << "Enter two integer values: ";
    cin >> ni1 >> ni2;
    
    // Asking the user to enter two double values
    cout << "Enter two double values: ";
    cin >> nd1 >> nd2;
    
    
    cout << endl;
    
    
    // Calling the integer function, and displaying its result
    cout << "The maximum integer value is " << maximum(ni1, ni2) << endl;
    
    // Calling the double function, and displaying its result
    cout << "The maximum double value is " << maximum(nd1, nd2) << endl;
    
    return 0;
}

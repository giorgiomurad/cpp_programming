// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 4 : Loops
//
// Problem 4.3 : Write a program that displays a conversion table from kilograms to pounds.
//
//               Kilograms  |   Pounds
//               1          |      2.2
//               2          |      4.4
//               3          |      6.6
//               ...        |      ...
//               199        |    437.8
//               200        |    440.0
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main() {
    cout << "Kilograms\t|\tPounds" << endl;
    for (int kg = 1; kg <= 200; kg++) {
        double pounds;
        
        pounds = kg * 2.2;
        cout << kg << "\t\t\t|\t" << pounds << endl;
    }
    return 0;
}

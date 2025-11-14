// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Exception Handling
//
// Problem 13.4 : Create a loan class called 'Loan' where it contains the annual interest rate, the
//                number of years, and the loan amount.
//                Make loan class throw an exception in case the user initializing a loan enters a
//                wrong input.
//                (In C++, the exception thrown after an invalid argument is entered is invalid_argument)
//
// Author : Giorgio Murad

#include <iostream>
#include "Loan.h"

using namespace std;

void throwException();

int main() {
    try {
        Loan *loan = new Loan(0.2, 2, -300);

    } catch (const invalid_argument& e) {
        cerr << "Error:\n" << e.what() << endl;
    }

    return 0;
}
// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Problem 5.1 : Write a method that returns a pentagonal number.
//               A pentagonal number is defined as n(3n - 1)/2 for n = 1,2,3, ...
//               Write a program that uses the method to display the first 100
//               pentagonal numbers with 10 numbers on each line.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that returns the pentagonal number of the given value
int pentagonal(int n) {
    int pent = n * (3*n -1)/2;
    
    return pent;
}

int main() {
    
    // Displaying 100 pentagonal numbers, with 10 numbers per line
    cout << "The first 100 pentagonal numbers:" << endl;
    for (int i = 1; i <= 100; i++) {
        printf("%7d ", pentagonal(i));
        
        if ((i > 1) && (i % 10 == 0))
            cout << endl;
    }
    return 0;
}

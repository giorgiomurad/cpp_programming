// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Listing 5.6 : Write a method that returns the greatest common divisor of two integers.
//               The program should prompt the user two integer values, displays the
//               greatest common divisor of the integers.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int gcd(int nb1, int nb2) {
    int divisor = 0;
    
    for (int i = 1; i <= min(nb1, nb2); i++) {
        if ((nb1 % i == 0) && (nb2 % i == 0))
            divisor = i;
    }
    
    return divisor;
}

int main() {
    
    cout << gcd(150, 250) << endl;
    return 0;
}
// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Listing 5.7 : Write a program that prints the first 50 prime numbers.
//               (10 prime numbers per line)
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that returns true if the given number is prime, and returns false otherwise
bool isPrime(int nb) {
    
    for(int i = 2; i < nb; i++)
        if (nb % i == 0)
            return false;
    
    return true;
}

int main() {
    int value;          // Value
    int count = 0;      // Number of prime numbers displayed
    
    // Displaying the first 50 prime numbers
    value = 1;
    while (count <= 50) {
        if (isPrime(value)){
            if (count > 1 && count % 10 == 0)
                cout << endl;
            
            printf("%3d ", value);
            count++;
        }
        
        value++;
    }
    cout << endl;
    return 0;
}

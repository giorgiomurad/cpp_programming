// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Problem 5.2 : Write a method that sums up all the digits from a given integer.
//               For example, sumDigits(234) should return 9 (2 + 3 + 4).
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that sums the digits of a given number, and returns the sum
int sumDigits(int number) {
    int sum = 0;
    
    // Extracting the last digit of number at every iteration, and adding the value to 'sum'
    while (number != 0) {
        sum += number % 10;
        
        number /= 10;
    }
    
    return sum;
}

int main() {
    int n;      // Integer value to be given by the user
    
    
    // Asking the user to enter an integer value
    cout << "Enter an integer value that has one or more digits:" << endl;
    cin >> n;
    
    // Displaying result
    cout << "The sum of the integer's digits is " << sumDigits(n) << endl;
    return 0;
}

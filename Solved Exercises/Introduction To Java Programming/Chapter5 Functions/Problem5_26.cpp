// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Problem 5.26 : Write a program that prints the first 100 palindromic numbers (10 numbers per line).
//                A palindromic number is a palindrome number that is also prime. (131, 313, 757).
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that reverses an integer value before returning it
int reverse(int value) {
    int rev = 0;
    
    while (value != 0) {
        int temp = value % 10;
        rev = rev * 10 + temp;
        
        value /= 10;
    }
    
    return rev;
}

// Function that returns true if the given value is equal to its reversed value, or false otherwise
bool isPalindrome(int value) {
    int rev = reverse(value);   // Reversal of the given value
    
    return (rev == value);
}

// Function that returns true if the number is a prime number, and false otherwise
bool isPrime(int value) {
    
    for (int i = 2; i < value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

// Function that returns true if the number is a palindromic number, and false otherwise
bool isPalindromic(int value) {
    
    return (isPrime(value) && isPalindrome(value));
}

int main() {
    int temp  = 2;      // Temporary Integer
    int count = 0;      // Counter
    
    
    // Printing the first 100 palindromic numbers
    while (count < 100) {
        if (isPalindromic(temp)) {
            printf("%7d ", temp);
            
            count++;
            if ((count > 1) && (count % 10 == 0)) {
                cout << endl;
            }
        }
        
        temp++;
    }
    
    return 0;
}

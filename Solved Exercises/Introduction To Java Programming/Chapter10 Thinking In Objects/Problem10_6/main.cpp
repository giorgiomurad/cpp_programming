// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Thinking in Objects
//
// Problem 10.6 : Write a program that displays all prime numbers less than 120 in an increasing order.
//                (Using the StackOfIntegers custom class described throughout the chapter)
//
//
// Author : Giorgio Murad
#include <iostream>
#include "StackOfIntegers.h"

using namespace std;

// Boolean function that returns true if the given integer is prime, and returns false if otherwise
bool isPrime(int n);

int main() {
    // Creating the stack object
    StackOfIntegers *stack = new StackOfIntegers();

    // Filling the stack with integer prime numbers less than 120
    for (int i = 120; i > 0; i--) {
        if (isPrime(i)) {
            stack->push(i);
        }
    }

    // Displaying all prime numbers from the stack in increasing order
    while (!stack->isEmpty()) {
        cout << stack->pop() << " ";
    }

    delete stack;
    return 0;
}

// Function isPrime Implementation
bool isPrime(int n) {
    int temp = n-1;

    while (temp > 1) {
        if (n % temp == 0)
            return false;

        temp--;
    }

    return true;
}
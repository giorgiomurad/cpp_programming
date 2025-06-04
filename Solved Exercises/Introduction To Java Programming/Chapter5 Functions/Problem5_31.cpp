// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Problem 5.31 : Write a program that prompts the user to enter a credit card number, and
//                verifies if the entered card number is valid or not. (Ex. 4388576018402626)
//                A credit card number must have between 13 and 16 digits, and must start with:
//                - 4 for Visa cards
//                - 5 for Master cards
//                - 37 for American Express cards
//                - 6 for discover cards
//
//                In 1954, Hans Luhn of IBM proposed an algorithm for validating credit card numbers.
//                The 'Luhn-check' algorithm is as follows:
//
//                Step 1:
//                Double every second digit from right to left. If doubling a digit results in a
//                two-digit number, add up the two digits to get a single-digit number.
//                2 * 2 = 4
//                2 * 2 = 4
//                4 * 2 = 8
//                1 * 2 = 2
//                6 * 2 = 12 (1 + 2 = 3)
//                5 * 2 = 10 (1 + 0 = 1)
//                8 * 2 = 16 (1 + 6 = 7)
//                4 * 2 = 8
//
//                Step 2:
//                Now add all single-digit digit numbers from Step 1.
//                4 + 4 + 8 + 2 + 3 + 1 + 7 + 8 = 37
//
//                Step 3:
//                Add all digits in odd places from right to left.
//                6 + 6 + 0 + 8 + 0 + 7 + 8 + 3 = 38
//
//                Step 4:
//                Sum of the results from steps 2 and 3.
//                37 + 38 = 75
//
//                Step 5:
//                If the result of Step 4 is divisible by 10, the card number is valid.
//
//
//                Design the program to use the following methods:
//                - boolean isValid(long )              Returns true if the card number is valid.
//                - int     sumOfDoubleEvenPlace(long ) Returns the result of Step 2.
//                - int     getDigit(int )              Returns the number if it is a single digit.
//                                                      Otherwise, returns the sum of its two digits.
//                - int     sumOfOddPlace(long )        Returns the result of Step 3.
//                - boolean prefixMatched(long, int)    Returns true if the integer is a prefix for of
//                                                      long number.
//                - int     getSize(long )              Returns the number of digits.
//                - int     getPrefix(long ,int )       Based on the given integer, returns the first
//                                                      digits of the long number.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that returns the size of the long number
int getSize(long number) {
    int digits = 0;     // Number of digits
    
    while (number > 0) {
        digits++;
        
        number /= 10;
    }
    
    return digits;
}

// Function that returns the prefix of the number according to the value of k
int getPrefix(long number, int k) {
    int limit = pow(10, k);     // Limit for Loop
    
    while (number > limit)
        number /= 10;
    
    return (int)number;
}

// Function that returns the given integer value as a single digit.
// If the value was a single digit, it is returns anyways.
// If the value was made of two digits, then the digits are seperated then added before their sum is returned
int getDigit(int value) {
    
    if (value < 10)
        return value;
    else {
        int sum = 0;
        
        while (value > 0) {
            sum += value % 10;
            
            value /= 10;
        }
        
        return getDigit(sum);
    }
}

// Function that returns true if the given prefix matches the prefix of the number
// If not, the function returns false
bool prefixMatched(long number, int prefix) {
    int prefDigits = getSize(prefix);
    
    return (getPrefix(number, prefDigits) == prefix);
}

// Function that extracts all integers in odd positions of 'number', computes their sum, and returns it.
int sumOfOddPlace(long number) {
    int sum = 0;    // Sum
    
    
    // Adding each number in odd positions to the 'sum'
    while (number > 0) {
        sum += number % 10;
        
        number /= 100;
    }
    
    // Returning the sum
    return sum;
}

// Function that extracts all integer in even positions of number,
// doubles every value, computes their sum where every value is a single digit value,
// and returns the sum
int sumOfDoubleEvenPlace(long number) {
    int sum = 0;    // Sum
    
    // Doubling every number in even positions, and adding it to 'sum'
    number /= 10;
    while (number > 0) {
        int even = number % 10;
        even *= 2;
        
        sum += getDigit(even);
        number /= 100;
    }
    
    // Returning the sum
    return sum;
}

// Function that returns true if the credit card number is valid.
// If invalid, the function returns false
bool isValid(long number) {
    bool v1 = false;    // Validity 1
    bool v2 = false;    // Validity 2
    int size;           // Size of the card number
    
    
    // First verification process
    size = getSize(number);
    if (size >= 13 && size <= 16) {
        int prefix = getPrefix(number, 1);
        
        if (prefix == 4 || prefix == 5 || prefix == 6) {
            
            v1 = prefixMatched(number, prefix);
        } else if (prefix == 3) {
            
            v1 = prefixMatched(number, 37);
        }
    }
    
    // Second verification process
    int sumEven = sumOfDoubleEvenPlace(number);
    int sumOdd = sumOfOddPlace(number);
    int total = sumEven + sumOdd;
    
    v2 = (total % 10 == 0);
    
    // Return the result
    return (v1 && v2);
    
}

int main() {
    int cardNumber;     // Card number given by the user
    
    
    // Prompting the user to enter the credit card number
    cout << "Enter the credit card number:" << endl;
    cin >> cardNumber;
    
    // Displaying whether the card number is valid or not
    if (isValid(cardNumber)) {
        cout << "Card Number Valid." << endl;
    } else {
        cout << "Card Number Invalid;" << endl;
    }
    
    return 0;
}

// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 6 : Single-Dimensional Arrays
//
// Problem 6.30 : Write a function that determines if a given array has an integer
//                that is repeating four consecutive times.
//                The program should prompt the user to enter the values in an array
//                before the function is called.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that returns true if the given integer array has four consecutive equal values
bool hasConsecutiveFour(int arr[], int size);

int main() {
    int nb;     // Size of integer array given by the user

    // Prompting the user to enter the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> nb;

    // Initializing the integer array
    int myArray[nb];

    // Prompting the user to enter the integer values into the integer array
    cout << "Enter " << nb << " integer values:" << endl;
    for (int i = 0; i < nb; i++) {
        cin >> myArray[i];
    }

    // Displaying the final result
    if (hasConsecutiveFour(myArray, nb))
        cout << "The integer array has four consecutive values." << endl;
    else
        cout << "The integer array does not contain four consecutive values." << endl;


    return 0;
}

// Function hasConsecutiveFour Implemented
bool hasConsecutiveFour(int arr[], int size) {
    int count = 1;

    for (int i = 0; i < size-1; i++) {
        if (arr[i] == arr[i+1])
            count++;
        else
            count = 1;

        if (count == 4)
            return true;
    }

    return false;
}
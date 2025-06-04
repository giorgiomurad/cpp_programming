// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 6 : Single-Dimensional Arrays
//
// Problem 6.26 : Write a function that verifies if two integer arrays are strictly
//                identical. (Have identical element values in identical positions)
//                The program should prompt the user to enter integer values of the
//                two arrays, and display the result.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that returns true if the two given arrays contain equal element values.
// Returns false otherwise
bool areEqual(int arr1[], int arr2[], int size);

int main() {
    int x;      // The number of integer values in each of the two arrays

    // Prompting the user to enter the value of x
    cout << "Enter the number of integer values each array should contain:" << endl;
    cin >> x;

    // Creating the two integer arrays
    int intArr1[x], intArr2[x];

    // Filling the two integer arrays with values
    cout << "Enter " << x << " values for Array 1:" << endl;
    for (int i = 0; i < x; i++)
        cin >> intArr1[i];

    cout << endl << "Enter " << x << " values for Array 2:" << endl;
    for (int j = 0; j < x; j++)
        cin >> intArr2[j];


    // Displaying the final result
    if (areEqual(intArr1, intArr2, x))
        cout << endl << "The two arrays are identical." << endl;
    else
        cout << endl << "The two arrays are not identical." << endl;

    return 0;
}

bool areEqual(int arr1[], int arr2[], int size) {

    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}
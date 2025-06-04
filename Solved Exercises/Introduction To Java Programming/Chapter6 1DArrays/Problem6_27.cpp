// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 6 : Single-Dimensional Arrays
//
// Problem 6.27 : Write a function that verifies if two integer arrays are identical.
//                In this case, two arrays are identical if they have the same contents.
//                  (Not necessarily in the same positions)
//                The program should prompt the user to enter integer values of the
//                two arrays, and display the result.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that returns the number of occurrences of an integer value in an array
int nbOfOccurrences(int value, int array[], int size);

// Function that returns true if two of its integer arrays have equal element values
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
    int temp1, temp2;

    for (int i = 0; i < size; i++) {
        int val = arr1[i];

        temp1 = nbOfOccurrences(val, arr1, size);
        temp2 = nbOfOccurrences(val, arr2, size);

        if (temp1 != temp2)
            return false;
    }

    return true;
}

int nbOfOccurrences(int value, int array[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == value)
            count++;
    }

    return count;
}

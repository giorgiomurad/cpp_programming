// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Multidimensional Arrays
//
// Problem 7.1 : Write a function that adds all the elements in a four-by-four matrix.
//               The program is set to prompt the user to enter the elements of the array
//               before displaying their sum.
//
//
// Author : Giorgio Murad
#include <iostream>

// Global variables rows and columns
const int rows = 4;
const int columns = 4;

// Function that returns the sum of all the elements in a 4x4 multidimensional array
int sumAll(int matrix[rows][columns]);

using namespace std;
int main() {
    int matrix[rows][columns];   // 4x4 multidimensional integer array with values to be given by the user


    // Prompting the user to enter the integer values for the integer matrix
    cout << "Enter the integer values for the four-by-four matrix:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    // Displaying the total sum of all the matrix's values
    cout << "The sum of all the matrix's values is " << sumAll(matrix) << endl;

    return 0;
}

int sumAll(int matrix[rows][columns]) {
    int sum = 0;    // Sum

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += matrix[i][j];
        }
    }

    return sum;
}
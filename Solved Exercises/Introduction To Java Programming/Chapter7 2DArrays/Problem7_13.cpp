// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Multidimensional Arrays
//
// Problem 7.13 : Write a function that returns the location of the largest element
//                in a multidimensional array.
//                The function returns an integer array that contains two elements.
//                The first element value representing the row value, and the second
//                representing the column value.
//
//
// Author : Giorgio Murad
#include <iostream>

// Function that finds and returns the largest position of the largest element value in the given array
int* largest(double **multi, int rows, int columns);

using namespace std;
int main() {
    int rows, cols;         // Row and column values to be given by the user
    // Double pointer to correspond to the multidimensional array


    // Prompting the user to enter the row and column values,
    cout << "Enter number of rows and columns of the array: ";
    cin >> rows >> cols;

    // Referencing 'matrix' to an array of pointers
    double **matrix = new double *[rows];

    // Referencing every pointer of 'matrix' to a double array
    // Allowing matrix to reference a multidimensional array
    for (int i = 0; i < rows; i++) {
        matrix[i] = new double[cols];
    }

    // Prompting the user to enter values into the multidimensional array
    cout << "Enter the values of the multidimensional array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calling the function, and assigning the returned value to a local pointer
    int *great = largest(matrix, rows, cols);

    // Displaying the largest element value in the array
    cout << "The largest value is in row " << great[0] << " and column " << great[1] << endl;

    // Delocating the following pointers after they are no longer needed
    delete matrix;
    delete great;

    return 0;
}

// Function largest Implementation
int* largest(double **multi, int rows, int columns) {
    int r = 0, c = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (multi[i][j] > multi[r][c]) {
                r = i;
                c = j;
            }
        }
    }

    return new int[] (r, c);
}
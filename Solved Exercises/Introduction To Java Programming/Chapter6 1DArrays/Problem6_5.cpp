// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.) (Edited)
// Chapter 6 : Single-Dimensional Arrays
//
// Problem 6.5 : Write a program that prompts the user to enter 10 integers, and displays the distinct
//               numbers.
//               If an integer is read more than once, it is displayed once.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;


void nullDuplicates(int values[], int size);


int main() {
    int integers[10];       // Integer values to be given by the user
    int distinct;           // Number of distinct values
    
    
    // Prompting the user to enter 10 integer values
    cout << "Enter ten integer values:" << endl;
    for (int i = 0; i < 10; i++)
        cin >> integers[i];

    // Calling the function to replace every value's duplicate with a null value
    nullDuplicates(integers, 10);
    
    // Displaying the distinct numbers
    cout << endl << "Displaying the values distinctively:" << endl;
    for (int j = 0; j < 10; j++) {
        if (integers[j] != 0)
            cout << integers[j] << " ";
    }
    
    cout << endl;
    return 0;
}

// Function that nulls duplicate values in an array of integers
void nullDuplicates(int values[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = values[i];

        if (temp != 0)
            for(int j = i+1; j < size; j++)
                if (values[j] == temp)
                    values[j] = 0;
    }
}
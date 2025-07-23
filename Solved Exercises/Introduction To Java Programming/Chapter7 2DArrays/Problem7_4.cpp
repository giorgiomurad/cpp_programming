// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Multidimensional Arrays
//
// Problem 7.4 : Write a program that computes every employee's weekly hours.
//
//
// Author : Giorgio Murad
#include <iostream>

// Global Variable
// Corresponding to five working days a week
const int workingDays = 5;

// Function that computes and returns the employee's total weekly hours
int weeklyHours(int hours[workingDays]);

using namespace std;
int main() {
    int nbOfEmployees;          // Number of employees given by the user


    // Prompting the user to enter the number of employees
    cout << "Enter the number of employees: ";
    cin >> nbOfEmployees;

    // Initializing multidimensional array to store working hours of every employee
    int table[nbOfEmployees][workingDays];

    // Prompting the user to enter the working hours of each day for each employee
    for (int i = 0; i < nbOfEmployees; i++) {
        cout << "Enter the weekly working hours of Employee " << (i+1) << ":" << endl;
        for (int j = 0; j < workingDays; j++) {
            cin >> table[i][j];
        }
    }

    // Displaying the employees table along with the total amount of hours of each employee
    cout << endl << "Employees\t| M | T | W | T | F | Total" << endl;
    cout << "-----------------------------------------" << endl;
    for (int i = 0; i < nbOfEmployees; i++) {
        cout << "Employee " << i+1 << "\t| ";
        for (int j = 0; j < workingDays; j++) {
            cout << table[i][j] << " | ";
        }

        cout << weeklyHours(table[i]) << endl;
    }


    return 0;
}

// Function weeklyHours Implementation
int weeklyHours(int hours[workingDays]) {
    int sum = 0;    // Sum of hours

    for (int i = 0; i < workingDays; i++){
        sum += hours[i];
    }


    return sum;
}

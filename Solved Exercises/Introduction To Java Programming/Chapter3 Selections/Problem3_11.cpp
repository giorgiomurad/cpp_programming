// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 3 : Selections
//
// Problem 3.11 : Write a program that asks the user to enter a month number and a year,
//                and displays how many days this month has.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main() {
    string month;           // String variable to contain the month name
    bool isValid;           // Boolean variable indicating if user input is valid or not
    int days;               // Variable corresponding to the number of days
    int year;               // Year given by the user
    int monthNb;            // Month number given by the user
    
    
    cout << "Enter the month number:" << endl;
    cin >> monthNb >> year;
    
    isValid = true;
    switch (monthNb) {
        case 1:
            month = "January";
            days = 31;
            break;
        case 2:
            month = "February";
            days = ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0)) ? 29 : 28;
            break;
        case 3:
            month = "March";
            days = 31;
            break;
        case 4:
            month = "April";
            days = 30;
            break;
        case 5:
            month = "May";
            days = 31;
            break;
        case 6:
            month = "June";
            days = 30;
            break;
        case 7:
            month = "July";
            days = 31;
            break;
        case 8:
            month = "August";
            days = 31;
            break;
        case 9:
            month = "September";
            days = 30;
            break;
        case 10:
            month = "October";
            days = 31;
            break;
        case 11:
            month = "November";
            days = 30;
            break;
        case 12:
            month = "December";
            days = 31;
            break;
        default:
            isValid = false;
    }
    
    if (isValid) {
        cout << "The date is " << month << " " << year << "." << endl;
    } else {
        cout << "Invalid month number." << endl;
    }
    
    return 0;
}

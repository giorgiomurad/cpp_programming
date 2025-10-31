//
// Created by Giorgio Murad on 24/09/2025.
//

#include "Staff.h"

// Constructor that initializes the staff member object
Staff::Staff(string name, string address, string phnumber, string email, string office, double salary, string title) :
    Employee(name, address, phnumber, email, office, salary) {

    setTitle(title);
}

// Function that sets the title of the staff member
void Staff::setTitle(string title) {
    this->title = title;
}

// Function that returns the title of the staff member
string Staff::getTitle() {
    return title;
}

// Overridden operator that displays the staff member's information
ostream& operator<<(ostream& cout, const Staff& staff) {
    cout << "Staff Member:" << endl
        << "Name :\t\t\t" << staff.name << endl
        << "Address :\t\t" << staff.address << endl
        << "Phone Number :\t" << staff.phnumber << endl
        << "Email Address :\t" << staff.email << endl
        << "Date Hired :\t" << *staff.dateHired << endl
        << "Office :\t\t" << staff.office << endl
        << "Salary :\t\t$ " << staff.salary << endl
        << "Title :\t\t\t" << staff.title << endl;

    return cout;
}
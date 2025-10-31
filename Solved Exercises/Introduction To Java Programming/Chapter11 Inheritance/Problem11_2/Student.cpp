//
// Created by Giorgio Murad on 19/09/2025.
//

#include "Student.h"

Student::Student(string name, string address, string phnumber, string email, string status)
    : Person(name, address, phnumber, email) {

    setStatus(status);
}

void Student::setStatus(string status) {
    this->status = status;
}


ostream &operator<<(ostream &cout, const Student &student) {
    cout << "Student : " << endl
    << "Name :\t\t\t" << student.name << endl
    << "Address :\t\t" << student.address << endl
    << "Phone Number :\t" << student.phnumber << endl
    << "Email Address :\t" << student.email << endl
    << "Status :\t\t" << student.status << endl;

    return cout;
}

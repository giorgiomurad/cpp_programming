//
// Created by Giorgio Murad on 24/09/2025.
//

#include "Faculty.h"
#include <iostream>

Faculty::Faculty(string name, string address, string phnumber, string email, string office, double salary,
    int office_hours, string rank) : Employee(name, address, phnumber, email, office, salary) {

    setOfficeHours(office_hours);
    setRank(rank);
}

void Faculty::setOfficeHours(int office_hours) {
    this->office_hours = office_hours;
}

void Faculty::setRank(string rank) {
    this->rank = rank;
}

int Faculty::getOfficeHours() {
    return office_hours;
}

string Faculty::getRank() {
    return rank;
}

ostream& operator<<(ostream& cout, const Faculty& fac) {
    cout << "Faculty Employee:" << endl
        << "Name :\t\t\t" << fac.name << endl
        << "Address :\t\t" << fac.address << endl
        << "Phone Number :\t" << fac.phnumber << endl
        << "Email :\t\t\t" << fac.email << endl
        << "Office :\t\t" << fac.office << endl
        << "Date Hired :\t" << *fac.dateHired << endl
        << "Salary :\t\t$ " << fac.salary << endl
        << "Office Hours :\t" << fac.office_hours << endl
        << "Rank :\t\t\t" << fac.rank << endl;

    return cout;
}
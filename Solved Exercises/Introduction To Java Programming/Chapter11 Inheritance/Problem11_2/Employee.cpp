//
// Created by Giorgio Murad on 24/09/2025.
//

#include "Employee.h"

// Constructor that initializes a new employee object
Employee::Employee(string name, string address, string phnumber, string email, string office, double salary) :
    Person(name,address,phnumber,email){

    setOffice(office);
    setSalary(salary);
    dateHired = new MyDate();
}

// Function that sets the office of the employee
void Employee::setOffice(string office) {
    this->office = office;
}

// Function that sets the salary of the employee
void Employee::setSalary(double salary) {
    this->salary = salary;
}

// Function that returns the office of the employee
string Employee::getOffice() {
    return office;
}

// Function that returns the salary of the employee
double Employee::getSalary() {
    return salary;
}

// Overridden operator that displays the content of the employee object
ostream &operator<<(ostream &cout, const Employee &e) {
    cout << "Employee:" << endl
        << "Name :\t\t\t" << e.name << endl
        << "Address :\t\t" << e.address << endl
        << "Phone Number :\t" << e.phnumber << endl
        << "Email Address :\t" << e.email << endl
        << "Date Hired : \t" << *e.dateHired << endl
        << "Office :\t\t" << e.office << endl
        << "Salary :\t\t$ " << e.salary << endl;

    return cout;
}

//
// Created by Giorgio Murad on 24/09/2025.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <iosfwd>
#include <iostream>

#include "MyDate.h"

using namespace std;

class Employee : public Person {
protected:
    string office;
    double salary;
    MyDate* dateHired;

public:
    Employee(string name, string address, string phnumber, string email, string office, double salary);
    void setOffice(string office);
    void setSalary(double salary);
    string getOffice();
    double getSalary();
    friend ostream& operator<<(ostream& cout, const Employee& e);
};



#endif //EMPLOYEE_H

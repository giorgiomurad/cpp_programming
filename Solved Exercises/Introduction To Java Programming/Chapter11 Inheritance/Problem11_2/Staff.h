//
// Created by Giorgio Murad on 24/09/2025.
//

#ifndef STAFF_H
#define STAFF_H

#include "Employee.h"

class Staff : public Employee {
private:
    string title;

public:
    Staff(string name, string address, string phnumber, string email, string office, double salary, string title);
    void setTitle(string title);
    string getTitle();
    friend ostream& operator<<(ostream& cout, const Staff& staff);

};



#endif //STAFF_H

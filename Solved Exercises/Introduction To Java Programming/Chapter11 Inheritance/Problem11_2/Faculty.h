//
// Created by Giorgio Murad on 24/09/2025.
//

#ifndef FACULTY_H
#define FACULTY_H
#include "Employee.h"
#include <string>


class Faculty : public  Employee {
private:
    int office_hours;
    string rank;
public:
    Faculty(string name, string address, string phnumber, string email, string office, double salary,
        int office_hours, string rank);
    void setOfficeHours(int office_hours);
    void setRank(string rank);
    int getOfficeHours();
    string getRank();
    friend ostream& operator<<(ostream& cout, const Faculty& fac);

};



#endif //FACULTY_H

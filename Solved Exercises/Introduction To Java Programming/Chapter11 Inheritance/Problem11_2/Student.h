//
// Created by Giorgio Murad on 19/09/2025.
//

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    string status;      // Class status of the student

public:
    Student(string name, string address, string phnumber, string email, string status);
    void setStatus(string status);
    string getStatus();
    friend ostream& operator<<(ostream& cout, const Student& student);
};



#endif //STUDENT_H

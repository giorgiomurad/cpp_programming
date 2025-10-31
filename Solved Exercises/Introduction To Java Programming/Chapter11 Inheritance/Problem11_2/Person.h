//
// Created by Giorgio Murad on 19/09/2025.
//

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;        // Person's name
    string address;     // Person's address
    string phnumber;    // Person's phone number
    string email;       // Person's email address

public:
    Person(string name, string address, string phnumber, string email);
    virtual void printName();
    void setName(string name);
    void setAddress(string address);
    void setPhNumber(string phnumber);
    void setEmail(string email);
    string getName();
    string getAddress();
    string getPhNumber();
    string getEmail();
    friend ostream& operator<<(ostream& cout, const Person& person);
};



#endif //PERSON_H

//
// Created by Giorgio Murad on 19/09/2025.
//

#include "Person.h"


// Constructor that initializes a person object with the given name, address, phone number, and email address
Person::Person(string name, string address, string phnumber, string email) {

    setName(name);
    setAddress(address);
    setPhNumber(phnumber);
    setEmail(email);
}

void Person::printName() {}

// Function that sets the name of the person
void Person::setName(string name) {
    this->name = name;
}

// Function that sets the address of the person
void Person::setAddress(string address) {
    this->address = address;
}

// Function that sets the phone number of the person
void Person::setPhNumber(string phnumber) {
    this->phnumber = phnumber;
}

// Function that sets the email address of the person
void Person::setEmail(string email) {
    this->email = email;
}

// Function that returns the name of the person
string Person::getName() {
    return name;
}

// Function that returns the address of the person
string Person::getAddress() {
    return address;
}

// Function that returns the phone number of the person
string Person::getPhNumber() {
    return phnumber;
}

// Function that returns the email address of the person
string Person::getEmail() {
    return email;
}

// Overridden output operator that prints all information of the person
ostream& operator<<(ostream& cout, const Person& person) {
    cout << "Person :" << endl
    << "Name :\t\t\t" << person.name << endl
    << "Address :\t\t" << person.address << endl
    << "Phone Number :\t" << person.phnumber << endl
    << "Email Address :\t" << person.email << endl;

    return cout;
}
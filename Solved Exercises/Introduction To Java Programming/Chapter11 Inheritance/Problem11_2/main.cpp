// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Inheritance and Polymorphism
//
// Problem 11.2 : Design a class named Person with its two subclasses named Student and Employee.
//                Faculty and Staff are two subclasses of Employee.
//                A Person has a name, address, phone number, and email address.
//                A student has a class status (freshman, sophomore, junior, senior).
//                An employee has an office, salary, and date hired. Define class MyDate containing year, month, and day
//                A faculty member has office hours and a rank.
//                A staff member has a title.
//                Override operator output function for every class object
//
//                Write a test program that creates an array of Person objects, which invloves a Person, a Student,
//                an Employee, a Staff member, and a Faculty member, and provoke their overridden output functions
//                to display each Person's information.
//
//
// Author : Giorgio Murad

#include <iostream>
#include <chrono>
#include <ctime>

#include "Employee.h"
#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include "MyDate.h"
#include "Staff.h"

#include "MyDate.h"

using namespace std;
using namespace chrono;

int main() {
    // Initializing the array of person objects
    Person **persons = new Person*[5];

    // Initializing every person object in the array
    persons[0] = new Person("Gio", "Lebanon", "12345678", "gio@email.com");
    persons[1] = new Student("Karen", "Baabdat", "23456789", "k@mail.com", "Senior");
    persons[2] = new Employee("Mark", "New York", "4567", "m@mail.co", "H12", 1200);
    persons[3] = new Staff("Eddy", "New Jersey", "45678", "edd.nj@email.com", "I344", 1350, "Supervisor");
    persons[4] = new Faculty("Harvey", "Gotham", "456789", "hd@mail.com", "H44", 1750, 5, "II");

    // Provoking the output operations of every object in the array
    for (int i = 0; i < 5; i++)
        if (Student* std = dynamic_cast<Student *>(persons[i]))
            cout << *std << endl;
        else if (Employee* emp = dynamic_cast<Employee *>(persons[i])) {
            if (Staff* stf = dynamic_cast<Staff *>(emp))
                cout << *stf << endl;
            else if (Faculty* fac = dynamic_cast<Faculty *>(emp))
                cout << *fac << endl;
            else
                cout << *emp << endl;
        }
        else
            cout << *persons[i] << endl;


    delete persons;
    return 0;
}
//
// Created by Giorgio Murad on 21/10/2025.
//

#ifndef COURSE_H
#define COURSE_H

#include <string>

#include "ArrayList.h"

// Making the course class inherit from the generic class ArrayList,
// and specifying the string data type in ArrayList to only use the generic class for string values.
class Course : public ArrayList<string> {
private:
    string courseName;
    int nbOfStudents;

public:
    Course(string courseName);
    string getCourseName();
    void addStudent(string student);
    string dropStudent(string student);
    string* getStudents();
    int getNbOfStudents();
};



#endif //COURSE_H
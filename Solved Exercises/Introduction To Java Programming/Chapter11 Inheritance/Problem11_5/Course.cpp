//
// Created by Giorgio Murad on 21/10/2025.
//

#include "Course.h"

// Initializes a new course object with the given course name
Course::Course(string courseName) {
    this->courseName = courseName;
}

// Returns the name of the course
string Course::getCourseName() {
    return courseName;
}

// Adds the name of the student to the listing of the course
void Course::addStudent(string student) {
    this->add(student);
}

// Drops or removes the student from the course
string Course::dropStudent(string student) {
    return this->remove(student);
}

// Returns the list or array of student names that are enrolled in the course
string* Course::getStudents() {
    return this->toArray();
}

// Returns the number of students enrolled in the course
int Course::getNbOfStudents() {
    return this->size();
}






// Important Note:  No need to explicitly instantiate 'template class', since it is specified that the Course
//                  class inherits for the Arraylist class to only work with string values.
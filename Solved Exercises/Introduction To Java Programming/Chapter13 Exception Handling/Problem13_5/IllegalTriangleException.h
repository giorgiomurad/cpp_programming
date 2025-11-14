//
// Created by Giorgio Murad on 13/11/2025.
//

#ifndef ILLEGALTRIANGLEEXCEPTION_H
#define ILLEGALTRIANGLEEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class IllegalTriangleException : public exception {
private:
    string message;     // Message of the exception to be thrown

public:
    IllegalTriangleException(string msg);
    const char* what();
};

#endif //ILLEGALTRIANGLEEXCEPTION_H

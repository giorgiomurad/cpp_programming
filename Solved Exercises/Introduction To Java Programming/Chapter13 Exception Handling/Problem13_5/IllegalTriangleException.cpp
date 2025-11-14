//
// Created by Giorgio Murad on 13/11/2025.
//

#include "IllegalTriangleException.h"

// Initializing exception object with the specified string message
IllegalTriangleException::IllegalTriangleException(string msg) {
    this->message = msg;
}

// Function inherited from the exception class which returns the message of our exception object
const char* IllegalTriangleException::what() {
    return message.c_str();
}
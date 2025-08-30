//
// Created by Giorgio Murad on 12/08/2025.
//

#include "StackOfIntegers.h"

// No-arg constructor that creates an empty stack with default capacity 16
StackOfIntegers::StackOfIntegers() {

    size = 0;
    capacity = 16;
    elements = new int[capacity];
}

// Constructor that creates a new stack object with specified capacity
StackOfIntegers::StackOfIntegers(int capacity) {

    size = 0;
    this->capacity = capacity;
    elements = new int[capacity];
}

// Function that returns true if the stack is empty. False otherwise
bool StackOfIntegers::isEmpty() {

    return size == 0;
}

// Function that returns the first element of the stack. [Returns -1 if the stack is empty]
int StackOfIntegers::peek() {

    if (!isEmpty()) {
        return elements[0];
    } else {
        return -1;
    }
}

// Function that adds a new integer to the top of the stack
void StackOfIntegers::push(int element) {
    // Expanding the capacity of the array if the size value is equal that of the capacity
    if (size == capacity) {
        int *elements2 = new int[size*2];

        for (int i = 0; i < size; i++) {
           elements2[i] = elements[i];
        }

        elements = elements2;
        capacity *= 2;
    }

    // Making space for the new integer element in the stack (in case the stack is not empty)
    if (size > 0) {
        for (int i = size; i > 0; i--) {
            elements[i] = elements[i - 1];
        }
    }

    // Adding the new integer element into the stack
    elements[0] = element;
    size++;
}

// Function that removes the first integer element of the array, and returns it
int StackOfIntegers::pop() {
    int temp = elements[0];

    for (int i = 0; i < size-1; i++) {
        elements[i] = elements[i+1];
    }
    size--;

    return temp;
}

// Function that returns the size of the stack
int StackOfIntegers::getSize() {

    return size;
}

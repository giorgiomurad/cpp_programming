//
// Created by Giorgio Murad on 12/08/2025.
//

#ifndef STACKOFINTEGERS_H
#define STACKOFINTEGERS_H



class StackOfIntegers {
private:
    int *elements;      // Pointer to array to store integers
    int capacity;       // Capacity of the array
    int size;           // Number of integers in the stack

public:
    StackOfIntegers();
    StackOfIntegers(int capacity);
    bool isEmpty();
    int peek();
    void push(int element);
    int pop();
    int getSize();
};



#endif //STACKOFINTEGERS_H

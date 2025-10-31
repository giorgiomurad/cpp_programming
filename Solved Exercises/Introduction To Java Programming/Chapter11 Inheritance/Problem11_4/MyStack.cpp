//
// Created by Giorgio Murad on 20/10/2025.
//

#include "MyStack.h"

#include <string>

// Constructor that creates a default stack object
template<typename A>
MyStack<A>::MyStack() = default;

// Constructor that initializes a stack object from the given array list
template<typename A>
MyStack<A>::MyStack(ArrayList<A> list) {

}


// Constructor that creates a new stack object from a given array list
template<typename A>
bool MyStack<A>::isEmpty() {

    return this->isEmpty();
}

// Function that returns the size of the stack
template<typename A>
int MyStack<A>::size() {

    return this->size();
}

// Function that returns the first element of the stack
template<typename A>
A MyStack<A>::peek() {

    return this->get(0);
}

// Function that removes the first element from the stack, and returns it
template <typename A>
A MyStack<A>::pop() {
    A temp = this->get(0);

    return this->remove(temp);
}

// Function that adds a new element at the beginning of the stack
template<typename A>
void MyStack<A>::push(A a) {
    this->add(0, a);
}

// Function that searches for the given element in the stack, and returns its position
// Otherwise, the function returns -1
template<typename A>
int MyStack<A>::search(A a) {

    return this->indexOf(a);
}



// Explicit instantiation
template class MyStack<int>;
template class MyStack<float>;
template class MyStack<double>;
template class MyStack<char>;
template class MyStack<string>;
//
// Created by Giorgio Murad on 20/10/2025.
//

#ifndef MYSTACK_H
#define MYSTACK_H

#include "ArrayList.h"

// Generic Statement
// 1. Since MyStack inherits from ArrayList, which is a generic class
// 2. To also make the MyStack class generic to work with any datatype
template<typename A>

class MyStack : public ArrayList<A>{
public:
    MyStack();
    MyStack(ArrayList<A> list);
    bool isEmpty();
    int size();
    A peek();
    A pop();
    void push(A a);
    int search(A a);

};



#endif //MYSTACK_H

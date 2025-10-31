//
// Created by Giorgio Murad on 18/10/2025.
//

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <string>
#include <iostream>

using namespace std;

// Generic Statement so that the class can work with any object type
// (int, double, bool, ...)
template <typename A>

class ArrayList {
protected:
    A* arr;             // List
    int length;         // Number of elements in the list
    int capacity;       // Capacity of the list

public:
    ArrayList();
    ArrayList(int capacity);
    void trimToSize();
    void add(A a);
    void add(int index, A a);
    void clear();
    bool contains(A a);
    A get(int index);
    int indexOf(A a);
    bool isEmpty();
    int lastIndexOf(A a);
    A remove(A a);
    int size();
    A set(int index, A a);
    A* toArray();
};



#endif //ARRAYLIST_H

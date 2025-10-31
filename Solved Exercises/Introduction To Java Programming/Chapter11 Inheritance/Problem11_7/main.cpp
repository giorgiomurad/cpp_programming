// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Inheritance and Polymorphism
//
// Problem 11.7 : ArrayList is a class object which is implemented in the Java API.
//                Implement the ArrayList class in C++, and test it in the program.
//
//  Note : Make the object class generic. (A generic object is an object that can handle and work with any data type.)
//                                        (Regardless if the object is being used to handle int, double, float, ...  )
//
//
// Author : Giorgio Murad

#include "ArrayList.h"

#include <iostream>

using namespace std;

int main() {
    ArrayList<double> *list = new ArrayList<double>(5);

    list->add(4.3);
    list->add(3.2);
    list->add(6.4);
    list->add(5.5);
    list->add(3.9);

    list->add(4, 0.5);
    list->add(5, 1.1);

    for (int i = 0; i < list->size(); i++)
        cout << list->get(i) << " ";
    cout << endl << "Size : " << list->size() << endl << endl;

    int index = list->indexOf(5.5);
    list->remove(5.5);
    cout << "The number " << 5 << " that was located at index " << index << " has been removed." << endl << endl;

    for (int i = 0; i < list->size(); i++)
        cout << list->get(i) << " ";
    cout << endl << "Size : " << list->size() << endl << endl;

    delete list;
    return 0;
}
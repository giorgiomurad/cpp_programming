// Custom Class : ArrayList
//
// Created by Giorgio Murad on 18/10/2025.
//

#include "ArrayList.h"

// Constructor that creates a new empty array list
template<typename A>
ArrayList<A>::ArrayList() {
    length = 0;
    capacity = 16;
    arr = new A[capacity];
}

// Constructor that creates a new array list with the specified capacity value
template<typename A>
ArrayList<A>::ArrayList(int capacity) {
    length = 0;
    this->capacity = capacity;
    arr = new A[capacity];
}

// Trimming the capacity of the list to its size
template<typename A>
void ArrayList<A>::trimToSize() {
    capacity = length;
}

// Adding the new element into the list
template<typename A>
void ArrayList<A>::add(A a) {
    if (length == capacity) {
        A* temp = new A[capacity * 2];

        for (int i = 0; i < length; i++) {
            temp[i] = arr[i];
        }

        arr = temp;
    }

    arr[length] = a;

    length++;
}

// Adding the new element in the list at the specified index
// If the given index value exceeds the length of the list, the element is rejected
template<typename A>
void ArrayList<A>::add(int index, A a) {
    if (index >= length)
        cout << "Index Exceeds List Size.\nElement not Added!" << endl;
    else {
        if (length == capacity) {
            A *temp2 = new A[capacity*2];

            for (int i = 0; i < length; i++)
                temp2[i] = arr[i];

            arr = temp2;
        }
        A *temp = new A[capacity];
        int j;

        // Starting at j = 0
        for (j = 0; j < index; j++) {
            temp[j] = arr[j];
        }

        // j = index (inserting 'a' at 'index')
        temp[j] = a;

        // Continuing from index+1
        for (j = index+1; j <= length; j++)
            temp[j] = arr[j-1];

        length++;
        arr = temp;
    }
}

// Clears the list
template<typename A>
void ArrayList<A>::clear() {
    length = 0;
}

// Returns true if the list contains the given element, and false otherwise
template<typename A>
bool ArrayList<A>::contains(A a) {
    for (int i = 0; i < length; i++)
        if (arr[i] == a)
            return true;

    return false;
}

// Returns the element at the specified index
template<typename A>
A ArrayList<A>::get(int index) {
    return arr[index];
}

// Returns the index of the given element, and -1 if the element is not found in the list
template<typename A>
int ArrayList<A>::indexOf(A a) {
    for (int i = 0; i < length; i++)
        if (arr[i] == a)
            return i;

    return -1;
}

// Returns true if the list is empty, and false otherwise
template<typename A>
bool ArrayList<A>::isEmpty() {

    return length == 0;
}

// Returns the last index of the element that is equal to the specified element
// -1 is returned in case the specified element was not found in the list
template<typename A>
int ArrayList<A>::lastIndexOf(A a) {
    for (int i = length-1; i >= 0; i--)
        if (arr[i] == a)
            return i;

    return -1;
}

// Removes the specified object from the list, and returns it
template<typename A>
A ArrayList<A>::remove(A a) {
    int indexA = indexOf(a);

    if (indexA == -1) {
        cout << "Element Is Not Included in the List." << endl;
        return a;
    }

    for (int i = indexA; i < length-1; i++)
        arr[i] = arr[i+1];

    length--;
    return a;
}

// Returning the number of elements in the array
template<typename A>
int ArrayList<A>::size() {

    return length;
}

// Sets the element of the given index equal to the given element before returning the element
template<typename A>
A ArrayList<A>::set(int index, A a) {
    arr[index] = a;

    return a;
}

// Returns the array as an immutable array
template<typename A>
A* ArrayList<A>::toArray() {

    return arr;
}


// Explicitly defining different cases
// Done so that the object can work with int, double, bool, char, and string data types
//
// Important Note:  When writing generic object classes,
//                  If the generic functions of the object are defined in the header (.h) file, and
//                  implemented in the source (.cpp) file,
//                  The below statements should be written in order for the compiler to recognize the
//                  explicit instantiation of templates different data types. Otherwise, the implemented
//                  functions will not work, and a compilation error will occur.
template class ArrayList<int>;
template class ArrayList<float>;
template class ArrayList<double>;
template class ArrayList<bool>;
template class ArrayList<char>;
template class ArrayList<string>;
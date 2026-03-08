//
// Created by Giorgio Murad on 21/11/2025.
//

#ifndef COMPARABLE_H
#define COMPARABLE_H


template <typename T>
class Comparable {
public:
    virtual int compareTo(T &e) = 0;
};



#endif //COMPARABLE_H
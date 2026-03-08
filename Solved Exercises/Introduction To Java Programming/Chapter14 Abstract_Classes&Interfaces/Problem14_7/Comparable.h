//
// Created by Giorgio Murad on 28/11/2025.
//

#ifndef COMPARABLE_H
#define COMPARABLE_H

template <typename T>
class Comparable {
public:
    virtual int compareTo(T &data) = 0;
};

#endif //COMPARABLE_H
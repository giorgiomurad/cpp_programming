//
// Created by Giorgio Murad on 28/11/2025.
//

#ifndef CLONEABLE_H
#define CLONEABLE_H

template <typename T>
class Cloneable {
    virtual T& clone() = 0;
};

#endif //CLONEABLE_H
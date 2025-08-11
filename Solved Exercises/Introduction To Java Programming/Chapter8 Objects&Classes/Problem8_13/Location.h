//
// Created by Giorgio Murad on 06/08/2025.
//

#ifndef LOCATION_H
#define LOCATION_H



class Location {
public:
    int row;            // Row
    int col;            // Column
    double maxValue;    // Maximum Value

    Location(int row, int col);
    Location(int row, int col, int maxValue);
    static Location locateLargest(int** multi, int size);
};



#endif //LOCATION_H

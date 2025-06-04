// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 4 : Loops
//
// Problem 4.19 : Using a nested for-loop, Write a program that displays the following pyramid:
//
//                                              1
//                                          1   2   1
//                                      1   2   4   2   1
//                                  1   2   4   8   4   2   1
//                              1   2   4   8  16   8   4   2   1
//                          1   2   4   8  16  32  16   8   4   2   1
//                      1   2   4   8  16  32  64  32  16   8   4   2   1
//                  1   2   4   8  16  32  64 128  64  32  16   8   4   2   1
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main() {
    int temp;       // Temporary Variable
    int rows = 8;   // Number of Rows
    
    
    // Displaying Pyramid
    for (int r = 1; r <= rows; r++) {
        temp = 1;
        
        for (int j = rows; j > r; j--) {
            
            printf("%3c ", ' ');
        }
        
        for (int k = 1; k <= r; k++) {
            
            printf("%3d ", temp);
            temp *= 2;
        }
        
        temp /= 2;
        for (int z = (r-1); z > 0; z--) {
            temp /= 2;
            
            printf("%3d ", temp);
        }
        
        cout << endl;
    }
    
    return 0;
}

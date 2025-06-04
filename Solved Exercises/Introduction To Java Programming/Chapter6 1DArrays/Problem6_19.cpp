// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 6 : Single-Dimensional Arrays
//
// Problem 6.19 : Write a method that prompts the user to enter the number of students,
//                their names, and scores.
//                The programs should then print the student names in decreasing order
//                of their scores.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that sorts the arrays according to score values
void sortStudents(string names[], int scores[], int size);

int main() {
    int students;           // Number of students]


    // Asking the user to enter the number of students
    cout << "Enter the number of students:" << endl;
    cin >> students;

    // Declaring arrays for names and scores
    string names[students];
    int scores[students];

    // Allowing the user to enter every student's name and score
    for (int i = 0; i < students; i++) {
        cout << "Enter the name and score of student " << (i+1) << ":" << endl;
        cin >> names[i] >> scores[i];
    }

    // Sorting the arrays with respect to scores
    sortStudents(names, scores, students);

    cout << endl << "Displaying in Order:" << endl;
    for (int j = 0; j < students; j++) {
        cout << names[j] << " " << scores[j] << endl;
    }
    return 0;
}

// Function that sorts the arrays according to score values
void sortStudents(string names[], int scores[], int size) {

    for(int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (scores[i] < scores[j]) {
                int temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;

                string temp2 = names[i];
                names[i] = names[j];
                names[j] = temp2;
            }
        }
    }
}
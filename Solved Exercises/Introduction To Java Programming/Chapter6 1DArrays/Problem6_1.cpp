// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.) (Edited)
// Chapter 6 : Single-Dimensional Arrays
//
// Problem 6.1 : Write a program that prompts the user to input the number of students.
//               And based on the number of students, prompts the user to enter scores,
//               and displays the grade of each student.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main() {
    int students;       // Number of students
    double score;       // Student Score
    
    
    // Asking the user to enter the number of students,
    // And initializing a double array
    cout << "Enter the number of students:" << endl;
    cin >> students;
    double scores[students];
    
    // Asking the user to enter the students' scores
    cout << "Enter the scores of the students:" << endl;
    for (int i = 0; i < students; i++) {
        cin >> score;
        
        scores[i] = score;
    }
    
    // Displaying the grades of each student
    for (int j = 0; j < students; j++) {
        
        printf("The score of student %d is %3.2f", j, scores[j]);
        cout << endl;
    }
    
    return 0;
}

// Writing a program that determines a student’s grade. It reads three test scores (between 0 and 100) and calculates the grade based on the following rules: 
// a. If the average score is 90 or more, the grade is ‘A’. 
// b. If the average score is between 80 and 90, the program checks the third score. If the third score is more than 90, the grade is ‘A’; otherwise, the grade is ‘B’. 
// c. If the average score is between 70 and 80, the program checks the third score. If the third score is more than 80, the grade is ‘B’; otherwise, the grade is ‘C’. 
// d. If the average score is between 60 and 70, the program checks the third score. If the third score is more than 70, the grade is ‘C’; otherwise, the grade is ‘D’. 
// e. If the average score is less than 60, the program checks the third score. If the third score is more than 60, the grade is ‘D’; otherwise, the grade is ‘F’.

#include <iostream>
using namespace std;

int main() {
    // Declaring Variables
    int score1, score2, score3;
    // Prompt and Output
    cout << "Enter the first score: ";
    cin >> score1;
    cout << "Enter the second score: ";
    cin >> score2;
    cout << "Enter the last score: ";
    cin >> score3;
    // Calculating the total and average score
    int totalScore = score1 + score2 + score3;
    int average = totalScore / 3;
    // Checking whether the average score meets the requirement
    if (average >= 90 && average <= 100) {
        cout << "Grade is 'A'";
    }
    else if (average >= 80 && average <=89) {
        cout << "Grade is 'B'";
    }
    else if (average >= 70 && average <= 79) {
        cout << "Grade is 'C'";
    }
    else if (average >= 60 && average <= 69) {
        cout << "Grade is 'D'";
    }
    else if (average < 60) {
        cout << "Grade is 'F'";
    }
    else {
        cout << "Score entered is incorrect";
    }
    return 0;
}
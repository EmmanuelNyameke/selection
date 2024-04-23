// Writing a program that calculates and prints a student’s total tuition at a college. The students pay a fee of $10 per unit for up to 12 units; once they have paid for 12 units, they have no additional per-unit fee. The registration fee is $10 per student.

#include <iostream>
using namespace std;

int main() {
    // Declaring Variables
    const int feePerUnit = 10;
    const int regFee = 10;
    int unit;
    // Prompt and Output
    cout << "Enter the number of unit(s) paid: ";
    cin >> unit;
    // Restricting student from entering more than 12 unit
    if (unit > 12) {
        cout << "Maximum unit you can pay is 12" << endl;
        return 0; // Terminate the program
    }
    // Calculating the total tuition of the student
    int totalUnit = unit * feePerUnit;
    int totalTuition = totalUnit + regFee;
    // Displaying the result
    cout << "Number of unit(s) entered: " << unit << "unit(s)" << endl;
    cout << "Total cost for the unit(s) = " << totalUnit << "unit(s)" << endl;
    cout << "Total tuition = " << "$" << totalTuition << endl;
    return 0;
}
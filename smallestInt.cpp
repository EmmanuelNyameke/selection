// Writing a program that, given three integers, prints the smallest one.

#include <iostream>
using namespace std;

int main () {
    // Declaring variables
    int num1, num2, num3;
    // Prompt and Output
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the last number: ";
    cin >> num3;
    // using if-else to check the smallest number and print it out
    if (num1 < num2 && num1 < num3) {
        cout << "The smallest integer is " << num1 << endl;
    }
    else if (num2 < num1 && num2 < num3) {
        cout << "The smallest integer is " << num2 << endl;
    }
    else if (num3 < num1 && num3 < num2) {
         cout << "The smallest integer is " << num3 << endl;
    }
    else {
        cout << "The numbers are equal";
    }
    return 0;
}
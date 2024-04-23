// Writing a program that accept only two-digit unsigned integers from the user and then reverses the digits and prints them. Using an if statement to terminate the program if the input number has more than two digits.
#include <iostream>
using namespace std;

int main() {
    // Declaring variable
    int digits;
    // Prompt and output
    cout << "Enter the two digits: ";
    cin >> digits;
    // checking whether the input from the user has more than two digit
    if (digits < 9 || digits < 0 || digits > 99) {
        cout << "Invalid digit, please enter two digits number" << endl;
        return 0; // Terminate the
    }
    // Reversing the number entered by the user by first extracting the first number and second number
    int extractFirstNumber = digits % 10;
    int extractSecondNumber = (digits / 10) % 10;
    int reversedDigit = (digits % 10) * 10 + (digits / 10);
    // Displaying the result
    cout << "The two digits number are " << extractSecondNumber << " and " << extractFirstNumber << endl;
    cout << "The reverse of " << digits << " is " << reversedDigit;
    return 0;
}
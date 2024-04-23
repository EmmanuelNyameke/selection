//  Writing a program that, given a dollar value, prints the minimum number of bill denominations in 100s, 50s, 20s, 10s, 5s, and 1s. Use the if-else expression  to print only nonzero numbers of bills.

#include <iostream>
using namespace std;

int main () {
    // Declaring variables
    int dollar;
    // Prompt and Output
    cout << "Enter amount: ";
    cin >> dollar;
    // Working out the denominations
    int hundreds = dollar / 100;
    int remainder = dollar % 100;
    int fifties = dollar / 50;
    remainder %= 50;
    int twenties = dollar / 20;
    remainder %= 20;
    int tens = dollar / 10;
    remainder %= 10;
    int fives = dollar / 5;
    remainder %= 5;
    int ones = remainder;
    cout << "Number of bills \n";
    // Using if-else expressions to print only non zero numbers of bills
    if (hundreds > 0) {
        cout << "Hundreds: " << hundreds;
    }
    else if (fifties > 0) {
        cout << "Fifties: " << fifties;
    }
    else if (twenties > 0) {
        cout << "Twenties: " << twenties;
    }
    else if (tens > 0 ) {
        cout << "Tens: " << tens;
    }
    else if (fives > 0) {
        cout << "Fives: " << fives;
    } 
    else {
        cout << "Ones: " << ones;
    }
    return 0;
}
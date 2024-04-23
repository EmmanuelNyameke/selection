//  Writing a program that finds the day of the week for any given date using Zeller’s congruence. Zeller found the following formula to calculate the day of the week using the day of the month, the month, and the year. weekday = (day + 26 * (month + 1) / 10 +  year + year / 4 − year /100 + year /400 ) % 7

#include <iostream>
using namespace std;

// User-defined function
int calculateDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    // Zeller's congruence formula for calculating the day of the week
    int  weekDay = (day + 26 * (month + 1) / 10 +  year + year / 4 - year /100 + year /400 ) % 7;
    return weekDay;
}
// Main Function
int main () {
    // declaring variables
    int day, month, year;
    // Prompt and Output
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    // Calculating the day of the week
    int weekDay = calculateDayOfWeek(day, month, year);
    // Using an array to list the days of the week
    string daysOfWeek[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    // Displaying the result
    cout << "The day of the week for " << day << "-" << month << "-" << year << " is: " << daysOfWeek[weekDay]; 
    return 0;
}
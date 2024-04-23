// A wholesale store gives a discount on the number of items purchased, as shown below.
// Quantity        Discount 
// 1 to 9            0%
// 10 to 49          3% 
// 50 to 99          5%         
// 100 or more       10% 
// Writing a program that, given the quantity and unit price of an item, calculates the total price after the discount. 

#include <iostream>
using namespace std;

int main () {
    // Declaring Variables
    int qty;
    float unitPrice;
    // Prompt and Output
    cout << "Enter the number of items purchased: ";
    cin >> qty;
    cout << "Enter the unit price of the item: ";
    cin >> unitPrice;
    // Calculating the total price before discount
    float totalPrice = qty * unitPrice;
    // Applying Discount to the items
    if (qty <= 9 && qty > 0) {
        totalPrice *= 0.00;
    }
    else if (qty >= 10 && qty <= 49) {
        totalPrice *= 0.03;
    }
    else if (qty >= 50 && qty <= 99) {
        totalPrice *= 0.05;
    }
    else if (qty >= 100) {
        totalPrice *= 0.10;
    }
    else {
        cout << "Invalid inputs!!!";
        return 0;
    }
    // Displaying the result
    cout << "Total price after discount = " << "$" << totalPrice;
    return 0;
}
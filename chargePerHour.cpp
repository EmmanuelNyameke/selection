// Writing a program that, given the type of vehicle (‘c’ for car, ‘b’ for bus, ‘t’ for truck) and the hours a vehicle spent in the parking lot, returns the parking charge based on the rates shown below.
// car: $2 per hour bus:$3 per hour truck: $4 per hour

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring Variables
    int hours;
    string vehicle;
    // Prompt and Output
    cout << "Enter the number of hour(s) spent: ";
    cin >> hours;
    cout << "Enter the type of vehicle: ";
    cin >> vehicle;
    // Checking the type of vehicle
    if (vehicle == "car" || vehicle == "Car" || vehicle == "CAR"){
        int result1 = hours * 2;
        cout << "The parking charge of the car is " << "$" << result1 << endl;  
    }
    else if (vehicle == "bus" || vehicle == "Bus" || vehicle == "BUS"){
        int result2 = hours * 3;
        cout << "The parking charge of the bus is " << "$" << result2 << endl;
    }
    else if (vehicle == "truck" || vehicle == "Truck" || vehicle == "TRUCK"){
        int result3 = hours * 4;
        cout << "The parking charge of the truck is " << "$" << result3 << endl;
    }
    else {
        cout << "Invalid Vehicle!!!";
    }
    return 0;
}
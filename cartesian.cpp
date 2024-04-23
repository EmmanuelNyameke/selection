// Writing a program that prints the quarter (1, 2, 3, and 4) of a point in the Cartesian (rectangular) system given the values of x and y for the point. For example, if both x and y are positive, the point is located in the first quadrant. If both x and y are negative, the point is located in the third quadrant, and so on.

#include <iostream>
using namespace std;

int main () {
    // Declaring variables
    int x, y;
    // Prompt and Output
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y;
    // Checking the coordinate of x and y to know the position of the quadrant
    if (x > 0 && y > 0) {
        cout << "The point is in the first quadrant";
    }
    else if (x < 0 && y > 0) {
        cout << "The point is in the second quadrant";
    }
    else if (x < 0 && y < 0) {
        cout << "The point is in the third quadrant";
    }
    else if (x > 0 && y < 0) {
        cout << "The point is in the fourth quadrant";
    }
    else if (x == 0 && y !=0) {
        cout << "The point lies on the y-axis";
    }
    else if (x != 0 && y == 0) {
        cout << "The point lies on the x-axis";
    }
    // When both x and y are zero
    else {
        cout << "The point is at the origin";
    }
    return 0;
}
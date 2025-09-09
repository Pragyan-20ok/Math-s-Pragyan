#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;
//this code is developd by Pragyan Gogoi

int main() {
    double a, b, c;

    // Input three sides of the triangle
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Calculate semi-perimeter
        double s = (a + b + c) / 2.0;

        // Heron's formula
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "The area of the triangle is: " << area << endl;
    } else {
        cout << "The entered sides do not form a valid triangle." << endl;
    }

    return 0;
}


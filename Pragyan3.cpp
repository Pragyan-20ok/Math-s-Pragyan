#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2;
    cout << "Solve system of two linear equations using Cramer's Rule\n";
    cout << "Equation 1: a1*x + b1*y = c1\n";
    cout << "Equation 2: a2*x + b2*y = c2\n\n";

    // Input coefficients
    cout << "Enter coefficients a1, b1, c1: ";
    cin >> a1 >> b1 >> c1;
    cout << "Enter coefficients a2, b2, c2: ";
    cin >> a2 >> b2 >> c2;

    // Determinant
    double D = a1*b2 - a2*b1;

    if (D == 0) {
        cout << "The system has either no solution or infinitely many solutions." << endl;
    } else {
        double Dx = (c1*b2 - c2*b1);
        double Dy = (a1*c2 - a2*c1);
        double x = Dx / D;
        double y = Dy / D;

        cout << "Unique solution found:\n";
        cout << "x = " << x << ", y = " << y << endl;
    }

    return 0;
}

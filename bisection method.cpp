#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the value of f(x) = x^3 - 2x - 5
double f(double x) {
    return x * x * x - 2 * x - 5;
}

int main() {
    double a, b, c;
    int i=0;

    cout << "Enter values for the range (a, b): ";
    cin >> a >> b;

    // Tolerance for the root-finding process
    double tol = 0.0001;

    // Bisection method loop
    while (abs(b - a) > tol) {
        // Calculate the midpoint
        c = (a + b) / 2;
     
        cout<< c<< endl;

        // Check the sign of f(c) to determine the new interval
        if (f(c) < 0) {
            // Root lies in the right half-interval
            a = c;
        } 
         else {
            // Root lies in the left half-interval
            b = c;
        }
    }

    return 0;
}
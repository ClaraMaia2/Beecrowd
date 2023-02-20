/*
Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. 
If it's impossible to calculate the roots because a division by zero or a 
square root of a negative number, presents the message “Impossivel calcular”.

Input
    Read 3 floating-point numbers (double) A, B and C.

Output
    Print the result with 5 digits after the decimal point or the message if 
    it is impossible to calculate.
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(5);

    double A, B, C, x1, x2, delta;

    cin >> A >> B >> C;

    delta = (B * B) - 4 * A * C;

    x1 = (-B + std::sqrt(delta)) / (2 * A);
    x2 = (-B - std::sqrt(delta)) / (2 * A);

    if ((A == 0) || (delta < 0))
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }

    return 0;
}
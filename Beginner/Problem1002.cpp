/*
The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:

Calculate the area using the formula given in the problem description.

Input
    The input contains a value of floating point (double precision), that is the variable R.

Output
    Present the message "A=" followed by the value of the variable, as in the example bellow, with four places after the decimal point. 
    Use all double precision variables. Like all the problems, don't forget to print the end of line after the result, otherwise you will receive "Presentation Error".
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);

    double pi = 3.14159, A, R;

    cin >> R;

    A = pi * R * R;

    cout << "A=" << A << endl;

    return 0;
}
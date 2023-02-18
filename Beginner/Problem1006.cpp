/*
Read three values (variables A, B and C), which are the three student's grades. 
Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. 
Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input
    The input file contains 3 values of floating points (double) with one digit after the decimal point.

Output
    Print the message "MEDIA"(average in Portuguese) and the student's average, 
    with a blank space before and after the equal signal.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    double A, B, C;
    float MEDIA;

    cin >> A;
    cin >> B;
    cin >> C;

    MEDIA = (2 * A + 3 * B + 5 * C) / (2 + 3 + 5);

    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}
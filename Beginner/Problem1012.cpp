/*
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
    a) the area of the rectangled triangle that has base A and height C.
    b) the area of the radius's circle C. (pi = 3.14159)
    c) the area of the trapezium which has A and B by base, and C by height.
    d) the area of ​​the square that has side B.
    e) the area of the rectangle that has sides A and B.

Input
    The input file contains three double values with one digit after the decimal point.

Output
    The output file must contain 5 lines of data. Each line corresponds to one of the areas described 
    above, always with a corresponding message (in Portuguese) and one space between the two points 
    and the value. The value calculated must be presented with 3 digits after the decimal point.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);

    double A, B, C, rectangleTriangleArea, circleArea, trapeziumArea, squareArea, rectangleArea, pi = 3.14159;

    cin >> A >> B >> C;

    rectangleTriangleArea = (A * C) / 2;
    circleArea = C * C * pi;
    trapeziumArea = ((A + B) * C) / 2;
    squareArea = B * B;
    rectangleArea = A * B;

    cout << "TRIANGULO: " << rectangleTriangleArea << endl;
    cout << "CIRCULO: " << circleArea << endl;
    cout << "TRAPEZIO: " << trapeziumArea << endl;
    cout << "QUADRADO: " << squareArea << endl;
    cout << "RETANGULO: " << rectangleArea << endl;

    return 0;
}
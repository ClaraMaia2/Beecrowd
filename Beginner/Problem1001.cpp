/*
Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.

Input
    The input file will contain 2 integer numbers.

Output
    Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X, according to the following example.

Obs.: don't forget the endline after all.
*/
#include <iostream>

using namespace std;

int main()
{
    int A, B, X;

    cin >> A;
    cin >> B;

    X = A + B;

    cout << "X = " << X << endl;

    return 0;
}
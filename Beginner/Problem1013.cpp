/*
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". 
Use the following formula:

    MaiorAB = (a + b + abs(a - b)) / 2

Input
    The input file contains 3 integer values.

Output
    Print the greatest of these three values followed by a space and the message “eh o maior”.
*/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, maior1, maior2;

    cin >> a >> b >> c;
    
    maior1 = (a + b + std :: abs(a - b)) / 2;
    maior2 = (maior1 + c + std :: abs(maior1 - c)) / 2;

    cout << maior2 << " eh o maior" << endl;

    return 0;
}
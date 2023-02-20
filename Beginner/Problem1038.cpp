/*
Using the following table, write a program that reads a code and the amount of an item. 
After, print the value to pay. 

CODE    SPECIFICATION       PRICE
1       Cachorro Quente     R$4.00
2       X-Salada            R$4.50
3       X-Bacon             R$5.00
4       Torrada simples     R$2.00
5       Refrigerante        R$1.50

Input
    The input file contains two integer numbers X and Y. X is the product code and Y is 
    the quantity of this item according to the above table.

Output
    The output must be a message "Total: R$ " followed by the total value to be paid, with 
    2 digits after the decimal point.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int X, Y;
    double price, total;

    cin >> X >> Y;

    switch(X)
    {
        case 1:
            price = 4.00;
            break;
        case 2:
            price = 4.50;
            break;
        case 3:
            price = 5.00;
            break;
        case 4: 
            price = 2.00;
            break;
        case 5:
            price = 1.50;
            break;
    }

    total = price * Y;

    cout << "Total: R$ " << total << endl;
}
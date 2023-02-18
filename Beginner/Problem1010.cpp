/*
In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, 
the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show 
the amount to be paid.

Input
    The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits 
    after the decimal point.

Output
    The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" 
    and after "R$" symbol. The value must be presented with 2 digits after the point.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int code1, units1, code2, units2;
    float price1, price2, totalAmountPaid, amount1, amount2;

    cin >> code1 >> units1 >> price1;
    cin >> code2 >> units2 >> price2;

    amount1 = price1 * units1;
    amount2 = price2 * units2;
    totalAmountPaid = amount1 + amount2;

    cout << "VALOR A PAGAR: R$ " << totalAmountPaid << endl;
}
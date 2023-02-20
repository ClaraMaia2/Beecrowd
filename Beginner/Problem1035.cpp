/*
Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A 
and if the sum of C and D is greater than the sum of A and B and if C and D were positives 
values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, 
write the message “Valores nao aceitos” (Values not accepted).

Input
    Four integer numbers A, B, C and D.

Output
    Show the corresponding message after the validation of the values​​.
*/
#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    if ((B > C) && (D > A) && (C + D > A + B) && (D > 0) && (A % 2 == 0))
    {
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}
/*
Problem:
A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
Write all Armstrong numbers between 100 to 500.

*/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int a, sum = 0, b;
    cout << "Enter a 3 digit number : ";
    cin >> a;
    b = a;
    while (a)
    {
        sum = sum + int(pow(a % 10, 3));
        a = a / 10;
    }
    if (sum == b)
        cout << "Entered is Amstrong number" << endl;
    else
        cout << "Entered is not Amstrong number" << endl;

    return 0;
}
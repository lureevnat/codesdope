/*
Problem:
Calculate the sum of digits of a number given by user. E.g.-
INUPT : 123        OUPUT : 6
INUPT : 12345        OUPUT : 15
*/

#include <iostream>
using namespace std;

int main()
{
    int a, sum = 0;
    cout << "Enter a number : ";
    cin >> a;
    while (a)
    {
        sum = sum + a % 10;
        a = a / 10;
    }

    cout << "The sum of digits of given number is: " << sum << endl;
    return 0;
}
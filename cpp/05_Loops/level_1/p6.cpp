/*
Problem:
Write a program to find greatest common divisor (GCD) or highest common factor (HCF) of given two numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;

    int temp;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (b)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    cout << "The GCD of given two numbers is " << a;

    return 0;
}
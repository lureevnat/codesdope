/*
Problem:
Write a program to find the sum and product of all elements of an array.

*/

#include <iostream>
using namespace std;

int main()
{
    int a[10], sum = 0, product = 1;

    cout << "Enter 10 numbers:";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum += a[i];
        product *= a[i];
    }

    cout << "sum = " << sum << " and product = " << product << endl;
    return 0;
}
/*
Problem:
Input any number. Find the sum of the digits of the number using a recursive function.
*/

#include <iostream>
using namespace std;

int sum_of_digits(int n)
{
    if (n == 0)
        return n;
    else
        return (n % 10) + sum_of_digits(n / 10);
}

int main()
{
    int a, sod;
    cout << "Enter a number:";
    cin >> a;
    sod = sum_of_digits(a);
    cout << "Sum of Digits : " << sod << endl;
    return 0;
}
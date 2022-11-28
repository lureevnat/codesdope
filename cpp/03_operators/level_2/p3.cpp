/*
Problem:
Write a program to calculate the sum of the digits of a 3-digit number.
Number : 132
Output : 6
*/

#include <iostream>
using namespace std;

int main()
{
    int d3;
    cout << "Enter 3 digit number : ";
    cin >> d3;

    cout << "Sum of digits : " << d3 / 100 + d3 / 10 % 10 + d3 % 10 << endl;

    return 0;
}
/*
Problem:
Write a program to reverse a 3-digit number. E.g.-
Number : 132
Output : 231
*/

#include <iostream>
using namespace std;

int main()
{
    int d3;
    cout << "Enter 3 digit number : ";
    cin >> d3;
    cout << "Number after reversing digits : " << d3 / 100 + d3 / 10 % 10 * 10 + d3 % 10 * 100 << endl;
    return 0;
}
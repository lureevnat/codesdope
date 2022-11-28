/*
Problem:
Write a program to calculate the sum of the first and the second last digit of a 5 digit.
E.g.- NUMBER : 12345
OUTPUT : 1+4=5
*/

#include <iostream>
using namespace std;

int main()
{
    int d5;
    cout << "Enter a 5 digit number : ";
    cin >> d5;
    cout << "The sum of the first and the second last digit of given 5 digit number is : " << ((d5 / 10) % 10) + (d5 / 10000);
    return 0;
}
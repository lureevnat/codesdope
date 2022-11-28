/*
Problem:
Write a program to convert Fahrenheit into Celsius.

c = (5/9) * (f - 32)
*/

#include <iostream>
using namespace std;

int main()
{
    float c, f;

    cout << "Enter Temperature in Fahrenheit : ";
    cin >> f;
    c = (5.0 / 9) * (f - 32);
    cout << "The temperature in Celsius is : " << c << endl;
    return 0;
}
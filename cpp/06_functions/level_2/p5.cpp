/*
Problem:
Define a function to calculate power of a number raised to other i.e. ab using recursion where the numbers 'a' and 'b' are to be entered by the user

*/

#include <iostream>
using namespace std;

int pow(int base, int power)
{
    if (power == 1)
        return base;
    else
        return base * pow(base, power - 1);
}

int main()
{
    int base, power;
    cout << "Enter base and power : ";
    cin >> base >> power;
    cout << "The base to the power value is " << pow(base, power) << endl;

    return 0;
}
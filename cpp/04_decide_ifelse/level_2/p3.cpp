/*
Problem:
A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895
*/

#include <iostream>
using namespace std;

int main()
{
    int d4, out = 0;
    cout << "Enter a 4 digit number : ";
    cin >> d4;
    while (d4)
    {
        out = out * 10 + d4 % 10;
        d4 /= 10;
    }
    cout << out;
    return 0;
}
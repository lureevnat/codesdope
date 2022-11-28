/*
Problem:
Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
*/

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a Letter : ";
    cin >> c;
    if (c >= 65 && c <= 90)
        cout << "Upper Case" << endl;
    else if (c >= 97 && c <= 122)
        cout << "Lower Case" << endl;
    else
        cout << "Not a Letter";
    return 0;
}
/*
Problem:
Take a char input from user and print it's ASCII value.
*/

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character:";
    cin >> c;
    cout << "The ascii character of " << c << " is " << int(c) << endl;
    return 0;
}
/*
Problem:
Write a program to print the address of a variable whose value is input from user.

*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter number a:";
    cin >> a;

    cout << "Address of a is " << &a << endl;
    return 0;
}
/*
Problem:
Write a program to print the address of the pointer to a variable whose value is input from user.

*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter number a:";
    cin >> a;

    int *p = &a;

    cout << "Address of pointer p to variable a is " << p << endl;
    return 0;
}
/*
Problem:
Write a program to print a number which is entered from keyboard using pointer.

*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter number a:";
    cin >> a;

    int *p = &a;

    cout << "a = " << *p << endl;
    return 0;
}
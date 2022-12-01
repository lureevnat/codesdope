/*
Problem:
Write a program to find the factorial of a number using pointers.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, *p, fact = 1;
    p = &a;
    cout << "Enter number a:";
    cin >> a;

    while (*p > 0)
    {
        fact *= *p;
        (*p)--;
    }
    cout << "The factorial is " << fact << endl;
    return 0;
}
/*
Problem:
Write a program to reverse the digits a number using pointers.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, *p, out = 0;
    p = &a;
    cout << "Enter a number : ";
    cin >> a;
    while ((*p))
    {
        out = out * 10 + (*p) % 10;
        *p /= 10;
    }
    cout << out << endl;
    return 0;
}
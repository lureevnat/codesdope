/*
Problem:
Define a program to find out whether a given number is even or odd.
*/

#include <iostream>
using namespace std;

void even_odd(int n)
{
    if (n % 2 == 0)
        cout << "Even Number";
    else
        cout << "Odd Number";
    return;
}

int main()
{
    int a;
    cout << "Enter a number:";
    cin >> a;
    even_odd(a);
    cout << endl;
    return 0;
}
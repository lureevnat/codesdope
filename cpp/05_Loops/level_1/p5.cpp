/*
Problem:
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
Write a C++ program to calculate factorial of a number.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    unsigned long total = 1;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0)
        cout
            << "The factorial of given number is " << total << endl;
    else if (num > 0)
    {
        for (; num > 0; num--)
            total *= num;
        cout
            << "The factorial of given number is " << total << endl;
    }
    else
    {
        cout << "Cannot calculate factorial for the given input" << endl;
    }

    return 0;
}
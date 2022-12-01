/*
Problem:
Write a program to print the factorial of a number by defining a function named 'Factorial'.
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
*/

#include <iostream>
using namespace std;

void Factorial(int num)
{
    unsigned long total = 1;

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
    return;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Factorial(num);

    return 0;
}
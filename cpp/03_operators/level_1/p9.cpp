/*
Problem:
Write a program to enter the values of two variables from the keyboard and then interchange the values of the two variables. E.g.-
If entered value of x is 5 and y is 10 then
cout <<x << " and " << y
should print 10 and 5.
*/

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " and " << b << endl;
    return 0;
}
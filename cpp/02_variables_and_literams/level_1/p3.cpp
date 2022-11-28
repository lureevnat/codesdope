/*
Problem:
Write a C++ program to take two integer inputs from user and print sum and product of them.
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter Two Numbers:";
    cin >> x >> y;
    cout << "The sum and product of the entered two numbers are " << x + y << " and " << x * y << endl;
    return 0;
}
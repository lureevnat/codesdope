/*
Problem:
Write a program to print the sum of two numbers entered by user by defining your own function.

*/

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The sum of the entered two numbers is: " << sum(a, b) << endl;

    return 0;
}
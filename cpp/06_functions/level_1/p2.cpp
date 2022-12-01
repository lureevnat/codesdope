/*
Problem:
Define a function that returns the product of two numbers entered by user.

*/

#include <iostream>
using namespace std;

int product(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The product of the entered two numbers is: " << product(a, b) << endl;

    return 0;
}
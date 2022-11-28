/*
Problem:
A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.
*/

#include <iostream>
using namespace std;

int main()
{
    int cost = 100, quantity;
    cout << "Enter the Quantity : ";
    cin >> quantity;

    cout << "The total price is " << (cost * quantity > 1000 ? cost * quantity * 0.9 : cost * quantity) << endl;

    return 0;
}
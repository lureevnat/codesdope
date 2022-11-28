/*
Problem:
Take two integer inputs from user. First calculate the sum of two then product of two. Finally, print the sum and product of both obtained results.

*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter First Number:";
    cin >> x;
    cout << "Enter Second Number:";
    cin >> y;

    cout << "The sum of the entered two numbers is " << x + y << endl;
    cout << "The product of the entered two numbers is " << x * y << endl;

    return 0;
}
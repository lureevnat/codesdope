/*
Problem:
Enter two numbers from keyboard. Write a program to check if the two numbers are equal.
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter First Number";
    cin >> x;
    cout << "Enter Second Number";
    cin >> y;

    if (x == y)
        cout << "Two Numbers are same " << endl;
    else
        cout << "Two Numbers are not same " << endl;

    return 0;
}
/*
Problem: 
Take values of length and breadth of a rectangle from user and check if it is square or not.

*/

#include<iostream>
using namespace std;

int main()
{
    float x, y;
    cout << "Enter Length of Rectangle:";
    cin >> x;
    cout << "Enter Breadth of Rectangle:";
    cin >> y;

    if (x == y)
        cout << "It is a square." << endl;
    else
        cout << "It is a Rectangle but not a square." << endl;

    return 0;
}
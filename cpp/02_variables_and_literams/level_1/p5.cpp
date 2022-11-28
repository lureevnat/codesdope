/*
Problem:
Write a program to take input of length and breadth of a rectangle from the user and print its area.
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter Length of Rectangle:";
    cin >> x;
    cout << "Enter Breadth of Rectangle:";
    cin >> y;

    cout << "The Area of Rectangle is " << x * y << endl;
    return 0;
}
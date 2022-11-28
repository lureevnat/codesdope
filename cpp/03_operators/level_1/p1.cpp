/*
Problem:
Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle.
*/

#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cout << "Enter Length of Rectangle:";
    cin >> x;
    cout << "Enter Breadth of Rectangle:";
    cin >> y;

    cout << "The Area of Rectangle is " << x * y << endl;
    cout << "The Perimeter of Rectangle is " << 2 * (x + y) << endl;

    return 0;
}
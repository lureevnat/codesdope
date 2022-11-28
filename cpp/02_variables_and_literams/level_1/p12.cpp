/*
Problem:
Take value of length and breath of a rectangle from user as float. Find its area and print it on screen after type casting it to int.

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

    cout << "The Area of Rectangle is " << int(x * y) << endl;
    return 0;
}
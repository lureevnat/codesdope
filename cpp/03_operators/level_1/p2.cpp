/*
Problem:
Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.
*/
#define _USE_MATH_DEFINES

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    float r;
    cout << "Enter Radius of Circle:";
    cin >> r;

    cout << "The Area of Rectangle is " << M_PI * r * r << endl;
    cout << "The Perimeter of Rectangle is " << 2 * M_PI * r << endl;

    return 0;
}
/*
Problem:
Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
*/
#include <cmath>
#include <iostream>
using namespace std;

void area_circumference(float radius)
{
    cout << "The area and circumference of circle are " << (M_PI * radius * radius) << " and " << (2 * M_PI * radius) << endl;
    return;
}

int main()
{
    float radius;
    cout << "Enter radius of a circle: ";
    cin >> radius;
    area_circumference(radius);
    return 0;
}
/*
Problem:
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
    float s1, s2;
    Rectangle(int a, int b)
    {
        s1 = a;
        s2 = b;
    }
    void print_area()
    {
        cout << "The area of triangle is: " << 1.0 * s1 * s2 << endl;
    }
    void print_perimeter()
    {
        cout << "Perimeter is " << 2 * (s1 + s2) << endl;
    }
};

int main()
{
    Rectangle r(3, 4);
    r.print_area();
    r.print_perimeter();
    return 0;
}
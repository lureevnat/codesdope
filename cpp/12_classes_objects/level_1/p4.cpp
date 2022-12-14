/*
Problem:
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the constructor having the three sides as its parameters.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public:
    int s1, s2, s3;
    Triangle(int a, int b, int c)
    {
        s1 = a;
        s2 = b;
        s3 = c;
    }
    void print_area()
    {
        double s = (s1 + s2 + s3) / 2.0;
        cout << "The area of triangle is: " << sqrt(1.0 * s * (s - s1) * (s - s2) * (s - s3)) << endl;
    }
    void print_perimeter()
    {
        cout << "Perimeter is " << (s1 + s2 + s3) << endl;
    }
};

int main()
{
    Triangle t(3, 4, 5);
    t.print_area();
    t.print_perimeter();
    return 0;
}
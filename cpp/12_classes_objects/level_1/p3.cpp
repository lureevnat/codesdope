/*
Problem:
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public:
    void print_area(int s1, int s2, int s3)
    {
        double s = (s1 + s2 + s3) / 2.0;
        cout << "The area of triangle is: " << sqrt(1.0 * s * (s - s1) * (s - s2) * (s - s3)) << endl;
    }
    void print_perimeter(int s1, int s2, int s3)
    {
        cout << "Perimeter is " << (s1 + s2 + s3) << endl;
    }
};

int main()
{
    Triangle t;
    t.print_area(3, 4, 5);
    t.print_perimeter(3, 4, 5);
    return 0;
}

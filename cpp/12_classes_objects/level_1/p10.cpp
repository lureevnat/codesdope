/*
Problem:
Write a program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height. (just to make you familiar with initialization lists)
*/

#include <iostream>
using namespace std;

class box
{
    double length, width, height;

public:
    box(double a, double b, double c)
    {
        length = a;
        width = b;
        height = c;
    }
    void vol()
    {
        cout << "Volume : " << (length * width * height) << "\n";
    }
};

int main()
{
    box b(1.1, 2.2, 3.3);

    b.vol();

    return 0;
}
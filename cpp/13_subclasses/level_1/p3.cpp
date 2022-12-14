/*
Problem:
Create a class named 'Rectangle' with two data members 'length' and 'breadth' and two functions to print the area and perimeter of the rectangle respectively. Its constructor having parameters for length and breadth is used to initialize the length and breadth of the rectangle. Let class 'Square' inherit the 'Rectangle' class with its constructor having a parameter for its side (suppose s) calling the constructor of its parent class. Print the area and perimeter of a rectangle and a square.
*/

#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void print_area()
    {
        cout << length * breadth << endl;
    }

    void print_perimeter()
    {
        cout << 2 * (length + breadth) << endl;
    }
};

class Square : public Rectangle
{
public:
    Square(int side) : Rectangle(side, side)
    {
    }
};

int main()
{
    Rectangle r(4, 5);
    Square s(4);
    r.print_area();
    r.print_perimeter();
    s.print_area();
    s.print_perimeter();
    return 0;
}
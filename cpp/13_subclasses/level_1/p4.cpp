/*
Problem:
Now repeat the above example to print the area of 10 squares.
Hint-Use array of objects
*/

#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle() {}
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
    Square() : Rectangle()
    {
    }
    Square(int side) : Rectangle(side, side)
    {
    }
};

int main()
{
    Square s[10];

    for (int i = 0; i < 10; i++)
    {
        s[i] = Square(i + 1);
        s[i].print_area();
    }

    return 0;
}
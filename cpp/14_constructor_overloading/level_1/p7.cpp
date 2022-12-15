/*
Problem:
Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square.

*/

#include <iostream>
using namespace std;

class Area
{
public:
    static void print_area(int l, int b)
    {
        cout << l * b << endl;
    }

    static void print_area(int s)
    {
        cout << s * s << endl;
    }
};

int main()
{
    Area::print_area(7);
    Area::print_area(7, 8);
    return 0;
}
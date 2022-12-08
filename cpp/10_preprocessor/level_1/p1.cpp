/*
Problem:
Write a macro to calculate area and perimeter of a rectangle.

*/

Write a macro to calculate area and perimeter of a rectangle.

#include <iostream>
    using namespace std;
#define area(l, b) (l * b)
#define perimeter(l, b) (2 * (l + b))

int main()
{
    cout << "Area is " << area(5, 2) << " and perimeter is " << perimeter(5, 2) << ".\n";
    return 0;
}

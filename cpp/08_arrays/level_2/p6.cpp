/*
Problem:
Pass a 2D array to function and access all its elements.
*/

#include <iostream>
using namespace std;

void print_2d(int *p, int x, int y)
{

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int temp = i * y + j;

            cout
                << *(p + temp) << " ";
        }
        cout << endl;
    }
    return;
}

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    print_2d(&a[0][0], 3, 3);
    return 0;
}
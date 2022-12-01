/*
Problem:
Print multiplication table of 24, 50 and 29 using loop.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "24 table" << endl
         << endl;
    for (int i = 24, j = 1; j <= 10; j++)
    {
        cout << i << "*" << j << "=" << i * j << endl;
    }

    cout << endl;
    cout << "50 table" << endl
         << endl;
    for (int i = 50, j = 1; j <= 10; j++)
    {
        cout << i << "*" << j << "=" << i * j << endl;
    }
    cout << endl;
    cout << "29 table" << endl
         << endl;
    for (int i = 29, j = 1; j <= 10; j++)
    {
        cout << i << "*" << j << "=" << i * j << endl;
    }
    return 0;
}
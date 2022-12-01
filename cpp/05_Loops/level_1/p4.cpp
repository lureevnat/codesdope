/*
Problem:
Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255.
*/

#include <iostream>
using namespace std;

int main()
{
    for (int c = 0; c <= 255; c++)
        cout << char(c) << "-" << c << endl;

    return 0;
}
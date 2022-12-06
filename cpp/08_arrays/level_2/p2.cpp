/*
Problem:
Write a program to shift every element of an array to circularly right. E.g.-
INPUT : 1 2 3 4 5
OUTPUT : 5 1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int temp;
    temp = a[4];
    int i;
    for (i = 4; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = temp;
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}
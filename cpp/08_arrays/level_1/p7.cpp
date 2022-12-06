/*
Problem:
Find the largest and smallest elements of an array.

*/

#include <iostream>
using namespace std;

int main()
{
    int a[10];

    cout << "Enter 10 numbers:";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    int min = a[0];
    int max = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    cout << "max = " << max << " and min = " << min << endl;
    return 0;
}
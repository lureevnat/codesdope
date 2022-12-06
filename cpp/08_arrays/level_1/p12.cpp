/*
Problem:
Write a program to print sum, average of all numbers, smallest and largest element of an array.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int max = a[0], min = a[0], sum = a[0];

    for (int i = 1; i < 11; i++)
    {
        sum += a[i];
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }

    cout << "Sum = " << sum << " max = " << max << " min = " << min << " average = " << sum / 11.0 << endl;

    return 0;
}